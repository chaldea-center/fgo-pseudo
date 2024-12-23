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

  if ( (byte_4B62BC5 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_436/*"#4C4C4C"*/, v8);
    byte_4B62BC5 = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_436/*"#4C4C4C"*/;
  sub_1BE4A70(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B62BC4 & 1) == 0 )
  {
    sub_1BE4ACC(&bool___TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_24942/*"wait"*/, v7);
    byte_4B62BC4 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v8 = (struct System_Boolean_array *)sub_1BE4B74(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.tabInitList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v15;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.dictChangeSvtVoiceIdList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v22;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.requestVoiceDataList,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v29;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voiceDataList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_24942/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24942/*"wait"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.defaultAnimationName, v36, v37, v38, v39, v40, v41, v42);
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
  void *v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B62B6F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B62B6F = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, (int64_t)v10, v2, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v13);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UICamera_c *v9; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Object_o *dragged; // x19
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_GameObject_o *v17; // x19
  Il2CppObject *v18; // x20
  UnityEngine_Object_o *current; // x19
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  UnityEngine_GameObject_o *v23; // x19
  Il2CppObject *v24; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct UICamera_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  PartyOrganizationUtility_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  char v59[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v60[4]; // [xsp+8h] [xbp-58h] BYREF
  char v61[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v62[4]; // [xsp+18h] [xbp-48h] BYREF
  char v63[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B62B66 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v2);
    sub_1BE4ACC(&TouchEffectManager_TypeInfo, v3);
    sub_1BE4ACC(&UICamera_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_10042/*"OnDragEnd"*/, v5);
    sub_1BE4ACC(&StringLiteral_10064/*"OnHover"*/, v6);
    sub_1BE4ACC(&StringLiteral_10095/*"OnPress"*/, v7);
    sub_1BE4ACC(&StringLiteral_10105/*"OnScrollStop"*/, v8);
    byte_4B62B66 = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  currentTouch = v9->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__UnPress(0LL);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(last, 0LL, 0LL) )
    {
      v12 = currentTouch->fields.last;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v12, (System_String_o *)StringLiteral_10042/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v17 = currentTouch->fields.dragged;
      v63[0] = 0;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v63, v14, v15, v16);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v17, (System_String_o *)StringLiteral_10095/*"OnPress"*/, v18, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v23 = currentTouch->fields.current;
      v62[0] = 1;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v20, v21, v22);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v23, (System_String_o *)StringLiteral_10064/*"OnHover"*/, v24, 0LL);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v61[0] = 0;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v61, v26, v27, v28);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10095/*"OnPress"*/, v29, 0LL);
    v60[0] = 1;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v60, v30, v31, v32);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10064/*"OnHover"*/, v33, 0LL);
    v59[0] = 0;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v59, v34, v35, v36);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10105/*"OnScrollStop"*/, v37, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->current, 0LL, v39, v40, v41, v42, v43, v44);
  v45 = UICamera_TypeInfo->static_fields;
  v45->currentCamera = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v45->currentCamera, 0LL, v46, v47, v48, v49, v50, v51);
  v52 = (PartyOrganizationUtility_o *)UICamera_TypeInfo->static_fields;
  v52[1].klass = 0LL;
  sub_1BE4A70(v52 + 1, 0LL, v53, v54, v55, v56, v57, v58);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v11; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v13; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusBattleListViewItem_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B62B88 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_4B62B88 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             method)) == 0LL )
  {
    sub_1BE4D28(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1BE4D28(v7, v8);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v21.fields._current, v8);
    if ( !Item )
      sub_1BE4D28(0LL, v11);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v11);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BE4D28(DispLimitCount, v13);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v13);
      if ( !v15 )
        sub_1BE4D28(0LL, v16);
      index = (unsigned int)v15->fields.index;
      v19 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v19 )
        sub_1BE4D28(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v19, index, v17);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 confirmDispLv; // x8
  int32_t v11; // w20
  int32_t v12; // w21
  const MethodInfo *v13; // x2
  bool v14; // w22
  __int64 i; // x24
  unsigned __int64 v16; // x29
  __int64 illustratorId; // x28
  SkillInfo_o *v18; // x0
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x23
  TreasureDvcInfo_o *v22; // x24
  TreasureDvcInfo_o *v23; // x25
  SkillInfo_array *v24; // x21
  SkillInfo_array *v25; // x22
  int32_t nextLimitCount; // w27
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v27; // x26
  bool v28; // [xsp+2Ch] [xbp-84h]
  SkillInfo_array *v29; // [xsp+30h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF

  v3 = dispLv;
  if ( (byte_4B62B78 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BE4ACC(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_4B62B78 = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v29 = 0LL;
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
    sub_1BE4D30(svtId, *(_QWORD *)&dispLv);
  v11 = (int)svtId;
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  v12 = dispSelectList->m_Items[confirmDispLv + 1];
  ServantStatusListViewItem__GetNpInfo_34048328(svtId, &tdInfo, v11, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetNpInfo_34048328(svtId, &info, v12, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_34047420(svtId, &skillInfoList, v11, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_34047420(svtId, &v29, v12, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_34;
  v14 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v16 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    illustratorId = svtId->fields.commandCodeCommentEntity->fields.illustratorId;
    if ( (__int64)v16 >= illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( v16 >= skillInfoList->max_length )
      goto LABEL_35;
    if ( !v29 )
      goto LABEL_34;
    if ( v16 >= v29->max_length )
      goto LABEL_35;
    v18 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v29->obj.klass + i);
    if ( !v18 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v18 = (SkillInfo_o *)*((_QWORD *)&v29->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v18, *(SkillInfo_o **)&dispLv, 0LL) )
      goto LABEL_28;
  }
  if ( v14 )
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v13);
    return;
  }
LABEL_28:
  v28 = !v14;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v11, 0LL);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v12, 0LL);
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v23 = info;
  v22 = tdInfo;
  v25 = v29;
  v24 = skillInfoList;
  nextLimitCount = LimitCountByImageLimitCostumeIn;
  v27 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1BE4D18(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndBattleConfirm__,
    0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId
    || (svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL),
        !servantStatusBattleConfirmDialog) )
  {
LABEL_34:
    sub_1BE4D28(svtId, *(_QWORD *)&dispLv);
  }
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    v22,
    v23,
    v28,
    v24,
    v25,
    (__int64)v16 < illustratorId,
    v27,
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_4B62BA7 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B62BA7 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  _DWORD *monitor; // x8
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4B62BA4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, v5);
    byte_4B62BA4 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v7 = (System_Action_object__o *)sub_1BE4D18(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v7, v4, Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad((ServantStatusDialog_o *)v4, (System_Action_AssetData__o *)v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_4B62BAB & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B62BAB = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_4B62BAE & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B62BAE = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4B62BA6 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B62BA6 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *statusLoadAsset; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *cardLoadAsset; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *battleLoadAsset; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v51; // w9
  System_String_o *loadVoiceData; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v61; // w2
  int v62; // w9
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B62B86 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, callback);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_1BE4ACC(&SoundManager_TypeInfo, v12);
    byte_4B62B86 = 1;
  }
  memset(&v63, 0, sizeof(v63));
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, 0LL, v14, v15, v16, v17, v18, v19);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.statusLoadAsset, 0LL, v21, v22, v23, v24, v25, v26);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.cardLoadAsset, 0LL, v28, v29, v30, v31, v32, v33);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, 0LL, v35, v36, v37, v38, v39, v40);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.transformedStatusLoadAsset,
      0LL,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  ServantStatusDialog__StopVoice(this, v41);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v51 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v51;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0LL);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadVoiceData, 0LL, v53, v54, v55, v56, v57, v58);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v63.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1BE4D28(statusTabListViewManager, callback);
  v61 = voiceDataList->fields._size;
  v62 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v62;
  if ( v61 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v61, 0LL);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B62B9D & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback);
    byte_4B62B9D = 1;
  }
  v4 = sub_1BE4D18(ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1BE4D28(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B62B76 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62B76 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.battleChr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(v7, 0LL);
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
        sub_1BE4D30(servantStatusBattleConfirmDialog, isDecide);
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
    sub_1BE4D28(servantStatusBattleConfirmDialog, isDecide);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4B62BA8 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62BA8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1BE4D28(Instance, v7);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v8; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *battleActor; // x8

  if ( (byte_4B62B7B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B62B7B = 1;
  }
  this->fields.isBattlePlay = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_11;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_11;
  v8 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v8,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1BE4D28(mainInfo, v6);
  }
  BattleFBXComponent__SetEvolutionLevel(battleActor, v8, (int32_t)mainInfo, 0LL);
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
  __int64 v3; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B62B91 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B62B91 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BE4D28(v6, v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v5, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B62B8F & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B62B8F = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BE4D28(v6, v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v5, 0LL);
}


void __fastcall ServantStatusDialog__EndCommandCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B62B6C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AssetData__TypeInfo, data);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndTransformedStatusLoad__, v4);
    byte_4B62B6C = 1;
  }
  v5 = (System_Action_object__o *)sub_1BE4D18(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndTransformedStatusLoad__, 0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v5, v6);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Object_o *changeTransformButton; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v31; // x20
  UnityEngine_GameObject_o *v32; // x0
  float v33; // s0
  int32_t v34; // w22
  UnityEngine_GameObject_o *v35; // x20
  int v36; // w21
  UnityEngine_GameObject_o *v37; // x0
  float v38; // s0
  int32_t v39; // w22
  UnityEngine_GameObject_o *v40; // x20
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s0
  bool v43; // w1
  struct ServantStatusListViewItem_o *v44; // x8
  int32_t v45; // w20
  int32_t v46; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v49; // x22
  struct ServantStatusListViewItem_o *v50; // x8
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v52; // x21
  int32_t kind; // w8
  bool v54; // w8
  bool v55; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v58; // x8
  bool *v59; // x10
  struct ServantStatusListViewItem_o *v60; // x8
  ServantCommentMaster_o *v61; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v70; // x1
  struct ServantStatusListViewItem_o *v71; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v73; // x21
  UnityEngine_Object_o *v74; // x21
  const MethodInfo *v75; // x2
  UILabel_o *v76; // x21
  ServantLimitAddMaster_o *v77; // x21
  int32_t v78; // w8
  char v79; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v81; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v83; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v86; // x22
  struct ServantStatusListViewItem_o *v87; // x8
  int32_t v88; // w2
  int32_t limitCount; // w1
  int32_t v90; // w8
  struct ServantStatusListViewItem_o *v91; // x9
  struct UserServantEntity_o *v92; // x0
  int32_t v93; // w21
  int32_t v94; // w21
  ServantLimitImageMaster_o *v95; // x22
  struct ServantStatusListViewItem_o *v96; // x8
  int32_t v97; // w2
  int32_t v98; // w8
  struct ServantStatusListViewItem_o *v99; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v101; // w1
  int32_t v102; // w2
  struct ServantLeaderInfo_o *v103; // x9
  System_String_o *v104; // x1
  ServantLimitImageMaster_o *v105; // x21
  struct ServantStatusListViewItem_o *v106; // x8
  struct UserServantCollectionEntity_o *v107; // x8
  struct UIRangeLabel_o *v108; // x21
  struct ServantEntity_o *v109; // x22
  __int64 v110; // x23
  __int64 v111; // x24
  int32_t v112; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v114; // x8
  UILabel_o *v115; // x21
  struct ServantStatusListViewItem_o *v116; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v118; // x8
  ServantLimitImageMaster_o *v119; // x21
  UILabel_o *v120; // x22
  struct ServantStatusListViewItem_o *v121; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v123; // x22
  __int64 v124; // x23
  int32_t v125; // w22
  struct UILabel_o *v126; // x23
  System_String_o *mText; // x25
  System_String_o *v128; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v130; // x0
  System_String_o *v131; // x1
  UILabel_o *v132; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v134; // x21
  __int64 *v135; // x8
  struct ServantStatusListViewItem_o *v136; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v138; // x0
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x2
  int32_t v141; // w8
  unsigned int v142; // w8
  const MethodInfo *v143; // x1
  unsigned int v144; // w8
  bool v145; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  if ( (byte_4B62B64 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&OptionManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_12022/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_1BE4ACC(&StringLiteral_12021/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v16);
    sub_1BE4ACC(&StringLiteral_12023/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v17);
    sub_1BE4ACC(&StringLiteral_12024/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v18);
    sub_1BE4ACC(&StringLiteral_12029/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v19);
    sub_1BE4ACC(&StringLiteral_12028/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v20);
    sub_1BE4ACC(&StringLiteral_4133/*"CancelInput"*/, v21);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v22);
    sub_1BE4ACC(&StringLiteral_6101/*"EndLoadInit"*/, v23);
    byte_4B62B64 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v27 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v27, LocalPositionX + 0.0, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_241;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_241;
      v31 = baseObject;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      v33 = GameObjectExtensions__GetLocalPositionX(v32, 0LL);
      GameObjectExtensions__SetLocalPositionX(v31, v33 + (float)changeTransformAddTabMargin, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_241;
      v34 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_241;
      v35 = baseObject;
      v36 = v34 + changeTransformAddTabMargin;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v38 = GameObjectExtensions__GetLocalPositionX(v37, 0LL);
      GameObjectExtensions__SetLocalPositionX(v35, v38 + (float)v36, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_241;
      v39 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_241;
      v40 = baseObject;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v42 = GameObjectExtensions__GetLocalPositionX(v41, 0LL);
      GameObjectExtensions__SetLocalPositionX(v40, v42 + (float)(v39 + v36), 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v43 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v43 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v43, 0LL);
  }
  v44 = this->fields.mainInfo;
  if ( !v44 )
    goto LABEL_241;
  if ( v44->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v45 = 0;
        v46 = 21;
        break;
      case 4:
      case 0x16:
        v45 = 0;
        v46 = 22;
        break;
      case 5:
      case 0x17:
        v45 = 0;
        v46 = 23;
        break;
      case 6:
      case 0x18:
        v45 = 0;
        v46 = 24;
        break;
      case 7:
      case 0x19:
        v45 = 0;
        v46 = 25;
        break;
      case 8:
      case 0x1A:
        v45 = 0;
        v46 = 26;
        break;
      case 9:
      case 0x1B:
        v45 = 0;
        v46 = 27;
        break;
      case 0x1D:
      case 0x20:
        v45 = 0;
        v46 = 32;
        break;
      default:
        v45 = 0;
        v46 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v44->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_241;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_38593888(106, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v49 = this;
    else
      v49 = 0LL;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v50 = this->fields.mainInfo;
      if ( !v50 )
        goto LABEL_241;
      favoriteUserSvtId = v50->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v52 = v49;
      else
        v52 = 0LL;
      if ( favoriteUserSvtId < 1 )
      {
        v54 = 0;
        v52 = this;
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
            v54 = 0;
            if ( !v52 )
              goto LABEL_241;
          }
          else
          {
            v54 = kind != 12;
            if ( !v52 )
              goto LABEL_241;
          }
        }
        else
        {
          v54 = 0;
          v52 = v49;
          if ( !v49 )
            goto LABEL_241;
        }
      }
    }
    else
    {
      v54 = 0;
      v52 = this;
    }
    v52->fields.isUseFavorite = v54;
    v55 = SvtType__IsOrganization(type, 0LL) && this->fields.kind != 12;
    this->fields.isUsePush = v55;
    baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v45 = 0;
      v46 = 28;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v90 = this->fields.kind;
        switch ( v90 )
        {
          case 3:
          case 12:
            v45 = 0;
            v46 = 12;
            break;
          case 4:
          case 13:
            v45 = 0;
            v46 = 13;
            break;
          case 5:
          case 14:
            v45 = 0;
            v46 = 14;
            break;
          case 6:
          case 15:
            v45 = 0;
            v46 = 15;
            break;
          case 7:
          case 16:
            v45 = 0;
            v46 = 16;
            break;
          case 8:
          case 17:
            v45 = 0;
            v46 = 17;
            break;
          case 9:
          case 18:
            v45 = 0;
            v46 = 18;
            break;
          case 19:
            v45 = 0;
            v46 = 19;
            break;
          case 29:
          case 31:
            v45 = 0;
            v46 = 31;
            break;
          default:
            v145 = v90 == 33;
            v46 = 11;
            v45 = v145;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v98 = this->fields.kind, v98 == 36) )
        {
          v45 = 0;
          goto LABEL_64;
        }
        v45 = 0;
        if ( v98 == 29 )
          v46 = 30;
        else
          v46 = 10;
      }
    }
  }
  this->fields.kind = v46;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_241;
  max_length = tabInitList->max_length;
  v58 = 0LL;
  v59 = &tabInitList->m_Items[4];
  do
  {
    if ( v58 >= max_length )
      sub_1BE4D30(baseObject, method);
    v59[v58++] = 0;
  }
  while ( v58 != 4 );
  v60 = this->fields.mainInfo;
  if ( !v60 )
    goto LABEL_241;
  if ( v60->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v61 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v61 )
      goto LABEL_241;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v61, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.newProfileList,
      (int64_t)NewProfileEntities,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Set_39139932((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v70);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__changeTitleInfo_38074532((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v71 = this->fields.mainInfo;
  if ( !v71 )
    goto LABEL_241;
  commandCodeEntity = v71->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v77 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v77 )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v77,
                                               (int32_t)baseObject,
                                               0LL);
    v78 = this->fields.kind;
    v79 = (char)baseObject;
    if ( (v78 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v81 = this->fields.mainInfo;
        if ( !v81 )
          goto LABEL_241;
        servantLeaderInfo = v81->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_241;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v83 = this->fields.mainInfo;
        if ( !v83 )
          goto LABEL_241;
        if ( (v79 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v83->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_241;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_241;
          v86 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v86 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v86,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v87 = this->fields.mainInfo;
          if ( !v87 )
            goto LABEL_241;
          v88 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v87->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = -1;
        }
        else
        {
          v103 = v83->fields.servantLeaderInfo;
          if ( !v103 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v83->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = v103->fields.limitCount;
          v88 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v88, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_241;
      v104 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v104, 0LL, 1, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v114 = this->fields.mainInfo;
        if ( !v114 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)v114->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v115 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v116 = this->fields.mainInfo;
          if ( !v116 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v116->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        method = (const MethodInfo *)baseObject;
        if ( !v115 )
          goto LABEL_241;
        UILabel__set_text(v115, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_221;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v118 = this->fields.mainInfo;
      if ( !v118 )
        goto LABEL_241;
      if ( v118->fields.userSvtEntity )
      {
        v119 = (ServantLimitImageMaster_o *)baseObject;
        v120 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
        if ( !v120 )
          goto LABEL_241;
        UILabel__set_text(v120, (System_String_o *)baseObject, 0LL);
        v121 = this->fields.mainInfo;
        if ( !v121 )
          goto LABEL_241;
        userSvtEntity = v121->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_241;
        v124 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v123 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v147.fields.currentCryptoKey = v124;
        *(_QWORD *)&v147.fields.fakeValue = v123;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                   v147,
                                                   0LL);
        if ( !v119 )
          goto LABEL_241;
        v125 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v119,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_214;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v119,
                                                   (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v125,
                                                   0LL);
        v126 = this->fields.battleExplanationLabel;
        if ( !v126 )
          goto LABEL_241;
        mText = v126->fields.mText;
        v128 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v119,
                                                        v125,
                                                        3,
                                                        0LL);
        v130 = System_String__Format(v128, LimitCountSealedServantName, 0LL);
        v131 = System_String__Concat_62698808(mText, v130, 0LL);
        v132 = v126;
      }
      else
      {
        userSvtCollectionEntity = v118->fields.userSvtCollectionEntity;
        v134 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v135 = &StringLiteral_12022/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v135 = &StringLiteral_12023/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v135, 0LL);
        if ( !v134 )
          goto LABEL_241;
        v131 = (System_String_o *)baseObject;
        v132 = v134;
      }
      UILabel__set_text(v132, v131, 0LL);
LABEL_214:
      v136 = this->fields.mainInfo;
      if ( !v136 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_241;
      IsTransformServant_k__BackingField = v136->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_241;
        v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v138, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_221;
    }
    if ( (unsigned int)(v78 - 6) <= 2 )
    {
      v99 = this->fields.mainInfo;
      if ( !v99 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)v99->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v79 & 1) != 0 )
      {
        v101 = -1;
        v102 = 0;
      }
      else
      {
        v102 = -1;
        v101 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v101, v102, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_241;
      v104 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v91 = this->fields.mainInfo;
    if ( !v91 )
      goto LABEL_241;
    v92 = v91->fields.userSvtEntity;
    if ( v92 )
    {
      if ( (v79 & 1) == 0 )
      {
        v108 = this->fields.servantNameRangeLabel;
        v109 = v91->fields.svtEntity;
        v111 = *(_QWORD *)&v92->fields.limitCount.fields.currentCryptoKey;
        v110 = *(_QWORD *)&v92->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v146.fields.currentCryptoKey = v111;
        *(_QWORD *)&v146.fields.fakeValue = v110;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                   v146,
                                                   0LL);
        if ( !v109 )
          goto LABEL_241;
        v112 = (int)baseObject;
        v97 = -1;
        baseObject = (UnityEngine_GameObject_o *)v109;
        goto LABEL_172;
      }
      v93 = UserServantEntity__getCardImageLimitCount(v92, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v94 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v93, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_241;
      v95 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v95 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v95,
                                                 (int32_t)baseObject,
                                                 v94,
                                                 0LL);
      v96 = this->fields.mainInfo;
      if ( !v96 )
        goto LABEL_241;
      v97 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v96->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    else
    {
      if ( (v79 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v91->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v108 = this->fields.servantNameRangeLabel;
        v112 = -1;
        v97 = -1;
        goto LABEL_172;
      }
      if ( v91->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_241;
        v105 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v106 = this->fields.mainInfo;
        if ( !v106 )
          goto LABEL_241;
        v107 = v106->fields.userSvtCollectionEntity;
        if ( !v107 )
          goto LABEL_241;
        if ( !v105 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v105,
                                                   (int32_t)baseObject,
                                                   v107->fields.maxLimitCount,
                                                   0LL);
        v91 = this->fields.mainInfo;
        if ( !v91 )
          goto LABEL_241;
        v97 = (int)baseObject;
      }
      else
      {
        v97 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v91->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    v108 = this->fields.servantNameRangeLabel;
    v112 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v112, v97, 0LL);
    if ( !v108 )
      goto LABEL_241;
    v104 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v108;
    goto LABEL_174;
  }
  v73 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v73 )
    goto LABEL_241;
  UIRangeLabel__Set(v73, (System_String_o *)baseObject, 0LL, 1, 0, 0LL);
  v74 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
  {
    v76 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v76 )
    {
      UILabel__set_text(v76, (System_String_o *)baseObject, 0LL);
      goto LABEL_221;
    }
LABEL_241:
    sub_1BE4D28(baseObject, method);
  }
LABEL_221:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_241;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v75);
  ServantStatusDialog__SetMark(this, v139);
  v141 = this->fields.kind;
  if ( v141 > 28 )
  {
    v142 = v141 - 30;
    if ( v142 < 7 )
    {
      v45 = dword_C1B4F8[v142];
      goto LABEL_230;
    }
LABEL_228:
    v45 = 0;
    goto LABEL_230;
  }
  if ( v141 == 10 )
  {
    v45 = 1;
    goto LABEL_230;
  }
  if ( v141 != 11 )
  {
    v45 = 1;
    if ( v141 != 28 )
      goto LABEL_228;
  }
LABEL_230:
  ServantStatusDialog__SetTabKind(this, v45, v140);
  v144 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v144 - 10 < 0x13 || v144 <= 0x24 && ((1LL << v144) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6101/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v143);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4133/*"CancelInput"*/,
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

  if ( (byte_4B62B72 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4B62B72 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_33094328(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_33094328(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4B62B73 & 1) == 0 )
  {
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, method);
    byte_4B62B73 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B62AD0 )
  {
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, method);
    byte_4B62AD0 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BE4D28(v4, method);
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

  if ( (byte_4B62B7A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4B62B7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4B62B67 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog__EndLoadInit_b__134_0__, v3);
    byte_4B62B67 = 1;
  }
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__134_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v4, v5);
  ServantStatusDialog__InitList(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Boolean_array *v8; // x8
  const MethodInfo *tabKind; // x1

  if ( (byte_4B62B9E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B62B9E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        ServantStatusDialog__DestroyBattleChr(this, v6),
        v8 = this->fields.tabInitList,
        this->fields.isBattlePlay = 0,
        !v8) )
  {
LABEL_12:
    sub_1BE4D28(Instance, v4);
  }
  if ( v8->max_length <= 3 )
LABEL_13:
    sub_1BE4D30(Instance, v4);
  v8->m_Items[7] = 0;
  tabKind = (const MethodInfo *)(unsigned int)this->fields.tabKind;
  if ( (_DWORD)tabKind == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabKind);
    LODWORD(tabKind) = this->fields.tabKind;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabKind, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Item; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x20
  System_Action_o *v36; // x21

  if ( (byte_4B62B7E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__RemoveAt__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndLoadVoice__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BE4ACC(&SoundManager_TypeInfo, v15);
    byte_4B62B7E = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)loadVoiceData;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)loadVoiceData, v2, v3, v4, v5, v6, v7);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadVoiceData, 0LL, v22, v23, v24, v25, v26, v27);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields.loadVoiceData,
              (int64_t)Item,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v35 = this->fields.loadVoiceData;
              v36 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v35, v36, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1BE4D28(voiceDataList, loadVoiceData);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v3);
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

  if ( (byte_4B62B82 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6128/*"EndWaitVoice"*/, method);
    byte_4B62B82 = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayer, 0LL, v2, v3, v4, v5, v6, v7);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v18 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v18;
    max_length = voicePlayList->max_length;
    if ( v18 < (int)max_length )
    {
      if ( v18 >= max_length )
        sub_1BE4D30(voiceTabListViewManager, v10);
      v20 = voicePlayList->m_Items[v18];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6128/*"EndWaitVoice"*/,
          v20->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1BE4D28(voiceTabListViewManager, v10);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_36087664(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayList, 0LL, v11, v12, v13, v14, v15, v16);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName, 0LL, v21, v22, v23, v24, v25, v26);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_36087664(voiceTabListViewManager, 2, -1, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  CommonUI_o *statusTabListViewManager; // x0
  const MethodInfo *v11; // x2
  ServantStatusListViewManager_o *v12; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_4B62B9A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B62B9A = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v3);
  statusTabListViewManager = **(CommonUI_o ***)(v9 + 184);
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
    ServantStatusDialog__SetTabKind(this, 0, v11);
  }
  v12 = this->fields.statusTabListViewManager;
  v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v12 )
LABEL_13:
    sub_1BE4D28(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v12, 1, v13, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B62B6A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AssetData__TypeInfo, data);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCommandCardLoad__, v4);
    byte_4B62B6A = 1;
  }
  v5 = (System_Action_object__o *)sub_1BE4D18(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCommandCardLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v5, v6);
}


void __fastcall ServantStatusDialog__EndTransformedStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4B62B6E & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_6101/*"EndLoadInit"*/, v6);
    byte_4B62B6E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1BE4D28(Instance, v8);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6101/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusDialog_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v14; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v17; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v19; // x22
  SePlayer_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  PartyOrganizationUtility_o *p_voicePlayer; // x0

  v8 = this;
  if ( (byte_4B62B81 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndPlayVoice__, v9);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&SoundManager_TypeInfo, v10);
    byte_4B62B81 = 1;
  }
  voicePlayList = v8->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v8->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1BE4D30(this, method);
      v14 = voicePlayList->m_Items[voicePlayNum];
      if ( v14 )
      {
        voicePlayAssetName = v8->fields.voicePlayAssetName;
        id = v14->fields.id;
        v17 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v17 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
        v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v20 = SoundManager__playVoice_39615552(voicePlayAssetName, id, DEFAULT_VOLUME, v19, 0LL);
        p_voicePlayer = (PartyOrganizationUtility_o *)&v8->fields.voicePlayer;
        v8->fields.voicePlayer = v20;
        goto LABEL_16;
      }
LABEL_17:
      sub_1BE4D28(this, method);
    }
    if ( v8->fields.tabKind == 3 && (v8->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_36087664((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v8->fields.voiceListIndex = -1;
    }
    v8->fields.voicePlayList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayer = (PartyOrganizationUtility_o *)&v8->fields.voicePlayAssetName;
    v20 = 0LL;
    v8->fields.voicePlayNum = 0;
    v8->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1BE4A70(p_voicePlayer, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall ServantStatusDialog__EnddChangeCommandResourceLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4B62BA5 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62BA5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(Instance, v7);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v14; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  ServantStatusDialog_o *v17; // x20
  struct ServantStatusListViewItem_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  ServantStatusDialog_o *v21; // x20
  struct ServantStatusListViewItem_o *v22; // x8
  struct UserServantEntity_o *v23; // x8
  ServantStatusDialog_o *v24; // x20
  __int64 v25; // x21
  __int64 v26; // x22
  struct ServantStatusListViewItem_o *v27; // x8
  ServantStatusDialog_o *v28; // x22
  int32_t v29; // w21
  int32_t DispLimitCount; // w0
  int32_t v31; // w20
  ServantStatusDialog_o *v32; // x23
  int32_t LimitCount; // w0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v35; // w9
  struct ServantStatusListViewItem_o *v36; // x8
  ServantStatusDialog_o *v37; // x22
  struct ServantStatusListViewItem_o *v38; // x8
  ServantStatusDialog_o *v39; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v43; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v3 = this;
  if ( (byte_4B62B97 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62B97 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v43 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_59;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v14 = v3->fields.mainInfo;
  if ( !v14 )
    goto LABEL_59;
  userSvtEntity = v14->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_59;
  v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v17 = this;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v41, 0LL);
  if ( !v17 )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v18 = v3->fields.mainInfo;
    if ( !v18 )
      goto LABEL_59;
    v19 = v18->fields.userSvtEntity;
    if ( !v19 )
      goto LABEL_59;
    v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
    v21 = this;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v20;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v42;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v40, 0LL);
    if ( !v21 )
      goto LABEL_59;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = v3->fields.mainInfo;
  if ( !v22 )
    goto LABEL_59;
  v23 = v22->fields.userSvtEntity;
  if ( !v23 )
    goto LABEL_59;
  v24 = this;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v26;
  *(_QWORD *)&v46.fields.fakeValue = v25;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v46, 0LL);
  if ( !v24 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v27 = v3->fields.mainInfo;
  if ( !v27 )
    goto LABEL_59;
  v28 = this;
  this = (ServantStatusDialog_o *)v27->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_59;
  v29 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( v29 == DispLimitCount )
    goto LABEL_58;
  v31 = DispLimitCount;
  this = (ServantStatusDialog_o *)v3->fields.mainInfo;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v28)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v28, (int32_t)this, v29, 0LL),
        !v3->fields.mainInfo)
    || (v32 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v28, LimitCount, v31, 0LL),
        !v32)
    || !this )
  {
LABEL_59:
    sub_1BE4D28(this, result);
  }
  m_CancellationTokenSource = v32->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v32 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v35 )
        sub_1BE4D30(this, result);
      if ( *((_DWORD *)&v32->fields.CHARA_BASE_POSITION.fields.x + v35) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v35) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v35 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_58;
  v36 = v3->fields.mainInfo;
  if ( !v36 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)v36->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v29, -1, 1, -1, 0LL);
  if ( !entity )
    goto LABEL_59;
  v37 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v31, -1, 1, -1, 0LL);
  v38 = v3->fields.mainInfo;
  if ( !v38 )
    goto LABEL_59;
  v39 = this;
  this = (ServantStatusDialog_o *)v38->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v29, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v43, -1, v31, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                    (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v43 )
    goto LABEL_59;
  if ( tdInfo->fields.id != v43->fields.id )
    v3->fields.isNeedSort = 1;
LABEL_58:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BattleFBXComponent_o *v11; // x0
  void *individualityCallbackFunc; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  if ( (byte_4B62B98 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62B98 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v11 = this->fields.battleActor;
    if ( !v11 )
      sub_1BE4D28(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v11, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.resultCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc, 0LL, v13, v14, v15, v16, v17, v18);
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        this->fields.isModify,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int64_t IsModifyLock; // x0
  struct ServantStatusListViewItem_o *v17; // x1
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
  int v28; // w22
  bool v29; // w0
  int v30; // w23
  int v31; // w23
  bool v32; // w0
  int v33; // w21
  int v34; // w21
  const MethodInfo *v35; // x2
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  struct UserCommandCodeEntity_o *v38; // x8
  __int128 v39; // q0
  CommandCodeSetStatusRequest_o *v40; // x19
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x20
  __int64 v43; // x21
  int32_t v44; // w24
  int v45; // w26
  BalanceConfig_c *v46; // x0
  char v47; // w20
  int32_t ManualSetDispLimitCount; // w0
  int32_t v49; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  char v51; // w22
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v53; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  char v55; // w29
  int32_t ManualSetIconLimitCount; // w0
  int32_t v57; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  char v59; // w29
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v61; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  ServantStatusListViewItem_o *v63; // x8
  ServantStatusListViewItem_o *v64; // x8
  char v65; // w21
  char v66; // w22
  int v67; // w20
  char v68; // w26
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  __int64 v71; // x23
  bool isPush; // w27
  char v73; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  NetworkManager_ResultCallbackFunc_o *v75; // x20
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q0
  CardFavoriteRequest_o *v78; // x19
  int32_t v79; // [xsp+58h] [xbp-118h]
  int32_t v80; // [xsp+5Ch] [xbp-114h]
  int32_t v81; // [xsp+60h] [xbp-110h]
  int32_t limitCountSupport; // [xsp+64h] [xbp-10Ch]
  int32_t randomSettingSupport; // [xsp+68h] [xbp-108h]
  int32_t randomSettingOwn; // [xsp+6Ch] [xbp-104h]
  int32_t battleVoice; // [xsp+70h] [xbp-100h]
  int32_t commonFlag; // [xsp+74h] [xbp-FCh]
  int32_t iconLimitCount; // [xsp+78h] [xbp-F8h]
  int32_t portraitLimitCount; // [xsp+7Ch] [xbp-F4h]
  char v89; // [xsp+80h] [xbp-F0h]
  char v90; // [xsp+84h] [xbp-ECh]
  char v91; // [xsp+88h] [xbp-E8h]
  char v92; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4B62B96 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v8);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_1BE4ACC(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_1BE4ACC(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_1BE4ACC(&UserServantCollectionManager_TypeInfo, v14);
    sub_1BE4ACC(&UserServantNewManager_TypeInfo, v15);
    byte_4B62B96 = 1;
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
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    OtherUserNewManager__SetOld(userId, 0LL);
  }
  isModify = this->fields.isModify;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  v28 = UserServantNewManager__WriteData(0LL) || isModify;
  this->fields.isModify = v28;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  v29 = UserServantCollectionManager__WriteData(0LL);
  v30 = v28 | v29;
  this->fields.isModify = v28 | v29;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  v31 = v30 | ServantCommentManager__WriteData(0LL);
  this->fields.isModify = v31;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  v32 = OtherUserNewManager__WriteData(0LL);
  v33 = v31 | v32;
  this->fields.isModify = v31 | v32;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  v34 = v33 | UserCommandCodeNewManager__WriteData(0LL);
  this->fields.isModify = v34 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v17 = this->fields.mainInfo;
  this->fields.isModify = (v34 != 0) | IsModifyLock & 1;
  if ( !v17 )
    goto LABEL_131;
  if ( !v17->fields.userSvtEntity )
  {
    if ( v17->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v17, 0LL);
      if ( !*p_mainInfo )
        goto LABEL_131;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1) != 0 )
      {
        this->fields.isModify = 1;
        v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v37,
                                  (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *p_mainInfo )
        {
          v38 = (*p_mainInfo)->fields.userCommandCodeEntity;
          if ( v38 )
          {
            v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
            v40 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v96.fields.fakeValue = v39;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v93 = v96;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v93, 0LL);
            if ( *p_mainInfo )
            {
              if ( v40 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v40,
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
  if ( v17->fields.isConvertOverwriteImage )
    goto LABEL_35;
  IsModifyLock = (int64_t)this->fields.charaGraphListViewManager;
  if ( !IsModifyLock )
    goto LABEL_131;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v17,
                            v35);
  if ( !IsModifyLock )
  {
    v17 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
LABEL_35:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v17, 0LL);
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
    v46 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v45 = 1;
    v44 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v46->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_134:
    if ( !*p_mainInfo )
      goto LABEL_131;
    v41 = (*p_mainInfo)->fields.userSvtEntity;
    if ( !v41 )
      goto LABEL_131;
    v43 = *(_QWORD *)&v41->fields.imageLimitCount.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v41->fields.imageLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v97.fields.currentCryptoKey = v43;
    *(_QWORD *)&v97.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v97, 0LL);
    v45 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v47 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0LL);
    v49 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v50 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v50 )
      goto LABEL_131;
    v49 = BasicHelper__DecryptValue_42087228(v50[8], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v51 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0LL);
    v53 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v54 )
      goto LABEL_131;
    v53 = BasicHelper__DecryptValue_42087228(v54[9], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v55 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0LL);
    v57 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v58 )
      goto LABEL_131;
    v57 = BasicHelper__DecryptValue_42087228(v58[10], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v92 = v55;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v59 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0LL);
    v61 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v61;
  }
  else
  {
    v62 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v62 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_42087228(v62[11], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v63 = *p_mainInfo;
  v91 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v90 = v51;
  commonFlag = v63->fields.svtCommonFlag;
  iconLimitCount = v57;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v63, 0LL);
  v64 = *p_mainInfo;
  v89 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v65 = v47;
  battleVoice = v64->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v64, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v66 = IsModifyLock;
  v67 = v45;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v68 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v69 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v69 )
    goto LABEL_131;
  v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
  v71 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v70;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v49;
  v81 = v53;
  v95 = v96;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v95, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v71 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0LL);
  v73 = IsModifyLock;
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
  v79 = v44;
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
    sub_1BE4D28(IsModifyLock, v17);
  }
  if ( v67 | v65 & 1 | v90 & 1 | v92 & 1 | v59 & 1 | v91 & 1 | v89 & 1 | v66 & 1 | v68 & 1 | v73 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v75 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v75,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v75,
                              (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *p_mainInfo )
    {
      v76 = (*p_mainInfo)->fields.userSvtEntity;
      if ( v76 )
      {
        v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
        v78 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v96.fields.fakeValue = v77;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v94 = v96;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v94, 0LL);
        if ( *p_mainInfo )
        {
          if ( v78 )
          {
            CardFavoriteRequest__beginRequest(
              v78,
              IsModifyLock,
              v79,
              v80,
              v81,
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
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v17);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v17; // x19
  System_String_o *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B62B7C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&StringLiteral_9659/*"NoblePhantasm_"*/, v10);
    sub_1BE4ACC(&StringLiteral_4543/*"ChrVoice_"*/, v11);
    sub_1BE4ACC(&StringLiteral_12855/*"Servants_"*/, v12);
    byte_4B62B7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v14);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v19 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v17 = (System_String_o **)off_45A3790[assetType];
    v18 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_62698808(*v17, v18, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *pushButton; // x20
  __int64 v8; // x1
  ServantStatusDialog_c *v9; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v11; // x8
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v14; // x20
  unsigned __int128 v15; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B62B63 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_ServantStatusDialog__Init_b__130_0__, v5);
    sub_1BE4ACC(&ServantStatusDialog_TypeInfo, v6);
    byte_4B62B63 = 1;
  }
  v15 = 0uLL;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
  {
    v9 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v9 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v15,
                                               0LL);
    v11 = this->fields.pushButton;
    if ( !v11 )
LABEL_18:
      sub_1BE4D28(baseObject, v8);
    v11->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v15;
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
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v12);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0LL);
  v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__130_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v14, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  PartyOrganizationUtility_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B62B70 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62B70 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    p_battleChr = (PartyOrganizationUtility_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1BE4A70(p_battleChr, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
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
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v26; // x21

  if ( (byte_4B62B8A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectCharaGraph__, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog__InitList_b__172_0__, v11);
    byte_4B62B8A = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.openCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v14 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v15);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v14;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int64_t)v14,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ServantStatusCharaGraphListViewManager__SetMode_33047576(charaGraphListViewManager, 2, v24);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__172_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v26, 0LL);
      return;
    }
LABEL_10:
    sub_1BE4D28(v16, v17);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v11; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *supportRandomLimitCountList; // x8
  ServantCostumeMaster_o *v14; // x21
  signed int v15; // w25
  unsigned int max_length; // w9
  int32_t v17; // w22
  BalanceConfig_c *v18; // x0
  ServantCostumeEntity_o *v19; // x23
  struct ServantStatusListViewItem_o *v20; // x8
  struct UserServantEntity_o *v21; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  ServantLimitAddEntity_o *v24; // x23
  struct ServantStatusListViewItem_o *v25; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v27; // x23
  __int64 v28; // x24
  struct ServantStatusListViewItem_o *v29; // x8
  ServantCostumeEntity_o *v31; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B62BB8 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BE4ACC(&ServantCostumeEntity_TypeInfo, v7);
    sub_1BE4ACC(&ServantLimitAddEntity_TypeInfo, v8);
    byte_4B62BB8 = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1BE4D28(RandomGroupIndex, v11);
  supportRandomLimitCountList = mainInfo->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    v14 = RandomGroupIndex;
    v15 = 0;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( v15 > (int)max_length )
        break;
      if ( v15 )
      {
        if ( v15 - 1 >= max_length )
          sub_1BE4D30(RandomGroupIndex, v11);
        v17 = supportRandomLimitCountList->m_Items[v15];
      }
      else
      {
        v17 = 0;
      }
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( v17 <= v18->static_fields->ServantLimitMax )
      {
        v24 = (ServantLimitAddEntity_o *)sub_1BE4D18(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v24, 0LL);
        entity = v24;
        v25 = this->fields.mainInfo;
        if ( !v25 )
          goto LABEL_35;
        userSvtEntity = v25->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_35;
        v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v28;
        *(_QWORD *)&v34.fields.fakeValue = v27;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                       v34,
                                                       0LL);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v17,
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
        v19 = (ServantCostumeEntity_o *)sub_1BE4D18(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v19, 0LL);
        v31 = v19;
        v20 = this->fields.mainInfo;
        if ( !v20 )
          goto LABEL_35;
        v21 = v20->fields.userSvtEntity;
        if ( !v21 )
          goto LABEL_35;
        v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v23;
        *(_QWORD *)&v33.fields.fakeValue = v22;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                       v33,
                                                       0LL);
        if ( !v14 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v14,
                                                       &v31,
                                                       (int32_t)RandomGroupIndex,
                                                       v17,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_35;
          if ( v31->fields.groupIndex )
            return 1;
        }
      }
      v29 = this->fields.mainInfo;
      if ( v29 )
      {
        supportRandomLimitCountList = v29->fields.supportRandomLimitCountList;
        ++v15;
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
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B62B9C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AssetData__TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog__LoadTransformedResource_b__194_0__, v3);
    byte_4B62B9C = 1;
  }
  v4 = (System_Action_object__o *)sub_1BE4D18(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_0__,
    0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B62B94 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickCancel__, method);
    byte_4B62B94 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ServantStatusDialog__Exit(this, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantStatusListViewItem_o *v6; // x8

  v2 = this;
  if ( (byte_4B62B9B & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnClickChangeTransform__, method);
    byte_4B62B9B = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( mainInfo )
    {
      if ( !mainInfo->fields._IsTransformServant_k__BackingField )
        return;
      v4 = Method_ServantStatusDialog_OnClickChangeTransform__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeTransform__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1BE4D28(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickChangeVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B62BB9 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickChangeVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BB9 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.changeVoiceFlag != type )
      {
        v10 = Method_ServantStatusDialog_OnClickChangeVoice__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeVoice__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickChangeVoice__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
        return;
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B62BBC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickChoice__, method);
    byte_4B62BBC = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BE4D28(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4B62BAA & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickCommandCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BAA = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BE4D30(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B62BA9 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickCommandCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BA9 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.commandCardLimitCount != dispLv )
      {
        v10 = Method_ServantStatusDialog_OnClickCommandCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaLevel__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
        return;
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v17; // x20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  System_Action_o *v22; // x23
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v25; // x20
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t kind; // w24
  Il2CppObject *v29; // x21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  System_Action_o *v31; // x23
  int32_t v32; // w1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v36; // x21
  bool v37; // w3
  CommonUI_o *v38; // x0
  CommandCodeEntity_o *v39; // x2

  v4 = this;
  if ( (byte_4B62BB1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickCommandCodeShow__, v9);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectEquipStatus__, v11);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_4B62BB1 = 1;
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
      v17 = UserCommandCodeEntity;
      v18 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v21,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30889468((CommonUI_o *)Instance, 20, v17, v21, v22, 0LL);
        return;
      }
LABEL_27:
      sub_1BE4D28(this, *(_QWORD *)&index);
    }
    goto LABEL_17;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0LL);
    if ( CommandCodeEntity )
    {
      v25 = CommandCodeEntity;
      v26 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      kind = v4->fields.kind;
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v29 )
          goto LABEL_27;
        v32 = 22;
      }
      else
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v29 )
          goto LABEL_27;
        if ( kind != 5 )
        {
          v32 = 25;
          v38 = (CommonUI_o *)v29;
          v39 = v25;
          v37 = 0;
          goto LABEL_26;
        }
        v32 = 23;
      }
      v37 = 1;
      v38 = (CommonUI_o *)v29;
      v39 = v25;
LABEL_26:
      CommonUI__OpenServantEquipStatusDialog_30890220(v38, v32, v39, v37, v30, v31, 0LL);
      return;
    }
  }
LABEL_17:
  v33 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v36 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v36,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4B62BAD & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickFaceCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BAD = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BE4D30(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B62BAC & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickFaceCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BAC = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.iconLimitCount != dispLv )
      {
        v10 = Method_ServantStatusDialog_OnClickFaceCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaLevel__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
        return;
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v26; // q1
  int64_t favoriteUserSvtId; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v33; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v36; // x24
  Il2CppObject *Master_object; // x22
  System_String_o *v38; // x20
  __int64 v39; // x21
  int32_t Rarity; // w25
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  ServantStatusDialog_o *v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  ServantStatusDialog_o *v54; // x25
  int32_t v55; // w0
  Il2CppClass *v56; // x8
  int32_t v57; // w23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  ServantStatusDialog_o *v64; // x23
  struct ServantStatusListViewItem_o *v65; // x8
  int32_t v66; // w0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  ServantStatusDialog_o *v73; // x23
  struct ServantStatusListViewItem_o *v74; // x8
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  ServantStatusDialog_o *v81; // x23
  struct ServantStatusListViewItem_o *v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  int32_t v84; // w23
  int32_t v85; // w0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  ServantStatusDialog_o *v92; // x22
  System_String_o *v93; // x20
  System_String_o *v94; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  System_String_o *v98; // x24
  CommonConfirmDialog_ClickDelegate_o *v99; // x25
  struct ServantStatusListViewItem_o *v100; // x20
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q0
  const MethodInfo *v103; // x1
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v2 = this;
  if ( (byte_4B62BBD & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&object___TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&Rarity_TypeInfo, v14);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickFavorite__, v15);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&StringLiteral_12053/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_1BE4ACC(&StringLiteral_12051/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_1BE4ACC(&StringLiteral_12050/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_1BE4ACC(&StringLiteral_12054/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&StringLiteral_12052/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_4B62BBD = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_77;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v107.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v106 = v107;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v106, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickFavorite__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
      return;
    }
    v30 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickFavorite__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v100 = v2->fields.mainInfo;
      if ( v100 )
      {
        v101 = v100->fields.userSvtEntity;
        if ( v101 )
        {
          v102 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v107.fields.fakeValue = v102;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v105 = v107;
          v100->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                             &v105,
                                             0LL);
          ServantStatusDialog__SetMark(v2, v103);
          return;
        }
      }
      goto LABEL_77;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_77;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_77;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_77;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_77;
    v33 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v108.fields.currentCryptoKey = klass;
    *(_QWORD *)&v108.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v108, 0LL);
    if ( !v33 )
      goto LABEL_77;
    v36 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                               (int32_t)this,
                               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12053/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v39 = sub_1BE4B74(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v39 )
      goto LABEL_77;
    v47 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v39 + 24) )
        goto LABEL_78;
      *(_QWORD *)(v39 + 32) = v47;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v47, v41, v42, v43, v44, v45, v46);
      if ( !v36 )
        goto LABEL_77;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v36, 0LL);
      v54 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v39 + 24) <= 1u )
          goto LABEL_78;
        *(_QWORD *)(v39 + 40) = v54;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 40), (int64_t)v54, v48, v49, v50, v51, v52, v53);
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v36->fields.id, 0LL);
        v56 = Entity[6].klass;
        *(_QWORD *)&v109.fields.fakeValue = Entity[6].monitor;
        v57 = v55;
        *(_QWORD *)&v109.fields.currentCryptoKey = v56;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v109, 0LL);
        if ( !Master_object )
          goto LABEL_77;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v57,
                                          (int32_t)this,
                                          0LL);
        v64 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v39 + 24) <= 2u )
            goto LABEL_78;
          *(_QWORD *)(v39 + 48) = v64;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 48), (int64_t)v64, v58, v59, v60, v61, v62, v63);
          v65 = v2->fields.mainInfo;
          if ( !v65 )
            goto LABEL_77;
          this = (ServantStatusDialog_o *)v65->fields.userSvtEntity;
          if ( !this )
            goto LABEL_77;
          v66 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v66, 0LL);
          v73 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v39 + 24) <= 3u )
              goto LABEL_78;
            *(_QWORD *)(v39 + 56) = v73;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 56), (int64_t)v73, v67, v68, v69, v70, v71, v72);
            v74 = v2->fields.mainInfo;
            if ( !v74 )
              goto LABEL_77;
            this = (ServantStatusDialog_o *)v74->fields.svtEntity;
            if ( !this )
              goto LABEL_77;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v81 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v39 + 24) <= 4u )
                goto LABEL_78;
              *(_QWORD *)(v39 + 64) = v81;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 64), (int64_t)v81, v75, v76, v77, v78, v79, v80);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_77;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v82 = v2->fields.mainInfo;
              if ( !v82 )
                goto LABEL_77;
              v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v82->fields.userSvtEntity;
              if ( !v83 )
                goto LABEL_77;
              v84 = (int)this;
              v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v83[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)Master_object,
                                                v84,
                                                v85,
                                                0LL);
              v92 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v39 + 24) > 5u )
                {
                  *(_QWORD *)(v39 + 72) = v92;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 72), (int64_t)v92, v86, v87, v88, v89, v90, v91);
                  this = (ServantStatusDialog_o *)System_String__Format_62713316(v38, (System_Object_array *)v39, 0LL);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_77;
                  v93 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_77;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12052/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v93 = System_String__Concat_62698808(v93, v94, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v99,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30873636(
                      (CommonUI_o *)Instance,
                      v96,
                      v93,
                      v97,
                      v98,
                      v99,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_77:
                  sub_1BE4D28(this, method);
                }
LABEL_78:
                sub_1BE4D30(this, method);
              }
            }
          }
        }
      }
    }
    v104 = sub_1BE4D4C();
    sub_1BE4BF4(v104, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B62BBB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickLock__, method);
    byte_4B62BBB = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BE4D28(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
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
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4B62BB0 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BB0 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( costumeIds->max_length <= costumeIndex )
          sub_1BE4D30(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B62BAF & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B62BAF = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.portraitLimitCount != dispLv )
      {
        v10 = Method_ServantStatusDialog_OnClickPortraitCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaLevel__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0LL);
        return;
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v24; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v26; // q1
  int64_t pushUserSvtId; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct ServantStatusListViewItem_o *v30; // x8
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v34; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v37; // x24
  Il2CppObject *Master_object; // x22
  System_String_o *v39; // x20
  __int64 v40; // x21
  int32_t Rarity; // w25
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ServantStatusDialog_o *v48; // x25
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  ServantStatusDialog_o *v55; // x25
  int32_t v56; // w0
  Il2CppClass *v57; // x8
  int32_t v58; // w23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  ServantStatusDialog_o *v65; // x23
  struct ServantStatusListViewItem_o *v66; // x8
  int32_t v67; // w0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  ServantStatusDialog_o *v74; // x23
  struct ServantStatusListViewItem_o *v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  ServantStatusDialog_o *v82; // x23
  struct ServantStatusListViewItem_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  int32_t v85; // w23
  int32_t v86; // w0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  ServantStatusDialog_o *v93; // x22
  System_String_o *v94; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  System_String_o *v98; // x24
  CommonConfirmDialog_ClickDelegate_o *v99; // x25
  struct ServantStatusListViewItem_o *v100; // x20
  struct UserServantEntity_o *v101; // x8
  __int128 v102; // q0
  __int64 v103; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v2 = this;
  if ( (byte_4B62BBF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&object___TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&Rarity_TypeInfo, v14);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickPush__, v15);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnConfirmSelectPush__, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_1BE4ACC(&StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_1BE4ACC(&StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_4B62BBF = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_72;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v24 = v2->fields.mainInfo;
    if ( !v24 )
      goto LABEL_72;
    userSvtEntity = v24->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_72;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v24->fields.pushUserSvtId;
    *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v106.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v105 = v106;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v105, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickPush__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
      v30 = v2->fields.mainInfo;
      if ( v30 )
      {
        v30->fields.pushUserSvtId = 0LL;
LABEL_71:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_72;
    }
    v31 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickPush__);
    v32 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v100 = v2->fields.mainInfo;
      if ( v100 )
      {
        v101 = v100->fields.userSvtEntity;
        if ( v101 )
        {
          v102 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
          *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v106.fields.fakeValue = v102;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v104 = v106;
          v100->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v104, 0LL);
          goto LABEL_71;
        }
      }
LABEL_72:
      sub_1BE4D28(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_72;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_72;
    v34 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v107.fields.currentCryptoKey = klass;
    *(_QWORD *)&v107.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v107, 0LL);
    if ( !v34 )
      goto LABEL_72;
    v37 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                               (int32_t)this,
                               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12064/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v40 = sub_1BE4B74(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v40 )
      goto LABEL_72;
    v48 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v40 + 24) )
        goto LABEL_73;
      *(_QWORD *)(v40 + 32) = v48;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v48, v42, v43, v44, v45, v46, v47);
      if ( !v37 )
        goto LABEL_72;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v37, 0LL);
      v55 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v40 + 24) <= 1u )
          goto LABEL_73;
        *(_QWORD *)(v40 + 40) = v55;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 40), (int64_t)v55, v49, v50, v51, v52, v53, v54);
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v37->fields.id, 0LL);
        v57 = Entity[6].klass;
        *(_QWORD *)&v108.fields.fakeValue = Entity[6].monitor;
        v58 = v56;
        *(_QWORD *)&v108.fields.currentCryptoKey = v57;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v108, 0LL);
        if ( !Master_object )
          goto LABEL_72;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v58,
                                          (int32_t)this,
                                          0LL);
        v65 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v40 + 24) <= 2u )
            goto LABEL_73;
          *(_QWORD *)(v40 + 48) = v65;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 48), (int64_t)v65, v59, v60, v61, v62, v63, v64);
          v66 = v2->fields.mainInfo;
          if ( !v66 )
            goto LABEL_72;
          this = (ServantStatusDialog_o *)v66->fields.userSvtEntity;
          if ( !this )
            goto LABEL_72;
          v67 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v67, 0LL);
          v74 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v40 + 24) <= 3u )
              goto LABEL_73;
            *(_QWORD *)(v40 + 56) = v74;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 56), (int64_t)v74, v68, v69, v70, v71, v72, v73);
            v75 = v2->fields.mainInfo;
            if ( !v75 )
              goto LABEL_72;
            this = (ServantStatusDialog_o *)v75->fields.svtEntity;
            if ( !this )
              goto LABEL_72;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v82 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v40 + 24) <= 4u )
                goto LABEL_73;
              *(_QWORD *)(v40 + 64) = v82;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 64), (int64_t)v82, v76, v77, v78, v79, v80, v81);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_72;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v83 = v2->fields.mainInfo;
              if ( !v83 )
                goto LABEL_72;
              v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v83->fields.userSvtEntity;
              if ( !v84 )
                goto LABEL_72;
              v85 = (int)this;
              v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v84[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)Master_object,
                                                v85,
                                                v86,
                                                0LL);
              v93 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v40 + 24) > 5u )
                {
                  *(_QWORD *)(v40 + 72) = v93;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 72), (int64_t)v93, v87, v88, v89, v90, v91, v92);
                  v94 = System_String__Format_62713316(v39, (System_Object_array *)v40, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v99,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30873636(
                      (CommonUI_o *)Instance,
                      v96,
                      v94,
                      v97,
                      v98,
                      v99,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_72;
                }
LABEL_73:
                sub_1BE4D30(this, method);
              }
            }
          }
        }
      }
    }
    v103 = sub_1BE4D4C();
    sub_1BE4BF4(v103, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_4B62BB6 & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v5);
    byte_4B62BB6 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v6 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v8);
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

  if ( (byte_4B62BB4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__, *(_QWORD *)&index);
    byte_4B62BB4 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
  void *Instance; // x0
  __int64 v25; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v27; // x21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t QuestType; // w22
  QuestEntity_o *v31; // x23
  System_String_o *v32; // x20
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v41; // x21
  Il2CppObject *v42; // x21
  System_String_o *v43; // x0
  __int64 *v44; // x8
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x20
  System_String_o *v48; // x23
  System_String_o *v49; // x24
  CommonConfirmDialog_ClickDelegate_o *v50; // x25

  if ( (byte_4B62BB2 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickServantQuest__, v9);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnConfirmServantQuest__, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, v15);
    sub_1BE4ACC(&StringLiteral_12096/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v16);
    sub_1BE4ACC(&StringLiteral_12098/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v17);
    sub_1BE4ACC(&StringLiteral_12099/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v18);
    sub_1BE4ACC(&StringLiteral_12092/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v19);
    sub_1BE4ACC(&StringLiteral_12095/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v20);
    sub_1BE4ACC(&StringLiteral_12097/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v21);
    sub_1BE4ACC(&StringLiteral_12093/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v22);
    sub_1BE4ACC(&StringLiteral_12094/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v23);
    byte_4B62BB2 = 1;
  }
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_20;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_20:
    v38 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickServantQuest__);
    v39 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v41 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v41,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v41, 0LL);
      return;
    }
    goto LABEL_35;
  }
  v27 = QuestInfo;
  v28 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickServantQuest__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v27, 0LL);
  Instance = MapControl_QuestInfo__GetMine(v27, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v31 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v32 = (System_String_o *)Instance;
  if ( !System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25327/*"{0}"*/, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (void *)QuestEntity__getServantId(v31, 0LL),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_35:
    sub_1BE4D28(Instance, v25);
  }
  BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
  v32 = System_String__Format(v32, BattleName, 0LL);
LABEL_16:
  if ( QuestType == 3 )
  {
    warId = v27->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_30:
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12097/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v44 = &StringLiteral_12096/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_33;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_30;
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v44 = &StringLiteral_12094/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  }
  else
  {
    v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
    v44 = &StringLiteral_12098/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  }
LABEL_33:
  v45 = v43;
  v46 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
  v47 = System_String__Format(v46, (Il2CppObject *)v32, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v50,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v42 )
    goto LABEL_35;
  CommonUI__OpenConfirmDialog_30873636((CommonUI_o *)v42, v45, v47, v48, v49, v50, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B62BA1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickTabBattle__, method);
    byte_4B62BA1 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B62BA0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickTabProfile__, method);
    byte_4B62BA0 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B62B9F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickTabStatus__, method);
    byte_4B62B9F = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B62BA2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickTabVoice__, method);
    byte_4B62BA2 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
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
  __int64 v17; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v27; // x21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v32; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  long double v35; // q0
  __int64 v36; // x8
  __int64 v37; // x0
  CommonUI_o *v38; // x22
  System_String_o *Empty; // x21
  System_String_o *v40; // x23
  System_String_o *v41; // x24
  CommonConfirmDialog_ClickDelegate_o *v42; // x25

  if ( (byte_4B62BB3 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnClickTdSpeed__, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BE4ACC(&ServantStatusListViewItemDrawButton_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_1BE4ACC(&string_TypeInfo, v11);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__, v12);
    sub_1BE4ACC(&ServantStatusDialog___c__DisplayClass217_0_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_12101/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_1BE4ACC(&StringLiteral_12102/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_1BE4ACC(&StringLiteral_12103/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_4B62BB3 = 1;
  }
  v17 = sub_1BE4D18(ServantStatusDialog___c__DisplayClass217_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass217_0___ctor((ServantStatusDialog___c__DisplayClass217_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_24;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v27, 0LL);
        return;
      }
LABEL_24:
      sub_1BE4D28(mainInfo, v19);
    }
    v28 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnClickTdSpeed__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v32 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v17 + 24), 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v34 = System_String__Format_62713180(v33, TDSpeedLocalization, v32, 0LL);
    v36 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C369A8(v35);
    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C369A8(v35);
    v38 = **(CommonUI_o ***)(v37 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v42 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v42,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v38 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v38, Empty, v34, v40, v41, v42, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v10; // q1
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B62BBE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B62BBE = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BE4D28(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v10; // q1
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B62BC0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B62BC0 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BE4D28(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
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
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v16; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v19; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v21; // x21
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  Il2CppObject *v24; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_4B62BBA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v5);
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BE4ACC(&Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v12);
    byte_4B62BBA = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v19, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v21, 0LL);
        return;
      }
    }
    goto LABEL_25;
  }
  v13 = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v13, this->fields.questId, 0LL);
  v16 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v13 = (Il2CppObject *)v16->fields._WarInfo_k__BackingField;
      if ( !v13 )
        goto LABEL_25;
      LODWORD(v16) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v13, 0LL);
    }
    else
    {
      LODWORD(v16) = 0;
    }
  }
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v13, (int32_t)v16, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B62BCB )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v22);
    byte_4B62BCB = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, 0LL);
  if ( !v24 )
LABEL_25:
    sub_1BE4D28(v13, v14);
  CommonUI__maskFadeout((CommonUI_o *)v24, 1, DEFAULT_FADE_TIME, v27, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4B62B95 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62B95 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B62BC3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_3207/*"Base/TitlePrefab/BackObj/BtnBg"*/, v3);
    byte_4B62BC3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3207/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_1BE4D28(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x2

  if ( (byte_4B62BA3 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    byte_4B62BA3 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v7 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      v8);
    if ( !battleTabListViewManager
      || (battleTabListViewManager->fields.callbackFunc = v7,
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&battleTabListViewManager->fields.callbackFunc,
            (int64_t)v7,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          ServantStatusBattleListViewManager__SetMode_33033556(battleTabListViewManager, 1, v17, v18),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1BE4D28(v9, v10);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v20 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnSelectBattle__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v22);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4B62B90 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B62B90 = 1;
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
    ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BE4D28(gameObject, v8);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4B62B8E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B62B8E = 1;
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
    ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BE4D28(gameObject, v8);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B62B92 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_4B62B92 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1BE4D28(v7, v8);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v6, 0LL);
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
  __int64 v26; // x1
  __int64 v27; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v29; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  struct ServantStatusListViewItem_o *v33; // x8
  int64_t equipTargetId1; // x21
  CommonUI_o *v35; // x20
  ServantStatusDialog_EndDelegate_o *v36; // x22
  System_Action_o *v37; // x23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v40; // q1
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v44; // x8
  struct ServantLeaderInfo_o *v45; // x8
  EquipTargetInfo_o *v46; // x21
  CommonUI_o *v47; // x20
  ServantStatusDialog_EndDelegate_o *v48; // x22
  System_Action_o *v49; // x23
  int32_t v50; // w1
  ServantStatusListViewManager_o *v51; // x20
  ServantStatusListViewManager_CallbackFunc_o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 *v59; // x8
  struct UISprite_o *v60; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v62; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v64; // x21
  struct ServantStatusListViewItem_o *v65; // x8
  struct ServantLeaderInfo_o *v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4B62B8D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v7);
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_1BE4ACC(&Method_ServantStatusDialog_Exit__, v12);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectEquipStatus__, v13);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1BE4ACC(&StringLiteral_12833/*"ServantLvExceed"*/, v17);
    sub_1BE4ACC(&StringLiteral_12837/*"ServantSkillCombine"*/, v18);
    sub_1BE4ACC(&StringLiteral_12834/*"ServantNpCombine"*/, v19);
    sub_1BE4ACC(&StringLiteral_4692/*"CommandCardEquip"*/, v20);
    sub_1BE4ACC(&StringLiteral_12821/*"ServantEQCombine"*/, v21);
    sub_1BE4ACC(&StringLiteral_12818/*"ServantCombine"*/, v22);
    sub_1BE4ACC(&StringLiteral_6989/*"FriendshipExceed"*/, v23);
    sub_1BE4ACC(&StringLiteral_12831/*"ServantLimitCountUp"*/, v24);
    sub_1BE4ACC(&StringLiteral_2421/*"AppendSkillCombine"*/, v25);
    sub_1BE4ACC(&StringLiteral_4693/*"CommandCardExceed"*/, v26);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&StringLiteral_2422/*"AppendSkillExchange"*/, v27);
    byte_4B62B8D = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v29 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v29, 0LL);
        return;
      }
LABEL_80:
      sub_1BE4D28(this, *(_QWORD *)&result);
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
          v31 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v31 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnSelectStatus__);
          v32 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v31, v31[4]);
          OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = v6->fields.mainInfo;
          if ( !v33 )
            goto LABEL_80;
          equipTargetId1 = v33->fields.equipTargetId1;
          v35 = (CommonUI_o *)this;
          v36 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v36,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v37 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(v37, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v35 )
            goto LABEL_80;
          CommonUI__OpenServantEquipStatusDialog(v35, 11, equipTargetId1, 1, v36, v37, 0LL);
        }
        else
        {
          servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
          if ( !servantLeaderInfo )
            goto LABEL_29;
          equipTarget1 = servantLeaderInfo->fields.equipTarget1;
          if ( !equipTarget1 )
            goto LABEL_29;
          v40 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
          *(_OWORD *)&v68.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v68;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v67, 0LL) >= 1 )
          {
            v41 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v41 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnSelectStatus__);
            v42 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v41, v41[4]);
            OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
            kind = v6->fields.kind;
            if ( kind == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v44 = v6->fields.mainInfo;
              if ( !v44 )
                goto LABEL_80;
              v45 = v44->fields.servantLeaderInfo;
              if ( !v45 )
                goto LABEL_80;
              v46 = v45->fields.equipTarget1;
              v47 = (CommonUI_o *)this;
              v48 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v48,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v49 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(v49, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v47 )
                goto LABEL_80;
              v50 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v65 = v6->fields.mainInfo;
              if ( !v65 )
                goto LABEL_80;
              v66 = v65->fields.servantLeaderInfo;
              if ( !v66 )
                goto LABEL_80;
              v46 = v66->fields.equipTarget1;
              v47 = (CommonUI_o *)this;
              v48 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v48,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v49 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(v49, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v47 )
                goto LABEL_80;
              if ( kind == 5 )
                v50 = 14;
              else
                v50 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_30889236(v47, v50, v46, v48, v49, 0LL);
          }
          else
          {
LABEL_29:
            v51 = v6->fields.statusTabListViewManager;
            v52 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v51 )
              goto LABEL_80;
            ServantStatusListViewManager__SetMode(v51, 1, v52, 0LL);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12818/*"ServantCombine"*/;
        goto LABEL_66;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12821/*"ServantEQCombine"*/;
        goto LABEL_66;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12837/*"ServantSkillCombine"*/;
        goto LABEL_66;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12831/*"ServantLimitCountUp"*/;
        goto LABEL_66;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_6989/*"FriendshipExceed"*/;
        goto LABEL_66;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_4692/*"CommandCardEquip"*/;
        goto LABEL_66;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_4693/*"CommandCardExceed"*/;
        goto LABEL_66;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_2421/*"AppendSkillCombine"*/;
        goto LABEL_66;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_2422/*"AppendSkillExchange"*/;
        goto LABEL_66;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12834/*"ServantNpCombine"*/;
        goto LABEL_66;
      case 23:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_80;
        v59 = &StringLiteral_12833/*"ServantLvExceed"*/;
LABEL_66:
        v60 = (struct UISprite_o *)*v59;
        this->fields.battleSprite = (struct UISprite_o *)*v59;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.battleSprite,
          (int64_t)v60,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v62 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v62 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v62->static_fields->DEFAULT_FADE_TIME;
        v64 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v64, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_80;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v64, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v14; // x23
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v19; // x23
  ServantStatusVoiceListViewItem_o *v20; // x25
  int32_t v21; // w22
  int32_t v22; // w21
  System_String_o *v23; // x24
  System_String_o *LabelName; // x0
  System_String_o *v25; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v27; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v29; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v31; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B62B93 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_16330/*"_"*/, v12);
    byte_4B62B93 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !voiceTabListViewManager )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v14, 0LL);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v17);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v19 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v20 = (ServantStatusVoiceListViewItem_o *)Instance;
        v21 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
        if ( !MasterData_object )
          goto LABEL_58;
        v22 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v21,
                        (int32_t)Instance,
                        0LL);
        v23 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v20, 0LL);
        v25 = System_String__Concat_62710068(v23, (System_String_o *)StringLiteral_16330/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v20, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v20->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL);
                  if ( v19 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40827368(
                                      (ServantVoiceMaster_o *)v19,
                                      v21,
                                      v22,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_1BE4D28(Instance, v16);
                }
                if ( !v19 )
                  goto LABEL_58;
                if ( !v20->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v19, v21, v22, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v19,
                                  v21,
                                  v22,
                                  v25,
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
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
                  if ( v19 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(
                                      (ServantVoiceMaster_o *)v19,
                                      v21,
                                      (int32_t)Instance,
                                      0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_33104944(this, v21, v22, HomeVoiceList, result, v27);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v19 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                    (ServantVoiceMaster_o *)v19,
                                    v21,
                                    v22,
                                    v25,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v20->fields.genderFlag && !v20->fields.voiceLabelSpecification )
              {
                if ( v19 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                    (ServantVoiceMaster_o *)v19,
                                    v21,
                                    v22,
                                    2,
                                    1,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v19 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v19, v21, v22, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v19 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v21, v22, BattleVoiceList, result, v29);
            return;
          case 7:
            if ( !v19 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v21, v22, NpVoiceList, result, v31);
            return;
          case 8:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                              (ServantVoiceMaster_o *)v19,
                              v21,
                              v22,
                              v25,
                              0LL);
            goto LABEL_52;
          case 9:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_40825340(
                              (ServantVoiceMaster_o *)v19,
                              (int32_t)Instance,
                              v21,
                              v22,
                              v25,
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
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v28; // x22
  __int64 v29; // x23
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  long double v32; // q0
  __int64 v33; // x0
  __int64 v34; // x0
  CommonUI_o *v35; // x22
  System_String_o *v36; // x23
  CommonConfirmDialog_ClickDelegate_o *v37; // x0
  __int64 *v38; // x8
  struct ServantStatusListViewItem_o *v39; // x8
  struct UserServantEntity_o *v40; // x9
  __int64 v41; // x22
  __int64 v42; // x23
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  long double v45; // q0
  __int64 v46; // x0
  __int64 v47; // x0
  CommonConfirmDialog_ClickDelegate_o *v48; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B62B99 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v9);
    sub_1BE4ACC(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__, v10);
    sub_1BE4ACC(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v12);
    sub_1BE4ACC(&StringLiteral_12070/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v13);
    sub_1BE4ACC(&StringLiteral_12071/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v14);
    sub_1BE4ACC(&StringLiteral_12068/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v15);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v16);
    sub_1BE4ACC(&StringLiteral_12067/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v17);
    byte_4B62B99 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
        v29 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v28 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v29;
        *(_QWORD *)&v49.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v49, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v30 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
      v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1C369A8(v32);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C369A8(v32);
      v35 = **(CommonUI_o ***)(v34 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__;
LABEL_44:
      v48 = v37;
      CommonConfirmDialog_ClickDelegate___ctor(v37, (Il2CppObject *)this, *v38, 0LL);
      if ( !v35 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30874076(
        v35,
        (System_String_o *)StringLiteral_1/*""*/,
        v36,
        v18,
        v19,
        v48,
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
      v39 = this->fields.mainInfo;
      if ( !v39 )
        return;
      v40 = v39->fields.userSvtEntity;
      if ( !v40 )
      {
LABEL_34:
        if ( !v39->fields.isEnableSupportRandomSetting )
          return;
        v43 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v43 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v44 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
        v46 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
          v46 = sub_1C369A8(v45);
        v47 = *(_QWORD *)(*(_QWORD *)(v46 + 192) + 16LL);
        if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
          v47 = sub_1C369A8(v45);
        v35 = **(CommonUI_o ***)(v47 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__;
        goto LABEL_44;
      }
      v42 = *(_QWORD *)&v40->fields.limitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v40->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v42;
      *(_QWORD *)&v50.fields.fakeValue = v41;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v50, 0LL) )
      {
        v39 = this->fields.mainInfo;
        if ( !v39 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v20 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BE4AE4(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v23 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v23, 0LL);
        return;
      }
LABEL_47:
      sub_1BE4D28(v24, v25);
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
  ServantStatusListViewItem_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4B62B49 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B49 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)canMoveCombine,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void __fastcall ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B62B68 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, callback);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_13693/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v7);
    byte_4B62B68 = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38593888(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13693/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1BE4D28(v9, v10);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v9, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33072512(
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
  ServantStatusListViewItem_o *v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4B62B4A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B4A = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)canMoveCombine,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33072720(
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
  ServantStatusListViewItem_o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4B62B4B & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B4B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)partyItem,
    member,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34027052(v20, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33072916(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4B62B4C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B62B4C = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BE4D28(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)*v17);
  ServantStatusDialog__Open_33073196(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33073196(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w21
  ServantStatusListViewItem_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B62B50 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B50 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(v24, userSvtEntity, 0LL, 0LL, 0, v23, v23, 0, 0LL);
  this->fields.mainInfo = v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33073444(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4B62B4D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B62B4D = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BE4D28(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)*v17);
  ServantStatusDialog__Open_33073724(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33073724(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B62B51 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B51 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.formationCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(v24, userSvtEntity, 0LL, 0LL, callback != 0LL, v23, v23, 0, 0LL);
  this->fields.mainInfo = v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33073976(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v19; // x6

  if ( (byte_4B62B4E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B62B4E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BE4D28(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)*v17);
  ServantStatusDialog__Open_33074260(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33074260(
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
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4B62B52 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B52 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)canMoveCombine,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(v25, userSvtEntity, 0LL, 0LL, 0, v24, v24, canMoveCombine, 0LL);
  this->fields.mainInfo = v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33074520(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v19; // x6

  if ( (byte_4B62B4F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B62B4F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BE4D28(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)*v17);
  ServantStatusDialog__Open_33074804(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33074804(
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
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4B62B53 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B53 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)canMoveCombine,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(
    v25,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v24,
    v24,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33075164(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v17; // x7

  if ( (byte_4B62B54 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62B54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v15);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_33075368(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33075368(
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
  unsigned int v21; // w8
  bool v22; // cc
  unsigned __int64 v23; // x8
  char v24; // w9
  char v25; // w23
  ServantStatusListViewItem_o *v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_4B62B55 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B55 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.kind - 2;
  v22 = v21 > 0x23;
  v23 = 0x677FFFFFEuLL >> v21;
  v24 = v22;
  v25 = v24 | v23 & 1;
  v26 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(v26, userSvtEntity, equipIdList, questRestrictionInfo, 0, v25, v25, 0, 0LL);
  this->fields.mainInfo = v26;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  ServantStatusDialog__Init(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33075632(
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
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w24
  ServantStatusListViewItem_o *v28; // x25
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4B62B56 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B56 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = this->fields.kind - 2;
  v24 = v23 > 0x23;
  v25 = 0x677FFFFFEuLL >> v23;
  v26 = v24;
  v27 = v26 | v25 & 1;
  v28 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v27,
    v27,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33075908(
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
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w25
  ServantStatusListViewItem_o *v28; // x26
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4B62B57 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B57 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = this->fields.kind - 2;
  v24 = v23 > 0x23;
  v25 = 0x677FFFFFEuLL >> v23;
  v26 = v24;
  v27 = v26 | v25 & 1;
  v28 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34028692(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v27,
    v27,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33076188(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v18; // x6

  if ( (byte_4B62B58 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B62B58 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_33076400(this, kind, (UserServantEntity_o *)Entity, isUse, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33076400(
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
  ServantStatusListViewItem_o *v20; // x22
  int64_t v21; // x2
  char v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4B62B59 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B59 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtEntity,
    isUse,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34031076(v20, userSvtEntity, isUse, 0LL);
  this->fields.mainInfo = v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33076592(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w21
  ServantStatusListViewItem_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B62B5A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34032920(v24, userSvtCollectionEntity, 0, v23, 0LL);
  this->fields.mainInfo = v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33076816(
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
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4B62B5B & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    imageLimitCount,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34034560(v25, userSvtCollectionEntity, imageLimitCount, 0, v24, 0LL);
  this->fields.mainInfo = v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33077056(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4B62B5C & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5C = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.resultCallbackFunc,
    (int64_t)callback,
    (int64_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34032920(v24, userSvtCollectionEntity, callback != 0LL, v23, 0LL);
  this->fields.mainInfo = v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33077284(
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
  ServantStatusListViewItem_o *v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4B62B5D & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)servantLeaderInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34035984(v19, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33077468(
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
  ServantStatusListViewItem_o *v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4B62B5E & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)equipTargetInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34037672(v19, equipTargetInfo, kind == 19, 0LL);
  this->fields.mainInfo = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33077652(
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
  ServantStatusListViewItem_o *v20; // x22
  int64_t v21; // x2
  char v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4B62B5F & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B5F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)commandCodeEntity,
    isUse,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)openCallback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34038500(v20, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33077844(
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
  ServantStatusListViewItem_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4B62B60 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B60 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34038876(v19, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33078020(
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
  ServantStatusListViewItem_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4B62B61 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B61 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.individualityCallbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34038876(v19, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33078196(
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
  ServantStatusListViewItem_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4B62B62 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B62B62 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)userCommandCodeCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.openCallbackFunc,
    (int64_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1BE4D18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34040000(v19, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *battleChrCamera; // x21
  __int64 v25; // x1
  __int64 transform; // x0
  UnityEngine_Component_o *v27; // x21
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v30; // s8
  int32_t v31; // w23
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  const MethodInfo *v34; // x1
  int32_t v35; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  struct UnityEngine_GameObject_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x22
  float32x2_t v45; // d8
  float v46; // s9
  float v47; // s2 OVERLAPPED
  unsigned __int64 v48; // d0 OVERLAPPED
  int v49; // s1
  UnityEngine_Transform_o *v50; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v54; // x26
  UnityEngine_Transform_o *v55; // x27
  float Item; // s8
  float v57; // s9
  float v58; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v60; // x24
  Il2CppObject *v61; // x23
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int32_t v68; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v70; // x21
  System_String_o *v71; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B62B77 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v16);
    sub_1BE4ACC(&NGUITools_TypeInfo, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BE4ACC(&StringLiteral_3258/*"Battle2D"*/, v22);
    sub_1BE4ACC(&StringLiteral_16819/*"_y0"*/, v23);
    byte_4B62B77 = 1;
  }
  v71 = 0LL;
  entity = 0LL;
  if ( !this->fields.isBattlePlay )
  {
    battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleChrCamera, 0LL, 0LL) )
    {
      transform = (__int64)this->fields.battleChrCamera;
      this->fields.isBattlePlay = 1;
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v27 = (UnityEngine_Component_o *)transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v27,
                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (transform & 1) != 0 )
          break;
        transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v27, 0LL);
        v27 = (UnityEngine_Component_o *)transform;
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
      v30 = *(float *)&localScale;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v73.fields.x = 1.0 / v30;
      v73.fields.y = 1.0 / v30;
      v73.fields.z = 1.0 / v30;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v73, 0LL);
      transform = (__int64)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)transform, 1, 0LL);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v31 = transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      ServantStatusDialog__DestroyBattleChr(this, v34);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                    (ServantLimitImageMaster_o *)transform,
                    v31,
                    LimitCountByImageLimitCostumeIn,
                    0LL);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v35 = transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v37 = ServantAssetLoadManager__loadBattleActor(&v71, gameObject, v31, v35, 0, 0LL);
      this->fields.battleChr = v37;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleChr, (int64_t)v37, v38, v39, v40, v41, v42, v43);
      if ( !v37 )
        goto LABEL_73;
      v44 = UnityEngine_GameObject__AddComponent_object_(
              v37,
              (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !v44 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v44, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, v31, v35, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v45.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v46 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v45.n64_u64[0] = 0LL;
        v46 = 0.0;
      }
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !transform )
        goto LABEL_73;
      v47 = v46 + this->fields.CHARA_BASE_POSITION.fields.z;
      v48 = vadd_f32(v45, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v49 = HIDWORD(v48);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v47 - 2),
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !transform )
        goto LABEL_73;
      v74.fields.x = 0.0;
      v74.fields.z = 0.0;
      v74.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v74, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      v50 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B612E6 )
      {
        transform = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v25);
        byte_4B612E6 = 1;
      }
      if ( !v50 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v50, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v54 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v54,
            (const MethodInfo_3255CFC *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v54 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v54,
            5,
            0.75,
            (const MethodInfo_32566C8 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v54,
            8,
            0.75,
            (const MethodInfo_32566C8 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v54,
            9,
            0.75,
            (const MethodInfo_32566C8 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v54,
                 battleSize,
                 (const MethodInfo_32568C0 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v55 = UnityEngine_GameObject__get_transform(v37, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v54,
                     battleSize,
                     (const MethodInfo_325662C *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v57 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v54,
                    battleSize,
                    (const MethodInfo_325662C *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v58 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v54,
                    battleSize,
                    (const MethodInfo_325662C *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v55 )
              goto LABEL_73;
            v75.fields.z = v58;
            v75.fields.x = Item;
            v75.fields.y = v57;
            UnityEngine_Transform__set_localScale(v55, v75, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v44, v31, v35, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v44, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v44,
          5000.0,
          (System_String_o *)StringLiteral_16819/*"_y0"*/,
          0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v31, v35, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v44, Manager__loadAnimEvents, v31, v35, 0LL);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v44, this->fields.defaultAnimationName, 2, 0LL);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v44, this->fields.defaultAnimationName, 0LL);
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
      if ( !transform
        || (v60 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL)) == 0) )
      {
LABEL_73:
        sub_1BE4D28(transform, v25);
      }
      v61 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v60, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v60 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v60, 0LL);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v61, 0LL);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v44;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleActor, (int64_t)v44, v62, v63, v64, v65, v66, v67);
      v68 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3258/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v37, v68, 0LL);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_34961768(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v70 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v70,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v70, 0LL);
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
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v14; // x4

  v10 = this;
  if ( (byte_4B62B83 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B62B83 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v14);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_33104944(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  __int64 v11; // x1
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v14; // x4

  v10 = this;
  if ( (byte_4B62B85 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B62B85 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v14);
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
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v14; // x4

  v10 = this;
  if ( (byte_4B62B84 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B62B84 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v14);
}


bool __fastcall ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *voiceDataList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  bool v15; // w23
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1
  int v32; // w19
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B62B80 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4B62B80 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1BE4D28(0LL, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v35 = v34;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v15 = v13;
    if ( !v13 )
    {
      v32 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1BE4D28(v13, v14);
  }
  while ( !System_String__Equals_62707124(assetName, (System_String_o *)v35.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v16);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1BE4D28(0LL, v17);
    ServantStatusVoiceListViewManager__SetMode_36087664(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayList,
    (int64_t)voicePlayList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.voicePlayAssetName = assetName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName,
    (int64_t)assetName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v31);
  v32 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v15 && v32 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4B62B8B & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B62B8B = 1;
  }
  if ( !this->fields.isExit )
  {
    isBgmLow = this->fields.isBgmLow;
    this->fields.isExit = 1;
    if ( isBgmLow )
    {
      this->fields.isBgmLow = 0;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Recover(0LL);
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_33047576(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_34961768(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_34013780(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BE4D28(charaGraphListViewManager, method);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  _BOOL4 v37; // w24
  const MethodInfo *v38; // x2
  int v39; // w8
  long double inited; // q0
  int v41; // w8
  unsigned __int8 v42; // w21
  struct ServantStatusListViewItem_o *v43; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v45; // x22
  __int64 v46; // x23
  int v47; // w22
  BalanceConfig_c *v48; // x8
  struct ServantStatusListViewItem_o *v49; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v51; // x23
  __int64 v52; // x0
  __int64 v53; // x0
  CommonUI_o *v54; // x19
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  CommonConfirmDialog_ClickDelegate_o *v58; // x0
  __int64 *v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  CommonConfirmDialog_ClickDelegate_o *v62; // x24
  const MethodInfo *v63; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v65; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4B62BB7 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, v9);
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v16);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__, v17);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__, v18);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__, v19);
    sub_1BE4ACC(&ServantStatusDialog___c__DisplayClass221_0_TypeInfo, v20);
    sub_1BE4ACC(&StringLiteral_12081/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v21);
    sub_1BE4ACC(&StringLiteral_12079/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v22);
    sub_1BE4ACC(&StringLiteral_12068/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v23);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v24);
    sub_1BE4ACC(&StringLiteral_12069/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v25);
    sub_1BE4ACC(&StringLiteral_12080/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v26);
    sub_1BE4ACC(&StringLiteral_12067/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v27);
    byte_4B62BB7 = 1;
  }
  v28 = sub_1BE4D18(ServantStatusDialog___c__DisplayClass221_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass221_0___ctor((ServantStatusDialog___c__DisplayClass221_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_53;
  v37 = isRandomOn;
  *(_QWORD *)(v28 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 32) = index;
  *(_BYTE *)(v28 + 36) = isOwnSetting;
  *(_BYTE *)(v28 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v37 )
    {
      if ( mainInfo->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v39) = *(_BYTE *)(v28 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v30);
    v41 = *(unsigned __int8 *)(v28 + 37);
    v42 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v28 + 16) = 12;
    if ( v41 )
    {
      v43 = this->fields.mainInfo;
      if ( !v43 )
        goto LABEL_53;
      userSvtEntity = v43->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v46 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v46;
      *(_QWORD *)&v66.fields.fakeValue = v45;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                  v66,
                                                  0LL);
      v47 = (int)mainInfo;
      v48 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v48 = BalanceConfig_TypeInfo;
      }
      if ( v47 == v48->static_fields->ServantIdMashu1 )
      {
        v49 = this->fields.mainInfo;
        if ( !v49 )
          goto LABEL_53;
        supportRandomLimitCountList = v49->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v51 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v51,
            (Il2CppObject *)v28,
            Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__49561084(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v51,
                 (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864) )
          {
            v52 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
              v52 = sub_1C369A8(inited);
            v53 = *(_QWORD *)(*(_QWORD *)(v52 + 192) + 16LL);
            if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
              v53 = sub_1C369A8(inited);
            v54 = **(CommonUI_o ***)(v53 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v59 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v42 & *(_BYTE *)(v28 + 37) & 1) != 0 )
    {
      v60 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
        v60 = sub_1C369A8(inited);
      v61 = *(_QWORD *)(*(_QWORD *)(v60 + 192) + 16LL);
      if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
        v61 = sub_1C369A8(inited);
      v54 = **(CommonUI_o ***)(v61 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12069/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v59 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v62 = v58;
      CommonConfirmDialog_ClickDelegate___ctor(v58, (Il2CppObject *)v28, *v59, 0LL);
      if ( v54 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v54,
          (System_String_o *)StringLiteral_1/*""*/,
          v55,
          v56,
          v57,
          v62,
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
      sub_1BE4D28(mainInfo, v30);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v28 + 32), 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v39 = *(unsigned __int8 *)(v28 + 37);
    if ( *(_BYTE *)(v28 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v39 != 0, 0LL);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v63);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v39;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v37 )
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
    v38);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v65 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v65,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v65, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4B62BB5 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B62BB5 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BE4D28(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
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

  if ( (byte_4B62B75 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flag);
    byte_4B62B75 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t battleTabListViewManager; // x0
  __int64 v12; // x8
  __int64 confirmDispLv; // x9
  int32_t v14; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  int64_t v18; // x20
  const MethodInfo *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o *v26; // x22
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  const MethodInfo *v29; // x1

  if ( (byte_4B62B79 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, isModifyInfo);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B62B79 = 1;
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
  v12 = *(_QWORD *)(battleTabListViewManager + 248);
  if ( !v12 )
    goto LABEL_29;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= *(_DWORD *)(v12 + 24) )
    sub_1BE4D30(battleTabListViewManager, isModifyInfo);
  *(_DWORD *)(battleTabListViewManager + 240) = *(_DWORD *)(v12 + 4 * confirmDispLv + 32);
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
  v14 = battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)battleTabListViewManager,
                                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v14,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (int64_t)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                        v14,
                                        ServantImageLimitSealAfter,
                                        0LL);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v18 = battleTabListViewManager;
  if ( System_String__Equals_62707124((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v19);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v26 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v26, 0LL);
  }
  *p_battleLoadAsset = (System_String_o *)v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, v18, v20, v21, v22, v23, v24, v25);
  battleTabListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
LABEL_29:
    sub_1BE4D28(battleTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  battleLoadAsset = this->fields.battleLoadAsset;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v28, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v29);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  unsigned int kind; // w9
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantStatusListViewItem_o *v17; // x8
  System_String_o **v18; // x8
  struct ServantStatusListViewItem_o *v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *v21; // x20
  struct ServantStatusListViewItem_o *v22; // x8
  struct ServantStatusListViewItem_o *v23; // x8
  System_String_o **v24; // x8
  struct ServantStatusListViewItem_o *v25; // x8
  System_String_o **v26; // x8
  struct ServantStatusListViewItem_o *v27; // x8
  struct UserServantEntity_o *v28; // x9
  UISprite_o *favoriteSprite; // x20
  __int128 v30; // q1
  ServantStatusDialog_o *favoriteUserSvtId; // x22
  System_String_o **v32; // x8
  UnityEngine_Object_o *pushButton; // x20
  struct ServantStatusListViewItem_o *v34; // x8
  __int64 *v35; // x8
  struct ServantStatusListViewItem_o *v36; // x8
  struct UserServantEntity_o *v37; // x9
  __int128 v38; // q1
  ServantStatusDialog_o *pushSprite; // x20
  ServantStatusDialog_o *pushUserSvtId; // x21
  bool v41; // zf
  struct ServantStatusListViewItem_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-50h]

  v2 = this;
  if ( (byte_4B62B89 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_17885/*"button_lock_reg"*/, v4);
    sub_1BE4ACC(&StringLiteral_17889/*"button_push_reg"*/, v5);
    sub_1BE4ACC(&StringLiteral_17890/*"button_push_unreg"*/, v6);
    sub_1BE4ACC(&StringLiteral_17886/*"button_lock_unreg"*/, v7);
    sub_1BE4ACC(&StringLiteral_17880/*"button_choice_unreg"*/, v8);
    sub_1BE4ACC(&StringLiteral_20421/*"icon_equip"*/, v9);
    sub_1BE4ACC(&StringLiteral_17879/*"button_choice_reg"*/, v10);
    sub_1BE4ACC(&StringLiteral_20422/*"icon_equip_cc"*/, v11);
    sub_1BE4ACC(&StringLiteral_17881/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&StringLiteral_17882/*"button_favorite_unreg"*/, v13);
    byte_4B62B89 = 1;
  }
  mainInfo = v2->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_83;
  if ( !mainInfo->fields.userGameEntity
    || (kind = v2->fields.kind, kind <= 0x24) && ((1LL << kind) & 0x19E0000000LL) != 0 )
  {
    this = (ServantStatusDialog_o *)v2->fields.markBase;
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
      this = (ServantStatusDialog_o *)v2->fields.markBase;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v23 = v2->fields.mainInfo;
      if ( !v23 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_83;
      v24 = (System_String_o **)(v23->fields.isLock ? &StringLiteral_17885/*"button_lock_reg"*/ : &StringLiteral_17886/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = v2->fields.mainInfo;
      if ( !v25 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v26 = (System_String_o **)(v25->fields.isChoice ? &StringLiteral_17879/*"button_choice_reg"*/ : &StringLiteral_17880/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v26, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUseFavorite, 0LL);
      v27 = v2->fields.mainInfo;
      if ( !v27 )
        goto LABEL_83;
      v28 = v27->fields.userSvtEntity;
      if ( !v28 )
        goto LABEL_83;
      favoriteSprite = v2->fields.favoriteSprite;
      v30 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
      favoriteUserSvtId = (ServantStatusDialog_o *)v27->fields.favoriteUserSvtId;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v30;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v44, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v32 = (System_String_o **)&StringLiteral_17881/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v32 = (System_String_o **)&StringLiteral_17882/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v32, 0LL);
      pushButton = (UnityEngine_Object_o *)v2->fields.pushButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
      {
        this = (ServantStatusDialog_o *)v2->fields.pushButton;
        if ( !this )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUsePush, 0LL);
        v34 = v2->fields.mainInfo;
        if ( !v34 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)v34->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) || v2->fields.kind == 3 )
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            3LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_83;
          v35 = &StringLiteral_17890/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                            this,
                                            0LL,
                                            1LL,
                                            this->klass[1]._1.interfaceOffsets);
          v36 = v2->fields.mainInfo;
          if ( !v36 )
            goto LABEL_83;
          v37 = v36->fields.userSvtEntity;
          if ( !v37 )
            goto LABEL_83;
          v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
          pushSprite = (ServantStatusDialog_o *)v2->fields.pushSprite;
          pushUserSvtId = (ServantStatusDialog_o *)v36->fields.pushUserSvtId;
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v45.fields.fakeValue = v38;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v45;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                            &v43,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v35 = &StringLiteral_17889/*"button_push_reg"*/;
          v41 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v41 )
            v35 = &StringLiteral_17890/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v35, 0LL);
      }
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v42 = v2->fields.mainInfo;
      if ( !v42 )
        goto LABEL_83;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v42->fields.isUse, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20421/*"icon_equip"*/, 0LL);
      return;
    }
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_83;
  }
  this = (ServantStatusDialog_o *)v2->fields.markBase;
  if ( !this )
    goto LABEL_83;
  if ( !mainInfo->fields.userCommandCodeEntity )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v17 = v2->fields.mainInfo;
  if ( !v17 )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_83;
  v18 = (System_String_o **)(v17->fields.isLock ? &StringLiteral_17885/*"button_lock_reg"*/ : &StringLiteral_17886/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = v2->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0LL
    || (v19->fields.isChoice
      ? (v20 = (System_String_o **)&StringLiteral_17879/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17880/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1BE4D28(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v21 = (UnityEngine_Object_o *)v2->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    this = (ServantStatusDialog_o *)v2->fields.pushButton;
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = v2->fields.mainInfo;
  if ( !v22 )
    goto LABEL_83;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22->fields.isUse, 0LL);
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20422/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v7; // x1
  NoticeNumberComponent_o *v8; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4B62B74 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B62B74 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList )
    size = newProfileList->fields._size;
  else
    size = 0;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noticeNumber, 0LL, 0LL) )
  {
    v8 = this->fields.noticeNumber;
    if ( !v8 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v8, size > 0, 0LL);
    v8 = this->fields.noticeNumber;
    if ( !v8 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v8, size, 0LL);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0LL, 0LL) )
    {
      v8 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v8 )
      {
        ShiningIconComponent__Set_39139932((ShiningIconComponent_o *)v8, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1BE4D28(v8, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 statusTabBase; // x0
  int v30; // w23
  bool v31; // w1
  UnityEngine_Object_o *battleActor; // x21
  System_String_o **v33; // x8
  System_String_o **v34; // x8
  UICommonButton_o *v35; // x21
  bool v36; // w0
  __int64 *v37; // x8
  System_String_o **v38; // x8
  UICommonButton_o *profileButton; // x21
  bool v40; // w0
  char isInitTab; // w2
  bool v42; // w1
  System_String_o **v43; // x8
  __int64 *v44; // x8
  UICommonButton_o *v45; // x21
  bool v46; // w0
  System_String_o **v47; // x8
  System_String_o **v48; // x8
  UICommonButton_o *statusButton; // x21
  bool enabled; // w0
  System_String_o **v51; // x8
  System_String_o **v52; // x8
  UICommonButton_o *battleButton; // x21
  bool v54; // w0
  const MethodInfo *v55; // x2
  __int64 *v56; // x8
  System_String_o **v57; // x8
  System_String_o **v58; // x8
  UICommonButton_o *v59; // x21
  bool v60; // w0
  System_String_o **v61; // x8
  System_String_o **v62; // x8
  UICommonButton_o *v63; // x21
  bool v64; // w0
  System_String_o **v65; // x8
  System_String_o **v66; // x8
  UICommonButton_o *v67; // x21
  bool v68; // w0
  _BOOL4 v69; // w21
  System_String_o **v70; // x8
  System_String_o **v71; // x8
  UICommonButton_o *voiceButton; // x21
  bool v73; // w0
  struct System_Boolean_array *tabInitList; // x8
  char *v75; // x8
  _BYTE *v76; // x8
  int v77; // t1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v79; // x21
  ServantStatusListViewManager_o *v80; // x20
  ServantStatusListViewManager_CallbackFunc_o *v81; // x21
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v83; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v85; // x21
  const MethodInfo *v86; // x3
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v96; // x2
  struct ServantStatusListViewItem_o *v97; // x8
  struct ServantStatusListViewItem_o *v98; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v100; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v104; // x0
  BgmManager_c *v105; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v107; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v108; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B62B87 & 1) == 0 )
  {
    sub_1BE4ACC(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&OptionManager_TypeInfo, v11);
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectBattle__, v13);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectFlavor__, v14);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectVoice__, v16);
    sub_1BE4ACC(&StringLiteral_17797/*"btn_txt_detail_off"*/, v17);
    sub_1BE4ACC(&StringLiteral_17780/*"btn_txt_battlecharacter_on"*/, v18);
    sub_1BE4ACC(&StringLiteral_17845/*"btn_txt_status_on"*/, v19);
    sub_1BE4ACC(&StringLiteral_17696/*"btn_bg_12"*/, v20);
    sub_1BE4ACC(&StringLiteral_17844/*"btn_txt_status_off"*/, v21);
    sub_1BE4ACC(&StringLiteral_17858/*"btn_txt_voice_on"*/, v22);
    sub_1BE4ACC(&StringLiteral_17825/*"btn_txt_profile_on"*/, v23);
    sub_1BE4ACC(&StringLiteral_17857/*"btn_txt_voice_off"*/, v24);
    sub_1BE4ACC(&StringLiteral_17698/*"btn_bg_19"*/, v25);
    sub_1BE4ACC(&StringLiteral_17798/*"btn_txt_detail_on"*/, v26);
    sub_1BE4ACC(&StringLiteral_17824/*"btn_txt_profile_off"*/, v27);
    sub_1BE4ACC(&StringLiteral_17779/*"btn_txt_battlecharacter_off"*/, v28);
    byte_4B62B87 = 1;
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
    v30 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v31 = 1;
      goto LABEL_33;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v31 = 0;
LABEL_33:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v31, 0LL);
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
  v30 = 0;
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
                v47 = (System_String_o **)&StringLiteral_17845/*"btn_txt_status_on"*/;
                if ( kind )
                  v47 = (System_String_o **)&StringLiteral_17844/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v47, 0LL);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v48 = (System_String_o **)(kind ? &StringLiteral_17696/*"btn_bg_12"*/ : &StringLiteral_17698/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v48, 0LL);
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
                                    (System_String_o *)StringLiteral_17824/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17696/*"btn_bg_12"*/,
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
                                                  v51 = (System_String_o **)&StringLiteral_17780/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17779/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v51, 0LL);
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
                                                      v52 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17698/*"btn_bg_19"*/
                                                                               : &StringLiteral_17696/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v52, 0LL);
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
                                                          v54 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v54,
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
                                                                      (System_String_o *)StringLiteral_17857/*"btn_txt_voice_off"*/,
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
      v56 = &StringLiteral_17798/*"btn_txt_detail_on"*/;
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
      v33 = (System_String_o **)&StringLiteral_17845/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17844/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v33, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v34 = (System_String_o **)(kind ? &StringLiteral_17696/*"btn_bg_12"*/ : &StringLiteral_17698/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v34, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v35 = this->fields.statusButton;
      if ( !v35 )
        goto LABEL_287;
      v36 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v35, v36, this->fields.isInitTab, 0LL);
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
      v37 = &StringLiteral_17798/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v37 = &StringLiteral_17797/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v37, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17698/*"btn_bg_19"*/ : &StringLiteral_17696/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v38, 0LL);
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
      v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      isInitTab = this->fields.isInitTab;
      v42 = v40;
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
      v43 = (System_String_o **)&StringLiteral_17845/*"btn_txt_status_on"*/;
      if ( kind )
        v43 = (System_String_o **)&StringLiteral_17844/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v43, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v44 = &StringLiteral_17698/*"btn_bg_19"*/;
      if ( kind )
        v44 = &StringLiteral_17696/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v44, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v45 = this->fields.statusButton;
      if ( !v45 )
        goto LABEL_287;
      v46 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v45, v46, this->fields.isInitTab, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17797/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17696/*"btn_bg_12"*/, 0LL);
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
      v56 = &StringLiteral_17824/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v56, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17698/*"btn_bg_19"*/, 0LL);
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
      v42 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      isInitTab = 1;
LABEL_214:
      UICommonButton__SetColliderEnable(profileButton, v42, isInitTab, 0LL);
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
      v57 = (System_String_o **)&StringLiteral_17845/*"btn_txt_status_on"*/;
      if ( kind )
        v57 = (System_String_o **)&StringLiteral_17844/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v57, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v58 = (System_String_o **)(kind ? &StringLiteral_17696/*"btn_bg_12"*/ : &StringLiteral_17698/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v58, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v59 = this->fields.statusButton;
      if ( !v59 )
        goto LABEL_287;
      v60 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v59, v60, this->fields.isInitTab, 0LL);
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
      v61 = (System_String_o **)&StringLiteral_17825/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v61 = (System_String_o **)&StringLiteral_17824/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v61, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v62 = (System_String_o **)(kind == 1 ? &StringLiteral_17698/*"btn_bg_19"*/ : &StringLiteral_17696/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v62, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v63 = this->fields.profileButton;
      if ( !v63 )
        goto LABEL_287;
      v64 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v63, v64, this->fields.isInitTab, 0LL);
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
      v65 = (System_String_o **)&StringLiteral_17780/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v65 = (System_String_o **)&StringLiteral_17779/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v65, 0LL);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v66 = (System_String_o **)(kind == 2 ? &StringLiteral_17698/*"btn_bg_19"*/ : &StringLiteral_17696/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v66, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v67 = this->fields.battleButton;
      if ( !v67 )
        goto LABEL_287;
      v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v67, v68, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      v69 = isPlayVoice;
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
      if ( v69 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v30 != 1, 0LL);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v70 = (System_String_o **)&StringLiteral_17858/*"btn_txt_voice_on"*/;
          if ( !v30 )
            v70 = (System_String_o **)&StringLiteral_17857/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v70, 0LL);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v71 = (System_String_o **)(v30 ? &StringLiteral_17698/*"btn_bg_19"*/ : &StringLiteral_17696/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v71, 0LL);
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
                  v73 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
                  UICommonButton__SetColliderEnable(voiceButton, v73, this->fields.isInitTab, 0LL);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_287:
        sub_1BE4D28(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17857/*"btn_txt_voice_off"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17696/*"btn_bg_12"*/, 0LL);
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
        sub_1BE4D30(statusTabBase, *(_QWORD *)&kind);
      v75 = (char *)tabInitList + kind;
      v77 = (unsigned __int8)v75[32];
      v76 = v75 + 32;
      if ( v77 )
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
      *v76 = 1;
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
          ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v79 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v79,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !statusTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v79, 0LL);
LABEL_231:
          v80 = this->fields.statusTabListViewManager;
          v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v81,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v80 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(v80, 1, v81, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v55);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v83 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v83,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v83, 0LL);
          break;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            v55);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v85 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v85,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            v86);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          battleTabListViewManager->fields.callbackFunc = v85;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&battleTabListViewManager->fields.callbackFunc,
            (int64_t)v85,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          ServantStatusBattleListViewManager__SetMode_33033556(battleTabListViewManager, 1, v93, v94);
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
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          if ( !byte_4B62AD0 )
          {
            sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind);
            byte_4B62AD0 = 1;
          }
          statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(statusTabBase + 184) + 8LL) )
            goto LABEL_252;
          v97 = this->fields.mainInfo;
          if ( !v97 )
            goto LABEL_287;
          if ( !v97->fields.isConvertOverwriteImage )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, *(const MethodInfo **)&kind);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v96);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
          v98 = this->fields.mainInfo;
          if ( !v98 )
            goto LABEL_287;
          if ( !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v98->fields._IsTransformed_k__BackingField,
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
          v100 = this->fields.mainInfo;
          if ( !v100 )
            goto LABEL_287;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0LL);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_287;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v100,
            (System_Int32_array *)statusTabBase,
            0LL);
LABEL_262:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v104 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v104 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v104->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v105 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v105 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v105->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v107 = this->fields.voiceTabListViewManager;
          v108 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v108,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v107 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v107, 1, v108, 0LL);
          break;
        default:
          break;
      }
LABEL_278:
      if ( !(v30 & 1 | !this->fields.isBgmLow) )
      {
        this->fields.isBgmLow = 0;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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
  UnityEngine_Component_o *battleChrCamera; // x0
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_4B62B8C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isVisible);
    sub_1BE4ACC(&StringLiteral_24942/*"wait"*/, v5);
    byte_4B62B8C = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
      {
        battleChrCamera = (UnityEngine_Component_o *)this->fields.battleActor;
        if ( battleChrCamera )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)battleChrCamera,
            (System_String_o *)StringLiteral_24942/*"wait"*/,
            0LL);
          return;
        }
LABEL_13:
        sub_1BE4D28(battleChrCamera, isVisible);
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
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_4B62B65 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, item);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v5);
    byte_4B62B65 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1BE4D28(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t mainInfo; // x0
  int32_t v11; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  int64_t v15; // x20
  struct ServantStatusListViewItem_o *v16; // x8
  bool v17; // w22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x22
  const MethodInfo *v25; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  const MethodInfo *v28; // x1

  if ( (byte_4B62B71 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, v5);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B62B71 = 1;
  }
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_34;
  v11 = mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)mainInfo,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !mainInfo )
    goto LABEL_34;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)mainInfo,
                                 v11,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (int64_t)ServantAssetLoadManager__getActorFolderNameFromDisp(v11, ServantImageLimitSealAfter, 0LL);
  if ( !mainInfo )
    goto LABEL_34;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v15 = mainInfo;
  if ( System_String__Equals_62707124((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_33094328(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4B62AD0 )
    {
      sub_1BE4ACC(&RandomLimitCountManager_TypeInfo, method);
      byte_4B62AD0 = 1;
    }
    mainInfo = (int64_t)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      mainInfo = (int64_t)RandomLimitCountManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(mainInfo + 184) + 8LL) )
      return 0;
    v16 = this->fields.mainInfo;
    if ( v16 )
    {
      if ( !v16->fields.isConvertOverwriteImage )
        goto LABEL_22;
      return 0;
    }
LABEL_34:
    sub_1BE4D28(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v24 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v24, 0LL);
  }
  *p_battleLoadAsset = (System_String_o *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battleLoadAsset, v15, v18, v19, v20, v21, v22, v23);
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v25);
  battleLoadAsset = this->fields.battleLoadAsset;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v17 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v27, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v28);
    return 1;
  }
  return v17;
}


void __fastcall ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  int64_t mainInfo; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  int64_t v22; // x22
  System_String_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *v30; // x22
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B62B6B & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, onComplete);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__, v8);
    sub_1BE4ACC(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo, v9);
    byte_4B62B6B = 1;
  }
  v10 = sub_1BE4D18(ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = onComplete;
  v19 = v10 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)onComplete, v13, v14, v15, v16, v17, v18);
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_20;
  p_cardLoadAsset = &this->fields.cardLoadAsset;
  v22 = mainInfo;
  mainInfo = System_String__Equals_62707124((System_String_o *)mainInfo, *p_cardLoadAsset, 0LL);
  if ( (mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v19 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
      return;
    }
LABEL_20:
    sub_1BE4D28(mainInfo, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v23 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v23, 0LL);
  }
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = (System_String_o *)v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_cardLoadAsset, v22, v24, v25, v26, v27, v28, v29);
  v30 = *p_cardLoadAsset;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_cardLoadAsset, 0LL, v32, v33, v34, v35, v36, v37);
    goto LABEL_18;
  }
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v8; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *statusLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  AssetData_o *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4B62B69 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B62B69 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_12;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_12;
  v8 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v8, LimitCount, 0LL);
  this->fields.statusLoadAsset = StatusImageFolderName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.statusLoadAsset,
    (int64_t)StatusImageFolderName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1BE4D28(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v18, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.statusLoadAsset, 0LL, v19, v20, v21, v22, v23, v24);
    ServantStatusDialog__EndStatusLoad(this, v25, v26);
  }
}


void __fastcall ServantStatusDialog__StartTransformedStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  int64_t StatusImageFolderName; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  int64_t v23; // x22
  System_String_o *v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_o *v31; // x22
  AssetLoader_LoadEndDataHandler_o *v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B62B6D & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, onComplete);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__, v8);
    sub_1BE4ACC(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo, v9);
    byte_4B62B6D = 1;
  }
  v10 = sub_1BE4D18(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = onComplete;
  v19 = v10 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)onComplete, v13, v14, v15, v16, v17, v18);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  if ( !mainInfo->fields._IsTransformed_k__BackingField )
    goto LABEL_19;
  TransformedSvtId_k__BackingField = mainInfo->fields._TransformedSvtId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (int64_t)ServantAssetLoadManager__getStatusImageFolderName(
                                     TransformedSvtId_k__BackingField,
                                     0,
                                     0LL);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  p_transformedStatusLoadAsset = &this->fields.transformedStatusLoadAsset;
  v23 = StatusImageFolderName;
  StatusImageFolderName = System_String__Equals_62707124(
                            (System_String_o *)StatusImageFolderName,
                            *p_transformedStatusLoadAsset,
                            0LL);
  if ( (StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v19 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
      return;
    }
LABEL_21:
    sub_1BE4D28(StatusImageFolderName, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v24 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v24, 0LL);
  }
  StatusImageFolderName = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = (System_String_o *)v23;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_transformedStatusLoadAsset, v23, v25, v26, v27, v28, v29, v30);
  v31 = *p_transformedStatusLoadAsset;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v32, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_transformedStatusLoadAsset, 0LL, v33, v34, v35, v36, v37, v38);
    goto LABEL_19;
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  NetworkManager_c *v20; // x0
  bool v21; // w19
  int64_t mainInfo; // x0
  int32_t v23; // w22
  int64_t v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x9
  int32_t v27; // w22
  BalanceConfig_c *v28; // x8
  ServantLimitAddMaster_o *v29; // x23
  struct ServantStatusListViewItem_o *v30; // x9
  int32_t v31; // w4
  const MethodInfo *v32; // x5
  struct PartyListViewItem_o *v33; // x8
  int64_t v34; // x23
  unsigned __int64 v35; // x20
  struct PartyOrganizationListViewItem_o **v36; // x29
  System_Collections_Generic_List_object__o *v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w4
  const MethodInfo *v50; // x5
  System_Collections_Generic_List_object__o *v51; // x24
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w4
  const MethodInfo *v64; // x5
  System_Collections_Generic_List_object__o *v65; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  int64_t v75; // x1
  Il2CppClass **v76; // x0
  int32_t v77; // w4
  const MethodInfo *v78; // x5
  BalanceConfig_c *v79; // x8
  int v80; // w24
  System_Collections_Generic_List_object__o *v81; // x24
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  int32_t v93; // w4
  const MethodInfo *v94; // x5
  BalanceConfig_c *v95; // x8
  int v96; // w24
  System_Collections_Generic_List_object__o *v97; // x24
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  int64_t v107; // x1
  Il2CppClass **v108; // x0
  int32_t v109; // w4
  const MethodInfo *v110; // x5
  System_Collections_Generic_List_object__o *v111; // x24
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int64_t v121; // x1
  Il2CppClass **v122; // x0
  int32_t v123; // w4
  const MethodInfo *v124; // x5
  System_Collections_Generic_List_object__o *v125; // x24
  int32_t ServantIdMashu3; // w2
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  int64_t v136; // x1
  Il2CppClass **v137; // x0
  System_Collections_Generic_List_object__o *v138; // x24
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  int64_t v148; // x1
  Il2CppClass **v149; // x0
  int32_t v150; // w4
  const MethodInfo *v151; // x5
  System_Collections_Generic_List_object__o *v152; // x24
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  int64_t v162; // x1
  Il2CppClass **v163; // x0
  __int64 v164; // x1
  NetworkManager_c *v165; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t userIdNumber; // x24
  int32_t MashuTdGradeUpQuestId; // w26
  int32_t MashuTdGradeUpQuestPhase; // w25
  System_Collections_Generic_List_object__o *v170; // x24
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
  int32_t v182; // w4
  const MethodInfo *v183; // x5
  System_Collections_Generic_List_object__o *v184; // x24
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  int64_t v194; // x1
  Il2CppClass **v195; // x0
  ServantVoiceRelationEntity_array *v196; // x20
  signed int max_length; // w8
  unsigned int v198; // w25
  ServantVoiceRelationEntity_o *v199; // x26
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x22
  __int64 v201; // x23
  __int64 v202; // x24
  ServantStatusDialog_o *v203; // x0
  int32_t v204; // w4
  const MethodInfo *v205; // x5
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  struct System_Object_array *items; // x8
  _QWORD *v213; // x9
  __int64 size; // x10
  int64_t v215; // x1
  Il2CppClass **v216; // x0
  System_Collections_Generic_List_object__o *v217; // x22
  ServantStatusDialog_o *v218; // x0
  int32_t v219; // w4
  const MethodInfo *v220; // x5
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  int64_t v230; // x1
  Il2CppClass **v231; // x0
  System_Collections_Generic_List_object__o *v232; // x22
  ServantStatusDialog_o *v233; // x0
  int32_t v234; // w4
  const MethodInfo *v235; // x5
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  struct System_Object_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  int64_t v245; // x1
  Il2CppClass **v246; // x0
  struct System_Collections_Generic_List_string__o *v247; // x8
  const MethodInfo *v248; // x2
  NetworkManager_c *v249; // x0
  Il2CppObject *Item; // x0
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  System_String_o *loadVoiceData; // x20
  System_Action_o *v258; // x21
  int64_t v260; // [xsp+8h] [xbp-78h]
  unsigned __int64 v261; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16

  if ( (byte_4B62B7D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v3);
    sub_1BE4ACC(&CondType_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndLoadVoice__, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&SoundManager_TypeInfo, v19);
    byte_4B62B7D = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B622AC )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B622AC = 1;
  }
  v20 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  if ( v20->static_fields->isRebootBlock )
    return 1;
  mainInfo = (int64_t)this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)mainInfo, 1, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v23 = mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         mainInfo,
         (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)mainInfo,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (int64_t)ServantChangeMaster__GetEnableSvtVoiceList((ServantChangeMaster_o *)mainInfo, v23, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v24 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v23,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v24 )
    goto LABEL_166;
  v25 = *(_QWORD *)(v24 + 24);
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v260 = v24;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_167;
      v27 = *(_DWORD *)(v24 + 4 * v26 + 32);
      v261 = v26;
      mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)mainInfo,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v28 = BalanceConfig_TypeInfo;
      v29 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      v30 = this->fields.mainInfo;
      if ( !v30 )
        goto LABEL_166;
      if ( !v29 )
        goto LABEL_166;
      mainInfo = (int64_t)ServantLimitAddMaster__getVoiceLimitCountList(
                            v29,
                            v27,
                            v28->static_fields->ServantLimitMax,
                            v30->fields.costumeIds,
                            0LL);
      if ( !mainInfo )
        goto LABEL_166;
      v33 = *(struct PartyListViewItem_o **)(mainInfo + 24);
      v34 = mainInfo;
      if ( (int)v33 >= 1 )
        break;
LABEL_123:
      mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)mainInfo,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_166;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v27, 0LL);
      v196 = relationList;
      if ( !relationList )
        goto LABEL_166;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v198 = 0;
        while ( v198 < max_length )
        {
          v199 = v196->m_Items[v198];
          if ( !v199 )
            goto LABEL_166;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v202 = *(_QWORD *)&v199->fields.relationSvtId.fields.currentCryptoKey;
          v201 = *(_QWORD *)&v199->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v263.fields.currentCryptoKey = v202;
          *(_QWORD *)&v263.fields.fakeValue = v201;
          v203 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v263, 0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v203, 0, (int32_t)v203, 0, v204, v205);
          if ( !requestVoiceDataList )
            goto LABEL_166;
          items = requestVoiceDataList->fields._items;
          v213 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_166;
          size = requestVoiceDataList->fields._size;
          v215 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          }
          else
          {
            v216 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v216[4] = (Il2CppClass *)v215;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v216 + 4), v215, v206, v207, v208, v209, v210, v211);
          }
          v217 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v218 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                            v199->fields.relationSvtId,
                                            0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v218, 2, (int32_t)v218, 0, v219, v220);
          if ( !v217 )
            goto LABEL_166;
          v227 = v217->fields._items;
          v228 = Method_System_Collections_Generic_List_string__Add__;
          ++v217->fields._version;
          if ( !v227 )
            goto LABEL_166;
          v229 = v217->fields._size;
          v230 = mainInfo;
          if ( (unsigned int)v229 >= v227->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v217,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
          }
          else
          {
            v231 = &v227->obj.klass + v229;
            v217->fields._size = v229 + 1;
            v231[4] = (Il2CppClass *)v230;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v231 + 4), v230, v221, v222, v223, v224, v225, v226);
          }
          v232 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v233 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                            v199->fields.relationSvtId,
                                            0LL);
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(v233, 1, (int32_t)v233, 0, v234, v235);
          if ( !v232 )
            goto LABEL_166;
          v242 = v232->fields._items;
          v243 = Method_System_Collections_Generic_List_string__Add__;
          ++v232->fields._version;
          if ( !v242 )
            goto LABEL_166;
          v244 = v232->fields._size;
          v245 = mainInfo;
          if ( (unsigned int)v244 >= v242->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v232,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
          }
          else
          {
            v246 = &v242->obj.klass + v244;
            v232->fields._size = v244 + 1;
            v246[4] = (Il2CppClass *)v245;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v246 + 4), v245, v236, v237, v238, v239, v240, v241);
          }
          max_length = v196->max_length;
          if ( (int)++v198 >= max_length )
            goto LABEL_148;
        }
LABEL_167:
        sub_1BE4D30(mainInfo, method);
      }
LABEL_148:
      v24 = v260;
      LODWORD(v25) = *(_DWORD *)(v260 + 24);
      v26 = v261 + 1;
      if ( (__int64)(v261 + 1) >= (int)v25 )
        goto LABEL_149;
    }
    v35 = 0LL;
    v36 = (struct PartyOrganizationListViewItem_o **)(mainInfo + 32);
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
        goto LABEL_167;
      v37 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            0,
                            v27,
                            *((_DWORD *)v36 + v35),
                            v31,
                            v32);
      if ( !v37 )
        goto LABEL_166;
      v44 = v37->fields._items;
      v45 = Method_System_Collections_Generic_List_string__Add__;
      ++v37->fields._version;
      if ( !v44 )
        goto LABEL_166;
      v46 = v37->fields._size;
      v47 = mainInfo;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v44->obj.klass + v46;
        v37->fields._size = v46 + 1;
        v48[4] = (Il2CppClass *)v47;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
      }
      if ( v35 >= *(unsigned int *)(v34 + 24) )
        goto LABEL_167;
      v51 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            2,
                            v27,
                            *((_DWORD *)v36 + v35),
                            v49,
                            v50);
      if ( !v51 )
        goto LABEL_166;
      v58 = v51->fields._items;
      v59 = Method_System_Collections_Generic_List_string__Add__;
      ++v51->fields._version;
      if ( !v58 )
        goto LABEL_166;
      v60 = v51->fields._size;
      v61 = mainInfo;
      if ( (unsigned int)v60 >= v58->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v51,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v58->obj.klass + v60;
        v51->fields._size = v60 + 1;
        v62[4] = (Il2CppClass *)v61;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 4), v61, v52, v53, v54, v55, v56, v57);
      }
      if ( v35 >= *(unsigned int *)(v34 + 24) )
        goto LABEL_167;
      v65 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                            (ServantStatusDialog_o *)mainInfo,
                            1,
                            v27,
                            *((_DWORD *)v36 + v35),
                            v63,
                            v64);
      if ( !v65 )
        goto LABEL_166;
      v72 = v65->fields._items;
      v73 = Method_System_Collections_Generic_List_string__Add__;
      ++v65->fields._version;
      if ( !v72 )
        goto LABEL_166;
      v74 = v65->fields._size;
      v75 = mainInfo;
      if ( (unsigned int)v74 >= v72->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v65,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v72->obj.klass + v74;
        v65->fields._size = v74 + 1;
        v76[4] = (Il2CppClass *)v75;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v76 + 4), v75, v66, v67, v68, v69, v70, v71);
      }
      mainInfo = (int64_t)this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)mainInfo, 0LL);
      v79 = BalanceConfig_TypeInfo;
      v80 = mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v79 = BalanceConfig_TypeInfo;
      }
      if ( v80 == v79->static_fields->ServantIdJekyll )
        break;
      mainInfo = (int64_t)this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)mainInfo, 0LL);
      v95 = BalanceConfig_TypeInfo;
      v96 = mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v95 = BalanceConfig_TypeInfo;
      }
      if ( v96 == v95->static_fields->ServantIdMashu1 )
      {
        v97 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v95->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v95);
        if ( v35 >= *(unsigned int *)(v34 + 24) )
          goto LABEL_167;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              0,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v36 + v35),
                              v31,
                              v32);
        if ( !v97 )
          goto LABEL_166;
        v104 = v97->fields._items;
        v105 = Method_System_Collections_Generic_List_string__Add__;
        ++v97->fields._version;
        if ( !v104 )
          goto LABEL_166;
        v106 = v97->fields._size;
        v107 = mainInfo;
        if ( (unsigned int)v106 >= v104->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v97,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = &v104->obj.klass + v106;
          v97->fields._size = v106 + 1;
          v108[4] = (Il2CppClass *)v107;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v108 + 4), v107, v98, v99, v100, v101, v102, v103);
        }
        if ( v35 >= *(unsigned int *)(v34 + 24) )
          goto LABEL_167;
        v138 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              2,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v36 + v35),
                              v109,
                              v110);
        if ( !v138 )
          goto LABEL_166;
        v145 = v138->fields._items;
        v146 = Method_System_Collections_Generic_List_string__Add__;
        ++v138->fields._version;
        if ( !v145 )
          goto LABEL_166;
        v147 = v138->fields._size;
        v148 = mainInfo;
        if ( (unsigned int)v147 >= v145->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v138,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &v145->obj.klass + v147;
          v138->fields._size = v147 + 1;
          v149[4] = (Il2CppClass *)v148;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v149 + 4), v148, v139, v140, v141, v142, v143, v144);
        }
        if ( v35 >= *(unsigned int *)(v34 + 24) )
          goto LABEL_167;
        v152 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                              (ServantStatusDialog_o *)mainInfo,
                              1,
                              BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                              *((_DWORD *)v36 + v35),
                              v150,
                              v151);
        if ( !v152 )
          goto LABEL_166;
        v159 = v152->fields._items;
        v160 = Method_System_Collections_Generic_List_string__Add__;
        ++v152->fields._version;
        if ( !v159 )
          goto LABEL_166;
        v161 = v152->fields._size;
        v162 = mainInfo;
        if ( (unsigned int)v161 >= v159->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v152,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
        }
        else
        {
          v163 = &v159->obj.klass + v161;
          v152->fields._size = v161 + 1;
          v163[4] = (Il2CppClass *)v162;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v163 + 4), v162, v153, v154, v155, v156, v157, v158);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v164);
          byte_4B61717 = 1;
        }
        v165 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v165 = NetworkManager_TypeInfo;
        }
        static_fields = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v165->static_fields->userIdNumber;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        mainInfo = CondType__IsQuestPhaseClear(
                     userIdNumber,
                     MashuTdGradeUpQuestId,
                     MashuTdGradeUpQuestPhase,
                     -1,
                     0,
                     0LL);
        if ( (mainInfo & 1) != 0 )
        {
          mainInfo = (int64_t)BalanceConfig_TypeInfo;
          v170 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v35 >= *(unsigned int *)(v34 + 24) )
            goto LABEL_167;
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                                (ServantStatusDialog_o *)mainInfo,
                                0,
                                BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                *((_DWORD *)v36 + v35),
                                v31,
                                v32);
          if ( !v170 )
            goto LABEL_166;
          v177 = v170->fields._items;
          v178 = Method_System_Collections_Generic_List_string__Add__;
          ++v170->fields._version;
          if ( !v177 )
            goto LABEL_166;
          v179 = v170->fields._size;
          v180 = mainInfo;
          if ( (unsigned int)v179 >= v177->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v170,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
          }
          else
          {
            v181 = &v177->obj.klass + v179;
            v170->fields._size = v179 + 1;
            v181[4] = (Il2CppClass *)v180;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v181 + 4), v180, v171, v172, v173, v174, v175, v176);
          }
          if ( v35 >= *(unsigned int *)(v34 + 24) )
            goto LABEL_167;
          v184 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                                (ServantStatusDialog_o *)mainInfo,
                                2,
                                BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                *((_DWORD *)v36 + v35),
                                v182,
                                v183);
          if ( !v184 )
            goto LABEL_166;
          v191 = v184->fields._items;
          v192 = Method_System_Collections_Generic_List_string__Add__;
          ++v184->fields._version;
          if ( !v191 )
            goto LABEL_166;
          v193 = v184->fields._size;
          v194 = mainInfo;
          if ( (unsigned int)v193 >= v191->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v184,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
          }
          else
          {
            v195 = &v191->obj.klass + v193;
            v184->fields._size = v193 + 1;
            v195[4] = (Il2CppClass *)v194;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v195 + 4), v194, v185, v186, v187, v188, v189, v190);
          }
          if ( v35 >= *(unsigned int *)(v34 + 24) )
            goto LABEL_167;
          v125 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_112:
      LODWORD(v33) = *(_DWORD *)(v34 + 24);
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_123;
    }
    v81 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v79->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v79);
    if ( v35 >= *(unsigned int *)(v34 + 24) )
      goto LABEL_167;
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          0,
                          BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                          *((_DWORD *)v36 + v35),
                          v77,
                          v78);
    if ( !v81 )
      goto LABEL_166;
    v88 = v81->fields._items;
    v89 = Method_System_Collections_Generic_List_string__Add__;
    ++v81->fields._version;
    if ( !v88 )
      goto LABEL_166;
    v90 = v81->fields._size;
    v91 = mainInfo;
    if ( (unsigned int)v90 >= v88->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v81,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v88->obj.klass + v90;
      v81->fields._size = v90 + 1;
      v92[4] = (Il2CppClass *)v91;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v92 + 4), v91, v82, v83, v84, v85, v86, v87);
    }
    if ( v35 >= *(unsigned int *)(v34 + 24) )
      goto LABEL_167;
    v111 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          2,
                          BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                          *((_DWORD *)v36 + v35),
                          v93,
                          v94);
    if ( !v111 )
      goto LABEL_166;
    v118 = v111->fields._items;
    v119 = Method_System_Collections_Generic_List_string__Add__;
    ++v111->fields._version;
    if ( !v118 )
      goto LABEL_166;
    v120 = v111->fields._size;
    v121 = mainInfo;
    if ( (unsigned int)v120 >= v118->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v111,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v118->obj.klass + v120;
      v111->fields._size = v120 + 1;
      v122[4] = (Il2CppClass *)v121;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
    }
    if ( v35 >= *(unsigned int *)(v34 + 24) )
      goto LABEL_167;
    v125 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (int64_t)ServantStatusDialog__GetVoiceAssetName(
                          (ServantStatusDialog_o *)mainInfo,
                          1,
                          ServantIdMashu3,
                          *((_DWORD *)v36 + v35),
                          v123,
                          v124);
    if ( !v125 )
      goto LABEL_166;
    v133 = v125->fields._items;
    v134 = Method_System_Collections_Generic_List_string__Add__;
    ++v125->fields._version;
    if ( !v133 )
      goto LABEL_166;
    v135 = v125->fields._size;
    v136 = mainInfo;
    if ( (unsigned int)v135 >= v133->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v125,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    }
    else
    {
      v137 = &v133->obj.klass + v135;
      v125->fields._size = v135 + 1;
      v137[4] = (Il2CppClass *)v136;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v137 + 4), v136, v127, v128, v129, v130, v131, v132);
    }
    goto LABEL_112;
  }
LABEL_149:
  v247 = this->fields.requestVoiceDataList;
  if ( !v247 )
LABEL_166:
    sub_1BE4D28(mainInfo, method);
  if ( v247->fields._size < 1 )
    return 0;
  mainInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v248);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B622AC )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B622AC = 1;
  }
  v249 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v249 = NetworkManager_TypeInfo;
  }
  if ( v249->static_fields->isRebootBlock )
    return 1;
  mainInfo = (int64_t)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.loadVoiceData,
    (int64_t)Item,
    v251,
    v252,
    v253,
    v254,
    v255,
    v256);
  mainInfo = (int64_t)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v258 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v258, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v21 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v258, 1, 0LL);
  return v21;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v19; // x21
  PartyOrganizationUtility_o *p_voicePlayer; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B62B7F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndPlayVoice__, v3);
    sub_1BE4ACC(&StringLiteral_6128/*"EndWaitVoice"*/, v4);
    byte_4B62B7F = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_36087664(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6128/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayList, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.voicePlayAssetName, 0LL, v12, v13, v14, v15, v16, v17);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v19, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (PartyOrganizationUtility_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1BE4A70(p_voicePlayer, 0LL, v21, v22, v23, v24, v25, v26);
      return;
    }
LABEL_13:
    sub_1BE4D28(voiceTabListViewManager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_4B62BC2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_1BE4ACC(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B62BC2 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1BE4D28(Instance, v8);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *tabInitList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  System_Action_object__o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ServantStatusFlavorTextListViewManager_o *v17; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v18; // x21
  struct ServantStatusFlavorTextListViewManager_o *v19; // x8

  v4 = this;
  if ( (byte_4B62BC1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ServantCommentEntity__TypeInfo, setMode);
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectFlavor__, v6);
    this = (ServantStatusDialog_o *)sub_1BE4ACC(&Method_ServantStatusDialog__UpdateProfileList_b__234_0__, v7);
    byte_4B62BC1 = 1;
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
    v10 = (System_Action_object__o *)sub_1BE4D18(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__234_0__, 0LL);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v10;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int64_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !setMode )
        return;
      v17 = v4->fields.profileTabListViewManager;
      v18 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v17 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v17, 1, v18, 0LL);
        v19 = v4->fields.profileTabListViewManager;
        if ( v19 )
        {
          v19->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1BE4D28(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( tabInitList->max_length <= 1 )
    sub_1BE4D30(this, setMode);
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
    sub_1BE4D28(this, *(_QWORD *)&imageLimitCount);
  }
}


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
    sub_1BE4D28(this, imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1BE4D28(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4B62BC6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_4B62BC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v7);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v9, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B62BC7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_AssetData__TypeInfo, _);
    sub_1BE4ACC(&Method_ServantStatusDialog__LoadTransformedResource_b__194_1__, v4);
    byte_4B62BC7 = 1;
  }
  v5 = (System_Action_object__o *)sub_1BE4D18(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_1__,
    0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v5, v6);
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  ServantStatusDialog_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4B62BC8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, _);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndLoadTransformedResource__, v4);
    byte_4B62BC8 = 1;
  }
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v8 = ServantStatusDialog__CoWaitForEndOfFrame(v6, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__224_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  PartyOrganizationUtility_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B62BC9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v6);
    byte_4B62BC9 = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30874304((CommonUI_o *)Instance, v9, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v10, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(v10, v11);
  }
  v10->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v11);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *Master_object; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  ServantCommentMaster_o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w22
  System_Int32_array *v19; // x23
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B62BCA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&int___TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B62BCA = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_35ED74C *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          v15 = (ServantCommentMaster_o *)Master_object;
          v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
          v16 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = v17;
          *(_QWORD *)&v21.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v21, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1BE4B74(int___TypeInfo, 1LL);
          if ( entity )
          {
            v19 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1BE4B74(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1BE4D30(Master_object, v11);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v15 )
              {
                ServantCommentMaster__SetOpen_40577348(v15, v18, v19, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BE4D28(Master_object, v11);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A23054;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2300C;
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
  if ( (byte_4B633B6 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isModify);
    byte_4B633B6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A231D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A23178;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+0h] [xbp-50h] BYREF
  char v14[4]; // [xsp+18h] [xbp-38h] BYREF
  char v15[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  if ( (byte_4B633B9 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isModify);
    byte_4B633B9 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isNeedSort, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A230C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A23070;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v16[0] = isModify;
  v15 = questId;
  if ( (byte_4B633B7 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isModify);
    sub_1BE4ACC(&int_TypeInfo, v9);
    byte_4B633B7 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&questId, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A2314C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A230EC;
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
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  char v21[4]; // [xsp+38h] [xbp-38h] BYREF
  char v22[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v22[0] = isModify;
  v21[0] = isNeedSort;
  v20 = questId;
  if ( (byte_4B633B8 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isModify);
    sub_1BE4ACC(&int_TypeInfo, v10);
    byte_4B633B8 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(bool_TypeInfo, v22, isNeedSort, *(_QWORD *)&questId, callback);
  v18[1] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v18, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4B633BE & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)sub_1BE4ACC(
                                                                  &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method);
    byte_4B633BE = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1BE4D28(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    v2->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__195_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
    sub_1BE4D28(this, data);
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
    sub_1BE4D28(this, data);
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
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantStatusDialog_o *_4__this; // x0
  long double v9; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B633BA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    sub_1BE4ACC(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__, v7);
    byte_4B633BA = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C369A8(v9);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C369A8(v9);
      _4__this = **(struct ServantStatusDialog_o ***)(v11 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BE4D28(_4__this, isDecide);
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1C369A8(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30874304(klass, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass217_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass217_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21

  v2 = this;
  if ( (byte_4B633BB & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass217_0_o *)sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B633BB = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v6,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1BE4D28(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v6, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v11; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v15; // x8
  struct ServantStatusDialog_o *v16; // x8
  struct ServantStatusDialog_o *v17; // x8
  Il2CppObject *v18; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v20; // x21

  if ( (byte_4B633BC & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B633BC = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30874304(mainInfo, 0LL, 0LL);
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
          v11);
        v15 = this->fields.__4__this;
        if ( v15 )
        {
          mainInfo = (CommonUI_o *)v15->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v15->fields.mainInfo,
              0LL);
            v16 = this->fields.__4__this;
            if ( v16 )
            {
              mainInfo = (CommonUI_o *)v16->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v16->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BE4D28(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v20, v18, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v11; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v15; // x8
  struct ServantStatusDialog_o *v16; // x8
  struct ServantStatusDialog_o *v17; // x8
  Il2CppObject *v18; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v20; // x21

  if ( (byte_4B633BD & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B633BD = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30874304(mainInfo, 0LL, 0LL);
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
          v11);
        v15 = this->fields.__4__this;
        if ( v15 )
        {
          mainInfo = (CommonUI_o *)v15->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v15->fields.mainInfo,
              0LL);
            v16 = this->fields.__4__this;
            if ( v16 )
            {
              mainInfo = (CommonUI_o *)v16->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v16->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BE4D28(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34961768((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BE4D18(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v20, v18, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v20, 0LL);
}