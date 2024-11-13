void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
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

  if ( (byte_4B1226A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_436/*"#4C4C4C"*/, v8, v9);
    byte_4B1226A = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_436/*"#4C4C4C"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_436/*"#4C4C4C"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Boolean_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B12269 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v12, v13);
    byte_4B12269 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v14 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tabInitList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v21,
                                                                  v22,
                                                                  v23);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dictChangeSvtVoiceIdList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestVoiceDataList,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceDataList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_24854/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24854/*"wait"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultAnimationName, v51, v52, v53, v54, v55, v56, v57);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  void *v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4B12214 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B12214 = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v14);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UICamera_c *v17; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  __int64 v19; // x1
  UnityEngine_Object_o *last; // x19
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x19
  UnityEngine_Object_o *dragged; // x19
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x19
  __int64 v26; // x1
  Il2CppObject *v27; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v29; // x19
  __int64 v30; // x1
  Il2CppObject *v31; // x20
  __int64 v32; // x1
  UnityEngine_GameObject_o *selectedObject; // x19
  __int64 v34; // x1
  __int64 v35; // x1
  Il2CppObject *v36; // x20
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UICamera_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct UICamera_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  char v60[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v61[4]; // [xsp+8h] [xbp-58h] BYREF
  char v62[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v63[4]; // [xsp+18h] [xbp-48h] BYREF
  char v64[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1220B & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&TouchEffectManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UICamera_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10019/*"OnDragEnd"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_10041/*"OnHover"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10072/*"OnPress"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10082/*"OnScrollStop"*/, v15, v16);
    byte_4B1220B = 1;
  }
  v17 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v17 = UICamera_TypeInfo;
  }
  currentTouch = v17->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method);
    TouchEffectManager__UnPress(0LL);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(last, 0LL, 0LL) )
    {
      v22 = currentTouch->fields.last;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v21);
      UICamera__Notify(v22, (System_String_o *)StringLiteral_10019/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v25 = currentTouch->fields.dragged;
      v64[0] = 0;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v64);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v26);
      UICamera__Notify(v25, (System_String_o *)StringLiteral_10072/*"OnPress"*/, v27, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v29 = currentTouch->fields.current;
      v63[0] = 1;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v63);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v30);
      UICamera__Notify(v29, (System_String_o *)StringLiteral_10041/*"OnHover"*/, v31, 0LL);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v62[0] = 0;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v62);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v35);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10072/*"OnPress"*/, v36, 0LL);
    v61[0] = 1;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v61);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10041/*"OnHover"*/, v37, 0LL);
    v60[0] = 0;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v60);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10082/*"OnScrollStop"*/, v38, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v34);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->current, 0LL, v40, v41, v42, v43, v44, v45);
  v46 = UICamera_TypeInfo->static_fields;
  v46->currentCamera = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v46->currentCamera, 0LL, v47, v48, v49, v50, v51, v52);
  v53 = UICamera_TypeInfo->static_fields;
  v53->currentTouch = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->currentTouch, 0LL, v54, v55, v56, v57, v58, v59);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v15; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v17; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusBattleListViewItem_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1222D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v8, v9);
    byte_4B1222D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             method)) == 0LL )
  {
    sub_1BCAA3C(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v11 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1BCAA3C(v11, v12);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v25.fields._current, v12);
    if ( !Item )
      sub_1BCAA3C(0LL, v15);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v15);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCAA3C(DispLimitCount, v17);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v19 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v17);
      if ( !v19 )
        sub_1BCAA3C(0LL, v20);
      index = (unsigned int)v19->fields.index;
      v23 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v23 )
        sub_1BCAA3C(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v23, index, v21);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 confirmDispLv; // x8
  int32_t v14; // w20
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  bool v17; // w22
  __int64 i; // x24
  unsigned __int64 v19; // x29
  __int64 illustratorId; // x28
  SkillInfo_o *v21; // x0
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x23
  TreasureDvcInfo_o *v25; // x24
  TreasureDvcInfo_o *v26; // x25
  SkillInfo_array *v27; // x21
  SkillInfo_array *v28; // x22
  int32_t nextLimitCount; // w27
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v33; // x26
  bool v34; // [xsp+2Ch] [xbp-84h]
  SkillInfo_array *v35; // [xsp+30h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF

  v3 = dispLv;
  if ( (byte_4B1221D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv, method);
    sub_1BCA7E0(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndBattleConfirm__, v9, v10);
    byte_4B1221D = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v35 = 0LL;
  skillInfoList = 0LL;
  svtId = this->fields.mainInfo;
  this->fields.confirmDispLv = v3;
  if ( !svtId )
    goto LABEL_34;
  if ( !svtId->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, method);
    return;
  }
  dispSelectList = svtId->fields.dispSelectList;
  svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(svtId, 0LL);
  if ( !dispSelectList )
    goto LABEL_34;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= dispSelectList->max_length )
LABEL_35:
    sub_1BCAA44(svtId, *(_QWORD *)&dispLv);
  v14 = (int)svtId;
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  v15 = dispSelectList->m_Items[confirmDispLv + 1];
  ServantStatusListViewItem__GetNpInfo_33900300(svtId, &tdInfo, v14, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetNpInfo_33900300(svtId, &info, v15, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_33899392(svtId, &skillInfoList, v14, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_33899392(svtId, &v35, v15, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_34;
  v17 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v19 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    illustratorId = svtId->fields.commandCodeCommentEntity->fields.illustratorId;
    if ( (__int64)v19 >= illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( v19 >= skillInfoList->max_length )
      goto LABEL_35;
    if ( !v35 )
      goto LABEL_34;
    if ( v19 >= v35->max_length )
      goto LABEL_35;
    v21 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v35->obj.klass + i);
    if ( !v21 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v21 = (SkillInfo_o *)*((_QWORD *)&v35->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v21, *(SkillInfo_o **)&dispLv, 0LL) )
      goto LABEL_28;
  }
  if ( v17 )
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v16);
    return;
  }
LABEL_28:
  v34 = !v17;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&dispLv);
  nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v14, 0LL);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v15, 0LL);
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v26 = info;
  v25 = tdInfo;
  v28 = v35;
  v27 = skillInfoList;
  nextLimitCount = LimitCountByImageLimitCostumeIn;
  v33 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                              ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo,
                                                              v30,
                                                              v31,
                                                              v32);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndBattleConfirm__,
    0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId
    || (svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL),
        !servantStatusBattleConfirmDialog) )
  {
LABEL_34:
    sub_1BCAA3C(svtId, *(_QWORD *)&dispLv);
  }
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    v25,
    v26,
    v34,
    v27,
    v28,
    (__int64)v19 < illustratorId,
    v33,
    (int32_t)svtId,
    nowLimitCount,
    nextLimitCount,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21

  v4 = this;
  if ( (byte_4B1224C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type, method);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B1224C = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  _DWORD *monitor; // x8
  System_Action_object__o *v9; // x20
  const MethodInfo *v10; // x2

  v5 = (Il2CppObject *)this;
  if ( (byte_4B12249 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv, method);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, v6, v7);
    byte_4B12249 = 1;
  }
  monitor = v5[32].monitor;
  if ( !monitor )
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v9 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv, method, v3);
  System_Action_object____ctor(v9, v5, Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad((ServantStatusDialog_o *)v5, (System_Action_AssetData__o *)v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21

  v4 = this;
  if ( (byte_4B12250 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv, method);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B12250 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21

  v4 = this;
  if ( (byte_4B12253 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv, method);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B12253 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_4B1224B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B1224B = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  System_String_o *statusLoadAsset; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  System_String_o *cardLoadAsset; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  System_String_o *battleLoadAsset; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v62; // w9
  System_String_o *loadVoiceData; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v73; // w2
  int v74; // w9
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1222B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&SoundManager_TypeInfo, v19, v20);
    byte_4B1222B = 1;
  }
  memset(&v75, 0, sizeof(v75));
  statusTabListViewManager = this->fields.statusTabListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusListViewManager__DestroyList(statusTabListViewManager, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)statusTabListViewManager,
    0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.charaGraphListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabListViewManager,
    (const MethodInfo *)callback);
  this->fields.mainInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, 0LL, v22, v23, v24, v25, v26, v27);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusLoadAsset, 0LL, v30, v31, v32, v33, v34, v35);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardLoadAsset, 0LL, v38, v39, v40, v41, v42, v43);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v44);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, 0LL, v46, v47, v48, v49, v50, v51);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v52);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.transformedStatusLoadAsset,
      0LL,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  ServantStatusDialog__StopVoice(this, v52);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v62 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v62;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0LL);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadVoiceData, 0LL, v64, v65, v66, v67, v68, v69);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v75.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v70);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1BCAA3C(statusTabListViewManager, callback);
  v73 = voiceDataList->fields._size;
  v74 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v74;
  if ( v73 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v73, 0LL);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !statusTabListViewManager )
    goto LABEL_44;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)statusTabListViewManager, 2, 0, 0LL);
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


System_Collections_IEnumerator_o *__fastcall ServantStatusDialog__CoWaitForEndOfFrame(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12242 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback, method);
    byte_4B12242 = 1;
  }
  v5 = sub_1BCAA2C(ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback, method, v3);
  ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)callback, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  BattleFBXComponent_o *v6; // x0
  UnityEngine_Object_o *battleChr; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4B1221B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1221B = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v6 = this->fields.battleActor;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleFBXComponent__RevertShaderFloatProperty(v6, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.battleChr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v7; // x2

  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_8;
  ServantStatusBattleConfirmDialog__Close(servantStatusBattleConfirmDialog, 0LL);
  if ( isDecide )
  {
    tabInitList = this->fields.tabInitList;
    if ( tabInitList )
    {
      if ( !tabInitList->max_length )
        sub_1BCAA44(servantStatusBattleConfirmDialog, isDecide);
      tabInitList->m_Items[4] = 0;
      servantStatusBattleConfirmDialog = (ServantStatusBattleConfirmDialog_o *)this->fields.statusTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__DestroyList(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          0LL);
        ServantStatusDialog__SetChangeBattleResource(this, 1, v7);
        return;
      }
    }
LABEL_8:
    sub_1BCAA3C(servantStatusBattleConfirmDialog, isDecide);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4B1224D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1224D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v10; // w20
  __int64 v11; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *battleActor; // x8

  if ( (byte_4B12220 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12220 = 1;
  }
  this->fields.isBattlePlay = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_11;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_11;
  v10 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v11);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v10,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(mainInfo, v8);
  }
  BattleFBXComponent__SetEvolutionLevel(battleActor, v10, (int32_t)mainInfo, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B12236 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B12236 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BCAA3C(v9, v10);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B12234 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B12234 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BCAA3C(v9, v10);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


void __fastcall ServantStatusDialog__EndCommandCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B12211 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssetData__TypeInfo, data, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndTransformedStatusLoad__, v5, v6);
    byte_4B12211 = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssetData__TypeInfo, data, method, v3);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog_EndTransformedStatusLoad__, 0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v7, v8);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_GameObject_o *baseObject; // x0
  __int64 v47; // x1
  UnityEngine_Object_o *changeTransformButton; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UnityEngine_GameObject_o *v50; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v54; // x20
  UnityEngine_GameObject_o *v55; // x0
  float v56; // s0
  int32_t v57; // w22
  UnityEngine_GameObject_o *v58; // x20
  int v59; // w21
  UnityEngine_GameObject_o *v60; // x0
  float v61; // s0
  int32_t v62; // w22
  UnityEngine_GameObject_o *v63; // x20
  UnityEngine_GameObject_o *v64; // x0
  float v65; // s0
  bool v66; // w1
  struct ServantStatusListViewItem_o *v67; // x8
  int32_t v68; // w20
  int32_t v69; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v72; // x22
  struct ServantStatusListViewItem_o *v73; // x8
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v75; // x21
  int32_t kind; // w8
  bool v77; // w8
  bool v78; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v81; // x8
  bool *v82; // x10
  struct ServantStatusListViewItem_o *v83; // x8
  ServantCommentMaster_o *v84; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v93; // x1
  struct ServantStatusListViewItem_o *v94; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v96; // x21
  __int64 v97; // x1
  UnityEngine_Object_o *v98; // x21
  const MethodInfo *v99; // x2
  UILabel_o *v100; // x21
  ServantLimitAddMaster_o *v101; // x21
  int32_t v102; // w8
  char v103; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v105; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v107; // x8
  __int64 v108; // x1
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v111; // x22
  struct ServantStatusListViewItem_o *v112; // x8
  int32_t v113; // w2
  int32_t limitCount; // w1
  int32_t v115; // w8
  struct ServantStatusListViewItem_o *v116; // x9
  struct UserServantEntity_o *v117; // x0
  __int64 v118; // x1
  int32_t v119; // w21
  int32_t v120; // w21
  ServantLimitImageMaster_o *v121; // x22
  struct ServantStatusListViewItem_o *v122; // x8
  int32_t v123; // w2
  int32_t v124; // w8
  struct ServantStatusListViewItem_o *v125; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v127; // w1
  int32_t v128; // w2
  struct ServantLeaderInfo_o *v129; // x9
  System_String_o *v130; // x1
  ServantLimitImageMaster_o *v131; // x21
  struct ServantStatusListViewItem_o *v132; // x8
  struct UserServantCollectionEntity_o *v133; // x8
  struct UIRangeLabel_o *v134; // x21
  struct ServantEntity_o *v135; // x22
  __int64 v136; // x23
  __int64 v137; // x24
  int32_t v138; // w1
  __int64 v139; // x1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v141; // x8
  UILabel_o *v142; // x21
  struct ServantStatusListViewItem_o *v143; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v145; // x8
  ServantLimitImageMaster_o *v146; // x21
  UILabel_o *v147; // x22
  struct ServantStatusListViewItem_o *v148; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v150; // x22
  __int64 v151; // x23
  int32_t v152; // w22
  struct UILabel_o *v153; // x23
  System_String_o *mText; // x25
  System_String_o *v155; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v157; // x0
  System_String_o *v158; // x1
  UILabel_o *v159; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v161; // x21
  __int64 *v162; // x8
  struct ServantStatusListViewItem_o *v163; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v165; // x0
  const MethodInfo *v166; // x1
  const MethodInfo *v167; // x2
  int32_t v168; // w8
  unsigned int v169; // w8
  const MethodInfo *v170; // x1
  unsigned int v171; // w8
  bool v172; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16

  if ( (byte_4B12209 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&OptionManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_11990/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11989/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11991/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11992/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11997/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_11996/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_4122/*"CancelInput"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_6088/*"EndLoadInit"*/, v44, v45);
    byte_4B12209 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeTransformButton, 0LL, 0LL);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_241;
    if ( mainInfo->fields._IsTransformServant_k__BackingField )
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.statusButton )
        goto LABEL_241;
      v50 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v50, LocalPositionX + 0.0, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_241;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_241;
      v54 = baseObject;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      v56 = GameObjectExtensions__GetLocalPositionX(v55, 0LL);
      GameObjectExtensions__SetLocalPositionX(v54, v56 + (float)changeTransformAddTabMargin, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_241;
      v57 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_241;
      v58 = baseObject;
      v59 = v57 + changeTransformAddTabMargin;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v61 = GameObjectExtensions__GetLocalPositionX(v60, 0LL);
      GameObjectExtensions__SetLocalPositionX(v58, v61 + (float)v59, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_241;
      v62 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_241;
      v63 = baseObject;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v65 = GameObjectExtensions__GetLocalPositionX(v64, 0LL);
      GameObjectExtensions__SetLocalPositionX(v63, v65 + (float)(v62 + v59), 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v66 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v66 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v66, 0LL);
  }
  v67 = this->fields.mainInfo;
  if ( !v67 )
    goto LABEL_241;
  if ( v67->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v68 = 0;
        v69 = 21;
        break;
      case 4:
      case 0x16:
        v68 = 0;
        v69 = 22;
        break;
      case 5:
      case 0x17:
        v68 = 0;
        v69 = 23;
        break;
      case 6:
      case 0x18:
        v68 = 0;
        v69 = 24;
        break;
      case 7:
      case 0x19:
        v68 = 0;
        v69 = 25;
        break;
      case 8:
      case 0x1A:
        v68 = 0;
        v69 = 26;
        break;
      case 9:
      case 0x1B:
        v68 = 0;
        v69 = 27;
        break;
      case 0x1D:
      case 0x20:
        v68 = 0;
        v69 = 32;
        break;
      default:
        v68 = 0;
        v69 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v67->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_241;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_38402052(106, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v72 = this;
    else
      v72 = 0LL;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v73 = this->fields.mainInfo;
      if ( !v73 )
        goto LABEL_241;
      favoriteUserSvtId = v73->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v75 = v72;
      else
        v75 = 0LL;
      if ( favoriteUserSvtId < 1 )
      {
        v77 = 0;
        v75 = this;
        if ( !this )
          goto LABEL_241;
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsOrganization(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          kind = this->fields.kind;
          if ( kind == 3 )
          {
            v77 = 0;
            if ( !v75 )
              goto LABEL_241;
          }
          else
          {
            v77 = kind != 12;
            if ( !v75 )
              goto LABEL_241;
          }
        }
        else
        {
          v77 = 0;
          v75 = v72;
          if ( !v72 )
            goto LABEL_241;
        }
      }
    }
    else
    {
      v77 = 0;
      v75 = this;
    }
    v75->fields.isUseFavorite = v77;
    v78 = SvtType__IsOrganization(type, 0LL) && this->fields.kind != 12;
    this->fields.isUsePush = v78;
    baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v68 = 0;
      v69 = 28;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v115 = this->fields.kind;
        switch ( v115 )
        {
          case 3:
          case 12:
            v68 = 0;
            v69 = 12;
            break;
          case 4:
          case 13:
            v68 = 0;
            v69 = 13;
            break;
          case 5:
          case 14:
            v68 = 0;
            v69 = 14;
            break;
          case 6:
          case 15:
            v68 = 0;
            v69 = 15;
            break;
          case 7:
          case 16:
            v68 = 0;
            v69 = 16;
            break;
          case 8:
          case 17:
            v68 = 0;
            v69 = 17;
            break;
          case 9:
          case 18:
            v68 = 0;
            v69 = 18;
            break;
          case 19:
            v68 = 0;
            v69 = 19;
            break;
          case 29:
          case 31:
            v68 = 0;
            v69 = 31;
            break;
          default:
            v172 = v115 == 33;
            v69 = 11;
            v68 = v172;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v124 = this->fields.kind, v124 == 36) )
        {
          v68 = 0;
          goto LABEL_64;
        }
        v68 = 0;
        if ( v124 == 29 )
          v69 = 30;
        else
          v69 = 10;
      }
    }
  }
  this->fields.kind = v69;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_241;
  max_length = tabInitList->max_length;
  v81 = 0LL;
  v82 = &tabInitList->m_Items[4];
  do
  {
    if ( v81 >= max_length )
      sub_1BCAA44(baseObject, method);
    v82[v81++] = 0;
  }
  while ( v81 != 4 );
  v83 = this->fields.mainInfo;
  if ( !v83 )
    goto LABEL_241;
  if ( v83->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v84 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v84 )
      goto LABEL_241;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v84, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.newProfileList,
      (int64_t)NewProfileEntities,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v93);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v94 = this->fields.mainInfo;
  if ( !v94 )
    goto LABEL_241;
  commandCodeEntity = v94->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v101 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v101 )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v101,
                                               (int32_t)baseObject,
                                               0LL);
    v102 = this->fields.kind;
    v103 = (char)baseObject;
    if ( (v102 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v105 = this->fields.mainInfo;
        if ( !v105 )
          goto LABEL_241;
        servantLeaderInfo = v105->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_241;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v107 = this->fields.mainInfo;
        if ( !v107 )
          goto LABEL_241;
        if ( (v103 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v107->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_241;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v108);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_241;
          v111 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v111 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v111,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v112 = this->fields.mainInfo;
          if ( !v112 )
            goto LABEL_241;
          v113 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v112->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = -1;
        }
        else
        {
          v129 = v107->fields.servantLeaderInfo;
          if ( !v129 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v107->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = v129->fields.limitCount;
          v113 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v113, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_241;
      v130 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v130, 0LL, 1, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v139);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v141 = this->fields.mainInfo;
        if ( !v141 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)v141->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v142 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v143 = this->fields.mainInfo;
          if ( !v143 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v143->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        method = (const MethodInfo *)baseObject;
        if ( !v142 )
          goto LABEL_241;
        UILabel__set_text(v142, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_221;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v145 = this->fields.mainInfo;
      if ( !v145 )
        goto LABEL_241;
      if ( v145->fields.userSvtEntity )
      {
        v146 = (ServantLimitImageMaster_o *)baseObject;
        v147 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
        if ( !v147 )
          goto LABEL_241;
        UILabel__set_text(v147, (System_String_o *)baseObject, 0LL);
        v148 = this->fields.mainInfo;
        if ( !v148 )
          goto LABEL_241;
        userSvtEntity = v148->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_241;
        v151 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v150 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v174.fields.currentCryptoKey = v151;
        *(_QWORD *)&v174.fields.fakeValue = v150;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v174,
                                                   0LL);
        if ( !v146 )
          goto LABEL_241;
        v152 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v146,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_214;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v146,
                                                   (System_String_o *)StringLiteral_11992/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v152,
                                                   0LL);
        v153 = this->fields.battleExplanationLabel;
        if ( !v153 )
          goto LABEL_241;
        mText = v153->fields.mText;
        v155 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v146,
                                                        v152,
                                                        3,
                                                        0LL);
        v157 = System_String__Format(v155, LimitCountSealedServantName, 0LL);
        v158 = System_String__Concat_62401220(mText, v157, 0LL);
        v159 = v153;
      }
      else
      {
        userSvtCollectionEntity = v145->fields.userSvtCollectionEntity;
        v161 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        if ( userSvtCollectionEntity )
          v162 = &StringLiteral_11990/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v162 = &StringLiteral_11991/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v162, 0LL);
        if ( !v161 )
          goto LABEL_241;
        v158 = (System_String_o *)baseObject;
        v159 = v161;
      }
      UILabel__set_text(v159, v158, 0LL);
LABEL_214:
      v163 = this->fields.mainInfo;
      if ( !v163 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_241;
      IsTransformServant_k__BackingField = v163->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_241;
        v165 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v165, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_221;
    }
    if ( (unsigned int)(v102 - 6) <= 2 )
    {
      v125 = this->fields.mainInfo;
      if ( !v125 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)v125->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v103 & 1) != 0 )
      {
        v127 = -1;
        v128 = 0;
      }
      else
      {
        v128 = -1;
        v127 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v127, v128, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_241;
      v130 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v116 = this->fields.mainInfo;
    if ( !v116 )
      goto LABEL_241;
    v117 = v116->fields.userSvtEntity;
    if ( v117 )
    {
      if ( (v103 & 1) == 0 )
      {
        v134 = this->fields.servantNameRangeLabel;
        v135 = v116->fields.svtEntity;
        v137 = *(_QWORD *)&v117->fields.limitCount.fields.currentCryptoKey;
        v136 = *(_QWORD *)&v117->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v173.fields.currentCryptoKey = v137;
        *(_QWORD *)&v173.fields.fakeValue = v136;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v173,
                                                   0LL);
        if ( !v135 )
          goto LABEL_241;
        v138 = (int)baseObject;
        v123 = -1;
        baseObject = (UnityEngine_GameObject_o *)v135;
        goto LABEL_172;
      }
      v119 = UserServantEntity__getCardImageLimitCount(v117, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v118);
      v120 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v119, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_241;
      v121 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v121 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v121,
                                                 (int32_t)baseObject,
                                                 v120,
                                                 0LL);
      v122 = this->fields.mainInfo;
      if ( !v122 )
        goto LABEL_241;
      v123 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v122->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    else
    {
      if ( (v103 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v116->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v134 = this->fields.servantNameRangeLabel;
        v138 = -1;
        v123 = -1;
        goto LABEL_172;
      }
      if ( v116->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_241;
        v131 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v132 = this->fields.mainInfo;
        if ( !v132 )
          goto LABEL_241;
        v133 = v132->fields.userSvtCollectionEntity;
        if ( !v133 )
          goto LABEL_241;
        if ( !v131 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v131,
                                                   (int32_t)baseObject,
                                                   v133->fields.maxLimitCount,
                                                   0LL);
        v116 = this->fields.mainInfo;
        if ( !v116 )
          goto LABEL_241;
        v123 = (int)baseObject;
      }
      else
      {
        v123 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v116->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    v134 = this->fields.servantNameRangeLabel;
    v138 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v138, v123, 0LL);
    if ( !v134 )
      goto LABEL_241;
    v130 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v134;
    goto LABEL_174;
  }
  v96 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v96 )
    goto LABEL_241;
  UIRangeLabel__Set(v96, (System_String_o *)baseObject, 0LL, 1, 0, 0LL);
  v98 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
  if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
  {
    v100 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v100 )
    {
      UILabel__set_text(v100, (System_String_o *)baseObject, 0LL);
      goto LABEL_221;
    }
LABEL_241:
    sub_1BCAA3C(baseObject, method);
  }
LABEL_221:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_241;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v99);
  ServantStatusDialog__SetMark(this, v166);
  v168 = this->fields.kind;
  if ( v168 > 28 )
  {
    v169 = v168 - 30;
    if ( v169 < 7 )
    {
      v68 = dword_C0BF98[v169];
      goto LABEL_230;
    }
LABEL_228:
    v68 = 0;
    goto LABEL_230;
  }
  if ( v168 == 10 )
  {
    v68 = 1;
    goto LABEL_230;
  }
  if ( v168 != 11 )
  {
    v68 = 1;
    if ( v168 != 28 )
      goto LABEL_228;
  }
LABEL_230:
  ServantStatusDialog__SetTabKind(this, v68, v167);
  v171 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v171 - 10 < 0x13 || v171 <= 0x24 && ((1LL << v171) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6088/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v170);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4122/*"CancelInput"*/,
    0.0,
    0LL);
}


void __fastcall ServantStatusDialog__EndLoadBattle(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B12217 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data, method);
    byte_4B12217 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_32959856(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_32959856(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4B12218 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12218 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCAA3C(v4, method);
    if ( !mainInfo->fields.isConvertOverwriteImage )
      this->fields.isBattlePlay = 0;
  }
  ServantStatusDialog__PlayBattleEffect(this, 0, v2);
}


void __fastcall ServantStatusDialog__EndLoadChangeBattleResource(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B1221F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data, method);
    byte_4B1221F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_4B1220C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog__EndLoadInit_b__134_0__, v5, v6);
    byte_4B1220C = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__134_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v7, v8);
  ServantStatusDialog__InitList(this, v9);
}


void __fastcall ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct System_Boolean_array *v9; // x8
  const MethodInfo *tabKind; // x1

  if ( (byte_4B12243 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12243 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_12;
  if ( !tabInitList->max_length )
    goto LABEL_13;
  tabInitList->m_Items[4] = 0;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__CacheViewTopContentsAndGap((ServantStatusListViewManager_o *)Instance, 0LL),
        ServantStatusDialog__DestroyBattleChr(this, v7),
        v9 = this->fields.tabInitList,
        this->fields.isBattlePlay = 0,
        !v9) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v5);
  }
  if ( v9->max_length <= 3 )
LABEL_13:
    sub_1BCAA44(Instance, v5);
  v9->m_Items[7] = 0;
  tabKind = (const MethodInfo *)(unsigned int)this->fields.tabKind;
  if ( (_DWORD)tabKind == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabKind);
    LODWORD(tabKind) = this->fields.tabKind;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabKind, v8);
}


void __fastcall ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *Item; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x21
  __int64 v47; // x1

  if ( (byte_4B12223 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndLoadVoice__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&SoundManager_TypeInfo, v21, v22);
    byte_4B12223 = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)loadVoiceData;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)loadVoiceData, v2, v3, v4, v5, v6, v7);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadVoiceData, 0LL, v29, v30, v31, v32, v33, v34);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( voiceDataList )
            {
              CommonUI__SetLoadMode((CommonUI_o *)voiceDataList, 0, 0LL);
              return;
            }
          }
          else
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     voiceDataList,
                     0,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.loadVoiceData,
              (int64_t)Item,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v42 = this->fields.loadVoiceData;
              v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
              System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v47);
              SoundManager__loadAudioAssetStorage(v42, v46, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1BCAA3C(voiceDataList, loadVoiceData);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v18; // w9
  il2cpp_array_size_t max_length; // w10
  ServantVoiceData_o *v20; // x8
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B12227 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6115/*"EndWaitVoice"*/, method, v2);
    byte_4B12227 = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v18 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v18;
    max_length = voicePlayList->max_length;
    if ( v18 < (int)max_length )
    {
      if ( v18 >= max_length )
        sub_1BCAA44(voiceTabListViewManager, v10);
      v20 = voicePlayList->m_Items[v18];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6115/*"EndWaitVoice"*/,
          v20->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(voiceTabListViewManager, v10);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_35951064(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayList, 0LL, v11, v12, v13, v14, v15, v16);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName, 0LL, v21, v22, v23, v24, v25, v26);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_35951064(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  CommonUI_o *statusTabListViewManager; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  const MethodInfo *v15; // x2
  ServantStatusListViewManager_o *v16; // x20
  ServantStatusListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_4B1223F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v8, v9);
    byte_4B1223F = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  statusTabListViewManager = **(CommonUI_o ***)(v11 + 184);
  if ( !statusTabListViewManager )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(statusTabListViewManager, 0LL);
  if ( isDecide )
  {
    statusTabListViewManager = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( !statusTabListViewManager )
      goto LABEL_13;
    ServantStatusListViewManager__CacheViewTopTargetContents(
      (ServantStatusListViewManager_o *)statusTabListViewManager,
      19,
      0LL);
    ServantStatusDialog__SetTabKind(this, 0, v15);
  }
  v16 = this->fields.statusTabListViewManager;
  v17 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         isDecide,
                                                         v13,
                                                         v14);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v16 )
LABEL_13:
    sub_1BCAA3C(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v16, 1, v17, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B1220F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssetData__TypeInfo, data, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCommandCardLoad__, v5, v6);
    byte_4B1220F = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssetData__TypeInfo, data, method, v3);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog_EndCommandCardLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v7, v8);
}


void __fastcall ServantStatusDialog__EndTransformedStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_4B12213 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_6088/*"EndLoadInit"*/, v8, v9);
    byte_4B12213 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v13,
                                                               v14,
                                                               v15);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v16, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6088/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusDialog_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v16; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v19; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v21; // x22
  SePlayer_o *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p_voicePlayer; // x0

  v8 = this;
  if ( (byte_4B12226 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndPlayVoice__, v9, v10);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v11, v12);
    byte_4B12226 = 1;
  }
  voicePlayList = v8->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v8->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1BCAA44(this, method);
      v16 = voicePlayList->m_Items[voicePlayNum];
      if ( v16 )
      {
        voicePlayAssetName = v8->fields.voicePlayAssetName;
        id = v16->fields.id;
        v19 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
          v19 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v19->static_fields->DEFAULT_VOLUME;
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
        System_Action___ctor(v21, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v22 = SoundManager__playVoice_39419392(voicePlayAssetName, id, DEFAULT_VOLUME, v21, 0LL);
        p_voicePlayer = (PartyOrganizationUtility_o *)&v8->fields.voicePlayer;
        v8->fields.voicePlayer = v22;
        goto LABEL_16;
      }
LABEL_17:
      sub_1BCAA3C(this, method);
    }
    if ( v8->fields.tabKind == 3 && (v8->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_35951064((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v8->fields.voiceListIndex = -1;
    }
    v8->fields.voicePlayList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayer = (PartyOrganizationUtility_o *)&v8->fields.voicePlayAssetName;
    v22 = 0LL;
    v8->fields.voicePlayNum = 0;
    v8->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1BCA784(p_voicePlayer, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  }
}


void __fastcall ServantStatusDialog__EnddChangeCommandResourceLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4B1224A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1224A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0LL);
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v23; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q1
  ServantStatusDialog_o *v26; // x20
  struct ServantStatusListViewItem_o *v27; // x8
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  ServantStatusDialog_o *v30; // x20
  struct ServantStatusListViewItem_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  ServantStatusDialog_o *v33; // x20
  __int64 v34; // x21
  __int64 v35; // x22
  struct ServantStatusListViewItem_o *v36; // x8
  ServantStatusDialog_o *v37; // x22
  int32_t v38; // w21
  int32_t DispLimitCount; // w0
  int32_t v40; // w20
  ServantStatusDialog_o *v41; // x23
  int32_t LimitCount; // w0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v44; // w9
  struct ServantStatusListViewItem_o *v45; // x8
  ServantStatusDialog_o *v46; // x22
  struct ServantStatusListViewItem_o *v47; // x8
  ServantStatusDialog_o *v48; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v52; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v3 = this;
  if ( (byte_4B1223C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B1223C = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v52 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_59;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v23 = v3->fields.mainInfo;
  if ( !v23 )
    goto LABEL_59;
  userSvtEntity = v23->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_59;
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v26 = this;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result);
  v50 = v51;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
  if ( !v26 )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
          &entity,
          (int64_t)this,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v27 = v3->fields.mainInfo;
    if ( !v27 )
      goto LABEL_59;
    v28 = v27->fields.userSvtEntity;
    if ( !v28 )
      goto LABEL_59;
    v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
    v30 = this;
    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v51.fields.fakeValue = v29;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result);
    v49 = v51;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL);
    if ( !v30 )
      goto LABEL_59;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
      &entity,
      (int64_t)this,
      (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = v3->fields.mainInfo;
  if ( !v31 )
    goto LABEL_59;
  v32 = v31->fields.userSvtEntity;
  if ( !v32 )
    goto LABEL_59;
  v33 = this;
  v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, result);
  *(_QWORD *)&v55.fields.currentCryptoKey = v35;
  *(_QWORD *)&v55.fields.fakeValue = v34;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
  if ( !v33 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                    (int32_t)this,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v36 = v3->fields.mainInfo;
  if ( !v36 )
    goto LABEL_59;
  v37 = this;
  this = (ServantStatusDialog_o *)v36->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_59;
  v38 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( v38 == DispLimitCount )
    goto LABEL_58;
  v40 = DispLimitCount;
  this = (ServantStatusDialog_o *)v3->fields.mainInfo;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v37)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v37, (int32_t)this, v38, 0LL),
        !v3->fields.mainInfo)
    || (v41 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v37, LimitCount, v40, 0LL),
        !v41)
    || !this )
  {
LABEL_59:
    sub_1BCAA3C(this, result);
  }
  m_CancellationTokenSource = v41->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v41 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v44 )
        sub_1BCAA44(this, result);
      if ( *((_DWORD *)&v41->fields.CHARA_BASE_POSITION.fields.x + v44) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v44) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v44 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_58;
  v45 = v3->fields.mainInfo;
  if ( !v45 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)v45->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v38, -1, 1, -1, 0LL);
  if ( !entity )
    goto LABEL_59;
  v46 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v40, -1, 1, -1, 0LL);
  v47 = v3->fields.mainInfo;
  if ( !v47 )
    goto LABEL_59;
  v48 = this;
  this = (ServantStatusDialog_o *)v47->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v38, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v52, -1, v40, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                    (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v52 )
    goto LABEL_59;
  if ( tdInfo->fields.id != v52->fields.id )
    v3->fields.isNeedSort = 1;
LABEL_58:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleFBXComponent_o *v12; // x0
  void *individualityCallbackFunc; // x20
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
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  if ( (byte_4B1223D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1223D = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v12 = this->fields.battleActor;
    if ( !v12 )
      sub_1BCAA3C(0LL, v5);
    BattleFBXComponent__RevertShaderFloatProperty(v12, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.resultCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc, 0LL, v14, v15, v16, v17, v18, v19);
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
    isModify = this->fields.isModify;
    isNeedSort = this->fields.isNeedSort;
LABEL_10:
    (*((void (__fastcall **)(_QWORD, _BOOL8, __int64, _QWORD))individualityCallbackFunc + 3))(
      *((_QWORD *)individualityCallbackFunc + 8),
      isModify,
      isNeedSort,
      *((_QWORD *)individualityCallbackFunc + 5));
    return;
  }
  resultCallbackFunc = this->fields.resultCallbackFunc;
  if ( resultCallbackFunc )
  {
    this->fields.resultCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v29, v30, v31, v32, v33, v34);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, bool, _QWORD, _QWORD))resultCallbackFunc->fields.m_target)(
      resultCallbackFunc->fields.original_method_info,
      this->fields.isModify,
      this->fields.isNeedSort,
      (unsigned int)this->fields.questId,
      *(_QWORD *)&resultCallbackFunc->fields.extra_arg);
  }
  else
  {
    individualityCallbackFunc = this->fields.formationCallbackFunc;
    if ( individualityCallbackFunc )
    {
      this->fields.formationCallbackFunc = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        this->fields.isModify,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int64_t IsModifyLock; // x0
  struct ServantStatusListViewItem_o *v31; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItem_o **p_mainInfo; // x25
  int32_t kind; // w9
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int64_t userId; // x20
  _BOOL4 isModify; // w22
  __int64 v42; // x1
  int v43; // w22
  bool v44; // w0
  __int64 v45; // x1
  int v46; // w23
  __int64 v47; // x1
  int v48; // w23
  bool v49; // w0
  __int64 v50; // x1
  int v51; // w21
  __int64 v52; // x1
  int v53; // w21
  const MethodInfo *v54; // x2
  int32_t ManualSetCardLimitCount; // w20
  __int64 v56; // x2
  __int64 v57; // x3
  NetworkManager_ResultCallbackFunc_o *v58; // x20
  __int64 v59; // x1
  struct UserCommandCodeEntity_o *v60; // x8
  __int128 v61; // q0
  CommandCodeSetStatusRequest_o *v62; // x19
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x20
  __int64 v65; // x21
  int32_t v66; // w24
  int v67; // w26
  BalanceConfig_c *v68; // x0
  char v69; // w20
  int32_t ManualSetDispLimitCount; // w0
  int32_t v71; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  char v73; // w22
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v75; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  char v77; // w29
  int32_t ManualSetIconLimitCount; // w0
  int32_t v79; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  char v81; // w29
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v83; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  ServantStatusListViewItem_o *v85; // x8
  ServantStatusListViewItem_o *v86; // x8
  char v87; // w21
  char v88; // w22
  int v89; // w20
  char v90; // w26
  struct UserServantEntity_o *v91; // x8
  __int128 v92; // q0
  __int64 v93; // x23
  bool isPush; // w27
  char v95; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  __int64 v97; // x2
  __int64 v98; // x3
  NetworkManager_ResultCallbackFunc_o *v99; // x20
  __int64 v100; // x1
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q0
  CardFavoriteRequest_o *v103; // x19
  int32_t v104; // [xsp+58h] [xbp-118h]
  int32_t v105; // [xsp+5Ch] [xbp-114h]
  int32_t v106; // [xsp+60h] [xbp-110h]
  int32_t limitCountSupport; // [xsp+64h] [xbp-10Ch]
  int32_t randomSettingSupport; // [xsp+68h] [xbp-108h]
  int32_t randomSettingOwn; // [xsp+6Ch] [xbp-104h]
  int32_t battleVoice; // [xsp+70h] [xbp-100h]
  int32_t commonFlag; // [xsp+74h] [xbp-FCh]
  int32_t iconLimitCount; // [xsp+78h] [xbp-F8h]
  int32_t portraitLimitCount; // [xsp+7Ch] [xbp-F4h]
  char v114; // [xsp+80h] [xbp-F0h]
  char v115; // [xsp+84h] [xbp-ECh]
  char v116; // [xsp+88h] [xbp-E8h]
  char v117; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4B1223B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v20, v21);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&UserCommandCodeNewManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v28, v29);
    byte_4B1223B = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_131;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  p_mainInfo = &this->fields.mainInfo;
  if ( userSvtEntity )
  {
    kind = this->fields.kind;
    if ( kind != 6 && kind != 15 )
    {
      UserServantEntity__SetOld(userSvtEntity, 0LL);
      mainInfo = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_131;
    }
  }
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserServantCollectionEntity__SetOld(userSvtCollectionEntity, 0LL);
    mainInfo = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
  }
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    if ( this->fields.kind != 24 )
    {
      UserCommandCodeEntity__SetOld(userCommandCodeEntity, 0LL);
      mainInfo = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_131;
    }
  }
  userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
  if ( userCommandCodeCollectionEntity )
  {
    UserCommandCodeCollectionEntity__SetOld(userCommandCodeCollectionEntity, 0LL);
    mainInfo = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo && this->fields.kind == 4 )
  {
    userId = servantLeaderInfo->fields.userId;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v31);
    OtherUserNewManager__SetOld(userId, 0LL);
  }
  isModify = this->fields.isModify;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v31);
  v43 = UserServantNewManager__WriteData(0LL) || isModify;
  this->fields.isModify = v43;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v42);
  v44 = UserServantCollectionManager__WriteData(0LL);
  v46 = v43 | v44;
  this->fields.isModify = v43 | v44;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v45);
  v48 = v46 | ServantCommentManager__WriteData(0LL);
  this->fields.isModify = v48;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v47);
  v49 = OtherUserNewManager__WriteData(0LL);
  v51 = v48 | v49;
  this->fields.isModify = v48 | v49;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v50);
  v53 = v51 | UserCommandCodeNewManager__WriteData(0LL);
  this->fields.isModify = v53 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v52);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v31 = this->fields.mainInfo;
  this->fields.isModify = (v53 != 0) | IsModifyLock & 1;
  if ( !v31 )
    goto LABEL_131;
  if ( !v31->fields.userSvtEntity )
  {
    if ( v31->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v31, 0LL);
      if ( !*p_mainInfo )
        goto LABEL_131;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1) != 0 )
      {
        this->fields.isModify = 1;
        v58 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v31,
                                                       v56,
                                                       v57);
        NetworkManager_ResultCallbackFunc___ctor(
          v58,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v58,
                                  (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *p_mainInfo )
        {
          v60 = (*p_mainInfo)->fields.userCommandCodeEntity;
          if ( v60 )
          {
            v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
            v62 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v121.fields.fakeValue = v61;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
            v118 = v121;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v118, 0LL);
            if ( *p_mainInfo )
            {
              if ( v62 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v62,
                  IsModifyLock,
                  (*p_mainInfo)->fields.isLock,
                  (*p_mainInfo)->fields.isChoice,
                  0LL);
                return;
              }
            }
          }
        }
        goto LABEL_131;
      }
    }
    goto LABEL_129;
  }
  if ( v31->fields.isConvertOverwriteImage )
    goto LABEL_35;
  IsModifyLock = (int64_t)this->fields.charaGraphListViewManager;
  if ( !IsModifyLock )
    goto LABEL_131;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v31,
                            v54);
  if ( !IsModifyLock )
  {
    v31 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
LABEL_35:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v31, 0LL);
    goto LABEL_51;
  }
  ManualSetCardLimitCount = *(_DWORD *)(IsModifyLock + 120);
LABEL_51:
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsChangeImageLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( (IsModifyLock & 1) == 0 )
    goto LABEL_134;
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_ManualSetCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( ManualSetCardLimitCount != (_DWORD)IsModifyLock )
  {
    v68 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
      v68 = BalanceConfig_TypeInfo;
    }
    v67 = 1;
    v66 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v68->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_134:
    if ( !*p_mainInfo )
      goto LABEL_131;
    v63 = (*p_mainInfo)->fields.userSvtEntity;
    if ( !v63 )
      goto LABEL_131;
    v65 = *(_QWORD *)&v63->fields.imageLimitCount.fields.currentCryptoKey;
    v64 = *(_QWORD *)&v63->fields.imageLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    *(_QWORD *)&v122.fields.currentCryptoKey = v65;
    *(_QWORD *)&v122.fields.fakeValue = v64;
    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v122, 0LL);
    v67 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v69 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0LL);
    v71 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v72 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v72 )
      goto LABEL_131;
    v71 = BasicHelper__DecryptValue_41845724(v72[8], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v73 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0LL);
    v75 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v76 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v76 )
      goto LABEL_131;
    v75 = BasicHelper__DecryptValue_41845724(v76[9], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v77 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0LL);
    v79 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v80 )
      goto LABEL_131;
    v79 = BasicHelper__DecryptValue_41845724(v80[10], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v117 = v77;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v81 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0LL);
    v83 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v83;
  }
  else
  {
    v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v84 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_41845724(v84[11], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v85 = *p_mainInfo;
  v116 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v115 = v73;
  commonFlag = v85->fields.svtCommonFlag;
  iconLimitCount = v79;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v85, 0LL);
  v86 = *p_mainInfo;
  v114 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v87 = v69;
  battleVoice = v86->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v86, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v88 = IsModifyLock;
  v89 = v67;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v90 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v91 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v91 )
    goto LABEL_131;
  v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
  v93 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v121.fields.fakeValue = v92;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
  v105 = v71;
  v106 = v75;
  v120 = v121;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v120, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v93 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0LL);
  v95 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    if ( this->fields.isUsePush )
    {
      if ( !*p_mainInfo )
        goto LABEL_131;
      isPush = (*p_mainInfo)->fields.pushUserSvtId != 0;
    }
    else
    {
      isPush = 0;
    }
  }
  v104 = v66;
  if ( this->fields.isUseFavorite )
  {
    IsModifyLock = (int64_t)*p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0LL);
  }
  else
  {
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0LL),
        !*p_mainInfo) )
  {
LABEL_131:
    sub_1BCAA3C(IsModifyLock, v31);
  }
  if ( v89 | v87 & 1 | v115 & 1 | v117 & 1 | v81 & 1 | v116 & 1 | v114 & 1 | v88 & 1 | v90 & 1 | v95 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v99 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v97, v98);
    NetworkManager_ResultCallbackFunc___ctor(
      v99,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v100);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v99,
                              (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *p_mainInfo )
    {
      v101 = (*p_mainInfo)->fields.userSvtEntity;
      if ( v101 )
      {
        v102 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
        v103 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v121.fields.fakeValue = v102;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
        v119 = v121;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v119, 0LL);
        if ( *p_mainInfo )
        {
          if ( v103 )
          {
            CardFavoriteRequest__beginRequest(
              v103,
              IsModifyLock,
              v104,
              v105,
              v106,
              iconLimitCount,
              portraitLimitCount,
              IsModifyFavoriteUserSvtId,
              (*p_mainInfo)->fields.isLock,
              (*p_mainInfo)->fields.isChoice,
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
    goto LABEL_131;
  }
LABEL_129:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v31);
}


bool __fastcall ServantStatusDialog__GetEnableBattleVoiceFromKind(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL8 v3; // x0

  v2 = this->fields.kind - 2;
  if ( v2 > 0x23 )
    LOBYTE(v3) = 1;
  else
    return (0x677FFFFFEuLL >> v2) & 1;
  return v3;
}


bool __fastcall ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL8 v3; // x0

  v2 = this->fields.kind - 2;
  if ( v2 > 0x23 )
    LOBYTE(v3) = 1;
  else
    return (0x677FFFFFEuLL >> v2) & 1;
  return v3;
}


int32_t __fastcall ServantStatusDialog__GetTabKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v21; // x19
  System_String_o *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12221 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_9637/*"NoblePhantasm_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12818/*"Servants_"*/, v15, v16);
    byte_4B12221 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v23 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v21 = (System_String_o **)off_455AC50[assetType];
    v22 = System_Int32__ToString((int32_t)&v23, 0LL);
    return System_String__Concat_62401220(*v21, v22, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *pushButton; // x20
  __int64 v13; // x1
  ServantStatusDialog_c *v14; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v16; // x8
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  __int64 v23; // x1
  unsigned __int128 v24; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B12208 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ServantStatusDialog__Init_b__130_0__, v8, v9);
    sub_1BCA7E0(&ServantStatusDialog_TypeInfo, v10, v11);
    byte_4B12208 = 1;
  }
  v24 = 0uLL;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
  {
    v14 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v13);
      v14 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v14->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v24,
                                               0LL);
    v16 = this->fields.pushButton;
    if ( !v16 )
LABEL_18:
      sub_1BCAA3C(baseObject, v13);
    v16->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v24;
  }
  this->fields.isInitTab = 0;
  *(_WORD *)&this->fields.isModify = 256;
  *(_DWORD *)&this->fields.isExit = 0;
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  if ( this->fields.kind == 33 )
  {
    this->fields.needAutoScroll = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v17);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0LL);
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__130_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
  AtlasManager__LoadUISkin(v22, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  BattleFBXComponent_o *v6; // x0
  UnityEngine_Object_o *battleChr; // x20
  __int64 v8; // x1
  PartyOrganizationUtility_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12215 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12215 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v6 = this->fields.battleActor;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleFBXComponent__RevertShaderFloatProperty(v6, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    p_battleChr = (PartyOrganizationUtility_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1BCA784(p_battleChr, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
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
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v32; // x21

  if ( (byte_4B1222F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectCharaGraph__, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog__InitList_b__172_0__, v13, v14);
    byte_4B1222F = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v17 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v18);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int64_t)v17,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusCharaGraphListViewManager__SetMode_32913104(charaGraphListViewManager, 2, v27);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__172_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v32, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(v19, v20);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *supportRandomLimitCountList; // x8
  ServantCostumeMaster_o *v23; // x21
  signed int v24; // w25
  unsigned int max_length; // w9
  int32_t v26; // w22
  BalanceConfig_c *v27; // x0
  ServantCostumeEntity_o *v28; // x23
  struct ServantStatusListViewItem_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  __int64 v31; // x23
  __int64 v32; // x24
  ServantLimitAddEntity_o *v33; // x23
  struct ServantStatusListViewItem_o *v34; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v36; // x23
  __int64 v37; // x24
  struct ServantStatusListViewItem_o *v38; // x8
  ServantCostumeEntity_o *v40; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B1225D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCostumeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantCostumeEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&ServantLimitAddEntity_TypeInfo, v14, v15);
    byte_4B1225D = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1BCAA3C(RandomGroupIndex, v18);
  supportRandomLimitCountList = mainInfo->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    v23 = RandomGroupIndex;
    v24 = 0;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( v24 > (int)max_length )
        break;
      if ( v24 )
      {
        if ( v24 - 1 >= max_length )
          sub_1BCAA44(RandomGroupIndex, v18);
        v26 = supportRandomLimitCountList->m_Items[v24];
      }
      else
      {
        v26 = 0;
      }
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( v26 <= v27->static_fields->ServantLimitMax )
      {
        v33 = (ServantLimitAddEntity_o *)sub_1BCAA2C(ServantLimitAddEntity_TypeInfo, v18, v19, v20);
        ServantLimitAddEntity___ctor(v33, 0LL);
        entity = v33;
        v34 = this->fields.mainInfo;
        if ( !v34 )
          goto LABEL_35;
        userSvtEntity = v34->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_35;
        v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
        *(_QWORD *)&v43.fields.currentCryptoKey = v37;
        *(_QWORD *)&v43.fields.fakeValue = v36;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v43,
                                                       0LL);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v26,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          RandomGroupIndex = (ServantCostumeMaster_o *)entity;
          if ( !entity )
            goto LABEL_35;
          RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddEntity__GetRandomGroupIndex(entity, 0LL);
          if ( (_DWORD)RandomGroupIndex )
            return 1;
        }
      }
      else
      {
        v28 = (ServantCostumeEntity_o *)sub_1BCAA2C(ServantCostumeEntity_TypeInfo, v18, v19, v20);
        ServantCostumeEntity___ctor(v28, 0LL);
        v40 = v28;
        v29 = this->fields.mainInfo;
        if ( !v29 )
          goto LABEL_35;
        v30 = v29->fields.userSvtEntity;
        if ( !v30 )
          goto LABEL_35;
        v32 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
        *(_QWORD *)&v42.fields.currentCryptoKey = v32;
        *(_QWORD *)&v42.fields.fakeValue = v31;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v42,
                                                       0LL);
        if ( !v23 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v23,
                                                       &v40,
                                                       (int32_t)RandomGroupIndex,
                                                       v26,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_35;
          if ( v40->fields.groupIndex )
            return 1;
        }
      }
      v38 = this->fields.mainInfo;
      if ( v38 )
      {
        supportRandomLimitCountList = v38->fields.supportRandomLimitCountList;
        ++v24;
        if ( supportRandomLimitCountList )
          continue;
      }
      goto LABEL_35;
    }
  }
  return 0;
}


void __fastcall ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B12241 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssetData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog__LoadTransformedResource_b__194_0__, v5, v6);
    byte_4B12241 = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssetData__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_0__,
    0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v7, v8);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B12239 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickCancel__, method, v2);
    byte_4B12239 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v4 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ServantStatusDialog__Exit(this, v6);
  }
}


void __fastcall ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct ServantStatusListViewItem_o *v7; // x8

  v3 = this;
  if ( (byte_4B12240 & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnClickChangeTransform__, method, v2);
    byte_4B12240 = 1;
  }
  if ( !v3->fields.isExit && !v3->fields.isInit )
  {
    mainInfo = v3->fields.mainInfo;
    if ( mainInfo )
    {
      if ( !mainInfo->fields._IsTransformServant_k__BackingField )
        return;
      v5 = Method_ServantStatusDialog_OnClickChangeTransform__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeTransform__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickChangeTransform__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      v7 = v3->fields.mainInfo;
      if ( v7 )
      {
        v7->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v3, method);
        return;
      }
    }
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_4B1225E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickChangeVoice__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B1225E = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.changeVoiceFlag != type )
      {
        v13 = Method_ServantStatusDialog_OnClickChangeVoice__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeVoice__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickChangeVoice__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v5, type, v15);
        return;
      }
      statusTabListViewManager = v5->fields.statusTabListViewManager;
      v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&type,
                                                             method,
                                                             v3);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
        return;
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B12261 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickChoice__, method, v2);
    byte_4B12261 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCAA3C(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v5 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickChoice__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      ServantStatusDialog__SetMark(this, v7);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v12; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  v5 = this;
  if ( (byte_4B1224F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickCommandCharaCostume__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B1224F = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BCAA44(this, *(_QWORD *)&costumeIndex);
        v12 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v12 )
        {
          v15 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v5, v12, v17);
          return;
        }
        statusTabListViewManager = v5->fields.statusTabListViewManager;
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&costumeIndex);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_4B1224E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickCommandCharaLevel__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B1224E = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.commandCardLimitCount != dispLv )
      {
        v13 = Method_ServantStatusDialog_OnClickCommandCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaLevel__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v5, dispLv, v15);
        return;
      }
      statusTabListViewManager = v5->fields.statusTabListViewManager;
      v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
        return;
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v26; // x20
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  Il2CppObject *Instance; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  ServantStatusDialog_EndDelegate_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x23
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v40; // x20
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t kind; // w24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  Il2CppObject *v47; // x21
  ServantStatusDialog_EndDelegate_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x23
  int32_t v53; // w1
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  ServantStatusListViewManager_CallbackFunc_o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  bool v64; // w3
  CommonUI_o *v65; // x0
  CommandCodeEntity_o *v66; // x2

  v4 = this;
  if ( (byte_4B12256 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickCommandCodeShow__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectEquipStatus__, v17, v18);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v19, v20);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    byte_4B12256 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_27;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(userSvtCollectionEntity, index, 0LL);
    if ( UserCommandCodeEntity )
    {
      v26 = UserCommandCodeEntity;
      v27 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v30, v31, v32);
      ServantStatusDialog_EndDelegate___ctor(
        v33,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
      System_Action___ctor(v37, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30782060((CommonUI_o *)Instance, 20, v26, v33, v37, 0LL);
        return;
      }
LABEL_27:
      sub_1BCAA3C(this, *(_QWORD *)&index);
    }
    goto LABEL_17;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0LL);
    if ( CommandCodeEntity )
    {
      v40 = CommandCodeEntity;
      v41 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v42 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v41, v41[4]);
      OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
      kind = v4->fields.kind;
      v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v48 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v44, v45, v46);
        ServantStatusDialog_EndDelegate___ctor(
          v48,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
        System_Action___ctor(v52, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v47 )
          goto LABEL_27;
        v53 = 22;
      }
      else
      {
        v48 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v44, v45, v46);
        ServantStatusDialog_EndDelegate___ctor(
          v48,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
        System_Action___ctor(v52, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v47 )
          goto LABEL_27;
        if ( kind != 5 )
        {
          v53 = 25;
          v65 = (CommonUI_o *)v47;
          v66 = v40;
          v64 = 0;
          goto LABEL_26;
        }
        v53 = 23;
      }
      v64 = 1;
      v65 = (CommonUI_o *)v47;
      v66 = v40;
LABEL_26:
      CommonUI__OpenServantEquipStatusDialog_30782812(v65, v53, v66, v64, v48, v52, 0LL);
      return;
    }
  }
LABEL_17:
  v54 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v55 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v60 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v57,
                                                         v58,
                                                         v59);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v60,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusDialog_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v12; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  v5 = this;
  if ( (byte_4B12252 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickFaceCharaCostume__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B12252 = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BCAA44(this, *(_QWORD *)&costumeIndex);
        v12 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v12 )
        {
          v15 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v5, v12, v17);
          return;
        }
        statusTabListViewManager = v5->fields.statusTabListViewManager;
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&costumeIndex);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_4B12251 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickFaceCharaLevel__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B12251 = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.iconLimitCount != dispLv )
      {
        v13 = Method_ServantStatusDialog_OnClickFaceCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaLevel__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v5, dispLv, v15);
        return;
      }
      statusTabListViewManager = v5->fields.statusTabListViewManager;
      v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
        return;
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
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
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v48; // q1
  int64_t favoriteUserSvtId; // x20
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v55; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v58; // x1
  ServantEntity_o *v59; // x24
  __int64 v60; // x1
  Il2CppObject *Master_object; // x22
  System_String_o *v62; // x20
  __int64 v63; // x21
  __int64 v64; // x1
  int32_t Rarity; // w25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ServantStatusDialog_o *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  ServantStatusDialog_o *v79; // x25
  int32_t v80; // w0
  Il2CppClass *v81; // x8
  int32_t v82; // w23
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  ServantStatusDialog_o *v89; // x23
  struct ServantStatusListViewItem_o *v90; // x8
  int32_t v91; // w0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  ServantStatusDialog_o *v98; // x23
  struct ServantStatusListViewItem_o *v99; // x8
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  ServantStatusDialog_o *v106; // x23
  struct ServantStatusListViewItem_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  int32_t v109; // w23
  int32_t v110; // w0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  ServantStatusDialog_o *v117; // x22
  System_String_o *v118; // x20
  __int64 v119; // x1
  System_String_o *v120; // x0
  __int64 v121; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v123; // x22
  System_String_o *v124; // x23
  System_String_o *v125; // x24
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  CommonConfirmDialog_ClickDelegate_o *v129; // x25
  struct ServantStatusListViewItem_o *v130; // x20
  struct UserServantEntity_o *v131; // x8
  __int128 v132; // q0
  const MethodInfo *v133; // x1
  __int64 v134; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v3 = this;
  if ( (byte_4B12262 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&object___TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&Rarity_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickFavorite__, v28, v29);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_12019/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12018/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v42, v43);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v44, v45);
    byte_4B12262 = 1;
  }
  if ( !v3->fields.isExit && !v3->fields.isInit )
  {
    mainInfo = v3->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_77;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v48 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v137.fields.fakeValue = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v136 = v137;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v136, 0LL) )
    {
      v50 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickFavorite__);
      v51 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 2, 0LL);
      return;
    }
    v52 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v52 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickFavorite__);
    v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
    OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v130 = v3->fields.mainInfo;
      if ( v130 )
      {
        v131 = v130->fields.userSvtEntity;
        if ( v131 )
        {
          v132 = *(_OWORD *)&v131->fields.id.fields.fakeValue;
          *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v131->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v137.fields.fakeValue = v132;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v135 = v137;
          v130->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                             &v135,
                                             0LL);
          ServantStatusDialog__SetMark(v3, v133);
          return;
        }
      }
      goto LABEL_77;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_77;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_77;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_77;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_77;
    v55 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v138.fields.currentCryptoKey = klass;
    *(_QWORD *)&v138.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v138, 0LL);
    if ( !v55 )
      goto LABEL_77;
    v59 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v55,
                               (int32_t)this,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v63 = sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v64);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v63 )
      goto LABEL_77;
    v72 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v63 + 24) )
        goto LABEL_78;
      *(_QWORD *)(v63 + 32) = v72;
      sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)v72, v66, v67, v68, v69, v70, v71);
      if ( !v59 )
        goto LABEL_77;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v59, 0LL);
      v79 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v63 + 24) <= 1u )
          goto LABEL_78;
        *(_QWORD *)(v63 + 40) = v79;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 40), (int64_t)v79, v73, v74, v75, v76, v77, v78);
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59->fields.id, 0LL);
        v81 = Entity[6].klass;
        *(_QWORD *)&v139.fields.fakeValue = Entity[6].monitor;
        v82 = v80;
        *(_QWORD *)&v139.fields.currentCryptoKey = v81;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v139, 0LL);
        if ( !Master_object )
          goto LABEL_77;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v82,
                                          (int32_t)this,
                                          0LL);
        v89 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v63 + 24) <= 2u )
            goto LABEL_78;
          *(_QWORD *)(v63 + 48) = v89;
          sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 48), (int64_t)v89, v83, v84, v85, v86, v87, v88);
          v90 = v3->fields.mainInfo;
          if ( !v90 )
            goto LABEL_77;
          this = (ServantStatusDialog_o *)v90->fields.userSvtEntity;
          if ( !this )
            goto LABEL_77;
          v91 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v91, 0LL);
          v98 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v63 + 24) <= 3u )
              goto LABEL_78;
            *(_QWORD *)(v63 + 56) = v98;
            sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 56), (int64_t)v98, v92, v93, v94, v95, v96, v97);
            v99 = v3->fields.mainInfo;
            if ( !v99 )
              goto LABEL_77;
            this = (ServantStatusDialog_o *)v99->fields.svtEntity;
            if ( !this )
              goto LABEL_77;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v106 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v63 + 24) <= 4u )
                goto LABEL_78;
              *(_QWORD *)(v63 + 64) = v106;
              sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 64), (int64_t)v106, v100, v101, v102, v103, v104, v105);
              this = (ServantStatusDialog_o *)v3->fields.mainInfo;
              if ( !this )
                goto LABEL_77;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v107 = v3->fields.mainInfo;
              if ( !v107 )
                goto LABEL_77;
              v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v107->fields.userSvtEntity;
              if ( !v108 )
                goto LABEL_77;
              v109 = (int)this;
              v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v108[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)Master_object,
                                                v109,
                                                v110,
                                                0LL);
              v117 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v63 + 24) > 5u )
                {
                  *(_QWORD *)(v63 + 72) = v117;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v63 + 72),
                    (int64_t)v117,
                    v111,
                    v112,
                    v113,
                    v114,
                    v115,
                    v116);
                  this = (ServantStatusDialog_o *)System_String__Format_62415728(v62, (System_Object_array *)v63, 0LL);
                  if ( !v3->fields.mainInfo )
                    goto LABEL_77;
                  v118 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v3->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v3->fields.mainInfo;
                    if ( !this )
                      goto LABEL_77;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v119);
                      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v118 = System_String__Concat_62401220(v118, v120, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
                  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v129 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v126,
                                                                  v127,
                                                                  v128);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v129,
                    (Il2CppObject *)v3,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30766228(
                      (CommonUI_o *)Instance,
                      v123,
                      v118,
                      v124,
                      v125,
                      v129,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_77:
                  sub_1BCAA3C(this, method);
                }
LABEL_78:
                sub_1BCAA44(this, method);
              }
            }
          }
        }
      }
    }
    v134 = sub_1BCAA60();
    sub_1BCA908(v134, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B12260 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickLock__, method, v2);
    byte_4B12260 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCAA3C(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v5 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickLock__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      ServantStatusDialog__SetMark(this, v7);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v12; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  v5 = this;
  if ( (byte_4B12255 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B12255 = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BCAA44(this, *(_QWORD *)&costumeIndex);
        v12 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v12 )
        {
          v15 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
          OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v5, v12, v17);
          return;
        }
        statusTabListViewManager = v5->fields.statusTabListViewManager;
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)v5,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&costumeIndex);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2

  v5 = this;
  if ( (byte_4B12254 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__, v6, v7);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v8, v9);
    byte_4B12254 = 1;
  }
  if ( !v5->fields.isExit && !v5->fields.isInit )
  {
    mainInfo = v5->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.portraitLimitCount != dispLv )
      {
        v13 = Method_ServantStatusDialog_OnClickPortraitCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaLevel__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v5, dispLv, v15);
        return;
      }
      statusTabListViewManager = v5->fields.statusTabListViewManager;
      v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v5,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
        return;
      }
    }
    sub_1BCAA3C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
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
  __int64 v42; // x1
  __int64 v43; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v45; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v47; // q1
  int64_t pushUserSvtId; // x20
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  struct ServantStatusListViewItem_o *v51; // x8
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v55; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v58; // x1
  ServantEntity_o *v59; // x24
  __int64 v60; // x1
  Il2CppObject *Master_object; // x22
  System_String_o *v62; // x20
  __int64 v63; // x21
  __int64 v64; // x1
  int32_t Rarity; // w25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ServantStatusDialog_o *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  ServantStatusDialog_o *v79; // x25
  int32_t v80; // w0
  Il2CppClass *v81; // x8
  int32_t v82; // w23
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  ServantStatusDialog_o *v89; // x23
  struct ServantStatusListViewItem_o *v90; // x8
  int32_t v91; // w0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  ServantStatusDialog_o *v98; // x23
  struct ServantStatusListViewItem_o *v99; // x8
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  ServantStatusDialog_o *v106; // x23
  struct ServantStatusListViewItem_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  int32_t v109; // w23
  int32_t v110; // w0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  ServantStatusDialog_o *v117; // x22
  System_String_o *v118; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v120; // x22
  System_String_o *v121; // x23
  System_String_o *v122; // x24
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  CommonConfirmDialog_ClickDelegate_o *v126; // x25
  struct ServantStatusListViewItem_o *v127; // x20
  struct UserServantEntity_o *v128; // x8
  __int128 v129; // q0
  __int64 v130; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  v3 = this;
  if ( (byte_4B12264 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&object___TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&Rarity_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickPush__, v28, v29);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnConfirmSelectPush__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v40, v41);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v42, v43);
    byte_4B12264 = 1;
  }
  if ( !v3->fields.isExit && !v3->fields.isInit )
  {
    mainInfo = v3->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_72;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v45 = v3->fields.mainInfo;
    if ( !v45 )
      goto LABEL_72;
    userSvtEntity = v45->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_72;
    v47 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v45->fields.pushUserSvtId;
    *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v133.fields.fakeValue = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v132 = v133;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v132, 0LL) )
    {
      v49 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v49 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickPush__);
      v50 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v49, v49[4]);
      OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
      v51 = v3->fields.mainInfo;
      if ( v51 )
      {
        v51->fields.pushUserSvtId = 0LL;
LABEL_71:
        ServantStatusDialog__SetMark(v3, method);
        return;
      }
      goto LABEL_72;
    }
    v52 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v52 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickPush__);
    v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
    OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v127 = v3->fields.mainInfo;
      if ( v127 )
      {
        v128 = v127->fields.userSvtEntity;
        if ( v128 )
        {
          v129 = *(_OWORD *)&v128->fields.id.fields.fakeValue;
          *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v128->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v133.fields.fakeValue = v129;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v131 = v133;
          v127->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v131, 0LL);
          goto LABEL_71;
        }
      }
LABEL_72:
      sub_1BCAA3C(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_72;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_72;
    v55 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v134.fields.currentCryptoKey = klass;
    *(_QWORD *)&v134.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v134, 0LL);
    if ( !v55 )
      goto LABEL_72;
    v59 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v55,
                               (int32_t)this,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v63 = sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v64);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v63 )
      goto LABEL_72;
    v72 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v63 + 24) )
        goto LABEL_73;
      *(_QWORD *)(v63 + 32) = v72;
      sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)v72, v66, v67, v68, v69, v70, v71);
      if ( !v59 )
        goto LABEL_72;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v59, 0LL);
      v79 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v63 + 24) <= 1u )
          goto LABEL_73;
        *(_QWORD *)(v63 + 40) = v79;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 40), (int64_t)v79, v73, v74, v75, v76, v77, v78);
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59->fields.id, 0LL);
        v81 = Entity[6].klass;
        *(_QWORD *)&v135.fields.fakeValue = Entity[6].monitor;
        v82 = v80;
        *(_QWORD *)&v135.fields.currentCryptoKey = v81;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v135, 0LL);
        if ( !Master_object )
          goto LABEL_72;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v82,
                                          (int32_t)this,
                                          0LL);
        v89 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v63 + 24) <= 2u )
            goto LABEL_73;
          *(_QWORD *)(v63 + 48) = v89;
          sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 48), (int64_t)v89, v83, v84, v85, v86, v87, v88);
          v90 = v3->fields.mainInfo;
          if ( !v90 )
            goto LABEL_72;
          this = (ServantStatusDialog_o *)v90->fields.userSvtEntity;
          if ( !this )
            goto LABEL_72;
          v91 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v91, 0LL);
          v98 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v63 + 24) <= 3u )
              goto LABEL_73;
            *(_QWORD *)(v63 + 56) = v98;
            sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 56), (int64_t)v98, v92, v93, v94, v95, v96, v97);
            v99 = v3->fields.mainInfo;
            if ( !v99 )
              goto LABEL_72;
            this = (ServantStatusDialog_o *)v99->fields.svtEntity;
            if ( !this )
              goto LABEL_72;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v106 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v63 + 24) <= 4u )
                goto LABEL_73;
              *(_QWORD *)(v63 + 64) = v106;
              sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 64), (int64_t)v106, v100, v101, v102, v103, v104, v105);
              this = (ServantStatusDialog_o *)v3->fields.mainInfo;
              if ( !this )
                goto LABEL_72;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v107 = v3->fields.mainInfo;
              if ( !v107 )
                goto LABEL_72;
              v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v107->fields.userSvtEntity;
              if ( !v108 )
                goto LABEL_72;
              v109 = (int)this;
              v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v108[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)Master_object,
                                                v109,
                                                v110,
                                                0LL);
              v117 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v63 + 24) > 5u )
                {
                  *(_QWORD *)(v63 + 72) = v117;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v63 + 72),
                    (int64_t)v117,
                    v111,
                    v112,
                    v113,
                    v114,
                    v115,
                    v116);
                  v118 = System_String__Format_62415728(v62, (System_Object_array *)v63, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v126 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v123,
                                                                  v124,
                                                                  v125);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v126,
                    (Il2CppObject *)v3,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30766228(
                      (CommonUI_o *)Instance,
                      v120,
                      v118,
                      v121,
                      v122,
                      v126,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_72;
                }
LABEL_73:
                sub_1BCAA44(this, method);
              }
            }
          }
        }
      }
    }
    v130 = sub_1BCAA60();
    sub_1BCA908(v130, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_4B1225B & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v5, v6);
    byte_4B1225B = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v7 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B12259 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__, *(_QWORD *)&index, method);
    byte_4B12259 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ServantStatusDialog__RandomLimitCountSupportResource(this, index, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickServantQuest(
        ServantStatusDialog_o *this,
        int32_t questId,
        const MethodInfo *method)
{
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  void *Instance; // x0
  __int64 v44; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v46; // x21
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  int32_t QuestType; // w22
  QuestEntity_o *v50; // x23
  System_String_o *v51; // x20
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  ServantStatusListViewManager_CallbackFunc_o *v63; // x21
  __int64 v64; // x1
  Il2CppObject *v65; // x21
  System_String_o *v66; // x0
  __int64 *v67; // x8
  __int64 v68; // x1
  System_String_o *v69; // x22
  System_String_o *v70; // x0
  System_String_o *v71; // x20
  System_String_o *v72; // x23
  System_String_o *v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  CommonConfirmDialog_ClickDelegate_o *v77; // x25

  if ( (byte_4B12257 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickServantQuest__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnConfirmServantQuest__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12064/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12066/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12067/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12060/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12063/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12065/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12061/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12062/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v41, v42);
    byte_4B12257 = 1;
  }
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_20;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_20:
    v57 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickServantQuest__);
    v58 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v57, v57[4]);
    OverwriteAssetSoundName__PlaySystemSe(v58, 2, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v63 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v60,
                                                           v61,
                                                           v62);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v63, 0LL);
      return;
    }
    goto LABEL_35;
  }
  v46 = QuestInfo;
  v47 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v47 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickServantQuest__);
  v48 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v47, v47[4]);
  OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v46, 0LL);
  Instance = MapControl_QuestInfo__GetMine(v46, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v50 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v51 = (System_String_o *)Instance;
  if ( !System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25238/*"{0}"*/, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (void *)QuestEntity__getServantId(v50, 0LL),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(Instance, v44);
  }
  BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
  v51 = System_String__Format(v51, BattleName, 0LL);
LABEL_16:
  if ( QuestType == 3 )
  {
    warId = v46->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_30:
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v67 = &StringLiteral_12064/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_33;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
      if ( IsFolder )
        goto LABEL_30;
    }
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v67 = &StringLiteral_12062/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  }
  else
  {
    v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
    v67 = &StringLiteral_12066/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  }
LABEL_33:
  v69 = v66;
  v70 = LocalizationManager__Get((System_String_o *)*v67, 0LL);
  v71 = System_String__Format(v70, (Il2CppObject *)v51, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12061/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v74, v75, v76);
  CommonConfirmDialog_ClickDelegate___ctor(
    v77,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v65 )
    goto LABEL_35;
  CommonUI__OpenConfirmDialog_30766228((CommonUI_o *)v65, v69, v71, v72, v73, v77, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12246 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickTabBattle__, method, v2);
    byte_4B12246 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v4 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickTabBattle__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v6);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12245 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickTabProfile__, method, v2);
    byte_4B12245 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v4 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickTabProfile__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v6);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12244 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickTabStatus__, method, v2);
    byte_4B12244 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v4 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickTabStatus__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v6);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12247 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickTabVoice__, method, v2);
    byte_4B12247 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v4 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickTabVoice__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 3, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
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
  __int64 v30; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v43; // x21
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  __int64 v46; // x1
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  __int64 v49; // x1
  Il2CppObject *v50; // x21
  System_String_o *v51; // x0
  System_String_o *v52; // x20
  long double v53; // q0
  __int64 v54; // x8
  __int64 v55; // x0
  CommonUI_o *v56; // x22
  System_String_o *Empty; // x21
  System_String_o *v58; // x23
  System_String_o *v59; // x24
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  CommonConfirmDialog_ClickDelegate_o *v63; // x25

  if ( (byte_4B12258 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnClickTdSpeed__, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v12, v13);
    sub_1BCA7E0(&ServantStatusListViewItemDrawButton_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v16, v17);
    sub_1BCA7E0(&string_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__, v20, v21);
    sub_1BCA7E0(&ServantStatusDialog___c__DisplayClass217_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_12069/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12070/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12071/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v28, v29);
    byte_4B12258 = 1;
  }
  v30 = sub_1BCAA2C(ServantStatusDialog___c__DisplayClass217_0_TypeInfo, *(_QWORD *)&type, method, v3);
  ServantStatusDialog___c__DisplayClass217_0___ctor((ServantStatusDialog___c__DisplayClass217_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_24;
  *(_QWORD *)(v30 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_DWORD *)(v30 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v30 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v43 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v39,
                                                             v40,
                                                             v41);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v43, 0LL);
        return;
      }
LABEL_24:
      sub_1BCAA3C(mainInfo, v32);
    }
    v44 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnClickTdSpeed__);
    v45 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v46);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v50 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v30 + 24), 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v52 = System_String__Format_62415592(v51, TDSpeedLocalization, v50, 0LL);
    v54 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
      v54 = sub_1C1C6BC(v53);
    v55 = *(_QWORD *)(*(_QWORD *)(v54 + 192) + 16LL);
    if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
      v55 = sub_1C1C6BC(v53);
    v56 = **(CommonUI_o ***)(v55 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v60, v61, v62);
    CommonConfirmDialog_ClickDelegate___ctor(
      v63,
      (Il2CppObject *)v30,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v56 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v56, Empty, v52, v58, v59, v63, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B12263 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v7, v8);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B12263 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BCAA3C(this, isDecide);
    v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide);
    v20 = v21;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v20, 0LL);
    ServantStatusDialog__SetMark(v4, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B12265 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v7, v8);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B12265 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BCAA3C(this, isDecide);
    v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide);
    v20 = v21;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v20, 0LL);
    ServantStatusDialog__SetMark(v4, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
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
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v24; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  Il2CppObject *Instance; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ServantStatusListViewManager_CallbackFunc_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  TerminalPramsManager_c *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x20
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_4B1225F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B1225F = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v30, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v35 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v32,
                                                             v33,
                                                             v34);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v35, 0LL);
        return;
      }
    }
    goto LABEL_25;
  }
  v21 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v21 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v21, this->fields.questId, 0LL);
  v24 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v21 = (Il2CppObject *)v24->fields._WarInfo_k__BackingField;
      if ( !v21 )
        goto LABEL_25;
      LODWORD(v24) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v21, 0LL);
    }
    else
    {
      LODWORD(v24) = 0;
    }
  }
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v21 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v21, (int32_t)v24, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
  if ( !byte_4B12270 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v36, v37);
    byte_4B12270 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v39);
    v43 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, 0LL);
  if ( !v42 )
LABEL_25:
    sub_1BCAA3C(v21, v22);
  CommonUI__maskFadeout((CommonUI_o *)v42, 1, DEFAULT_FADE_TIME, v45, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  BattleFBXComponent_o *v6; // x0

  if ( (byte_4B1223A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1223A = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v6 = this->fields.battleActor;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleFBXComponent__RevertShaderFloatProperty(v6, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B12268 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3199/*"Base/TitlePrefab/BackObj/BtnBg"*/, v4, v5);
    byte_4B12268 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3199/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v9 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(transform, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4B12248 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectBattle__, v6, v7);
    byte_4B12248 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v9 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&result,
                                                                method,
                                                                v3);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      v10);
    if ( !battleTabListViewManager
      || (battleTabListViewManager->fields.callbackFunc = v9,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&battleTabListViewManager->fields.callbackFunc,
            (int64_t)v9,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18),
          ServantStatusBattleListViewManager__SetMode_32899084(battleTabListViewManager, 1, v19, v20),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1BCAA3C(v11, v12);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v22 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnSelectBattle__);
      v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v24);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B12235 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B12235 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BCAA3C(gameObject, v10);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B12233 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B12233 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BCAA3C(gameObject, v10);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B12237 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectFlavor__, v5, v6);
    byte_4B12237 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v8 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&result,
                                                                  method,
                                                                  v3);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1BCAA3C(v9, v10);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v6; // x19
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v50; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  struct ServantStatusListViewItem_o *v56; // x8
  int64_t equipTargetId1; // x21
  CommonUI_o *v58; // x20
  ServantStatusDialog_EndDelegate_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v66; // q1
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  int32_t kind; // w24
  __int64 v70; // x2
  __int64 v71; // x3
  struct ServantStatusListViewItem_o *v72; // x8
  struct ServantLeaderInfo_o *v73; // x8
  EquipTargetInfo_o *v74; // x21
  CommonUI_o *v75; // x20
  ServantStatusDialog_EndDelegate_o *v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Action_o *v80; // x23
  int32_t v81; // w1
  ServantStatusListViewManager_o *v82; // x20
  ServantStatusListViewManager_CallbackFunc_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 *v90; // x8
  struct UISprite_o *v91; // x1
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v96; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v98; // x21
  __int64 v99; // x2
  __int64 v100; // x3
  struct ServantStatusListViewItem_o *v101; // x8
  struct ServantLeaderInfo_o *v102; // x8
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4B12232 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&id);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndOpenEquipStatus__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusDialog_Exit__, v17, v18);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectEquipStatus__, v19, v20);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_12796/*"ServantLvExceed"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12800/*"ServantSkillCombine"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12797/*"ServantNpCombine"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4681/*"CommandCardEquip"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_6971/*"FriendshipExceed"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12794/*"ServantLimitCountUp"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_2415/*"AppendSkillCombine"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_4682/*"CommandCardExceed"*/, v45, v46);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&StringLiteral_2416/*"AppendSkillExchange"*/, v47, v48);
    byte_4B12232 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v50 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&result,
                                                             *(_QWORD *)&id,
                                                             method);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v50,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v50, 0LL);
        return;
      }
LABEL_80:
      sub_1BCAA3C(this, *(_QWORD *)&result);
    }
    switch ( result )
    {
      case 1:
        if ( v6->fields.mainInfo )
          goto LABEL_9;
        goto LABEL_80;
      case 2:
LABEL_9:
        mainInfo = v6->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_80;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v52 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v52 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnSelectStatus__);
          v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
          OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v56 = v6->fields.mainInfo;
          if ( !v56 )
            goto LABEL_80;
          equipTargetId1 = v56->fields.equipTargetId1;
          v58 = (CommonUI_o *)this;
          v59 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       *(_QWORD *)&result,
                                                       v54,
                                                       v55);
          ServantStatusDialog_EndDelegate___ctor(
            v59,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
          System_Action___ctor(v63, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v58 )
            goto LABEL_80;
          CommonUI__OpenServantEquipStatusDialog(v58, 11, equipTargetId1, 1, v59, v63, 0LL);
        }
        else
        {
          servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
          if ( !servantLeaderInfo )
            goto LABEL_29;
          equipTarget1 = servantLeaderInfo->fields.equipTarget1;
          if ( !equipTarget1 )
            goto LABEL_29;
          v66 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
          *(_OWORD *)&v107.fields.fakeValue = v66;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result);
          v106 = v107;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v106, 0LL) >= 1 )
          {
            v67 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v67 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnSelectStatus__);
            v68 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v67, v67[4]);
            OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0LL);
            kind = v6->fields.kind;
            if ( kind == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v72 = v6->fields.mainInfo;
              if ( !v72 )
                goto LABEL_80;
              v73 = v72->fields.servantLeaderInfo;
              if ( !v73 )
                goto LABEL_80;
              v74 = v73->fields.equipTarget1;
              v75 = (CommonUI_o *)this;
              v76 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                           ServantStatusDialog_EndDelegate_TypeInfo,
                                                           *(_QWORD *)&result,
                                                           v70,
                                                           v71);
              ServantStatusDialog_EndDelegate___ctor(
                v76,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v80 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v77, v78, v79);
              System_Action___ctor(v80, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v75 )
                goto LABEL_80;
              v81 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v101 = v6->fields.mainInfo;
              if ( !v101 )
                goto LABEL_80;
              v102 = v101->fields.servantLeaderInfo;
              if ( !v102 )
                goto LABEL_80;
              v74 = v102->fields.equipTarget1;
              v75 = (CommonUI_o *)this;
              v76 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                           ServantStatusDialog_EndDelegate_TypeInfo,
                                                           *(_QWORD *)&result,
                                                           v99,
                                                           v100);
              ServantStatusDialog_EndDelegate___ctor(
                v76,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v80 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v103, v104, v105);
              System_Action___ctor(v80, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v75 )
                goto LABEL_80;
              if ( kind == 5 )
                v81 = 14;
              else
                v81 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_30781828(v75, v81, v74, v76, v80, 0LL);
          }
          else
          {
LABEL_29:
            v82 = v6->fields.statusTabListViewManager;
            v83 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                   *(_QWORD *)&result,
                                                                   *(_QWORD *)&id,
                                                                   method);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v83,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v82 )
              goto LABEL_80;
            ServantStatusListViewManager__SetMode(v82, 1, v83, 0LL);
          }
        }
        break;
      case 3:
        if ( id <= 2 )
          ServantStatusDialog__OnClickCommandCharaLevel(v6, id, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickCommandCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
        return;
      case 4:
        if ( id <= 3 )
          ServantStatusDialog__OnClickFaceCharaLevel(v6, id, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickFaceCharaCostume(v6, id - 4, *(const MethodInfo **)&id);
        return;
      case 5:
        if ( id <= 2 )
          ServantStatusDialog__OnClickPortraitCharaLevel(v6, id, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickPortraitCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12781/*"ServantCombine"*/;
        goto LABEL_66;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12784/*"ServantEQCombine"*/;
        goto LABEL_66;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12800/*"ServantSkillCombine"*/;
        goto LABEL_66;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12794/*"ServantLimitCountUp"*/;
        goto LABEL_66;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_6971/*"FriendshipExceed"*/;
        goto LABEL_66;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_4681/*"CommandCardEquip"*/;
        goto LABEL_66;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_4682/*"CommandCardExceed"*/;
        goto LABEL_66;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_2415/*"AppendSkillCombine"*/;
        goto LABEL_66;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_2416/*"AppendSkillExchange"*/;
        goto LABEL_66;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12797/*"ServantNpCombine"*/;
        goto LABEL_66;
      case 23:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v90 = &StringLiteral_12796/*"ServantLvExceed"*/;
LABEL_66:
        v91 = (struct UISprite_o *)*v90;
        this->fields.statusSprite = (struct UISprite_o *)*v90;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.statusSprite,
          (int64_t)v91,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v96 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v92);
          v96 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v96->static_fields->DEFAULT_FADE_TIME;
        v98 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v92, v93, v94);
        System_Action___ctor(v98, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_80;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v98, 0LL);
        return;
      default:
        goto LABEL_29;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
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
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v20; // x23
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v25; // x23
  ServantStatusVoiceListViewItem_o *v26; // x25
  int32_t v27; // w22
  int32_t v28; // w21
  System_String_o *v29; // x24
  System_String_o *LabelName; // x0
  System_String_o *v31; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v33; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v35; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v37; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B12238 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectVoice__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v17, v18);
    byte_4B12238 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v20 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&kind,
                                                                *(_QWORD *)&result,
                                                                method);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !voiceTabListViewManager )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v20, 0LL);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v23);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v25 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v26 = (ServantStatusVoiceListViewItem_o *)Instance;
        v27 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v26, 0LL);
        if ( !MasterData_object )
          goto LABEL_58;
        v28 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v27,
                        (int32_t)Instance,
                        0LL);
        v29 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v26, 0LL);
        v31 = System_String__Concat_62412480(v29, (System_String_o *)StringLiteral_16290/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v26, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v26, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v26->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v26, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v26, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v26, 0LL);
                  if ( v25 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40604568(
                                      (ServantVoiceMaster_o *)v25,
                                      v27,
                                      v28,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_1BCAA3C(Instance, v22);
                }
                if ( !v25 )
                  goto LABEL_58;
                if ( !v26->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v25, v27, v28, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v25,
                                  v27,
                                  v28,
                                  v31,
                                  0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v26, 0LL);
                  if ( v25 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(
                                      (ServantVoiceMaster_o *)v25,
                                      v27,
                                      (int32_t)Instance,
                                      0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_32970428(this, v27, v28, HomeVoiceList, result, v33);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v25 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                    (ServantVoiceMaster_o *)v25,
                                    v27,
                                    v28,
                                    v31,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v26->fields.genderFlag && !v26->fields.voiceLabelSpecification )
              {
                if ( v25 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                    (ServantVoiceMaster_o *)v25,
                                    v27,
                                    v28,
                                    2,
                                    1,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v25 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v25, v27, v28, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v25 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v27, v28, BattleVoiceList, result, v35);
            return;
          case 7:
            if ( !v25 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v27, v28, NpVoiceList, result, v37);
            return;
          case 8:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                              (ServantVoiceMaster_o *)v25,
                              v27,
                              v28,
                              v31,
                              0LL);
            goto LABEL_52;
          case 9:
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v25, v27, v28, v31, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v26, 0LL);
            if ( !v25 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_40602528(
                              (ServantVoiceMaster_o *)v25,
                              (int32_t)Instance,
                              v27,
                              v28,
                              v31,
                              0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
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
  System_String_o *v31; // x20
  __int64 v32; // x1
  System_String_o *v33; // x21
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  ServantStatusListViewManager_CallbackFunc_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v45; // x22
  __int64 v46; // x23
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  __int64 v49; // x1
  long double v50; // q0
  __int64 v51; // x0
  __int64 v52; // x0
  CommonUI_o *v53; // x22
  System_String_o *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  CommonConfirmDialog_ClickDelegate_o *v58; // x0
  __int64 *v59; // x8
  struct ServantStatusListViewItem_o *v60; // x8
  struct UserServantEntity_o *v61; // x9
  __int64 v62; // x22
  __int64 v63; // x23
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  __int64 v66; // x1
  long double v67; // q0
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  CommonConfirmDialog_ClickDelegate_o *v73; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4B1223E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v11, v12);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12039/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12036/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12035/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v29, v30);
    byte_4B1223E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  this->fields.currentMaskType = maskType;
  switch ( maskType )
  {
    case 3:
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        return;
      userSvtEntity = mainInfo->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        v46 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v45 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
        *(_QWORD *)&v74.fields.currentCryptoKey = v46;
        *(_QWORD *)&v74.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v47 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v48 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v47, v47[4]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0LL);
      v51 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
        v51 = sub_1C1C6BC(v50);
      v52 = *(_QWORD *)(*(_QWORD *)(v51 + 192) + 16LL);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1C1C6BC(v50);
      v53 = **(CommonUI_o ***)(v52 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v55,
                                                     v56,
                                                     v57);
      v59 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__;
LABEL_44:
      v73 = v58;
      CommonConfirmDialog_ClickDelegate___ctor(v58, (Il2CppObject *)this, *v59, 0LL);
      if ( !v53 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30766668(
        v53,
        (System_String_o *)StringLiteral_1/*""*/,
        v54,
        v31,
        v33,
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
    case 2:
      v60 = this->fields.mainInfo;
      if ( !v60 )
        return;
      v61 = v60->fields.userSvtEntity;
      if ( !v61 )
      {
LABEL_34:
        if ( !v60->fields.isEnableSupportRandomSetting )
          return;
        v64 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v65 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 0, 0LL);
        v68 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
          v68 = sub_1C1C6BC(v67);
        v69 = *(_QWORD *)(*(_QWORD *)(v68 + 192) + 16LL);
        if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
          v69 = sub_1C1C6BC(v67);
        v53 = **(CommonUI_o ***)(v69 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       v70,
                                                       v71,
                                                       v72);
        v59 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__;
        goto LABEL_44;
      }
      v63 = *(_QWORD *)&v61->fields.limitCount.fields.currentCryptoKey;
      v62 = *(_QWORD *)&v61->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
      *(_QWORD *)&v75.fields.currentCryptoKey = v63;
      *(_QWORD *)&v75.fields.fakeValue = v62;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL) )
      {
        v60 = this->fields.mainInfo;
        if ( !v60 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v34 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v40 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v37,
                                                             v38,
                                                             v39);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v40, 0LL);
        return;
      }
LABEL_47:
      sub_1BCAA3C(v41, v42);
    case 1:
      goto LABEL_8;
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ServantStatusListViewItem_o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B121EE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, partyItem);
    byte_4B121EE = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)canMoveCombine,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v21, v22, v23);
  ServantStatusListViewItem___ctor(v24, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void __fastcall ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1220D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_13656/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v9, v10);
    byte_4B1220D = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, callback);
  if ( !TutorialFlag__Get_38402052(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13656/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v13, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32938040(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ServantStatusListViewItem_o *v24; // x24
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B121EF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, partyItem);
    byte_4B121EF = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)canMoveCombine,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v21, v22, v23);
  ServantStatusListViewItem___ctor(v24, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32938248(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusListViewItem_o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4B121F0 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, partyItem);
    byte_4B121F0 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33879168(v23, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  ServantStatusDialog__Init(this, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32938444(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v23; // x5

  if ( (byte_4B121F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B121F1 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v21 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v21 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)*v21);
  ServantStatusDialog__Open_32938724(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32938724(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  unsigned int v22; // w8
  bool v23; // cc
  unsigned __int64 v24; // x8
  char v25; // w9
  char v26; // w21
  ServantStatusListViewItem_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B121F5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121F5 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = this->fields.kind - 2;
  v23 = v22 > 0x23;
  v24 = 0x677FFFFFEuLL >> v22;
  v25 = v23;
  v26 = v25 | v24 & 1;
  v27 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33880808(v27, userSvtEntity, 0LL, 0LL, 0, v26, v26, 0, 0LL);
  this->fields.mainInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  ServantStatusDialog__Init(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32938972(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v23; // x5

  if ( (byte_4B121F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B121F2 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v21 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v21 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)*v21);
  ServantStatusDialog__Open_32939252(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32939252(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  unsigned int v22; // w8
  bool v23; // cc
  unsigned __int64 v24; // x8
  char v25; // w9
  char v26; // w22
  ServantStatusListViewItem_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B121F6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121F6 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = this->fields.kind - 2;
  v23 = v22 > 0x23;
  v24 = 0x677FFFFFEuLL >> v22;
  v25 = v23;
  v26 = v25 | v24 & 1;
  v27 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33880808(v27, userSvtEntity, 0LL, 0LL, callback != 0LL, v26, v26, 0, 0LL);
  this->fields.mainInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  ServantStatusDialog__Init(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32939504(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v23; // x6

  if ( (byte_4B121F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B121F3 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v21 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v21 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)*v21);
  ServantStatusDialog__Open_32939788(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32939788(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w22
  ServantStatusListViewItem_o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4B121F7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121F7 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)canMoveCombine,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = this->fields.kind - 2;
  v24 = v23 > 0x23;
  v25 = 0x677FFFFFEuLL >> v23;
  v26 = v24;
  v27 = v26 | v25 & 1;
  v28 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33880808(v28, userSvtEntity, 0LL, 0LL, 0, v27, v27, canMoveCombine, 0LL);
  this->fields.mainInfo = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32940048(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 *v21; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v23; // x6

  if ( (byte_4B121F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B121F4 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v21 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v21 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)*v21);
  ServantStatusDialog__Open_32940332(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32940332(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w23
  ServantStatusListViewItem_o *v28; // x24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4B121F8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121F8 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)canMoveCombine,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = this->fields.kind - 2;
  v24 = v23 > 0x23;
  v25 = 0x677FFFFFEuLL >> v23;
  v26 = v24;
  v27 = v26 | v25 & 1;
  v28 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33880808(
    v28,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v27,
    v27,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32940692(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v19; // x7

  if ( (byte_4B121F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B121F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v17);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_32940896(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32940896(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  unsigned int v24; // w8
  bool v25; // cc
  unsigned __int64 v26; // x8
  char v27; // w9
  char v28; // w23
  ServantStatusListViewItem_o *v29; // x24
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1

  if ( (byte_4B121FA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121FA = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = this->fields.kind - 2;
  v25 = v24 > 0x23;
  v26 = 0x677FFFFFEuLL >> v24;
  v27 = v25;
  v28 = v27 | v26 & 1;
  v29 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v21, v22, v23);
  ServantStatusListViewItem___ctor_33880808(v29, userSvtEntity, equipIdList, questRestrictionInfo, 0, v28, v28, 0, 0LL);
  this->fields.mainInfo = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  ServantStatusDialog__Init(this, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32941160(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  unsigned int v26; // w8
  bool v27; // cc
  unsigned __int64 v28; // x8
  char v29; // w9
  char v30; // w24
  ServantStatusListViewItem_o *v31; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_4B121FB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121FB = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v26 = this->fields.kind - 2;
  v27 = v26 > 0x23;
  v28 = 0x677FFFFFEuLL >> v26;
  v29 = v27;
  v30 = v29 | v28 & 1;
  v31 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v23, v24, v25);
  ServantStatusListViewItem___ctor_33880808(
    v31,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v30,
    v30,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  ServantStatusDialog__Init(this, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32941436(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  unsigned int v26; // w8
  bool v27; // cc
  unsigned __int64 v28; // x8
  char v29; // w9
  char v30; // w25
  ServantStatusListViewItem_o *v31; // x26
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_4B121FC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121FC = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v26 = this->fields.kind - 2;
  v27 = v26 > 0x23;
  v28 = 0x677FFFFFEuLL >> v26;
  v29 = v27;
  v30 = v29 | v28 & 1;
  v31 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v23, v24, v25);
  ServantStatusListViewItem___ctor_33880808(
    v31,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v30,
    v30,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  ServantStatusDialog__Init(this, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32941716(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v20; // x6

  if ( (byte_4B121FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, userSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B121FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_32941928(this, kind, (UserServantEntity_o *)Entity, isUse, callback, openCallback, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32941928(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  char v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusListViewItem_o *v23; // x22
  int64_t v24; // x2
  char v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4B121FE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtEntity);
    byte_4B121FE = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    isUse,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33883144(v23, userSvtEntity, isUse, 0LL);
  this->fields.mainInfo = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  ServantStatusDialog__Init(this, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32942120(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  unsigned int v22; // w8
  bool v23; // cc
  unsigned __int64 v24; // x8
  char v25; // w9
  char v26; // w21
  ServantStatusListViewItem_o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B121FF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtCollectionEntity);
    byte_4B121FF = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = this->fields.kind - 2;
  v23 = v22 > 0x23;
  v24 = 0x677FFFFFEuLL >> v22;
  v25 = v23;
  v26 = v25 | v24 & 1;
  v27 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33884940(v27, userSvtCollectionEntity, 0, v26, 0LL);
  this->fields.mainInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  ServantStatusDialog__Init(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32942344(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w22
  ServantStatusListViewItem_o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4B12200 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtCollectionEntity);
    byte_4B12200 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    imageLimitCount,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = this->fields.kind - 2;
  v24 = v23 > 0x23;
  v25 = 0x677FFFFFEuLL >> v23;
  v26 = v24;
  v27 = v26 | v25 & 1;
  v28 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33886580(v28, userSvtCollectionEntity, imageLimitCount, 0, v27, 0LL);
  this->fields.mainInfo = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32942584(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  unsigned int v22; // w8
  bool v23; // cc
  unsigned __int64 v24; // x8
  char v25; // w9
  char v26; // w22
  ServantStatusListViewItem_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B12201 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userSvtCollectionEntity);
    byte_4B12201 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = this->fields.kind - 2;
  v23 = v22 > 0x23;
  v24 = 0x677FFFFFEuLL >> v22;
  v25 = v23;
  v26 = v25 | v24 & 1;
  v27 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33884940(v27, userSvtCollectionEntity, callback != 0LL, v26, 0LL);
  this->fields.mainInfo = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  ServantStatusDialog__Init(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32942812(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusListViewItem_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4B12202 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, servantLeaderInfo);
    byte_4B12202 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)servantLeaderInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33888004(v22, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32942996(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusListViewItem_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4B12203 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, equipTargetInfo);
    byte_4B12203 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)equipTargetInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33889692(v22, equipTargetInfo, kind == 19, 0LL);
  this->fields.mainInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32943180(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  char v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantStatusListViewItem_o *v23; // x22
  int64_t v24; // x2
  char v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4B12204 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, commandCodeEntity);
    byte_4B12204 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)commandCodeEntity,
    isUse,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v20, v21, v22);
  ServantStatusListViewItem___ctor_33890520(v23, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  ServantStatusDialog__Init(this, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32943372(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusListViewItem_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4B12205 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userCommandCodeEntity);
    byte_4B12205 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33890896(v22, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32943548(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusListViewItem_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4B12206 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userCommandCodeEntity);
    byte_4B12206 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33890896(v22, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32943724(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusListViewItem_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4B12207 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind, userCommandCodeCollectionEntity);
    byte_4B12207 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v19, v20, v21);
  ServantStatusListViewItem___ctor_33891972(v22, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
        const MethodInfo *method)
{
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_Object_o *battleChrCamera; // x21
  __int64 v44; // x1
  __int64 transform; // x0
  UnityEngine_Component_o *v46; // x21
  __int64 v47; // x1
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v50; // s8
  int32_t v51; // w23
  __int64 v52; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  const MethodInfo *v55; // x1
  int32_t v56; // w24
  __int64 v57; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  struct UnityEngine_GameObject_o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x22
  float32x2_t v67; // d8
  float v68; // s9
  float v69; // s2 OVERLAPPED
  unsigned __int64 v70; // d0 OVERLAPPED
  int v71; // s1
  __int64 v72; // x2
  UnityEngine_Transform_o *v73; // x25
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v80; // x26
  UnityEngine_Transform_o *v81; // x27
  float Item; // s8
  float v83; // s9
  float v84; // s0
  __int64 v85; // x1
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v87; // x24
  __int64 v88; // x1
  Il2CppObject *v89; // x23
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  int32_t v97; // w22
  __int64 v98; // x2
  __int64 v99; // x3
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v101; // x21
  System_String_o *v102; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1221C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v25, v26);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v27, v28);
    sub_1BCA7E0(&NGUITools_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_3250/*"Battle2D"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_16777/*"_y0"*/, v41, v42);
    byte_4B1221C = 1;
  }
  v102 = 0LL;
  entity = 0LL;
  if ( !this->fields.isBattlePlay )
  {
    battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, noupdate);
    if ( !UnityEngine_Object__op_Equality(battleChrCamera, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.battleChrCamera;
      this->fields.isBattlePlay = 1;
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v46 = (UnityEngine_Component_o *)transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v46,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (transform & 1) != 0 )
          break;
        transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v46, 0LL);
        v46 = (UnityEngine_Component_o *)transform;
        if ( !transform )
          goto LABEL_73;
      }
      if ( !Component_object )
        goto LABEL_73;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !transform )
        goto LABEL_73;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)this->fields.battleChrCamera;
      if ( !transform )
        goto LABEL_73;
      v50 = *(float *)&localScale;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v104.fields.x = 1.0 / v50;
      v104.fields.y = 1.0 / v50;
      v104.fields.z = 1.0 / v50;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v104, 0LL);
      transform = (__int64)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)transform, 1, 0LL);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v51 = transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v52);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      ServantStatusDialog__DestroyBattleChr(this, v55);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                    (ServantLimitImageMaster_o *)transform,
                    v51,
                    LimitCountByImageLimitCostumeIn,
                    0LL);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v56 = transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v57);
      v59 = ServantAssetLoadManager__loadBattleActor(&v102, gameObject, v51, v56, 0, 0LL);
      this->fields.battleChr = v59;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleChr, (int64_t)v59, v60, v61, v62, v63, v64, v65);
      if ( !v59 )
        goto LABEL_73;
      v66 = UnityEngine_GameObject__AddComponent_object_(
              v59,
              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v59, 0LL);
      if ( !v66 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v66, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, v51, v56, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v67.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v68 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v67.n64_u64[0] = 0LL;
        v68 = 0.0;
      }
      transform = (__int64)UnityEngine_GameObject__get_transform(v59, 0LL);
      if ( !transform )
        goto LABEL_73;
      v69 = v68 + this->fields.CHARA_BASE_POSITION.fields.z;
      v70 = vadd_f32(v67, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v71 = HIDWORD(v70);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v69 - 2),
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v59, 0LL);
      if ( !transform )
        goto LABEL_73;
      v105.fields.x = 0.0;
      v105.fields.z = 0.0;
      v105.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v105, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v59, 0LL);
      v73 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B109C6 )
      {
        transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v44, v72);
        byte_4B109C6 = 1;
      }
      if ( !v73 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v73, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v80 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                         v74,
                                                                         v75,
                                                                         v76);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v80,
            (const MethodInfo_320B378 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v80 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v80,
            5,
            0.75,
            (const MethodInfo_320BD44 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v80,
            8,
            0.75,
            (const MethodInfo_320BD44 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v80,
            9,
            0.75,
            (const MethodInfo_320BD44 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v80,
                 battleSize,
                 (const MethodInfo_320BF3C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v81 = UnityEngine_GameObject__get_transform(v59, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v80,
                     battleSize,
                     (const MethodInfo_320BCA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v83 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v80,
                    battleSize,
                    (const MethodInfo_320BCA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v84 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v80,
                    battleSize,
                    (const MethodInfo_320BCA8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v81 )
              goto LABEL_73;
            v106.fields.z = v84;
            v106.fields.x = Item;
            v106.fields.y = v83;
            UnityEngine_Transform__set_localScale(v81, v106, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v66, v51, v56, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v66, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v66,
          5000.0,
          (System_String_o *)StringLiteral_16777/*"_y0"*/,
          0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v85);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v51, v56, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v66, Manager__loadAnimEvents, v51, v56, 0LL);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v66, this->fields.defaultAnimationName, 2, 0LL);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v66, this->fields.defaultAnimationName, 0LL);
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v66, 0LL);
      if ( !transform
        || (v87 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v66, 0LL)) == 0) )
      {
LABEL_73:
        sub_1BCAA3C(transform, v44);
      }
      v89 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v87, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v87 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v87, 0LL);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v89, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v89 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v89, 0LL);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v66;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleActor, (int64_t)v66, v90, v91, v92, v93, v94, v95);
      v97 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v96);
      NGUITools__SetLayer(v59, v97, 0LL);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_34803476(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v101 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                v44,
                                                                v98,
                                                                v99);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v101,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v101, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v15; // x4

  v10 = this;
  if ( (byte_4B12228 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12);
    byte_4B12228 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v15);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayChrVoice_32970428(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v15; // x4

  v10 = this;
  if ( (byte_4B1222A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12);
    byte_4B1222A = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v15);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v15; // x4

  v10 = this;
  if ( (byte_4B12229 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantVoiceData____get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11,
                                      v12);
    byte_4B12229 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v15);
}


bool __fastcall ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_string__o *voiceDataList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool v18; // w23
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  int v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12225 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName, voicePlayList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v13, v14);
    byte_4B12225 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1BCAA3C(0LL, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v38 = v37;
  do
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v18 = v16;
    if ( !v16 )
    {
      v35 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1BCAA3C(v16, v17);
  }
  while ( !System_String__Equals_62409536(assetName, (System_String_o *)v38.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v19);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1BCAA3C(0LL, v20);
    ServantStatusVoiceListViewManager__SetMode_35951064(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayList,
    (int64_t)voicePlayList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.voicePlayAssetName = assetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName,
    (int64_t)assetName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v34);
  v35 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v18 && v35 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4B12230 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B12230 = 1;
  }
  if ( !this->fields.isExit )
  {
    isBgmLow = this->fields.isBgmLow;
    this->fields.isExit = 1;
    if ( isBgmLow )
    {
      this->fields.isBgmLow = 0;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
      OptionManager__Recover(0LL);
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_32913104(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_34803476(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_33865896(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(charaGraphListViewManager, method);
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  _BOOL4 v56; // w24
  const MethodInfo *v57; // x2
  int v58; // w8
  long double inited; // q0
  int v60; // w8
  unsigned __int8 v61; // w21
  struct ServantStatusListViewItem_o *v62; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v64; // x22
  __int64 v65; // x23
  __int64 v66; // x2
  __int64 v67; // x3
  int v68; // w22
  BalanceConfig_c *v69; // x8
  struct ServantStatusListViewItem_o *v70; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v72; // x23
  __int64 v73; // x0
  __int64 v74; // x0
  CommonUI_o *v75; // x19
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  System_String_o *v78; // x23
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  CommonConfirmDialog_ClickDelegate_o *v82; // x0
  __int64 *v83; // x8
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  CommonConfirmDialog_ClickDelegate_o *v89; // x24
  const MethodInfo *v90; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  ServantStatusListViewManager_CallbackFunc_o *v95; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4B1225C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isOwnSetting, isRandomOn);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v9, v10);
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v23, v24);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__, v25, v26);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__, v27, v28);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__, v29, v30);
    sub_1BCA7E0(&ServantStatusDialog___c__DisplayClass221_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12047/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12036/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12048/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12035/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v45, v46);
    byte_4B1225C = 1;
  }
  v47 = sub_1BCAA2C(ServantStatusDialog___c__DisplayClass221_0_TypeInfo, isOwnSetting, isRandomOn, *(_QWORD *)&index);
  ServantStatusDialog___c__DisplayClass221_0___ctor((ServantStatusDialog___c__DisplayClass221_0_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_53;
  v56 = isRandomOn;
  *(_QWORD *)(v47 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)this, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)(v47 + 32) = index;
  *(_BYTE *)(v47 + 36) = isOwnSetting;
  *(_BYTE *)(v47 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v56 )
    {
      if ( mainInfo->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v58) = *(_BYTE *)(v47 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v49);
    v60 = *(unsigned __int8 *)(v47 + 37);
    v61 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v47 + 16) = 12;
    if ( v60 )
    {
      v62 = this->fields.mainInfo;
      if ( !v62 )
        goto LABEL_53;
      userSvtEntity = v62->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v65 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v64 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
      *(_QWORD *)&v96.fields.currentCryptoKey = v65;
      *(_QWORD *)&v96.fields.fakeValue = v64;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  v96,
                                                  0LL);
      v68 = (int)mainInfo;
      v69 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v49);
        v69 = BalanceConfig_TypeInfo;
      }
      if ( v68 == v69->static_fields->ServantIdMashu1 )
      {
        v70 = this->fields.mainInfo;
        if ( !v70 )
          goto LABEL_53;
        supportRandomLimitCountList = v70->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v72 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v49, v66, v67);
          System_Func_int__bool____ctor(
            v72,
            (Il2CppObject *)v47,
            Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__49273364(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v72,
                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
          {
            v73 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
              v73 = sub_1C1C6BC(inited);
            v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
            if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
              v74 = sub_1C1C6BC(inited);
            v75 = **(CommonUI_o ***)(v74 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                           v79,
                                                           v80,
                                                           v81);
            v83 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v61 & *(_BYTE *)(v47 + 37) & 1) != 0 )
    {
      v84 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
        v84 = sub_1C1C6BC(inited);
      v85 = *(_QWORD *)(*(_QWORD *)(v84 + 192) + 16LL);
      if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
        v85 = sub_1C1C6BC(inited);
      v75 = **(CommonUI_o ***)(v85 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v86,
                                                     v87,
                                                     v88);
      v83 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v89 = v82;
      CommonConfirmDialog_ClickDelegate___ctor(v82, (Il2CppObject *)v47, *v83, 0LL);
      if ( v75 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v75,
          (System_String_o *)StringLiteral_1/*""*/,
          v76,
          v77,
          v78,
          v89,
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
          0,
          0LL);
        return;
      }
LABEL_53:
      sub_1BCAA3C(mainInfo, v49);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v47 + 32), 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v58 = *(unsigned __int8 *)(v47 + 37);
    if ( *(_BYTE *)(v47 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v58 != 0, 0LL);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v90);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v58;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v56 )
    goto LABEL_14;
  if ( mainInfo->fields.ownRandomSettingButtonIndex != index )
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
LABEL_47:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)mainInfo,
    this->fields.mainInfo,
    v57);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v95 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v92,
                                                         v93,
                                                         v94);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v95,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v95, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_4B1225A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v5, v6);
    byte_4B1225A = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCAA3C(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B1221A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flag, method);
    byte_4B1221A = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
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
  int64_t battleTabListViewManager; // x0
  __int64 v18; // x8
  __int64 confirmDispLv; // x9
  int32_t v20; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  __int64 v22; // x1
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  int64_t v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *v34; // x22
  System_String_o *battleLoadAsset; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  __int64 v40; // x1
  const MethodInfo *v41; // x1

  if ( (byte_4B1221E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, isModifyInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1221E = 1;
  }
  battleTabListViewManager = (int64_t)this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantStatusBattleListViewManager__ChangeSelectIndex(
    (ServantStatusBattleListViewManager_o *)battleTabListViewManager,
    this->fields.confirmDispLv,
    method);
  battleTabListViewManager = (int64_t)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  v18 = *(_QWORD *)(battleTabListViewManager + 248);
  if ( !v18 )
    goto LABEL_29;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= *(_DWORD *)(v18 + 24) )
    sub_1BCAA44(battleTabListViewManager, isModifyInfo);
  *(_DWORD *)(battleTabListViewManager + 240) = *(_DWORD *)(v18 + 4 * confirmDispLv + 32);
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  else if ( *(_BYTE *)(battleTabListViewManager + 523) )
  {
    ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  battleTabListViewManager = (int64_t)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = ServantStatusListViewItem__GetSvtId(
                               (ServantStatusListViewItem_o *)battleTabListViewManager,
                               1,
                               0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_29;
  v20 = battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)battleTabListViewManager,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v20,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v22);
  battleTabListViewManager = (int64_t)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                        v20,
                                        ServantImageLimitSealAfter,
                                        0LL);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v25 = battleTabListViewManager;
  if ( System_String__Equals_62409536((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v26);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v34 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27);
    AssetManager__releaseAssetStorage(v34, 0LL);
  }
  *p_battleLoadAsset = (System_String_o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, v25, v28, v29, v30, v31, v32, v33);
  battleTabListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
LABEL_29:
    sub_1BCAA3C(battleTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  battleLoadAsset = this->fields.battleLoadAsset;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v36, v37, v38);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v40);
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v39, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v41);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  unsigned int kind; // w9
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantStatusListViewItem_o *v29; // x8
  System_String_o **v30; // x8
  struct ServantStatusListViewItem_o *v31; // x8
  System_String_o **v32; // x8
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20
  struct ServantStatusListViewItem_o *v35; // x8
  struct ServantStatusListViewItem_o *v36; // x8
  System_String_o **v37; // x8
  struct ServantStatusListViewItem_o *v38; // x8
  System_String_o **v39; // x8
  struct ServantStatusListViewItem_o *v40; // x8
  struct UserServantEntity_o *v41; // x9
  UISprite_o *favoriteSprite; // x20
  __int128 v43; // q1
  ServantStatusDialog_o *favoriteUserSvtId; // x22
  System_String_o **v45; // x8
  __int64 v46; // x1
  UnityEngine_Object_o *pushButton; // x20
  struct ServantStatusListViewItem_o *v48; // x8
  __int64 *v49; // x8
  struct ServantStatusListViewItem_o *v50; // x8
  struct UserServantEntity_o *v51; // x9
  __int128 v52; // q1
  ServantStatusDialog_o *pushSprite; // x20
  ServantStatusDialog_o *pushUserSvtId; // x21
  bool v55; // zf
  struct ServantStatusListViewItem_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-50h]

  v3 = this;
  if ( (byte_4B1222E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_17835/*"button_lock_reg"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17836/*"button_lock_unreg"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17830/*"button_choice_unreg"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20353/*"icon_equip"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17829/*"button_choice_reg"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20354/*"icon_equip_cc"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_17831/*"button_favorite_reg"*/, v22, v23);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&StringLiteral_17832/*"button_favorite_unreg"*/, v24, v25);
    byte_4B1222E = 1;
  }
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_83;
  if ( !mainInfo->fields.userGameEntity
    || (kind = v3->fields.kind, kind <= 0x24) && ((1LL << kind) & 0x19E0000000LL) != 0 )
  {
    this = (ServantStatusDialog_o *)v3->fields.markBase;
    if ( this )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_83;
  }
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(userSvtEntity, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v3->fields.markBase;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v36 = v3->fields.mainInfo;
      if ( !v36 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v3->fields.lockSprite;
      if ( !this )
        goto LABEL_83;
      v37 = (System_String_o **)(v36->fields.isLock ? &StringLiteral_17835/*"button_lock_reg"*/ : &StringLiteral_17836/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v37, 0LL);
      v38 = v3->fields.mainInfo;
      if ( !v38 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v3->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v39 = (System_String_o **)(v38->fields.isChoice ? &StringLiteral_17829/*"button_choice_reg"*/ : &StringLiteral_17830/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v39, 0LL);
      this = (ServantStatusDialog_o *)v3->fields.favoriteButton;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isUseFavorite, 0LL);
      v40 = v3->fields.mainInfo;
      if ( !v40 )
        goto LABEL_83;
      v41 = v40->fields.userSvtEntity;
      if ( !v41 )
        goto LABEL_83;
      favoriteSprite = v3->fields.favoriteSprite;
      v43 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
      favoriteUserSvtId = (ServantStatusDialog_o *)v40->fields.favoriteUserSvtId;
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v59.fields.fakeValue = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v58 = v59;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v58, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v45 = (System_String_o **)&StringLiteral_17831/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v45 = (System_String_o **)&StringLiteral_17832/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v45, 0LL);
      pushButton = (UnityEngine_Object_o *)v3->fields.pushButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
      if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
      {
        this = (ServantStatusDialog_o *)v3->fields.pushButton;
        if ( !this )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isUsePush, 0LL);
        v48 = v3->fields.mainInfo;
        if ( !v48 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)v48->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) || v3->fields.kind == 3 )
        {
          this = (ServantStatusDialog_o *)v3->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            3LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (ServantStatusDialog_o *)v3->fields.pushSprite;
          if ( !this )
            goto LABEL_83;
          v49 = &StringLiteral_17840/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v3->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                            this,
                                            0LL,
                                            1LL,
                                            this->klass[1]._1.interfaceOffsets);
          v50 = v3->fields.mainInfo;
          if ( !v50 )
            goto LABEL_83;
          v51 = v50->fields.userSvtEntity;
          if ( !v51 )
            goto LABEL_83;
          v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
          pushSprite = (ServantStatusDialog_o *)v3->fields.pushSprite;
          pushUserSvtId = (ServantStatusDialog_o *)v50->fields.pushUserSvtId;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v59.fields.fakeValue = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v57 = v59;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                            &v57,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v49 = &StringLiteral_17839/*"button_push_reg"*/;
          v55 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v55 )
            v49 = &StringLiteral_17840/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v49, 0LL);
      }
      this = (ServantStatusDialog_o *)v3->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v56 = v3->fields.mainInfo;
      if ( !v56 )
        goto LABEL_83;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v56->fields.isUse, 0LL);
      this = (ServantStatusDialog_o *)v3->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20353/*"icon_equip"*/, 0LL);
      return;
    }
    mainInfo = v3->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_83;
  }
  this = (ServantStatusDialog_o *)v3->fields.markBase;
  if ( !this )
    goto LABEL_83;
  if ( !mainInfo->fields.userCommandCodeEntity )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v29 = v3->fields.mainInfo;
  if ( !v29 )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)v3->fields.lockSprite;
  if ( !this )
    goto LABEL_83;
  v30 = (System_String_o **)(v29->fields.isLock ? &StringLiteral_17835/*"button_lock_reg"*/ : &StringLiteral_17836/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v30, 0LL), (v31 = v3->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v3->fields.choiceSprite) == 0LL
    || (v31->fields.isChoice
      ? (v32 = (System_String_o **)&StringLiteral_17829/*"button_choice_reg"*/)
      : (v32 = (System_String_o **)&StringLiteral_17830/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v32, 0LL),
         (this = (ServantStatusDialog_o *)v3->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v34 = (UnityEngine_Object_o *)v3->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    this = (ServantStatusDialog_o *)v3->fields.pushButton;
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  this = (ServantStatusDialog_o *)v3->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = v3->fields.mainInfo;
  if ( !v35 )
    goto LABEL_83;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35->fields.isUse, 0LL);
  this = (ServantStatusDialog_o *)v3->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20354/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v9; // x1
  NoticeNumberComponent_o *v10; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4B12219 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12219 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList )
    size = newProfileList->fields._size;
  else
    size = 0;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(noticeNumber, 0LL, 0LL) )
  {
    v10 = this->fields.noticeNumber;
    if ( !v10 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v10, size > 0, 0LL);
    v10 = this->fields.noticeNumber;
    if ( !v10 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v10, size, 0LL);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0LL, 0LL) )
    {
      v10 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v10 )
      {
        ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)v10, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(v10, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 statusTabBase; // x0
  int v54; // w23
  bool v55; // w1
  __int64 v56; // x1
  UnityEngine_Object_o *battleActor; // x21
  System_String_o **v58; // x8
  System_String_o **v59; // x8
  UICommonButton_o *v60; // x21
  bool v61; // w0
  __int64 *v62; // x8
  System_String_o **v63; // x8
  UICommonButton_o *profileButton; // x21
  bool v65; // w0
  char isInitTab; // w2
  bool v67; // w1
  System_String_o **v68; // x8
  __int64 *v69; // x8
  UICommonButton_o *v70; // x21
  bool v71; // w0
  System_String_o **v72; // x8
  System_String_o **v73; // x8
  UICommonButton_o *statusButton; // x21
  bool enabled; // w0
  System_String_o **v76; // x8
  System_String_o **v77; // x8
  UICommonButton_o *battleButton; // x21
  bool v79; // w0
  const MethodInfo *v80; // x2
  __int64 v81; // x3
  __int64 *v82; // x8
  System_String_o **v83; // x8
  System_String_o **v84; // x8
  UICommonButton_o *v85; // x21
  bool v86; // w0
  System_String_o **v87; // x8
  System_String_o **v88; // x8
  UICommonButton_o *v89; // x21
  bool v90; // w0
  System_String_o **v91; // x8
  System_String_o **v92; // x8
  UICommonButton_o *v93; // x21
  bool v94; // w0
  _BOOL4 v95; // w21
  System_String_o **v96; // x8
  System_String_o **v97; // x8
  UICommonButton_o *voiceButton; // x21
  bool v99; // w0
  struct System_Boolean_array *tabInitList; // x8
  char *v101; // x8
  _BYTE *v102; // x8
  int v103; // t1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  ServantStatusListViewManager_CallbackFunc_o *v108; // x21
  ServantStatusListViewManager_o *v109; // x20
  ServantStatusListViewManager_CallbackFunc_o *v110; // x21
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v112; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v114; // x21
  const MethodInfo *v115; // x3
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v125; // x2
  struct ServantStatusListViewItem_o *v126; // x8
  struct ServantStatusListViewItem_o *v127; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v129; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v133; // x0
  BgmManager_c *v134; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v136; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v137; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1222C & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&OptionManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectBattle__, v21, v22);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectFlavor__, v23, v24);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v25, v26);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectVoice__, v27, v28);
    sub_1BCA7E0(&StringLiteral_17749/*"btn_txt_detail_off"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17732/*"btn_txt_battlecharacter_on"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17797/*"btn_txt_status_on"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17796/*"btn_txt_status_off"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17808/*"btn_txt_voice_on"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17777/*"btn_txt_profile_on"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_17807/*"btn_txt_voice_off"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_17750/*"btn_txt_detail_on"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17776/*"btn_txt_profile_off"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_17731/*"btn_txt_battlecharacter_off"*/, v51, v52);
    byte_4B1222C = 1;
  }
  voice = 0LL;
  illust = 0LL;
  isPlayVoice = 0;
  if ( kind == 2 )
  {
    if ( ServantStatusDialog__StartBattleLoad(this, *(const MethodInfo **)&kind) )
      return;
  }
  else if ( kind == 3 )
  {
    if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
      return;
    statusTabBase = (__int64)this->fields.statusTabBase;
    this->fields.tabKind = 3;
    if ( !statusTabBase )
      goto LABEL_287;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
    statusTabBase = (__int64)this->fields.profileTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
    statusTabBase = (__int64)this->fields.battleTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
    statusTabBase = (__int64)this->fields.voiceTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    v54 = 1;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
    goto LABEL_37;
  }
  if ( this->fields.tabKind == 3 )
    ServantStatusDialog__StopVoice(this, *(const MethodInfo **)&kind);
  this->fields.tabKind = kind;
  switch ( kind )
  {
    case 2:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
      {
        statusTabBase = (__int64)this->fields.battleActor;
        if ( !statusTabBase )
          goto LABEL_287;
        BattleFBXComponent__playAnimation((BattleFBXComponent_o *)statusTabBase, this->fields.defaultAnimationName, 0LL);
      }
      break;
    case 1:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v55 = 1;
      goto LABEL_33;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v55 = 0;
LABEL_33:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v55, 0LL);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      break;
  }
  v54 = 0;
LABEL_37:
  switch ( this->fields.kind )
  {
    case 4:
    case 5:
    case 7:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( statusTabBase )
      {
        statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
        if ( statusTabBase )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
          statusTabBase = (__int64)this->fields.statusButton;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
              statusTabBase,
              1LL,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
            statusTabBase = (__int64)this->fields.statusButton;
            if ( statusTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0LL);
              statusTabBase = (__int64)this->fields.statusTitleSprite;
              if ( statusTabBase )
              {
                v72 = (System_String_o **)&StringLiteral_17797/*"btn_txt_status_on"*/;
                if ( kind )
                  v72 = (System_String_o **)&StringLiteral_17796/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v72, 0LL);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v73 = (System_String_o **)(kind ? &StringLiteral_17649/*"btn_bg_12"*/ : &StringLiteral_17651/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v73, 0LL);
                    statusTabBase = (__int64)this->fields.statusButton;
                    if ( statusTabBase )
                    {
                      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 536LL))(
                                        statusTabBase,
                                        0LL,
                                        this->fields.isInitTab,
                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                      statusButton = this->fields.statusButton;
                      if ( statusButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.statusButton,
                                    0LL);
                        UICommonButton__SetColliderEnable(statusButton, enabled, this->fields.isInitTab, 0LL);
                        statusTabBase = (__int64)this->fields.profileButton;
                        if ( statusTabBase )
                        {
                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)statusTabBase,
                                                     0LL);
                          if ( statusTabBase )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
                            statusTabBase = (__int64)this->fields.profileButton;
                            if ( statusTabBase )
                            {
                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                statusTabBase,
                                1LL,
                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                              statusTabBase = (__int64)this->fields.profileButton;
                              if ( statusTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
                                statusTabBase = (__int64)this->fields.profileTitleSprite;
                                if ( statusTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)statusTabBase,
                                    (System_String_o *)StringLiteral_17776/*"btn_txt_profile_off"*/,
                                    0LL);
                                  statusTabBase = (__int64)this->fields.profileTitleSprite;
                                  if ( statusTabBase )
                                  {
                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                                      statusTabBase,
                                      *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                    statusTabBase = (__int64)this->fields.profileSprite;
                                    if ( statusTabBase )
                                    {
                                      UISprite__set_spriteName(
                                        (UISprite_o *)statusTabBase,
                                        (System_String_o *)StringLiteral_17649/*"btn_bg_12"*/,
                                        0LL);
                                      statusTabBase = (__int64)this->fields.profileButton;
                                      if ( statusTabBase )
                                      {
                                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                                  + 536LL))(
                                          statusTabBase,
                                          3LL,
                                          1LL,
                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                        statusTabBase = (__int64)this->fields.battleButton;
                                        if ( statusTabBase )
                                        {
                                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)statusTabBase,
                                                                     0LL);
                                          if ( statusTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)statusTabBase,
                                              1,
                                              0LL);
                                            statusTabBase = (__int64)this->fields.battleButton;
                                            if ( statusTabBase )
                                            {
                                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 392LL))(
                                                statusTabBase,
                                                1LL,
                                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                              statusTabBase = (__int64)this->fields.battleButton;
                                              if ( statusTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)statusTabBase,
                                                  kind != 2,
                                                  0LL);
                                                statusTabBase = (__int64)this->fields.battleTitleSprite;
                                                if ( statusTabBase )
                                                {
                                                  v76 = (System_String_o **)&StringLiteral_17732/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v76 = (System_String_o **)&StringLiteral_17731/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v76, 0LL);
                                                  statusTabBase = (__int64)this->fields.battleTitleSprite;
                                                  if ( statusTabBase )
                                                  {
                                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                            + 840LL))(
                                                      statusTabBase,
                                                      *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                                    statusTabBase = (__int64)this->fields.battleSprite;
                                                    if ( statusTabBase )
                                                    {
                                                      v77 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17651/*"btn_bg_19"*/
                                                                               : &StringLiteral_17649/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v77, 0LL);
                                                      statusTabBase = (__int64)this->fields.battleButton;
                                                      if ( statusTabBase )
                                                      {
                                                        statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                                                                          statusTabBase,
                                                                          0LL,
                                                                          this->fields.isInitTab,
                                                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                                        battleButton = this->fields.battleButton;
                                                        if ( battleButton )
                                                        {
                                                          v79 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v79,
                                                            this->fields.isInitTab,
                                                            0LL);
                                                          statusTabBase = (__int64)this->fields.voiceButton;
                                                          if ( statusTabBase )
                                                          {
                                                            statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)statusTabBase,
                                                                                       0LL);
                                                            if ( statusTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)statusTabBase,
                                                                1,
                                                                0LL);
                                                              statusTabBase = (__int64)this->fields.voiceButton;
                                                              if ( statusTabBase )
                                                              {
                                                                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                                                  statusTabBase,
                                                                  1LL,
                                                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                                                statusTabBase = (__int64)this->fields.voiceButton;
                                                                if ( statusTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)statusTabBase,
                                                                    0,
                                                                    0LL);
                                                                  statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                  if ( statusTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)statusTabBase,
                                                                      (System_String_o *)StringLiteral_17807/*"btn_txt_voice_off"*/,
                                                                      0LL);
                                                                    statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                    if ( statusTabBase )
                                                                    {
                                                                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                                                                        statusTabBase,
                                                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                                                      statusTabBase = (__int64)this->fields.voiceSprite;
                                                                      if ( statusTabBase )
                                                                        goto LABEL_132;
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
      goto LABEL_287;
    case 0xA:
    case 0x1E:
    case 0x24:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v82 = &StringLiteral_17750/*"btn_txt_detail_on"*/;
      goto LABEL_209;
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
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v58 = (System_String_o **)&StringLiteral_17797/*"btn_txt_status_on"*/;
      if ( kind )
        v58 = (System_String_o **)&StringLiteral_17796/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v58, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v59 = (System_String_o **)(kind ? &StringLiteral_17649/*"btn_bg_12"*/ : &StringLiteral_17651/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v59, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v60 = this->fields.statusButton;
      if ( !v60 )
        goto LABEL_287;
      v61 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v60, v61, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v62 = &StringLiteral_17750/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v62 = &StringLiteral_17749/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v62, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v63 = (System_String_o **)(kind == 1 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v63, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_287;
      v65 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      isInitTab = this->fields.isInitTab;
      v67 = v65;
      goto LABEL_214;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v68 = (System_String_o **)&StringLiteral_17797/*"btn_txt_status_on"*/;
      if ( kind )
        v68 = (System_String_o **)&StringLiteral_17796/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v68, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v69 = &StringLiteral_17651/*"btn_bg_19"*/;
      if ( kind )
        v69 = &StringLiteral_17649/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v69, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v70 = this->fields.statusButton;
      if ( !v70 )
        goto LABEL_287;
      v71 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v70, v71, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17749/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17649/*"btn_bg_12"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
        statusTabBase,
        3LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      goto LABEL_215;
    case 0x1C:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v82 = &StringLiteral_17776/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v82, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17651/*"btn_bg_19"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        1LL,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_287;
      v67 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      isInitTab = 1;
LABEL_214:
      UICommonButton__SetColliderEnable(profileButton, v67, isInitTab, 0LL);
LABEL_215:
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0LL);
      goto LABEL_220;
    default:
      statusTabBase = (__int64)this->fields.mainInfo;
      if ( !statusTabBase )
        goto LABEL_287;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)statusTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v83 = (System_String_o **)&StringLiteral_17797/*"btn_txt_status_on"*/;
      if ( kind )
        v83 = (System_String_o **)&StringLiteral_17796/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v83, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v84 = (System_String_o **)(kind ? &StringLiteral_17649/*"btn_bg_12"*/ : &StringLiteral_17651/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v84, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v85 = this->fields.statusButton;
      if ( !v85 )
        goto LABEL_287;
      v86 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v85, v86, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v87 = (System_String_o **)&StringLiteral_17777/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v87 = (System_String_o **)&StringLiteral_17776/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v87, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v88 = (System_String_o **)(kind == 1 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v88, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v89 = this->fields.profileButton;
      if ( !v89 )
        goto LABEL_287;
      v90 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v89, v90, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 2, 0LL);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v91 = (System_String_o **)&StringLiteral_17732/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v91 = (System_String_o **)&StringLiteral_17731/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v91, 0LL);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v92 = (System_String_o **)(kind == 2 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v92, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v93 = this->fields.battleButton;
      if ( !v93 )
        goto LABEL_287;
      v94 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v93, v94, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      v95 = isPlayVoice;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      if ( v95 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v54 != 1, 0LL);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v96 = (System_String_o **)&StringLiteral_17808/*"btn_txt_voice_on"*/;
          if ( !v54 )
            v96 = (System_String_o **)&StringLiteral_17807/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v96, 0LL);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v97 = (System_String_o **)(v54 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v97, 0LL);
              statusTabBase = (__int64)this->fields.voiceButton;
              if ( statusTabBase )
              {
                statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                         + 536LL))(
                                  statusTabBase,
                                  0LL,
                                  this->fields.isInitTab,
                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                voiceButton = this->fields.voiceButton;
                if ( voiceButton )
                {
                  v99 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
                  UICommonButton__SetColliderEnable(voiceButton, v99, this->fields.isInitTab, 0LL);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_287:
        sub_1BCAA3C(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17807/*"btn_txt_voice_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.voiceSprite;
      if ( !statusTabBase )
        goto LABEL_287;
LABEL_132:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17649/*"btn_bg_12"*/, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        3LL,
                        1LL,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
LABEL_220:
      tabInitList = this->fields.tabInitList;
      if ( !tabInitList )
        goto LABEL_287;
      if ( tabInitList->max_length <= kind )
        sub_1BCAA44(statusTabBase, *(_QWORD *)&kind);
      v101 = (char *)tabInitList + kind;
      v103 = (unsigned __int8)v101[32];
      v102 = v101 + 32;
      if ( v103 )
      {
        switch ( kind )
        {
          case 0:
            goto LABEL_231;
          case 1:
            goto LABEL_234;
          case 2:
            goto LABEL_238;
          case 3:
            goto LABEL_262;
          default:
            goto LABEL_278;
        }
      }
      *v102 = 1;
      switch ( kind )
      {
        case 0:
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            0LL);
          if ( this->fields.isInit )
            goto LABEL_231;
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v108 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                  v105,
                                                                  v106,
                                                                  v107);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v108,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !statusTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v108, 0LL);
LABEL_231:
          v109 = this->fields.statusTabListViewManager;
          v110 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&kind,
                                                                  v80,
                                                                  v81);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v110,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v109 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(v109, 1, v110, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v80);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v112 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                            ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                            *(_QWORD *)&kind,
                                                                            v80,
                                                                            v81);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v112,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v112, 0LL);
          break;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            v80);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v114 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                        ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                        *(_QWORD *)&kind,
                                                                        v80,
                                                                        v81);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v114,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            v115);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          battleTabListViewManager->fields.callbackFunc = v114;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&battleTabListViewManager->fields.callbackFunc,
            (int64_t)v114,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121);
          ServantStatusBattleListViewManager__SetMode_32899084(battleTabListViewManager, 1, v122, v123);
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
          mainInfo = this->fields.mainInfo;
          if ( !mainInfo || !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !mainInfo->fields._IsTransformed_k__BackingField,
            0LL);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind);
          if ( !byte_4B12177 )
          {
            sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind, v125);
            byte_4B12177 = 1;
          }
          statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind);
            statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(statusTabBase + 184) + 8LL) )
            goto LABEL_252;
          v126 = this->fields.mainInfo;
          if ( !v126 )
            goto LABEL_287;
          if ( !v126->fields.isConvertOverwriteImage )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, *(const MethodInfo **)&kind);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v125);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
          v127 = this->fields.mainInfo;
          if ( !v127 )
            goto LABEL_287;
          if ( !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v127->fields._IsTransformed_k__BackingField,
            0LL);
          statusTabBase = (__int64)this->fields.mainInfo;
          if ( !statusTabBase )
            goto LABEL_287;
          battleTransformNameLabel = this->fields.battleTransformNameLabel;
          statusTabBase = (__int64)ServantStatusListViewItem__GetTransformName(
                                     (ServantStatusListViewItem_o *)statusTabBase,
                                     0LL);
          if ( !battleTransformNameLabel )
            goto LABEL_287;
          UILabel__set_text(battleTransformNameLabel, (System_String_o *)statusTabBase, 0LL);
          break;
        case 3:
          v129 = this->fields.mainInfo;
          if ( !v129 )
            goto LABEL_287;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0LL);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_287;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v129,
            (System_Int32_array *)statusTabBase,
            0LL);
LABEL_262:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind);
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v133 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, *(_QWORD *)&kind);
              v133 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v133->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind);
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v134 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, *(_QWORD *)&kind);
                  v134 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v134->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v136 = this->fields.voiceTabListViewManager;
          v137 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                       *(_QWORD *)&kind,
                                                                       v80,
                                                                       v81);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v137,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v136 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v136, 1, v137, 0LL);
          break;
        default:
          break;
      }
LABEL_278:
      if ( !(v54 & 1 | !this->fields.isBgmLow) )
      {
        this->fields.isBgmLow = 0;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind);
        OptionManager__Recover(0LL);
      }
      this->fields.isInitTab = 1;
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetVisibleHighPriorityObject(
        ServantStatusDialog_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *battleChrCamera; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_4B12231 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isVisible, method);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v5, v6);
    byte_4B12231 = 1;
  }
  if ( this->fields.tabKind == 2 )
  {
    battleChrCamera = (UnityEngine_Component_o *)this->fields.battleChrCamera;
    if ( !battleChrCamera )
      goto LABEL_13;
    battleChrCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(battleChrCamera, 0LL);
    if ( !battleChrCamera )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleChrCamera, isVisible, 0LL);
    if ( isVisible )
    {
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
      {
        battleChrCamera = (UnityEngine_Component_o *)this->fields.battleActor;
        if ( battleChrCamera )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)battleChrCamera,
            (System_String_o *)StringLiteral_24854/*"wait"*/,
            0LL);
          return;
        }
LABEL_13:
        sub_1BCAA3C(battleChrCamera, isVisible);
      }
    }
  }
}


void __fastcall ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_4B1220A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&StringLiteral_12043/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v5, v6);
    byte_4B1220A = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields.userSvtEntity || item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
    if ( this )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_15;
  }
  this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
  if ( !this )
    goto LABEL_15;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  battleMaskInfoLabel = v4->fields.battleMaskInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12043/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t mainInfo; // x0
  int32_t v19; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  __int64 v21; // x1
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  int64_t v24; // x20
  __int64 v25; // x2
  struct ServantStatusListViewItem_o *v26; // x8
  bool v27; // w22
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x22
  const MethodInfo *v36; // x2
  System_String_o *battleLoadAsset; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  AssetLoader_LoadEndDataHandler_o *v41; // x21
  __int64 v42; // x1
  const MethodInfo *v43; // x1

  if ( (byte_4B12216 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndLoadBattle__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B12216 = 1;
  }
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_34;
  v19 = mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)mainInfo,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !mainInfo )
    goto LABEL_34;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)mainInfo,
                                 v19,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v21);
  mainInfo = (int64_t)ServantAssetLoadManager__getActorFolderNameFromDisp(v19, ServantImageLimitSealAfter, 0LL);
  if ( !mainInfo )
    goto LABEL_34;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v24 = mainInfo;
  if ( System_String__Equals_62409536((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_32959856(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    if ( !byte_4B12177 )
    {
      sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v25);
      byte_4B12177 = 1;
    }
    mainInfo = (int64_t)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
      mainInfo = (int64_t)RandomLimitCountManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(mainInfo + 184) + 8LL) )
      return 0;
    v26 = this->fields.mainInfo;
    if ( v26 )
    {
      if ( !v26->fields.isConvertOverwriteImage )
        goto LABEL_22;
      return 0;
    }
LABEL_34:
    sub_1BCAA3C(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v35 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
    AssetManager__releaseAssetStorage(v35, 0LL);
  }
  *p_battleLoadAsset = (System_String_o *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, v24, v29, v30, v31, v32, v33, v34);
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v36);
  battleLoadAsset = this->fields.battleLoadAsset;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v38, v39, v40);
  AssetLoader_LoadEndDataHandler___ctor(v41, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v42);
  v27 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v41, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v43);
    return 1;
  }
  return v27;
}


void __fastcall ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
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
  __int64 v16; // x20
  int64_t mainInfo; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x19
  __int64 v26; // x1
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  int64_t v29; // x22
  __int64 v30; // x1
  System_String_o *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B12210 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, onComplete, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__, v12, v13);
    sub_1BCA7E0(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo, v14, v15);
    byte_4B12210 = 1;
  }
  v16 = sub_1BCAA2C(ServantStatusDialog___c__DisplayClass138_0_TypeInfo, onComplete, method, v3);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 16) = onComplete;
  v25 = v16 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)onComplete, v19, v20, v21, v22, v23, v24);
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v26);
  mainInfo = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_20;
  p_cardLoadAsset = &this->fields.cardLoadAsset;
  v29 = mainInfo;
  mainInfo = System_String__Equals_62409536((System_String_o *)mainInfo, *p_cardLoadAsset, 0LL);
  if ( (mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v25 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v25 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v25 + 40LL));
      return;
    }
LABEL_20:
    sub_1BCAA3C(mainInfo, v18);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v31 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
    AssetManager__releaseAssetStorage(v31, 0LL);
  }
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = (System_String_o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)p_cardLoadAsset, v29, v32, v33, v34, v35, v36, v37);
  v38 = *p_cardLoadAsset;
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v16,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  if ( !AssetManager__loadAssetStorage(v38, v42, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_cardLoadAsset, 0LL, v44, v45, v46, v47, v48, v49);
    goto LABEL_18;
  }
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v13; // w20
  __int64 v14; // x1
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o *statusLoadAsset; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  AssetData_o *v35; // x1
  const MethodInfo *v36; // x2

  if ( (byte_4B1220E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndStatusLoad__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B1220E = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_12;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_12;
  v13 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v14);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v13, LimitCount, 0LL);
  this->fields.statusLoadAsset = StatusImageFolderName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.statusLoadAsset,
    (int64_t)StatusImageFolderName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1BCAA3C(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v27, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusLoadAsset, 0LL, v29, v30, v31, v32, v33, v34);
    ServantStatusDialog__EndStatusLoad(this, v35, v36);
  }
}


void __fastcall ServantStatusDialog__StartTransformedStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
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
  __int64 v16; // x20
  int64_t StatusImageFolderName; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  int64_t v29; // x22
  __int64 v30; // x1
  System_String_o *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B12212 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, onComplete, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__, v12, v13);
    sub_1BCA7E0(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo, v14, v15);
    byte_4B12212 = 1;
  }
  v16 = sub_1BCAA2C(ServantStatusDialog___c__DisplayClass140_0_TypeInfo, onComplete, method, v3);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_21;
  *(_QWORD *)(v16 + 16) = onComplete;
  v25 = v16 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)onComplete, v19, v20, v21, v22, v23, v24);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  if ( !mainInfo->fields._IsTransformed_k__BackingField )
    goto LABEL_19;
  TransformedSvtId_k__BackingField = mainInfo->fields._TransformedSvtId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v18);
  StatusImageFolderName = (int64_t)ServantAssetLoadManager__getStatusImageFolderName(
                                     TransformedSvtId_k__BackingField,
                                     0,
                                     0LL);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  p_transformedStatusLoadAsset = &this->fields.transformedStatusLoadAsset;
  v29 = StatusImageFolderName;
  StatusImageFolderName = System_String__Equals_62409536(
                            (System_String_o *)StatusImageFolderName,
                            *p_transformedStatusLoadAsset,
                            0LL);
  if ( (StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v25 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v25 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v25 + 40LL));
      return;
    }
LABEL_21:
    sub_1BCAA3C(StatusImageFolderName, v18);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v31 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
    AssetManager__releaseAssetStorage(v31, 0LL);
  }
  StatusImageFolderName = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = (System_String_o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)p_transformedStatusLoadAsset, v29, v32, v33, v34, v35, v36, v37);
  v38 = *p_transformedStatusLoadAsset;
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v16,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  if ( !AssetManager__loadAssetStorage(v38, v42, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_transformedStatusLoadAsset, 0LL, v44, v45, v46, v47, v48, v49);
    goto LABEL_19;
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  NetworkManager_c *v38; // x0
  bool v39; // w19
  int64_t mainInfo; // x0
  int32_t v41; // w21
  int64_t v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x9
  int32_t v45; // w21
  BalanceConfig_c *v46; // x8
  ServantLimitAddMaster_o *v47; // x22
  struct ServantStatusListViewItem_o *v48; // x9
  int32_t v49; // w4
  const MethodInfo *v50; // x5
  struct PartyListViewItem_o *v51; // x8
  int64_t v52; // x22
  unsigned __int64 v53; // x20
  struct PartyOrganizationListViewItem_o **v54; // x29
  System_Collections_Generic_List_object__o *v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int64_t v65; // x1
  Il2CppClass **v66; // x0
  int32_t v67; // w4
  const MethodInfo *v68; // x5
  System_Collections_Generic_List_object__o *v69; // x23
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  int64_t v79; // x1
  Il2CppClass **v80; // x0
  int32_t v81; // w4
  const MethodInfo *v82; // x5
  System_Collections_Generic_List_object__o *v83; // x23
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int64_t v93; // x1
  Il2CppClass **v94; // x0
  int32_t v95; // w4
  const MethodInfo *v96; // x5
  BalanceConfig_c *v97; // x8
  int v98; // w23
  System_Collections_Generic_List_object__o *v99; // x23
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  int64_t v109; // x1
  Il2CppClass **v110; // x0
  int32_t v111; // w4
  const MethodInfo *v112; // x5
  BalanceConfig_c *v113; // x8
  int v114; // w23
  System_Collections_Generic_List_object__o *v115; // x23
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  int64_t v125; // x1
  Il2CppClass **v126; // x0
  int32_t v127; // w4
  const MethodInfo *v128; // x5
  System_Collections_Generic_List_object__o *v129; // x23
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  int64_t v139; // x1
  Il2CppClass **v140; // x0
  int32_t v141; // w4
  const MethodInfo *v142; // x5
  System_Collections_Generic_List_object__o *v143; // x23
  int32_t ServantIdMashu3; // w2
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  int64_t v154; // x1
  Il2CppClass **v155; // x0
  System_Collections_Generic_List_object__o *v156; // x23
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  int64_t v166; // x1
  Il2CppClass **v167; // x0
  int32_t v168; // w4
  const MethodInfo *v169; // x5
  System_Collections_Generic_List_object__o *v170; // x23
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  int64_t v180; // x1
  Il2CppClass **v181; // x0
  __int64 v182; // x1
  __int64 v183; // x1
  int64_t UserId; // x25
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w24
  System_Collections_Generic_List_object__o *v188; // x23
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  int64_t v198; // x1
  Il2CppClass **v199; // x0
  int32_t v200; // w4
  const MethodInfo *v201; // x5
  System_Collections_Generic_List_object__o *v202; // x23
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  int64_t v212; // x1
  Il2CppClass **v213; // x0
  ServantVoiceRelationEntity_array *v214; // x20
  signed int max_length; // w8
  unsigned int v216; // w24
  ServantVoiceRelationEntity_o *v217; // x25
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x21
  __int64 v219; // x22
  __int64 v220; // x23
  ServantStatusDialog_o *v221; // x0
  int32_t v222; // w4
  const MethodInfo *v223; // x5
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  struct System_Object_array *items; // x8
  _QWORD *v231; // x9
  __int64 size; // x10
  int64_t v233; // x1
  Il2CppClass **v234; // x0
  System_Collections_Generic_List_object__o *v235; // x21
  ServantStatusDialog_o *v236; // x0
  int32_t v237; // w4
  const MethodInfo *v238; // x5
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  struct System_Object_array *v245; // x8
  _QWORD *v246; // x9
  __int64 v247; // x10
  int64_t v248; // x1
  Il2CppClass **v249; // x0
  System_Collections_Generic_List_object__o *v250; // x21
  ServantStatusDialog_o *v251; // x0
  int32_t v252; // w4
  const MethodInfo *v253; // x5
  int64_t v254; // x2
  int32_t v255; // w3
  System_String_o *v256; // x4
  BattleSetupInfo_o *v257; // x5
  FollowerInfo_o *v258; // x6
  PartyListViewItem_o *v259; // x7
  struct System_Object_array *v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  int64_t v263; // x1
  Il2CppClass **v264; // x0
  struct System_Collections_Generic_List_string__o *v265; // x8
  const MethodInfo *v266; // x2
  __int64 v267; // x2
  NetworkManager_c *v268; // x0
  Il2CppObject *Item; // x0
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  System_String_o *loadVoiceData; // x20
  __int64 v277; // x1
  __int64 v278; // x2
  __int64 v279; // x3
  System_Action_o *v280; // x21
  __int64 v281; // x1
  int64_t v283; // [xsp+8h] [xbp-78h]
  unsigned __int64 v284; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v286; // 0:x0.16

  if ( (byte_4B12222 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndLoadVoice__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&SoundManager_TypeInfo, v36, v37);
    byte_4B12222 = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B1194F = 1;
  }
  v38 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v38 = NetworkManager_TypeInfo;
  }
  if ( v38->static_fields->isRebootBlock )
    return 1;
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v41 = mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         mainInfo,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)mainInfo,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (int64_t)ServantChangeMaster__GetEnableSvtVoiceList((ServantChangeMaster_o *)mainInfo, v41, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v42 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v41,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v42 )
    goto LABEL_162;
  v43 = *(_QWORD *)(v42 + 24);
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    v283 = v42;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)v43 )
        goto LABEL_163;
      v45 = *(_DWORD *)(v42 + 4 * v44 + 32);
      v284 = v44;
      mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)mainInfo,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v46 = BalanceConfig_TypeInfo;
      v47 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        v46 = BalanceConfig_TypeInfo;
      }
      v48 = this->fields.mainInfo;
      if ( !v48 )
        goto LABEL_162;
      if ( !v47 )
        goto LABEL_162;
      mainInfo = (int64_t)ServantLimitAddMaster__getVoiceLimitCountList(
                            v47,
                            v45,
                            v46->static_fields->ServantLimitMax,
                            v48->fields.costumeIds,
                            0LL);
      if ( !mainInfo )
        goto LABEL_162;
      v51 = *(struct PartyListViewItem_o **)(mainInfo + 24);
      v52 = mainInfo;
      if ( (int)v51 >= 1 )
        break;
LABEL_119:
      mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)mainInfo,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_162;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v45, 0LL);
      v214 = relationList;
      if ( !relationList )
        goto LABEL_162;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v216 = 0;
        while ( v216 < max_length )
        {
          v217 = v214->m_Items[v216];
          if ( !v217 )
            goto LABEL_162;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v220 = *(_QWORD *)&v217->fields.relationSvtId.fields.currentCryptoKey;
          v219 = *(_QWORD *)&v217->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v286.fields.currentCryptoKey = v220;
          *(_QWORD *)&v286.fields.fakeValue = v219;
          v221 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v286, 0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v221, 0, (int32_t)v221, 0, v222, v223);
          if ( !requestVoiceDataList )
            goto LABEL_162;
          items = requestVoiceDataList->fields._items;
          v231 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_162;
          size = requestVoiceDataList->fields._size;
          v233 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
          }
          else
          {
            v234 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v234[4] = (Il2CppClass *)v233;
            sub_1BCA784((PartyOrganizationUtility_o *)(v234 + 4), v233, v224, v225, v226, v227, v228, v229);
          }
          v235 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v236 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                            v217->fields.relationSvtId,
                                            0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v236, 2, (int32_t)v236, 0, v237, v238);
          if ( !v235 )
            goto LABEL_162;
          v245 = v235->fields._items;
          v246 = Method_System_Collections_Generic_List_string__Add__;
          ++v235->fields._version;
          if ( !v245 )
            goto LABEL_162;
          v247 = v235->fields._size;
          v248 = mainInfo;
          if ( (unsigned int)v247 >= v245->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v235,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v246[4] + 192LL) + 112LL));
          }
          else
          {
            v249 = &v245->obj.klass + v247;
            v235->fields._size = v247 + 1;
            v249[4] = (Il2CppClass *)v248;
            sub_1BCA784((PartyOrganizationUtility_o *)(v249 + 4), v248, v239, v240, v241, v242, v243, v244);
          }
          v250 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v251 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                            v217->fields.relationSvtId,
                                            0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v251, 1, (int32_t)v251, 0, v252, v253);
          if ( !v250 )
            goto LABEL_162;
          v260 = v250->fields._items;
          v261 = Method_System_Collections_Generic_List_string__Add__;
          ++v250->fields._version;
          if ( !v260 )
            goto LABEL_162;
          v262 = v250->fields._size;
          v263 = mainInfo;
          if ( (unsigned int)v262 >= v260->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v250,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
          }
          else
          {
            v264 = &v260->obj.klass + v262;
            v250->fields._size = v262 + 1;
            v264[4] = (Il2CppClass *)v263;
            sub_1BCA784((PartyOrganizationUtility_o *)(v264 + 4), v263, v254, v255, v256, v257, v258, v259);
          }
          max_length = v214->max_length;
          if ( (int)++v216 >= max_length )
            goto LABEL_144;
        }
LABEL_163:
        sub_1BCAA44(mainInfo, method);
      }
LABEL_144:
      v42 = v283;
      LODWORD(v43) = *(_DWORD *)(v283 + 24);
      v44 = v284 + 1;
      if ( (__int64)(v284 + 1) >= (int)v43 )
        goto LABEL_145;
    }
    v53 = 0LL;
    v54 = (struct PartyOrganizationListViewItem_o **)(mainInfo + 32);
    while ( 1 )
    {
      if ( v53 >= (unsigned int)v51 )
        goto LABEL_163;
      v55 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            0,
                            v45,
                            *((_DWORD *)v54 + v53),
                            v49,
                            v50);
      if ( !v55 )
        goto LABEL_162;
      v62 = v55->fields._items;
      v63 = Method_System_Collections_Generic_List_string__Add__;
      ++v55->fields._version;
      if ( !v62 )
        goto LABEL_162;
      v64 = v55->fields._size;
      v65 = mainInfo;
      if ( (unsigned int)v64 >= v62->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &v62->obj.klass + v64;
        v55->fields._size = v64 + 1;
        v66[4] = (Il2CppClass *)v65;
        sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v65, v56, v57, v58, v59, v60, v61);
      }
      if ( v53 >= *(unsigned int *)(v52 + 24) )
        goto LABEL_163;
      v69 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            2,
                            v45,
                            *((_DWORD *)v54 + v53),
                            v67,
                            v68);
      if ( !v69 )
        goto LABEL_162;
      v76 = v69->fields._items;
      v77 = Method_System_Collections_Generic_List_string__Add__;
      ++v69->fields._version;
      if ( !v76 )
        goto LABEL_162;
      v78 = v69->fields._size;
      v79 = mainInfo;
      if ( (unsigned int)v78 >= v76->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v69,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &v76->obj.klass + v78;
        v69->fields._size = v78 + 1;
        v80[4] = (Il2CppClass *)v79;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 4), v79, v70, v71, v72, v73, v74, v75);
      }
      if ( v53 >= *(unsigned int *)(v52 + 24) )
        goto LABEL_163;
      v83 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            1,
                            v45,
                            *((_DWORD *)v54 + v53),
                            v81,
                            v82);
      if ( !v83 )
        goto LABEL_162;
      v90 = v83->fields._items;
      v91 = Method_System_Collections_Generic_List_string__Add__;
      ++v83->fields._version;
      if ( !v90 )
        goto LABEL_162;
      v92 = v83->fields._size;
      v93 = mainInfo;
      if ( (unsigned int)v92 >= v90->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v83,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = &v90->obj.klass + v92;
        v83->fields._size = v92 + 1;
        v94[4] = (Il2CppClass *)v93;
        sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 4), v93, v84, v85, v86, v87, v88, v89);
      }
      mainInfo = (int64_t)this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)mainInfo, 0LL);
      v97 = BalanceConfig_TypeInfo;
      v98 = mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        v97 = BalanceConfig_TypeInfo;
      }
      if ( v98 == v97->static_fields->ServantIdJekyll )
        break;
      mainInfo = (int64_t)this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)mainInfo, 0LL);
      v113 = BalanceConfig_TypeInfo;
      v114 = mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        v113 = BalanceConfig_TypeInfo;
      }
      if ( v114 == v113->static_fields->ServantIdMashu1 )
      {
        v115 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v113->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v113, method);
        if ( v53 >= *(unsigned int *)(v52 + 24) )
          goto LABEL_163;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              0,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v54 + v53),
                              v49,
                              v50);
        if ( !v115 )
          goto LABEL_162;
        v122 = v115->fields._items;
        v123 = Method_System_Collections_Generic_List_string__Add__;
        ++v115->fields._version;
        if ( !v122 )
          goto LABEL_162;
        v124 = v115->fields._size;
        v125 = mainInfo;
        if ( (unsigned int)v124 >= v122->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v115,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
        }
        else
        {
          v126 = &v122->obj.klass + v124;
          v115->fields._size = v124 + 1;
          v126[4] = (Il2CppClass *)v125;
          sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 4), v125, v116, v117, v118, v119, v120, v121);
        }
        if ( v53 >= *(unsigned int *)(v52 + 24) )
          goto LABEL_163;
        v156 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              2,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v54 + v53),
                              v127,
                              v128);
        if ( !v156 )
          goto LABEL_162;
        v163 = v156->fields._items;
        v164 = Method_System_Collections_Generic_List_string__Add__;
        ++v156->fields._version;
        if ( !v163 )
          goto LABEL_162;
        v165 = v156->fields._size;
        v166 = mainInfo;
        if ( (unsigned int)v165 >= v163->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v156,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
        }
        else
        {
          v167 = &v163->obj.klass + v165;
          v156->fields._size = v165 + 1;
          v167[4] = (Il2CppClass *)v166;
          sub_1BCA784((PartyOrganizationUtility_o *)(v167 + 4), v166, v157, v158, v159, v160, v161, v162);
        }
        if ( v53 >= *(unsigned int *)(v52 + 24) )
          goto LABEL_163;
        v170 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              1,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v54 + v53),
                              v168,
                              v169);
        if ( !v170 )
          goto LABEL_162;
        v177 = v170->fields._items;
        v178 = Method_System_Collections_Generic_List_string__Add__;
        ++v170->fields._version;
        if ( !v177 )
          goto LABEL_162;
        v179 = v170->fields._size;
        v180 = mainInfo;
        if ( (unsigned int)v179 >= v177->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v170,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
        }
        else
        {
          v181 = &v177->obj.klass + v179;
          v170->fields._size = v179 + 1;
          v181[4] = (Il2CppClass *)v180;
          sub_1BCA784((PartyOrganizationUtility_o *)(v181 + 4), v180, v171, v172, v173, v174, v175, v176);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v182);
        UserId = NetworkManager__get_UserId(0LL);
        static_fields = BalanceConfig_TypeInfo->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v183);
        mainInfo = CondType__IsQuestPhaseClear(UserId, MashuTdGradeUpQuestId, MashuTdGradeUpQuestPhase, -1, 0, 0LL);
        if ( (mainInfo & 1) != 0 )
        {
          mainInfo = (int64_t)BalanceConfig_TypeInfo;
          v188 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          if ( v53 >= *(unsigned int *)(v52 + 24) )
            goto LABEL_163;
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                                (ServantStatusDialog_o *)mainInfo,
                                0,
                                BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                *((_DWORD *)v54 + v53),
                                v49,
                                v50);
          if ( !v188 )
            goto LABEL_162;
          v195 = v188->fields._items;
          v196 = Method_System_Collections_Generic_List_string__Add__;
          ++v188->fields._version;
          if ( !v195 )
            goto LABEL_162;
          v197 = v188->fields._size;
          v198 = mainInfo;
          if ( (unsigned int)v197 >= v195->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v188,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
          }
          else
          {
            v199 = &v195->obj.klass + v197;
            v188->fields._size = v197 + 1;
            v199[4] = (Il2CppClass *)v198;
            sub_1BCA784((PartyOrganizationUtility_o *)(v199 + 4), v198, v189, v190, v191, v192, v193, v194);
          }
          if ( v53 >= *(unsigned int *)(v52 + 24) )
            goto LABEL_163;
          v202 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                                (ServantStatusDialog_o *)mainInfo,
                                2,
                                BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                *((_DWORD *)v54 + v53),
                                v200,
                                v201);
          if ( !v202 )
            goto LABEL_162;
          v209 = v202->fields._items;
          v210 = Method_System_Collections_Generic_List_string__Add__;
          ++v202->fields._version;
          if ( !v209 )
            goto LABEL_162;
          v211 = v202->fields._size;
          v212 = mainInfo;
          if ( (unsigned int)v211 >= v209->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v202,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
          }
          else
          {
            v213 = &v209->obj.klass + v211;
            v202->fields._size = v211 + 1;
            v213[4] = (Il2CppClass *)v212;
            sub_1BCA784((PartyOrganizationUtility_o *)(v213 + 4), v212, v203, v204, v205, v206, v207, v208);
          }
          if ( v53 >= *(unsigned int *)(v52 + 24) )
            goto LABEL_163;
          v143 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_108:
      LODWORD(v51) = *(_DWORD *)(v52 + 24);
      if ( (__int64)++v53 >= (int)v51 )
        goto LABEL_119;
    }
    v99 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v97->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v97, method);
    if ( v53 >= *(unsigned int *)(v52 + 24) )
      goto LABEL_163;
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          0,
                          BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                          *((_DWORD *)v54 + v53),
                          v95,
                          v96);
    if ( !v99 )
      goto LABEL_162;
    v106 = v99->fields._items;
    v107 = Method_System_Collections_Generic_List_string__Add__;
    ++v99->fields._version;
    if ( !v106 )
      goto LABEL_162;
    v108 = v99->fields._size;
    v109 = mainInfo;
    if ( (unsigned int)v108 >= v106->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v99,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v106->obj.klass + v108;
      v99->fields._size = v108 + 1;
      v110[4] = (Il2CppClass *)v109;
      sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 4), v109, v100, v101, v102, v103, v104, v105);
    }
    if ( v53 >= *(unsigned int *)(v52 + 24) )
      goto LABEL_163;
    v129 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          2,
                          BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                          *((_DWORD *)v54 + v53),
                          v111,
                          v112);
    if ( !v129 )
      goto LABEL_162;
    v136 = v129->fields._items;
    v137 = Method_System_Collections_Generic_List_string__Add__;
    ++v129->fields._version;
    if ( !v136 )
      goto LABEL_162;
    v138 = v129->fields._size;
    v139 = mainInfo;
    if ( (unsigned int)v138 >= v136->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v129,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    }
    else
    {
      v140 = &v136->obj.klass + v138;
      v129->fields._size = v138 + 1;
      v140[4] = (Il2CppClass *)v139;
      sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), v139, v130, v131, v132, v133, v134, v135);
    }
    if ( v53 >= *(unsigned int *)(v52 + 24) )
      goto LABEL_163;
    v143 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          1,
                          ServantIdMashu3,
                          *((_DWORD *)v54 + v53),
                          v141,
                          v142);
    if ( !v143 )
      goto LABEL_162;
    v151 = v143->fields._items;
    v152 = Method_System_Collections_Generic_List_string__Add__;
    ++v143->fields._version;
    if ( !v151 )
      goto LABEL_162;
    v153 = v143->fields._size;
    v154 = mainInfo;
    if ( (unsigned int)v153 >= v151->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v143,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
    }
    else
    {
      v155 = &v151->obj.klass + v153;
      v143->fields._size = v153 + 1;
      v155[4] = (Il2CppClass *)v154;
      sub_1BCA784((PartyOrganizationUtility_o *)(v155 + 4), v154, v145, v146, v147, v148, v149, v150);
    }
    goto LABEL_108;
  }
LABEL_145:
  v265 = this->fields.requestVoiceDataList;
  if ( !v265 )
LABEL_162:
    sub_1BCAA3C(mainInfo, method);
  if ( v265->fields._size < 1 )
    return 0;
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v266);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v267);
    byte_4B1194F = 1;
  }
  v268 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v268 = NetworkManager_TypeInfo;
  }
  if ( v268->static_fields->isRebootBlock )
    return 1;
  mainInfo = (int64_t)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadVoiceData,
    (int64_t)Item,
    v270,
    v271,
    v272,
    v273,
    v274,
    v275);
  mainInfo = (int64_t)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v280 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v277, v278, v279);
  System_Action___ctor(v280, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v281);
  v39 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v280, 1, 0LL);
  return v39;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
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
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v23; // x21
  PartyOrganizationUtility_o *p_voicePlayer; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B12224 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndPlayVoice__, v5, v6);
    sub_1BCA7E0(&StringLiteral_6115/*"EndWaitVoice"*/, v7, v8);
    byte_4B12224 = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_35951064(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6115/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayList, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName, 0LL, v16, v17, v18, v19, v20, v21);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v23, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (PartyOrganizationUtility_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1BCA784(p_voicePlayer, 0LL, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_13:
    sub_1BCAA3C(voiceTabListViewManager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_4B12267 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId, method);
    sub_1BCA7E0(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B12267 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1BCAA3C(Instance, v10);
    }
    ServantStatusFlavorTextListViewManager__UpdateCvName(
      profileTabListViewManager,
      (System_String_o *)Instance[1].monitor,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateProfileList(
        ServantStatusDialog_o *this,
        bool setMode,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Boolean_array *tabInitList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_object__o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ServantStatusFlavorTextListViewManager_o *v26; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v27; // x21
  struct ServantStatusFlavorTextListViewManager_o *v28; // x8

  v4 = this;
  if ( (byte_4B12266 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantCommentEntity__TypeInfo, setMode, method);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectFlavor__, v7, v8);
    this = (ServantStatusDialog_o *)sub_1BCA7E0(&Method_ServantStatusDialog__UpdateProfileList_b__234_0__, v9, v10);
    byte_4B12266 = 1;
  }
  if ( v4->fields.tabKind == 1 )
  {
    this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager;
    if ( setMode )
    {
      if ( !this )
        goto LABEL_17;
      BYTE4(this->fields.statusButton) = 1;
    }
    else if ( !this )
    {
      goto LABEL_17;
    }
    ServantStatusFlavorTextListViewManager__CreateList(
      (ServantStatusFlavorTextListViewManager_o *)this,
      v4->fields.mainInfo,
      0LL);
    profileTabListViewManager = v4->fields.profileTabListViewManager;
    v16 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ServantCommentEntity__TypeInfo, v13, v14, v15);
    System_Action_object____ctor(v16, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__234_0__, 0LL);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v16;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int64_t)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      if ( !setMode )
        return;
      v26 = v4->fields.profileTabListViewManager;
      v27 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                       v23,
                                                                       v24,
                                                                       v25);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v26 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v26, 1, v27, 0LL);
        v28 = v4->fields.profileTabListViewManager;
        if ( v28 )
        {
          v28->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( tabInitList->max_length <= 1 )
    sub_1BCAA44(this, setMode);
  tabInitList->m_Items[5] = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateServantDetailName(
        ServantStatusDialog_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantEntity_o *svtEntity; // x8
  UIRangeLabel_o *servantNameRangeLabel; // x19

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_8;
  if ( mainInfo->fields.userSvtEntity || !mainInfo->fields.servantLeaderInfo )
  {
    svtEntity = mainInfo->fields.svtEntity;
    if ( svtEntity )
    {
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      this = (ServantStatusDialog_o *)ServantEntity__getName(svtEntity, -1, imageLimitCount, 0LL);
      if ( servantNameRangeLabel )
      {
        UIRangeLabel__Set(servantNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
        return;
      }
    }
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&imageLimitCount);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateServantParameters(
        ServantStatusDialog_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_7;
  if ( mainInfo->fields.userSvtEntity || !mainInfo->fields.servantLeaderInfo )
  {
    this = (ServantStatusDialog_o *)this->fields.profileTabListViewManager;
    if ( this )
    {
      ServantStatusFlavorTextListViewManager__UpdateParameter(
        (ServantStatusFlavorTextListViewManager_o *)this,
        imageLimitCount,
        0LL);
      return;
    }
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1BCAA3C(this, method);
  if ( mainInfo->fields._IsTransformServant_k__BackingField )
    EventTutorialMaster__CheckTutorial(0, 86, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog___InitList_b__172_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  this->fields.needAutoScroll = 0;
}


void __fastcall ServantStatusDialog___Init_b__130_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B1226B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndInitLoad__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v8, v9);
    byte_4B1226B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v12);
  }
  else
  {
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
    AtlasManager__LoadUISkin(v15, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B1226C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssetData__TypeInfo, _, method);
    sub_1BCA7E0(&Method_ServantStatusDialog__LoadTransformedResource_b__194_1__, v5, v6);
    byte_4B1226C = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssetData__TypeInfo, _, method, v3);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_1__,
    0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v7, v8);
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  ServantStatusDialog_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4B1226D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, _, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndLoadTransformedResource__, v5, v6);
    byte_4B1226D = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, _, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v10 = ServantStatusDialog__CoWaitForEndOfFrame(v8, v7, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__224_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
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
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x21
  PartyOrganizationUtility_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4B1226E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B1226E = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v17, 0LL),
        (v18 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v18, 0LL),
        (v18 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(v18, v19);
  }
  v18->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v19);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__191_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__191_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___UpdateProfileList_b__234_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *Master_object; // x0
  __int64 v18; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  ServantCommentMaster_o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w22
  System_Int32_array *v25; // x23
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1226F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentMaster___, entity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    byte_4B1226F = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          v21 = (ServantCommentMaster_o *)Master_object;
          v23 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
          v22 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
          *(_QWORD *)&v27.fields.currentCryptoKey = v23;
          *(_QWORD *)&v27.fields.fakeValue = v22;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1BCA888(int___TypeInfo, 1LL);
          if ( entity )
          {
            v25 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1BCA888(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1BCAA44(Master_object, v16);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v21 )
              {
                ServantCommentMaster__SetOpen_40357936(v21, v24, v25, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v26);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(Master_object, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A093D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09388;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isModify;
  if ( (byte_4B12A5F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isModify, callback);
    byte_4B12A5F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isModify,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndIndividualityDelegate___ctor(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0954C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A094F4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  char v11[4]; // [xsp+18h] [xbp-38h] BYREF
  char v12[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_4B12A62 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isModify, isNeedSort);
    byte_4B12A62 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__Invoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isModify,
    isNeedSort,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_FormationEndDelegate___ctor(
        ServantStatusDialog_FormationEndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09444;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A093EC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = isModify;
  v13 = questId;
  if ( (byte_4B12A60 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isModify, *(_QWORD *)&questId);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    byte_4B12A60 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__Invoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isModify,
    questId,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_ResultDelegate___ctor(
        ServantStatusDialog_ResultDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A094C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09468;
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
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  char v16[4]; // [xsp+38h] [xbp-38h] BYREF
  char v17[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v17[0] = isModify;
  v16[0] = isNeedSort;
  v15 = questId;
  if ( (byte_4B12A61 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isModify, isNeedSort);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    byte_4B12A61 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantStatusDialog_ResultDelegate__Invoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, bool, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isModify,
    isNeedSort,
    questId,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__195__MoveNext(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *v4; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4B12A67 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)sub_1BCA7E0(
                                                                  &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method,
                                                                  v2);
    byte_4B12A67 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v4->fields.callback;
    v4->fields.__1__state = -1;
    if ( !callback )
      sub_1BCAA3C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v6;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    v4->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__195__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
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
  v8 = sub_1BCA7F4(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__195_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__195__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__195__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog___c__DisplayClass138_0___ctor(
        ServantStatusDialog___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass138_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass138_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1BCAA3C(this, data);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))onComplete->fields.m_target)(
    onComplete->fields.original_method_info,
    data,
    *(_QWORD *)&onComplete->fields.extra_arg);
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___ctor(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___StartTransformedStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1BCAA3C(this, data);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))onComplete->fields.m_target)(
    onComplete->fields.original_method_info,
    data,
    *(_QWORD *)&onComplete->fields.extra_arg);
}


void __fastcall ServantStatusDialog___c__DisplayClass217_0___ctor(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass217_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  long double v4; // q0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct ServantStatusDialog_o *_4__this; // x0
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B12A63 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7, v8);
    sub_1BCA7E0(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__, v9, v10);
    byte_4B12A63 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v13 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C1C6BC(v12);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C1C6BC(v12);
      _4__this = **(struct ServantStatusDialog_o ***)(v14 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(_4__this, isDecide);
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v4);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1C1C6BC(v4);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v18, v19, v20, v21, v22, v23);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30766896(klass, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass217_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantStatusDialog___c__DisplayClass217_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  v4 = this;
  if ( (byte_4B12A64 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method, v2);
    this = (ServantStatusDialog___c__DisplayClass217_0_o *)sub_1BCA7E0(
                                                             &Method_ServantStatusDialog_OnSelectStatus__,
                                                             v5,
                                                             v6);
    byte_4B12A64 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass221_0___ctor(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v13; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v17; // x8
  struct ServantStatusDialog_o *v18; // x8
  struct ServantStatusDialog_o *v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v24; // x21

  if ( (byte_4B12A65 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v8, v9);
    byte_4B12A65 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  mainInfo = **(CommonUI_o ***)(v11 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30766896(mainInfo, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      mainInfo = (CommonUI_o *)_4__this->fields.mainInfo;
      if ( mainInfo )
      {
        index = this->fields.index;
        if ( index <= 2 )
          LODWORD(mainInfo->fields.equipGraphListMenuPath) = index;
        else
          HIDWORD(mainInfo->fields.equipGraphListMenuPath) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.servantFramePurchaseMenuPrefab) = isRandomOn;
          goto LABEL_21;
        }
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
          (ServantStatusListViewItem_o *)mainInfo,
          isRandomOn,
          v13);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          mainInfo = (CommonUI_o *)v17->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v17->fields.mainInfo,
              0LL);
            v18 = this->fields.__4__this;
            if ( v18 )
            {
              mainInfo = (CommonUI_o *)v18->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v18->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(mainInfo, isDecide);
  }
LABEL_21:
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v19->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v22 = (Il2CppObject *)this->fields.__4__this;
  if ( !v22 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v22[12].monitor;
  v24 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         isDecide,
                                                         v20,
                                                         v21);
  ServantStatusListViewManager_CallbackFunc___ctor(v24, v22, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v13; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v17; // x8
  struct ServantStatusDialog_o *v18; // x8
  struct ServantStatusDialog_o *v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v24; // x21

  if ( (byte_4B12A66 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantStatusDialog_OnSelectStatus__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v8, v9);
    byte_4B12A66 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  mainInfo = **(CommonUI_o ***)(v11 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30766896(mainInfo, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      mainInfo = (CommonUI_o *)_4__this->fields.mainInfo;
      if ( mainInfo )
      {
        index = this->fields.index;
        if ( index <= 2 )
          LODWORD(mainInfo->fields.equipGraphListMenuPath) = index;
        else
          HIDWORD(mainInfo->fields.equipGraphListMenuPath) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.servantFramePurchaseMenuPrefab) = isRandomOn;
          goto LABEL_21;
        }
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
          (ServantStatusListViewItem_o *)mainInfo,
          isRandomOn,
          v13);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          mainInfo = (CommonUI_o *)v17->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v17->fields.mainInfo,
              0LL);
            v18 = this->fields.__4__this;
            if ( v18 )
            {
              mainInfo = (CommonUI_o *)v18->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v18->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(mainInfo, isDecide);
  }
LABEL_21:
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v19->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34803476((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v22 = (Il2CppObject *)this->fields.__4__this;
  if ( !v22 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v22[12].monitor;
  v24 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         isDecide,
                                                         v20,
                                                         v21);
  ServantStatusListViewManager_CallbackFunc___ctor(v24, v22, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v24, 0LL);
}