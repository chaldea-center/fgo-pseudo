void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F81D0 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_442/*"#4C4C4C"*/, v4);
    byte_49F81D0 = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_442/*"#4C4C4C"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_442/*"#4C4C4C"*/,
    v2,
    v3);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49F81CF & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v7);
    byte_49F81CF = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v8 = (struct System_Boolean_array *)sub_1B64170(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tabInitList, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v11,
                                                                  v12);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dictChangeSvtVoiceIdList, (int32_t)v13, v14, v15);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestVoiceDataList, (int32_t)v18, v19, v20);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceDataList, (int32_t)v23, v24, v25);
  v26 = StringLiteral_24501/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24501/*"wait"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultAnimationName, v26, v27, v28);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49F817A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49F817A = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, v6, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v8);
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
  UnityEngine_GameObject_o *v14; // x19
  Il2CppObject *v15; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v17; // x19
  Il2CppObject *v18; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct UICamera_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct UICamera_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  char v32[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v33[4]; // [xsp+8h] [xbp-58h] BYREF
  char v34[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v35[4]; // [xsp+18h] [xbp-48h] BYREF
  char v36[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49F8171 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&TouchEffectManager_TypeInfo, v3);
    sub_1B640C8(&UICamera_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_9841/*"OnDragEnd"*/, v5);
    sub_1B640C8(&StringLiteral_9862/*"OnHover"*/, v6);
    sub_1B640C8(&StringLiteral_9894/*"OnPress"*/, v7);
    sub_1B640C8(&StringLiteral_9904/*"OnScrollStop"*/, v8);
    byte_49F8171 = 1;
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
      UICamera__Notify(v12, (System_String_o *)StringLiteral_9841/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v14 = currentTouch->fields.dragged;
      v36[0] = 0;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v36);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v14, (System_String_o *)StringLiteral_9894/*"OnPress"*/, v15, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v17 = currentTouch->fields.current;
      v35[0] = 1;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v35);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v17, (System_String_o *)StringLiteral_9862/*"OnHover"*/, v18, 0LL);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v34[0] = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v34);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9894/*"OnPress"*/, v20, 0LL);
    v33[0] = 1;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v33);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9862/*"OnHover"*/, v21, 0LL);
    v32[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v32);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9904/*"OnScrollStop"*/, v22, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->current, 0, v24, v25);
  v26 = UICamera_TypeInfo->static_fields;
  v26->currentCamera = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->currentCamera, 0, v27, v28);
  v29 = UICamera_TypeInfo->static_fields;
  v29->currentTouch = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->currentTouch, 0, v30, v31);
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
  const MethodInfo *v16; // x2
  int32_t index; // w1
  ServantStatusBattleListViewManager_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F8193 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_49F8193 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             method)) == 0LL )
  {
    sub_1B64324(battleTabListViewManager);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B64324(v7);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v20.fields._current, v8);
    if ( !Item )
      sub_1B64324(0LL);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v11);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B64324(DispLimitCount);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v13);
      if ( !v15 )
        sub_1B64324(0LL);
      index = v15->fields.index;
      v18 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v18 )
        sub_1B64324(0LL);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v18, index, v16);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  SkillInfo_o *v10; // x1
  __int64 confirmDispLv; // x8
  int32_t v12; // w20
  int32_t v13; // w21
  const MethodInfo *v14; // x2
  bool v15; // w22
  __int64 i; // x24
  unsigned __int64 v17; // x29
  __int64 illustratorId; // x28
  SkillInfo_o *v19; // x0
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x23
  TreasureDvcInfo_o *v23; // x24
  TreasureDvcInfo_o *v24; // x25
  SkillInfo_array *v25; // x21
  SkillInfo_array *v26; // x22
  int32_t nextLimitCount; // w27
  __int64 v28; // x1
  __int64 v29; // x2
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v30; // x26
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // [xsp+18h] [xbp-98h]
  bool v33; // [xsp+2Ch] [xbp-84h]
  SkillInfo_array *v34; // [xsp+30h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49F8183 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_1B640C8(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_49F8183 = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v34 = 0LL;
  skillInfoList = 0LL;
  svtId = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
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
    sub_1B6432C(svtId, v10);
  v12 = (int)svtId;
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  v13 = dispSelectList->m_Items[confirmDispLv + 1];
  ServantStatusListViewItem__GetNpInfo_32489556(svtId, &tdInfo, v12, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetNpInfo_32489556(svtId, &info, v13, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_32488648(svtId, &skillInfoList, v12, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_32488648(svtId, &v34, v13, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_34;
  v15 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v17 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    illustratorId = svtId->fields.commandCodeCommentEntity->fields.illustratorId;
    if ( (__int64)v17 >= illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( v17 >= skillInfoList->max_length )
      goto LABEL_35;
    if ( !v34 )
      goto LABEL_34;
    if ( v17 >= v34->max_length )
      goto LABEL_35;
    v19 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    v10 = (SkillInfo_o *)*((_QWORD *)&v34->obj.klass + i);
    if ( !v19 )
    {
      if ( !v10 )
        continue;
      v19 = (SkillInfo_o *)*((_QWORD *)&v34->obj.klass + i);
      v10 = 0LL;
    }
    if ( !SkillInfo__Equals(v19, v10, 0LL) )
      goto LABEL_28;
  }
  if ( v15 )
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v14);
    return;
  }
LABEL_28:
  v33 = !v15;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v12, 0LL);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v13, 0LL);
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v24 = info;
  v23 = tdInfo;
  v26 = v34;
  v25 = skillInfoList;
  nextLimitCount = LimitCountByImageLimitCostumeIn;
  v30 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                              ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo,
                                                              v28,
                                                              v29);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndBattleConfirm__,
    v31);
  svtId = this->fields.mainInfo;
  if ( !svtId
    || (svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL),
        !servantStatusBattleConfirmDialog) )
  {
LABEL_34:
    sub_1B64324(svtId);
  }
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    v23,
    v24,
    v33,
    v25,
    v26,
    (__int64)v17 < illustratorId,
    v30,
    (int32_t)svtId,
    nowLimitCount,
    nextLimitCount,
    v32);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_49F81B2 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_49F81B2 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(this);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
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
  if ( (byte_49F81AF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, v5);
    byte_49F81AF = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1B64324(this);
  monitor[64] = dispLv;
  v7 = (System_Action_object__o *)sub_1B64314(System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_49F81B6 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_49F81B6 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(this);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_49F81B9 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_49F81B9 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(this);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_49F81B1 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_49F81B1 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(mainInfo);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
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
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *statusLoadAsset; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *cardLoadAsset; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *battleLoadAsset; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v32; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v38; // w2
  int v39; // w9
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F8191 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_1B640C8(&SoundManager_TypeInfo, v12);
    byte_49F8191 = 1;
  }
  memset(&v40, 0, sizeof(v40));
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
    v14);
  this->fields.mainInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, 0, v15, v16);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v18, v19);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cardLoadAsset, 0, v21, v22);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, 0, v24, v25);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.transformedStatusLoadAsset, 0, v28, v29);
  }
  ServantStatusDialog__StopVoice(this, v26);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v32 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v32;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0LL);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v34, v35);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v40.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1B64324(statusTabListViewManager);
  v38 = voiceDataList->fields._size;
  v39 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v39;
  if ( v38 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v38, 0LL);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F81A8 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback);
    byte_49F81A8 = 1;
  }
  v4 = sub_1B64314(ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback, method);
  ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)callback, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  BattleFBXComponent_o *v4; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_49F8181 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8181 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v4 = this->fields.battleActor;
    if ( !v4 )
      sub_1B64324(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.battleChr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v6, 0LL);
  }
}


void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  __int64 v6; // x1
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v8; // x2

  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_8;
  ServantStatusBattleConfirmDialog__Close_31467612(servantStatusBattleConfirmDialog, 0LL, method);
  if ( isDecide )
  {
    tabInitList = this->fields.tabInitList;
    if ( tabInitList )
    {
      if ( !tabInitList->max_length )
        sub_1B6432C(servantStatusBattleConfirmDialog, v6);
      tabInitList->m_Items[4] = 0;
      servantStatusBattleConfirmDialog = (ServantStatusBattleConfirmDialog_o *)this->fields.statusTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__DestroyList(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          0LL);
        ServantStatusDialog__SetChangeBattleResource(this, 1, v8);
        return;
      }
    }
LABEL_8:
    sub_1B64324(servantStatusBattleConfirmDialog);
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_49F81B3 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F81B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1B64324(Instance);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v7; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *battleActor; // x8

  if ( (byte_49F8186 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F8186 = 1;
  }
  this->fields.isBattlePlay = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_11;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_11;
  v7 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v7,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1B64324(mainInfo);
  }
  BattleFBXComponent__SetEvolutionLevel(battleActor, v7, (int32_t)mainInfo, 0LL);
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
  __int64 v4; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49F819C & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_49F819C = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1B64324(v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v6, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49F819A & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_49F819A = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1B64324(v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v6, 0LL);
}


void __fastcall ServantStatusDialog__EndCommandCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F8177 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssetData__TypeInfo, data);
    sub_1B640C8(&Method_ServantStatusDialog_EndTransformedStatusLoad__, v4);
    byte_49F8177 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_AssetData__TypeInfo, data, method);
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
  __int64 v26; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0
  float v34; // s0
  int32_t v35; // w22
  UnityEngine_GameObject_o *v36; // x20
  int v37; // w21
  UnityEngine_GameObject_o *v38; // x0
  float v39; // s0
  int32_t v40; // w22
  UnityEngine_GameObject_o *v41; // x20
  UnityEngine_GameObject_o *v42; // x0
  float v43; // s0
  bool v44; // w1
  struct ServantStatusListViewItem_o *v45; // x8
  int32_t v46; // w20
  int32_t v47; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v50; // x22
  struct ServantStatusListViewItem_o *v51; // x8
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v53; // x21
  int32_t kind; // w8
  bool v55; // w8
  bool v56; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v59; // x8
  bool *v60; // x10
  struct ServantStatusListViewItem_o *v61; // x8
  ServantCommentMaster_o *v62; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v67; // x1
  struct ServantStatusListViewItem_o *v68; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v70; // x21
  UnityEngine_Object_o *v71; // x21
  const MethodInfo *v72; // x2
  UILabel_o *v73; // x21
  ServantLimitAddMaster_o *v74; // x21
  int32_t v75; // w8
  char v76; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v78; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v80; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v83; // x22
  struct ServantStatusListViewItem_o *v84; // x8
  int32_t v85; // w2
  int32_t limitCount; // w1
  int32_t v87; // w8
  struct ServantStatusListViewItem_o *v88; // x9
  struct UserServantEntity_o *v89; // x0
  int32_t v90; // w21
  int32_t v91; // w21
  ServantLimitImageMaster_o *v92; // x22
  struct ServantStatusListViewItem_o *v93; // x8
  int32_t v94; // w2
  int32_t v95; // w8
  struct ServantStatusListViewItem_o *v96; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v98; // w1
  int32_t v99; // w2
  struct ServantLeaderInfo_o *v100; // x9
  System_String_o *v101; // x1
  ServantLimitImageMaster_o *v102; // x21
  struct ServantStatusListViewItem_o *v103; // x8
  struct UserServantCollectionEntity_o *v104; // x8
  struct UIRangeLabel_o *v105; // x21
  struct ServantEntity_o *v106; // x22
  __int64 v107; // x23
  __int64 v108; // x24
  int32_t v109; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v111; // x8
  UILabel_o *v112; // x21
  struct ServantStatusListViewItem_o *v113; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v115; // x8
  ServantLimitImageMaster_o *v116; // x21
  UILabel_o *v117; // x22
  struct ServantStatusListViewItem_o *v118; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v120; // x22
  __int64 v121; // x23
  int32_t v122; // w22
  struct UILabel_o *v123; // x23
  System_String_o *mText; // x25
  System_String_o *v125; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v127; // x0
  System_String_o *v128; // x1
  UILabel_o *v129; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v131; // x21
  __int64 *v132; // x8
  struct ServantStatusListViewItem_o *v133; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v135; // x0
  const MethodInfo *v136; // x1
  const MethodInfo *v137; // x2
  int32_t v138; // w8
  unsigned int v139; // w8
  const MethodInfo *v140; // x1
  unsigned int v141; // w8
  bool v142; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_49F816F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&OptionManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&TutorialFlag_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_11797/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_1B640C8(&StringLiteral_11796/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v16);
    sub_1B640C8(&StringLiteral_11798/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v17);
    sub_1B640C8(&StringLiteral_11799/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v18);
    sub_1B640C8(&StringLiteral_11804/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v19);
    sub_1B640C8(&StringLiteral_11803/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v20);
    sub_1B640C8(&StringLiteral_4033/*"CancelInput"*/, v21);
    sub_1B640C8(&StringLiteral_1/*""*/, v22);
    sub_1B640C8(&StringLiteral_5948/*"EndLoadInit"*/, v23);
    byte_49F816F = 1;
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
      v28 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v28, LocalPositionX + 0.0, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_241;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_241;
      v32 = baseObject;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      v34 = GameObjectExtensions__GetLocalPositionX(v33, 0LL);
      GameObjectExtensions__SetLocalPositionX(v32, v34 + (float)changeTransformAddTabMargin, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_241;
      v35 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_241;
      v36 = baseObject;
      v37 = v35 + changeTransformAddTabMargin;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v39 = GameObjectExtensions__GetLocalPositionX(v38, 0LL);
      GameObjectExtensions__SetLocalPositionX(v36, v39 + (float)v37, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_241;
      v40 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_241;
      v41 = baseObject;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v43 = GameObjectExtensions__GetLocalPositionX(v42, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, v43 + (float)(v40 + v37), 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v44 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v44 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v44, 0LL);
  }
  v45 = this->fields.mainInfo;
  if ( !v45 )
    goto LABEL_241;
  if ( v45->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v46 = 0;
        v47 = 21;
        break;
      case 4:
      case 0x16:
        v46 = 0;
        v47 = 22;
        break;
      case 5:
      case 0x17:
        v46 = 0;
        v47 = 23;
        break;
      case 6:
      case 0x18:
        v46 = 0;
        v47 = 24;
        break;
      case 7:
      case 0x19:
        v46 = 0;
        v47 = 25;
        break;
      case 8:
      case 0x1A:
        v46 = 0;
        v47 = 26;
        break;
      case 9:
      case 0x1B:
        v46 = 0;
        v47 = 27;
        break;
      case 0x1D:
      case 0x20:
        v46 = 0;
        v47 = 32;
        break;
      default:
        v46 = 0;
        v47 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v45->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_241;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_37376848(106, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v50 = this;
    else
      v50 = 0LL;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v51 = this->fields.mainInfo;
      if ( !v51 )
        goto LABEL_241;
      favoriteUserSvtId = v51->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v53 = v50;
      else
        v53 = 0LL;
      if ( favoriteUserSvtId < 1 )
      {
        v55 = 0;
        v53 = this;
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
            v55 = 0;
            if ( !v53 )
              goto LABEL_241;
          }
          else
          {
            v55 = kind != 12;
            if ( !v53 )
              goto LABEL_241;
          }
        }
        else
        {
          v55 = 0;
          v53 = v50;
          if ( !v50 )
            goto LABEL_241;
        }
      }
    }
    else
    {
      v55 = 0;
      v53 = this;
    }
    v53->fields.isUseFavorite = v55;
    v56 = SvtType__IsOrganization(type, 0LL) && this->fields.kind != 12;
    this->fields.isUsePush = v56;
    baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v46 = 0;
      v47 = 28;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v87 = this->fields.kind;
        switch ( v87 )
        {
          case 3:
          case 12:
            v46 = 0;
            v47 = 12;
            break;
          case 4:
          case 13:
            v46 = 0;
            v47 = 13;
            break;
          case 5:
          case 14:
            v46 = 0;
            v47 = 14;
            break;
          case 6:
          case 15:
            v46 = 0;
            v47 = 15;
            break;
          case 7:
          case 16:
            v46 = 0;
            v47 = 16;
            break;
          case 8:
          case 17:
            v46 = 0;
            v47 = 17;
            break;
          case 9:
          case 18:
            v46 = 0;
            v47 = 18;
            break;
          case 19:
            v46 = 0;
            v47 = 19;
            break;
          case 29:
          case 31:
            v46 = 0;
            v47 = 31;
            break;
          default:
            v142 = v87 == 33;
            v47 = 11;
            v46 = v142;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v95 = this->fields.kind, v95 == 36) )
        {
          v46 = 0;
          goto LABEL_64;
        }
        v46 = 0;
        if ( v95 == 29 )
          v47 = 30;
        else
          v47 = 10;
      }
    }
  }
  this->fields.kind = v47;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_241;
  max_length = tabInitList->max_length;
  v59 = 0LL;
  v60 = &tabInitList->m_Items[4];
  do
  {
    if ( v59 >= max_length )
      sub_1B6432C(baseObject, v26);
    v60[v59++] = 0;
  }
  while ( v59 != 4 );
  v61 = this->fields.mainInfo;
  if ( !v61 )
    goto LABEL_241;
  if ( v61->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v62 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v62 )
      goto LABEL_241;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v62, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v64,
      v65);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v67);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v68 = this->fields.mainInfo;
  if ( !v68 )
    goto LABEL_241;
  commandCodeEntity = v68->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v74 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v74 )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v74,
                                               (int32_t)baseObject,
                                               0LL);
    v75 = this->fields.kind;
    v76 = (char)baseObject;
    if ( (v75 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v78 = this->fields.mainInfo;
        if ( !v78 )
          goto LABEL_241;
        servantLeaderInfo = v78->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_241;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v80 = this->fields.mainInfo;
        if ( !v80 )
          goto LABEL_241;
        if ( (v76 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v80->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_241;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_241;
          v83 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v83 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v83,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v84 = this->fields.mainInfo;
          if ( !v84 )
            goto LABEL_241;
          v85 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v84->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = -1;
        }
        else
        {
          v100 = v80->fields.servantLeaderInfo;
          if ( !v100 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v80->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = v100->fields.limitCount;
          v85 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v85, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_241;
      v101 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v101, 0LL, 1, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v111 = this->fields.mainInfo;
        if ( !v111 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)v111->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v112 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v113 = this->fields.mainInfo;
          if ( !v113 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v113->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        if ( !v112 )
          goto LABEL_241;
        UILabel__set_text(v112, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_221;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v115 = this->fields.mainInfo;
      if ( !v115 )
        goto LABEL_241;
      if ( v115->fields.userSvtEntity )
      {
        v116 = (ServantLimitImageMaster_o *)baseObject;
        v117 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
        if ( !v117 )
          goto LABEL_241;
        UILabel__set_text(v117, (System_String_o *)baseObject, 0LL);
        v118 = this->fields.mainInfo;
        if ( !v118 )
          goto LABEL_241;
        userSvtEntity = v118->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_241;
        v121 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v120 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v144.fields.currentCryptoKey = v121;
        *(_QWORD *)&v144.fields.fakeValue = v120;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v144,
                                                   0LL);
        if ( !v116 )
          goto LABEL_241;
        v122 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v116,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_214;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v116,
                                                   (System_String_o *)StringLiteral_11799/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v122,
                                                   0LL);
        v123 = this->fields.battleExplanationLabel;
        if ( !v123 )
          goto LABEL_241;
        mText = v123->fields.mText;
        v125 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v116,
                                                        v122,
                                                        3,
                                                        0LL);
        v127 = System_String__Format(v125, LimitCountSealedServantName, 0LL);
        v128 = System_String__Concat_61375396(mText, v127, 0LL);
        v129 = v123;
      }
      else
      {
        userSvtCollectionEntity = v115->fields.userSvtCollectionEntity;
        v131 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v132 = &StringLiteral_11797/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v132 = &StringLiteral_11798/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v132, 0LL);
        if ( !v131 )
          goto LABEL_241;
        v128 = (System_String_o *)baseObject;
        v129 = v131;
      }
      UILabel__set_text(v129, v128, 0LL);
LABEL_214:
      v133 = this->fields.mainInfo;
      if ( !v133 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_241;
      IsTransformServant_k__BackingField = v133->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_241;
        v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v135, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_221;
    }
    if ( (unsigned int)(v75 - 6) <= 2 )
    {
      v96 = this->fields.mainInfo;
      if ( !v96 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)v96->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v76 & 1) != 0 )
      {
        v98 = -1;
        v99 = 0;
      }
      else
      {
        v99 = -1;
        v98 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v98, v99, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_241;
      v101 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v88 = this->fields.mainInfo;
    if ( !v88 )
      goto LABEL_241;
    v89 = v88->fields.userSvtEntity;
    if ( v89 )
    {
      if ( (v76 & 1) == 0 )
      {
        v105 = this->fields.servantNameRangeLabel;
        v106 = v88->fields.svtEntity;
        v108 = *(_QWORD *)&v89->fields.limitCount.fields.currentCryptoKey;
        v107 = *(_QWORD *)&v89->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v143.fields.currentCryptoKey = v108;
        *(_QWORD *)&v143.fields.fakeValue = v107;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v143,
                                                   0LL);
        if ( !v106 )
          goto LABEL_241;
        v109 = (int)baseObject;
        v94 = -1;
        baseObject = (UnityEngine_GameObject_o *)v106;
        goto LABEL_172;
      }
      v90 = UserServantEntity__getCardImageLimitCount(v89, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v91 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v90, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_241;
      v92 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v92 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v92,
                                                 (int32_t)baseObject,
                                                 v91,
                                                 0LL);
      v93 = this->fields.mainInfo;
      if ( !v93 )
        goto LABEL_241;
      v94 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v93->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    else
    {
      if ( (v76 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v88->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v105 = this->fields.servantNameRangeLabel;
        v109 = -1;
        v94 = -1;
        goto LABEL_172;
      }
      if ( v88->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_241;
        v102 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v103 = this->fields.mainInfo;
        if ( !v103 )
          goto LABEL_241;
        v104 = v103->fields.userSvtCollectionEntity;
        if ( !v104 )
          goto LABEL_241;
        if ( !v102 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v102,
                                                   (int32_t)baseObject,
                                                   v104->fields.maxLimitCount,
                                                   0LL);
        v88 = this->fields.mainInfo;
        if ( !v88 )
          goto LABEL_241;
        v94 = (int)baseObject;
      }
      else
      {
        v94 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v88->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    v105 = this->fields.servantNameRangeLabel;
    v109 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v109, v94, 0LL);
    if ( !v105 )
      goto LABEL_241;
    v101 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v105;
    goto LABEL_174;
  }
  v70 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v70 )
    goto LABEL_241;
  UIRangeLabel__Set(v70, (System_String_o *)baseObject, 0LL, 1, 0, 0LL);
  v71 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    v73 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v73 )
    {
      UILabel__set_text(v73, (System_String_o *)baseObject, 0LL);
      goto LABEL_221;
    }
LABEL_241:
    sub_1B64324(baseObject);
  }
LABEL_221:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_241;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v72);
  ServantStatusDialog__SetMark(this, v136);
  v138 = this->fields.kind;
  if ( v138 > 28 )
  {
    v139 = v138 - 30;
    if ( v139 < 7 )
    {
      v46 = dword_BDBBD0[v139];
      goto LABEL_230;
    }
LABEL_228:
    v46 = 0;
    goto LABEL_230;
  }
  if ( v138 == 10 )
  {
    v46 = 1;
    goto LABEL_230;
  }
  if ( v138 != 11 )
  {
    v46 = 1;
    if ( v138 != 28 )
      goto LABEL_228;
  }
LABEL_230:
  ServantStatusDialog__SetTabKind(this, v46, v137);
  v141 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v141 - 10 < 0x13 || v141 <= 0x24 && ((1LL << v141) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5948/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v140);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4033/*"CancelInput"*/,
    0.0,
    0LL);
}


void __fastcall ServantStatusDialog__EndLoadBattle(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F817D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_49F817D = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_31535984(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadBattle_31535984(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_49F817E & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49F817E = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_49F81D6 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49F81D6 = 1;
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
      sub_1B64324(v4);
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
  const MethodInfo *v5; // x1

  if ( (byte_49F8185 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_49F8185 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_49F8172 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog__EndLoadInit_b__134_0__, v4);
    byte_49F8172 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__134_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v5, v6);
  ServantStatusDialog__InitList(this, v7);
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

  if ( (byte_49F81A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F81A9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64324(Instance);
  }
  if ( v8->max_length <= 3 )
LABEL_13:
    sub_1B6432C(Instance, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Item; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x21

  if ( (byte_49F8189 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B640C8(&Method_ServantStatusDialog_EndLoadVoice__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&SoundManager_TypeInfo, v11);
    byte_49F8189 = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v15 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)loadVoiceData;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)loadVoiceData, v2, v3);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v18, v19);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v21, v22);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v23 = this->fields.loadVoiceData;
              v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
              System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v23, v26, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1B64324(voiceDataList);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v10; // w9
  il2cpp_array_size_t max_length; // w10
  ServantVoiceData_o *v12; // x8
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F818D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5975/*"EndWaitVoice"*/, method);
    byte_49F818D = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v10 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v10;
    max_length = voicePlayList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= max_length )
        sub_1B6432C(voiceTabListViewManager, v6);
      v12 = voicePlayList->m_Items[v10];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5975/*"EndWaitVoice"*/,
          v12->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1B64324(voiceTabListViewManager);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_34577244(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v13, v14);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_34577244(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *statusTabListViewManager; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x2
  ServantStatusListViewManager_o *v13; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_49F81A5 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_49F81A5 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  statusTabListViewManager = **(CommonUI_o ***)(v8 + 184);
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
    ServantStatusDialog__SetTabKind(this, 0, v12);
  }
  v13 = this->fields.statusTabListViewManager;
  v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v10,
                                                         v11);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v13 )
LABEL_13:
    sub_1B64324(statusTabListViewManager);
  ServantStatusListViewManager__SetMode(v13, 1, v14, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F8175 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssetData__TypeInfo, data);
    sub_1B640C8(&Method_ServantStatusDialog_EndCommandCardLoad__, v4);
    byte_49F8175 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_AssetData__TypeInfo, data, method);
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_49F8179 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_5948/*"EndLoadInit"*/, v6);
    byte_49F8179 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1B64324(Instance);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5948/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v10; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v13; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v15; // x22
  SePlayer_o *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x0

  v4 = this;
  if ( (byte_49F818C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog_EndPlayVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&SoundManager_TypeInfo, v6);
    byte_49F818C = 1;
  }
  voicePlayList = v4->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v4->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1B6432C(this, method);
      v10 = voicePlayList->m_Items[voicePlayNum];
      if ( v10 )
      {
        voicePlayAssetName = v4->fields.voicePlayAssetName;
        id = v10->fields.id;
        v13 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v13 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v13->static_fields->DEFAULT_VOLUME;
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
        System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v16 = SoundManager__playVoice_38387180(voicePlayAssetName, id, DEFAULT_VOLUME, v15, 0LL);
        p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayer;
        v4->fields.voicePlayer = v16;
        goto LABEL_16;
      }
LABEL_17:
      sub_1B64324(this);
    }
    if ( v4->fields.tabKind == 3 && (v4->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_34577244((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v4->fields.voiceListIndex = -1;
    }
    v4->fields.voicePlayList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayList, 0, v2, v3);
    p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayAssetName;
    LODWORD(v16) = 0;
    v4->fields.voicePlayNum = 0;
    v4->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1B6406C(p_voicePlayer, (int32_t)v16, v17, v18);
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_49F81B0 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F81B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(Instance);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
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
  if ( (byte_49F81A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F81A2 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v43 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_59;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v41, 0LL);
  if ( !v17 )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v40, 0LL);
    if ( !v21 )
      goto LABEL_59;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
  if ( !v24 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1B64324(this);
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
        sub_1B6432C(this, result);
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
                                    (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
  int32_t v4; // w2
  int32_t v5; // w3
  BattleFBXComponent_o *v6; // x0
  void *individualityCallbackFunc; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  if ( (byte_49F81A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F81A3 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v6 = this->fields.battleActor;
    if ( !v6 )
      sub_1B64324(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v6, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc, 0, v4, v5);
    this->fields.resultCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v8, v9);
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v10, v11);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v4, v5);
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v15, v16);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc, 0, v4, v5);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v4, v5);
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
  int v27; // w22
  bool v28; // w0
  int v29; // w23
  int v30; // w23
  bool v31; // w0
  int v32; // w21
  int v33; // w21
  const MethodInfo *v34; // x2
  struct ServantStatusListViewItem_o *v35; // x1
  int32_t ManualSetCardLimitCount; // w20
  __int64 v37; // x2
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  struct UserCommandCodeEntity_o *v39; // x8
  __int128 v40; // q0
  CommandCodeSetStatusRequest_o *v41; // x19
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x20
  __int64 v44; // x21
  int32_t v45; // w24
  int v46; // w26
  BalanceConfig_c *v47; // x0
  char v48; // w20
  int32_t ManualSetDispLimitCount; // w0
  int32_t v50; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  char v52; // w22
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v54; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v55; // x8
  char v56; // w29
  int32_t ManualSetIconLimitCount; // w0
  int32_t v58; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  char v60; // w29
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v62; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v63; // x8
  ServantStatusListViewItem_o *v64; // x8
  ServantStatusListViewItem_o *v65; // x8
  char v66; // w21
  char v67; // w22
  int v68; // w20
  char v69; // w26
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  __int64 v72; // x23
  bool isPush; // w27
  char v74; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  __int64 v76; // x2
  NetworkManager_ResultCallbackFunc_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  CardFavoriteRequest_o *v80; // x19
  int32_t v81; // [xsp+58h] [xbp-118h]
  int32_t v82; // [xsp+5Ch] [xbp-114h]
  int32_t v83; // [xsp+60h] [xbp-110h]
  int32_t limitCountSupport; // [xsp+64h] [xbp-10Ch]
  int32_t randomSettingSupport; // [xsp+68h] [xbp-108h]
  int32_t randomSettingOwn; // [xsp+6Ch] [xbp-104h]
  int32_t battleVoice; // [xsp+70h] [xbp-100h]
  int32_t commonFlag; // [xsp+74h] [xbp-FCh]
  int32_t iconLimitCount; // [xsp+78h] [xbp-F8h]
  int32_t portraitLimitCount; // [xsp+7Ch] [xbp-F4h]
  char v91; // [xsp+80h] [xbp-F0h]
  char v92; // [xsp+84h] [xbp-ECh]
  char v93; // [xsp+88h] [xbp-E8h]
  char v94; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_49F81A1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&OtherUserNewManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v10);
    sub_1B640C8(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_1B640C8(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_1B640C8(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v14);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v15);
    byte_49F81A1 = 1;
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
  v27 = UserServantNewManager__WriteData(0LL) || isModify;
  this->fields.isModify = v27;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  v28 = UserServantCollectionManager__WriteData(0LL);
  v29 = v27 | v28;
  this->fields.isModify = v27 | v28;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  v30 = v29 | ServantCommentManager__WriteData(0LL);
  this->fields.isModify = v30;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  v31 = OtherUserNewManager__WriteData(0LL);
  v32 = v30 | v31;
  this->fields.isModify = v30 | v31;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  v33 = v32 | UserCommandCodeNewManager__WriteData(0LL);
  this->fields.isModify = v33 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v35 = this->fields.mainInfo;
  this->fields.isModify = (v33 != 0) | IsModifyLock & 1;
  if ( !v35 )
    goto LABEL_131;
  if ( !v35->fields.userSvtEntity )
  {
    if ( v35->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v35, 0LL);
      if ( !*p_mainInfo )
        goto LABEL_131;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1) != 0 )
      {
        this->fields.isModify = 1;
        v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v35, v37);
        NetworkManager_ResultCallbackFunc___ctor(
          v38,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v38,
                                  (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *p_mainInfo )
        {
          v39 = (*p_mainInfo)->fields.userCommandCodeEntity;
          if ( v39 )
          {
            v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
            v41 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v98.fields.fakeValue = v40;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v95 = v98;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v95, 0LL);
            if ( *p_mainInfo )
            {
              if ( v41 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v41,
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
  if ( v35->fields.isConvertOverwriteImage )
    goto LABEL_35;
  IsModifyLock = (int64_t)this->fields.charaGraphListViewManager;
  if ( !IsModifyLock )
    goto LABEL_131;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v35,
                            v34);
  if ( !IsModifyLock )
  {
    v35 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
LABEL_35:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v35, 0LL);
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
    v47 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    v46 = 1;
    v45 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v47->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_134:
    if ( !*p_mainInfo )
      goto LABEL_131;
    v42 = (*p_mainInfo)->fields.userSvtEntity;
    if ( !v42 )
      goto LABEL_131;
    v44 = *(_QWORD *)&v42->fields.imageLimitCount.fields.currentCryptoKey;
    v43 = *(_QWORD *)&v42->fields.imageLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v99.fields.currentCryptoKey = v44;
    *(_QWORD *)&v99.fields.fakeValue = v43;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v99, 0LL);
    v46 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v48 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0LL);
    v50 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v51 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v51 )
      goto LABEL_131;
    v50 = BasicHelper__DecryptValue_40698696(v51[8], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v52 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0LL);
    v54 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v55 )
      goto LABEL_131;
    v54 = BasicHelper__DecryptValue_40698696(v55[9], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v56 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0LL);
    v58 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v59 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v59 )
      goto LABEL_131;
    v58 = BasicHelper__DecryptValue_40698696(v59[10], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v94 = v56;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v60 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0LL);
    v62 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v62;
  }
  else
  {
    v63 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v63 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_40698696(v63[11], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v64 = *p_mainInfo;
  v93 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v92 = v52;
  commonFlag = v64->fields.svtCommonFlag;
  iconLimitCount = v58;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v64, 0LL);
  v65 = *p_mainInfo;
  v91 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v66 = v48;
  battleVoice = v65->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v65, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v67 = IsModifyLock;
  v68 = v46;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v69 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v70 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v70 )
    goto LABEL_131;
  v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
  v72 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v98.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v50;
  v83 = v54;
  v97 = v98;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v97, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v72 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0LL);
  v74 = IsModifyLock;
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
  v81 = v45;
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
    sub_1B64324(IsModifyLock);
  }
  if ( v68 | v66 & 1 | v92 & 1 | v94 & 1 | v60 & 1 | v93 & 1 | v91 & 1 | v67 & 1 | v69 & 1 | v74 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v77 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v35, v76);
    NetworkManager_ResultCallbackFunc___ctor(
      v77,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v77,
                              (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *p_mainInfo )
    {
      v78 = (*p_mainInfo)->fields.userSvtEntity;
      if ( v78 )
      {
        v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
        v80 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v98.fields.fakeValue = v79;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v96 = v98;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v96, 0LL);
        if ( *p_mainInfo )
        {
          if ( v80 )
          {
            CardFavoriteRequest__beginRequest(
              v80,
              IsModifyLock,
              v81,
              v82,
              v83,
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
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v35);
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
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v16; // x19
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8187 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_9462/*"NoblePhantasm_"*/, v10);
    sub_1B640C8(&StringLiteral_4441/*"ChrVoice_"*/, v11);
    sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v12);
    byte_49F8187 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v18 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v16 = (System_String_o **)off_4458570[assetType];
    v17 = System_Int32__ToString((int32_t)&v18, 0LL);
    return System_String__Concat_61375396(*v16, v17, 0LL);
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
  ServantStatusDialog_c *v8; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v10; // x8
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20
  unsigned __int128 v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_49F816E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_ServantStatusDialog__Init_b__130_0__, v5);
    sub_1B640C8(&ServantStatusDialog_TypeInfo, v6);
    byte_49F816E = 1;
  }
  v16 = 0uLL;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
  {
    v8 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v8 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v8->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v16,
                                               0LL);
    v10 = this->fields.pushButton;
    if ( !v10 )
LABEL_18:
      sub_1B64324(baseObject);
    v10->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v16;
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
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v11);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0LL);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__130_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v15, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  BattleFBXComponent_o *v4; // x0
  UnityEngine_Object_o *battleChr; // x20
  ServantStatusBattleListViewItem_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F817B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F817B = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v4 = this->fields.battleActor;
    if ( !v4 )
      sub_1B64324(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    p_battleChr = (ServantStatusBattleListViewItem_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1B6406C(p_battleChr, 0, v8, v9);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v19; // x21

  if ( (byte_49F8195 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectCharaGraph__, v6);
    sub_1B640C8(&Method_ServantStatusDialog__InitList_b__172_0__, v7);
    byte_49F8195 = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v10 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v11);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int32_t)v10,
    v13,
    v14);
  ServantStatusCharaGraphListViewManager__SetMode_31489336(charaGraphListViewManager, 2, v15);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__172_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v19, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(v12);
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
  __int64 v12; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *supportRandomLimitCountList; // x8
  ServantCostumeMaster_o *v15; // x21
  signed int v16; // w25
  unsigned int max_length; // w9
  int32_t v18; // w22
  BalanceConfig_c *v19; // x0
  ServantCostumeEntity_o *v20; // x23
  struct ServantStatusListViewItem_o *v21; // x8
  struct UserServantEntity_o *v22; // x8
  __int64 v23; // x23
  __int64 v24; // x24
  ServantLimitAddEntity_o *v25; // x23
  struct ServantStatusListViewItem_o *v26; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v28; // x23
  __int64 v29; // x24
  struct ServantStatusListViewItem_o *v30; // x8
  ServantCostumeEntity_o *v32; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49F81C3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&ServantCostumeEntity_TypeInfo, v7);
    sub_1B640C8(&ServantLimitAddEntity_TypeInfo, v8);
    byte_49F81C3 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1B64324(RandomGroupIndex);
  supportRandomLimitCountList = mainInfo->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    v15 = RandomGroupIndex;
    v16 = 0;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( v16 > (int)max_length )
        break;
      if ( v16 )
      {
        if ( v16 - 1 >= max_length )
          sub_1B6432C(RandomGroupIndex, v11);
        v18 = supportRandomLimitCountList->m_Items[v16];
      }
      else
      {
        v18 = 0;
      }
      v19 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( v18 <= v19->static_fields->ServantLimitMax )
      {
        v25 = (ServantLimitAddEntity_o *)sub_1B64314(ServantLimitAddEntity_TypeInfo, v11, v12);
        ServantLimitAddEntity___ctor(v25, 0LL);
        entity = v25;
        v26 = this->fields.mainInfo;
        if ( !v26 )
          goto LABEL_35;
        userSvtEntity = v26->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_35;
        v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v29;
        *(_QWORD *)&v35.fields.fakeValue = v28;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v35,
                                                       0LL);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v18,
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
        v20 = (ServantCostumeEntity_o *)sub_1B64314(ServantCostumeEntity_TypeInfo, v11, v12);
        ServantCostumeEntity___ctor(v20, 0LL);
        v32 = v20;
        v21 = this->fields.mainInfo;
        if ( !v21 )
          goto LABEL_35;
        v22 = v21->fields.userSvtEntity;
        if ( !v22 )
          goto LABEL_35;
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v24;
        *(_QWORD *)&v34.fields.fakeValue = v23;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v34,
                                                       0LL);
        if ( !v15 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v15,
                                                       &v32,
                                                       (int32_t)RandomGroupIndex,
                                                       v18,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_35;
          if ( v32->fields.groupIndex )
            return 1;
        }
      }
      v30 = this->fields.mainInfo;
      if ( v30 )
      {
        supportRandomLimitCountList = v30->fields.supportRandomLimitCountList;
        ++v16;
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
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F81A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssetData__TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog__LoadTransformedResource_b__194_0__, v4);
    byte_49F81A7 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_AssetData__TypeInfo, method, v2);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_0__,
    0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v5, v6);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F819F & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickCancel__, method);
    byte_49F819F = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  const MethodInfo *v6; // x1
  struct ServantStatusListViewItem_o *v7; // x8

  v2 = this;
  if ( (byte_49F81A6 & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnClickChangeTransform__, method);
    byte_49F81A6 = 1;
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
        v4 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      v7 = v2->fields.mainInfo;
      if ( v7 )
      {
        v7->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, v6);
        return;
      }
    }
    sub_1B64324(this);
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
  if ( (byte_49F81C4 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickChangeVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81C4 = 1;
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
          v10 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickChangeVoice__);
        v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&type,
                                                            method);
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
    sub_1B64324(this);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F81C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickChoice__, method);
    byte_49F81C7 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B64324(0LL);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  if ( (byte_49F81B5 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickCommandCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81B5 = 1;
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
          sub_1B6432C(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
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
    sub_1B64324(this);
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
  if ( (byte_49F81B4 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickCommandCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81B4 = 1;
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
          v10 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_1B64324(this);
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
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusDialog_EndDelegate_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x23
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v29; // x20
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  int32_t kind; // w24
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x21
  ServantStatusDialog_EndDelegate_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x23
  int32_t v40; // w1
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  ServantStatusListViewManager_CallbackFunc_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  bool v49; // w3
  CommonUI_o *v50; // x0
  CommandCodeEntity_o *v51; // x2

  v4 = this;
  if ( (byte_49F81BC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_1B640C8(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickCommandCodeShow__, v9);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v10);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectEquipStatus__, v11);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_49F81BC = 1;
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
        v18 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v21, v22);
      ServantStatusDialog_EndDelegate___ctor(
        v23,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(v26, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30360796((CommonUI_o *)Instance, 20, v17, v23, v26, 0LL);
        return;
      }
LABEL_27:
      sub_1B64324(this);
    }
    goto LABEL_17;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0LL);
    if ( CommandCodeEntity )
    {
      v29 = CommandCodeEntity;
      v30 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v31 = (System_Reflection_MethodBase_o *)sub_1B640AC(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
      kind = v4->fields.kind;
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v36 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
        ServantStatusDialog_EndDelegate___ctor(
          v36,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
        System_Action___ctor(v39, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v35 )
          goto LABEL_27;
        v40 = 22;
      }
      else
      {
        v36 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
        ServantStatusDialog_EndDelegate___ctor(
          v36,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
        System_Action___ctor(v39, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v35 )
          goto LABEL_27;
        if ( kind != 5 )
        {
          v40 = 25;
          v50 = (CommonUI_o *)v35;
          v51 = v29;
          v49 = 0;
          goto LABEL_26;
        }
        v40 = 23;
      }
      v49 = 1;
      v50 = (CommonUI_o *)v35;
      v51 = v29;
LABEL_26:
      CommonUI__OpenServantEquipStatusDialog_30361548(v50, v40, v51, v49, v36, v39, 0LL);
      return;
    }
  }
LABEL_17:
  v41 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v41 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v42 = (System_Reflection_MethodBase_o *)sub_1B640AC(v41, v41[4]);
  OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v46 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v44,
                                                         v45);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v46,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v46, 0LL);
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
  if ( (byte_49F81B8 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickFaceCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81B8 = 1;
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
          sub_1B6432C(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
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
    sub_1B64324(this);
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
  if ( (byte_49F81B7 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickFaceCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81B7 = 1;
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
          v10 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_1B64324(this);
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
  Il2CppObject *Entity; // x24
  ServantStatusDialog_o *v33; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v36; // x23
  ServantStatusDialog_o *v37; // x20
  int32_t v38; // w21
  int32_t v39; // w25
  struct ServantStatusListViewItem_o *v40; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  int32_t v42; // w21
  int32_t v43; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v45; // x20
  __int64 v46; // x21
  int32_t Rarity; // w24
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  ServantStatusDialog_o *v51; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusDialog_o *v54; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  ServantStatusDialog_o *v57; // x23
  struct ServantStatusListViewItem_o *v58; // x8
  int32_t v59; // w0
  int32_t v60; // w2
  int32_t v61; // w3
  ServantStatusDialog_o *v62; // x23
  struct ServantStatusListViewItem_o *v63; // x8
  int32_t v64; // w2
  int32_t v65; // w3
  ServantStatusDialog_o *v66; // x23
  struct ServantStatusListViewItem_o *v67; // x8
  int32_t v68; // w2
  int32_t v69; // w3
  ServantStatusDialog_o *v70; // x22
  System_String_o *v71; // x20
  System_String_o *v72; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  __int64 v77; // x1
  __int64 v78; // x2
  CommonConfirmDialog_ClickDelegate_o *v79; // x25
  struct ServantStatusListViewItem_o *v80; // x20
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  const MethodInfo *v83; // x1
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v2 = this;
  if ( (byte_49F81C8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&object___TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Rarity_TypeInfo, v14);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickFavorite__, v15);
    sub_1B640C8(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&StringLiteral_11828/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_1B640C8(&StringLiteral_11826/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_1B640C8(&StringLiteral_11825/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_1B640C8(&StringLiteral_11829/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_1B640C8(&StringLiteral_11827/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_49F81C8 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_79;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v87.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v86 = v87;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v86, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickFavorite__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
      return;
    }
    v30 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickFavorite__);
    v31 = (System_Reflection_MethodBase_o *)sub_1B640AC(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v80 = v2->fields.mainInfo;
      if ( v80 )
      {
        v81 = v80->fields.userSvtEntity;
        if ( v81 )
        {
          v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
          *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v87.fields.fakeValue = v82;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v85 = v87;
          v80->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                            &v85,
                                            0LL);
          ServantStatusDialog__SetMark(v2, v83);
          return;
        }
      }
      goto LABEL_79;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_79;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_79;
    v33 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v88.fields.currentCryptoKey = klass;
    *(_QWORD *)&v88.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v88, 0LL);
    if ( !v33 )
      goto LABEL_79;
    v36 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                               (int32_t)this,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v36 )
      goto LABEL_79;
    v37 = this;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v36->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                      0LL);
    if ( !v37 )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v37,
                                      v38,
                                      (int32_t)this,
                                      0LL);
    if ( !v2->fields.mainInfo )
      goto LABEL_79;
    v39 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v2->fields.mainInfo, 0LL);
    v40 = v2->fields.mainInfo;
    if ( !v40 )
      goto LABEL_79;
    v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v40->fields.userSvtEntity;
    if ( !v41 )
      goto LABEL_79;
    v42 = (int)this;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v37,
                                   v42,
                                   v43,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v46 = sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v46 )
      goto LABEL_79;
    v51 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v46 + 24) )
        goto LABEL_80;
      *(_QWORD *)(v46 + 32) = v51;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v51, v49, v50);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v36, 0LL);
      v54 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v46 + 24) <= 1u )
          goto LABEL_80;
        *(_QWORD *)(v46 + 40) = v54;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 40), (int32_t)v54, v52, v53);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v36, v39, -1, 0LL);
        v57 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v46 + 24) <= 2u )
            goto LABEL_80;
          *(_QWORD *)(v46 + 48) = v57;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 48), (int32_t)v57, v55, v56);
          v58 = v2->fields.mainInfo;
          if ( !v58 )
            goto LABEL_79;
          this = (ServantStatusDialog_o *)v58->fields.userSvtEntity;
          if ( !this )
            goto LABEL_79;
          v59 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v59, 0LL);
          v62 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v46 + 24) <= 3u )
              goto LABEL_80;
            *(_QWORD *)(v46 + 56) = v62;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 56), (int32_t)v62, v60, v61);
            v63 = v2->fields.mainInfo;
            if ( !v63 )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)v63->fields.svtEntity;
            if ( !this )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v66 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v46 + 24) <= 4u )
                goto LABEL_80;
              *(_QWORD *)(v46 + 64) = v66;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 64), (int32_t)v66, v64, v65);
              v67 = v2->fields.mainInfo;
              if ( !v67 )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)v67->fields.svtEntity;
              if ( !this )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v70 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v46 + 24) > 5u )
                {
                  *(_QWORD *)(v46 + 72) = v70;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 72), (int32_t)v70, v68, v69);
                  this = (ServantStatusDialog_o *)System_String__Format_61389904(v45, (System_Object_array *)v46, 0LL);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_79;
                  v71 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_79;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11827/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v71 = System_String__Concat_61375396(v71, v72, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11829/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11826/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v77,
                                                                 v78);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v79,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30344968(
                      (CommonUI_o *)Instance,
                      v74,
                      v71,
                      v75,
                      v76,
                      v79,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_79:
                  sub_1B64324(this);
                }
LABEL_80:
                sub_1B6432C(this, v48);
              }
            }
          }
        }
      }
    }
    v84 = sub_1B64348();
    sub_1B641F0(v84, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F81C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickLock__, method);
    byte_49F81C6 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B64324(0LL);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  if ( (byte_49F81BB & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81BB = 1;
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
          sub_1B6432C(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
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
    sub_1B64324(this);
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
  if ( (byte_49F81BA & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_49F81BA = 1;
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
          v10 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_1B64324(this);
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
  const MethodInfo *v30; // x1
  struct ServantStatusListViewItem_o *v31; // x8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  Il2CppObject *Entity; // x24
  ServantStatusDialog_o *v35; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v38; // x23
  ServantStatusDialog_o *v39; // x20
  int32_t v40; // w21
  int32_t v41; // w25
  struct ServantStatusListViewItem_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  int32_t v44; // w21
  int32_t v45; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v47; // x20
  __int64 v48; // x21
  int32_t Rarity; // w24
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  ServantStatusDialog_o *v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  ServantStatusDialog_o *v56; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  ServantStatusDialog_o *v59; // x23
  struct ServantStatusListViewItem_o *v60; // x8
  int32_t v61; // w0
  int32_t v62; // w2
  int32_t v63; // w3
  ServantStatusDialog_o *v64; // x23
  struct ServantStatusListViewItem_o *v65; // x8
  int32_t v66; // w2
  int32_t v67; // w3
  ServantStatusDialog_o *v68; // x23
  struct ServantStatusListViewItem_o *v69; // x8
  int32_t v70; // w2
  int32_t v71; // w3
  ServantStatusDialog_o *v72; // x22
  System_String_o *v73; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v75; // x22
  System_String_o *v76; // x23
  System_String_o *v77; // x24
  __int64 v78; // x1
  __int64 v79; // x2
  CommonConfirmDialog_ClickDelegate_o *v80; // x25
  struct ServantStatusListViewItem_o *v81; // x20
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v2 = this;
  if ( (byte_49F81CA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&object___TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Rarity_TypeInfo, v14);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickPush__, v15);
    sub_1B640C8(&Method_ServantStatusDialog_OnConfirmSelectPush__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_49F81CA = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_74;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v24 = v2->fields.mainInfo;
    if ( !v24 )
      goto LABEL_74;
    userSvtEntity = v24->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_74;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v24->fields.pushUserSvtId;
    *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v87.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v86 = v87;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v86, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickPush__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
      v31 = v2->fields.mainInfo;
      if ( v31 )
      {
        v31->fields.pushUserSvtId = 0LL;
LABEL_73:
        ServantStatusDialog__SetMark(v2, v30);
        return;
      }
      goto LABEL_74;
    }
    v32 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickPush__);
    v33 = (System_Reflection_MethodBase_o *)sub_1B640AC(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v81 = v2->fields.mainInfo;
      if ( v81 )
      {
        v82 = v81->fields.userSvtEntity;
        if ( v82 )
        {
          v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
          *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v87.fields.fakeValue = v83;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v85 = v87;
          v81->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v85, 0LL);
          goto LABEL_73;
        }
      }
LABEL_74:
      sub_1B64324(this);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_74;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_74;
    v35 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v88.fields.currentCryptoKey = klass;
    *(_QWORD *)&v88.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v88, 0LL);
    if ( !v35 )
      goto LABEL_74;
    v38 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                               (int32_t)this,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v38 )
      goto LABEL_74;
    v39 = this;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                      0LL);
    if ( !v39 )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v39,
                                      v40,
                                      (int32_t)this,
                                      0LL);
    if ( !v2->fields.mainInfo )
      goto LABEL_74;
    v41 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v2->fields.mainInfo, 0LL);
    v42 = v2->fields.mainInfo;
    if ( !v42 )
      goto LABEL_74;
    v43 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v42->fields.userSvtEntity;
    if ( !v43 )
      goto LABEL_74;
    v44 = (int)this;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v39,
                                   v44,
                                   v45,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v48 = sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v48 )
      goto LABEL_74;
    v53 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v48 + 24) )
        goto LABEL_75;
      *(_QWORD *)(v48 + 32) = v53;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)v53, v51, v52);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v38, 0LL);
      v56 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v48 + 24) <= 1u )
          goto LABEL_75;
        *(_QWORD *)(v48 + 40) = v56;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 40), (int32_t)v56, v54, v55);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v38, v41, -1, 0LL);
        v59 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v48 + 24) <= 2u )
            goto LABEL_75;
          *(_QWORD *)(v48 + 48) = v59;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 48), (int32_t)v59, v57, v58);
          v60 = v2->fields.mainInfo;
          if ( !v60 )
            goto LABEL_74;
          this = (ServantStatusDialog_o *)v60->fields.userSvtEntity;
          if ( !this )
            goto LABEL_74;
          v61 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v61, 0LL);
          v64 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v48 + 24) <= 3u )
              goto LABEL_75;
            *(_QWORD *)(v48 + 56) = v64;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 56), (int32_t)v64, v62, v63);
            v65 = v2->fields.mainInfo;
            if ( !v65 )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)v65->fields.svtEntity;
            if ( !this )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v68 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v48 + 24) <= 4u )
                goto LABEL_75;
              *(_QWORD *)(v48 + 64) = v68;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 64), (int32_t)v68, v66, v67);
              v69 = v2->fields.mainInfo;
              if ( !v69 )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)v69->fields.svtEntity;
              if ( !this )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v72 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v48 + 24) > 5u )
                {
                  *(_QWORD *)(v48 + 72) = v72;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 72), (int32_t)v72, v70, v71);
                  v73 = System_String__Format_61389904(v47, (System_Object_array *)v48, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v80 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v78,
                                                                 v79);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v80,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30344968(
                      (CommonUI_o *)Instance,
                      v75,
                      v73,
                      v76,
                      v77,
                      v80,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_74;
                }
LABEL_75:
                sub_1B6432C(this, v50);
              }
            }
          }
        }
      }
    }
    v84 = sub_1B64348();
    sub_1B641F0(v84, 0LL);
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

  if ( (byte_49F81C1 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v5);
    byte_49F81C1 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v6 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
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

  if ( (byte_49F81BF & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__, *(_QWORD *)&index);
    byte_49F81BF = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v26; // x21
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t QuestType; // w22
  QuestEntity_o *v30; // x23
  System_String_o *v31; // x20
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  ServantStatusListViewManager_CallbackFunc_o *v42; // x21
  Il2CppObject *v43; // x21
  System_String_o *v44; // x0
  __int64 *v45; // x8
  System_String_o *v46; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x20
  System_String_o *v49; // x23
  System_String_o *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  CommonConfirmDialog_ClickDelegate_o *v53; // x25

  if ( (byte_49F81BD & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickServantQuest__, v9);
    sub_1B640C8(&Method_ServantStatusDialog_OnConfirmServantQuest__, v10);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v15);
    sub_1B640C8(&StringLiteral_11871/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v16);
    sub_1B640C8(&StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v17);
    sub_1B640C8(&StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v18);
    sub_1B640C8(&StringLiteral_11867/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v19);
    sub_1B640C8(&StringLiteral_11870/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v20);
    sub_1B640C8(&StringLiteral_11872/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_11868/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v22);
    sub_1B640C8(&StringLiteral_11869/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v23);
    byte_49F81BD = 1;
  }
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_20;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_20:
    v37 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickServantQuest__);
    v38 = (System_Reflection_MethodBase_o *)sub_1B640AC(v37, v37[4]);
    OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v42 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v40,
                                                           v41);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v42,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v42, 0LL);
      return;
    }
    goto LABEL_35;
  }
  v26 = QuestInfo;
  v27 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickServantQuest__);
  v28 = (System_Reflection_MethodBase_o *)sub_1B640AC(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v26, 0LL);
  Instance = MapControl_QuestInfo__GetMine(v26, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v30 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v31 = (System_String_o *)Instance;
  if ( !System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24883/*"{0}"*/, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (void *)QuestEntity__getServantId(v30, 0LL),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_35:
    sub_1B64324(Instance);
  }
  BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
  v31 = System_String__Format(v31, BattleName, 0LL);
LABEL_16:
  if ( QuestType == 3 )
  {
    warId = v26->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_30:
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11872/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v45 = &StringLiteral_11871/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_33;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_30;
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11870/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v45 = &StringLiteral_11869/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  }
  else
  {
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
    v45 = &StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  }
LABEL_33:
  v46 = v44;
  v47 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  v48 = System_String__Format(v47, (Il2CppObject *)v31, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11867/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v51, v52);
  CommonConfirmDialog_ClickDelegate___ctor(
    v53,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v43 )
    goto LABEL_35;
  CommonUI__OpenConfirmDialog_30344968((CommonUI_o *)v43, v46, v48, v49, v50, v53, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F81AC & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickTabBattle__, method);
    byte_49F81AC = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F81AB & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickTabProfile__, method);
    byte_49F81AB = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F81AA & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickTabStatus__, method);
    byte_49F81AA = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F81AD & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantStatusDialog_OnClickTabVoice__, method);
    byte_49F81AD = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v24; // x21
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x0
  CommonUI_o *v34; // x22
  System_String_o *Empty; // x21
  System_String_o *v36; // x23
  System_String_o *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  CommonConfirmDialog_ClickDelegate_o *v40; // x25

  if ( (byte_49F81BE & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusDialog_OnClickTdSpeed__, v7);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1B640C8(&ServantStatusListViewItemDrawButton_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_1B640C8(&string_TypeInfo, v11);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__, v12);
    sub_1B640C8(&ServantStatusDialog___c__DisplayClass217_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_11876/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_1B640C8(&StringLiteral_11877/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_11878/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_49F81BE = 1;
  }
  v17 = sub_1B64314(ServantStatusDialog___c__DisplayClass217_0_TypeInfo, *(_QWORD *)&type, method);
  ServantStatusDialog___c__DisplayClass217_0___ctor((ServantStatusDialog___c__DisplayClass217_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_24;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_DWORD *)(v17 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v24 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v21,
                                                             v22);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v24, 0LL);
        return;
      }
LABEL_24:
      sub_1B64324(mainInfo);
    }
    v25 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnClickTdSpeed__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v29 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v17 + 24), 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v31 = System_String__Format_61389768(v30, TDSpeedLocalization, v29, 0LL);
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4));
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1BB5FA4(v33);
    v34 = **(CommonUI_o ***)(v33 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11876/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v40 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v38, v39);
    CommonConfirmDialog_ClickDelegate___ctor(
      v40,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v34 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v34, Empty, v31, v36, v37, v40, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49F81C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F81C9 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1B64324(this);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49F81CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F81CB = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1B64324(this);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
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
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v15; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  ServantStatusListViewManager_CallbackFunc_o *v24; // x21
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_49F81C5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1B640C8(&Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49F81C5 = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v20, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v24 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v22,
                                                             v23);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v24, 0LL);
        return;
      }
    }
    goto LABEL_25;
  }
  v13 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v13, this->fields.questId, 0LL);
  v15 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v13 = (Il2CppObject *)v15->fields._WarInfo_k__BackingField;
      if ( !v13 )
        goto LABEL_25;
      LODWORD(v15) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v13, 0LL);
    }
    else
    {
      LODWORD(v15) = 0;
    }
  }
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v13, (int32_t)v15, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F81D7 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v25);
    byte_49F81D7 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, 0LL);
  if ( !v29 )
LABEL_25:
    sub_1B64324(v13);
  CommonUI__maskFadeout((CommonUI_o *)v29, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  BattleFBXComponent_o *v4; // x0

  if ( (byte_49F81A0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F81A0 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v4 = this->fields.battleActor;
    if ( !v4 )
      sub_1B64324(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F81CE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3156/*"Base/TitlePrefab/BackObj/BtnBg"*/, v3);
    byte_49F81CE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3156/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(transform);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_49F81AE & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    byte_49F81AE = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v7 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&result,
                                                                method);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      v8);
    if ( !battleTabListViewManager
      || (battleTabListViewManager->fields.callbackFunc = v7,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&battleTabListViewManager->fields.callbackFunc,
            (int32_t)v7,
            v10,
            v11),
          ServantStatusBattleListViewManager__SetMode_31475316(battleTabListViewManager, 1, v12, v13),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1B64324(v9);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v15 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnSelectBattle__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v17);
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
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49F819B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F819B = 1;
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
    ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B64324(gameObject);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v11, 0LL);
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
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49F8199 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F8199 = 1;
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
    ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B64324(gameObject);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v11, 0LL);
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

  if ( (byte_49F819D & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_49F819D = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                  ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&result,
                                                                  method);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1B64324(v7);
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v28; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct ServantStatusListViewItem_o *v34; // x8
  int64_t equipTargetId1; // x21
  CommonUI_o *v36; // x20
  ServantStatusDialog_EndDelegate_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v43; // q1
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  int32_t kind; // w24
  __int64 v47; // x1
  __int64 v48; // x2
  struct ServantStatusListViewItem_o *v49; // x8
  struct ServantLeaderInfo_o *v50; // x8
  EquipTargetInfo_o *v51; // x21
  CommonUI_o *v52; // x20
  ServantStatusDialog_EndDelegate_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x23
  int32_t v57; // w1
  ServantStatusListViewManager_o *v58; // x20
  ServantStatusListViewManager_CallbackFunc_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 *v62; // x8
  struct UISprite_o *v63; // x1
  __int64 v64; // x1
  __int64 v65; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v67; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  struct ServantStatusListViewItem_o *v72; // x8
  struct ServantLeaderInfo_o *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_49F8198 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v7);
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_1B640C8(&Method_ServantStatusDialog_Exit__, v12);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectEquipStatus__, v13);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_12577/*"ServantLvExceed"*/, v17);
    sub_1B640C8(&StringLiteral_12581/*"ServantSkillCombine"*/, v18);
    sub_1B640C8(&StringLiteral_12578/*"ServantNpCombine"*/, v19);
    sub_1B640C8(&StringLiteral_4591/*"CommandCardEquip"*/, v20);
    sub_1B640C8(&StringLiteral_12565/*"ServantEQCombine"*/, v21);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v22);
    sub_1B640C8(&StringLiteral_6820/*"FriendshipExceed"*/, v23);
    sub_1B640C8(&StringLiteral_12575/*"ServantLimitCountUp"*/, v24);
    sub_1B640C8(&StringLiteral_2393/*"AppendSkillCombine"*/, v25);
    this = (ServantStatusDialog_o *)sub_1B640C8(&StringLiteral_4592/*"CommandCardExceed"*/, v26);
    byte_49F8198 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v28 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&result,
                                                             *(_QWORD *)&id);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v28, 0LL);
        return;
      }
LABEL_78:
      sub_1B64324(this);
    }
    switch ( result )
    {
      case 1:
        if ( v6->fields.mainInfo )
          goto LABEL_9;
        goto LABEL_78;
      case 2:
LABEL_9:
        mainInfo = v6->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_78;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v30 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v30 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnSelectStatus__);
          v31 = (System_Reflection_MethodBase_o *)sub_1B640AC(v30, v30[4]);
          OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = v6->fields.mainInfo;
          if ( !v34 )
            goto LABEL_78;
          equipTargetId1 = v34->fields.equipTargetId1;
          v36 = (CommonUI_o *)this;
          v37 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v32, v33);
          ServantStatusDialog_EndDelegate___ctor(
            v37,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v40 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v38, v39);
          System_Action___ctor(v40, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v36 )
            goto LABEL_78;
          CommonUI__OpenServantEquipStatusDialog(v36, 11, equipTargetId1, 1, v37, v40, 0LL);
        }
        else
        {
          servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
          if ( !servantLeaderInfo )
            goto LABEL_29;
          equipTarget1 = servantLeaderInfo->fields.equipTarget1;
          if ( !equipTarget1 )
            goto LABEL_29;
          v43 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
          *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
          *(_OWORD *)&v77.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v76 = v77;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v76, 0LL) >= 1 )
          {
            v44 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v44 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnSelectStatus__);
            v45 = (System_Reflection_MethodBase_o *)sub_1B640AC(v44, v44[4]);
            OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
            kind = v6->fields.kind;
            if ( kind == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v49 = v6->fields.mainInfo;
              if ( !v49 )
                goto LABEL_78;
              v50 = v49->fields.servantLeaderInfo;
              if ( !v50 )
                goto LABEL_78;
              v51 = v50->fields.equipTarget1;
              v52 = (CommonUI_o *)this;
              v53 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v47, v48);
              ServantStatusDialog_EndDelegate___ctor(
                v53,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
              System_Action___ctor(v56, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v52 )
                goto LABEL_78;
              v57 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v72 = v6->fields.mainInfo;
              if ( !v72 )
                goto LABEL_78;
              v73 = v72->fields.servantLeaderInfo;
              if ( !v73 )
                goto LABEL_78;
              v51 = v73->fields.equipTarget1;
              v52 = (CommonUI_o *)this;
              v53 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v70, v71);
              ServantStatusDialog_EndDelegate___ctor(
                v53,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v74, v75);
              System_Action___ctor(v56, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v52 )
                goto LABEL_78;
              if ( kind == 5 )
                v57 = 14;
              else
                v57 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_30360564(v52, v57, v51, v53, v56, 0LL);
          }
          else
          {
LABEL_29:
            v58 = v6->fields.statusTabListViewManager;
            v59 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                   *(_QWORD *)&result,
                                                                   *(_QWORD *)&id);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v59,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v58 )
              goto LABEL_78;
            ServantStatusListViewManager__SetMode(v58, 1, v59, 0LL);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12562/*"ServantCombine"*/;
        goto LABEL_64;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12565/*"ServantEQCombine"*/;
        goto LABEL_64;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12581/*"ServantSkillCombine"*/;
        goto LABEL_64;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12575/*"ServantLimitCountUp"*/;
        goto LABEL_64;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_6820/*"FriendshipExceed"*/;
        goto LABEL_64;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_4591/*"CommandCardEquip"*/;
        goto LABEL_64;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_4592/*"CommandCardExceed"*/;
        goto LABEL_64;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_2393/*"AppendSkillCombine"*/;
        goto LABEL_64;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12578/*"ServantNpCombine"*/;
        goto LABEL_64;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v62 = &StringLiteral_12577/*"ServantLvExceed"*/;
LABEL_64:
        v63 = (struct UISprite_o *)*v62;
        this->fields.statusSprite = (struct UISprite_o *)*v62;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusSprite, (int32_t)v63, v60, v61);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v67 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v67 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v67->static_fields->DEFAULT_FADE_TIME;
        v69 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v64, v65);
        System_Action___ctor(v69, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_78;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v69, 0LL);
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
  const MethodInfo *v16; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v18; // x23
  ServantStatusVoiceListViewItem_o *v19; // x25
  int32_t v20; // w22
  int32_t v21; // w21
  System_String_o *v22; // x24
  System_String_o *LabelName; // x0
  System_String_o *v24; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v26; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v28; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v30; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F819E & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v12);
    byte_49F819E = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&kind,
                                                                *(_QWORD *)&result);
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
        ServantStatusDialog__StopVoice(this, v16);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v18 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v19 = (ServantStatusVoiceListViewItem_o *)Instance;
        v20 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v19, 0LL);
        if ( !MasterData_object )
          goto LABEL_58;
        v21 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v20,
                        (int32_t)Instance,
                        0LL);
        v22 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v19, 0LL);
        v24 = System_String__Concat_61386656(v22, (System_String_o *)StringLiteral_16054/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v19, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v19, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v19->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL);
                  if ( v18 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_39460372(
                                      (ServantVoiceMaster_o *)v18,
                                      v20,
                                      v21,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_1B64324(Instance);
                }
                if ( !v18 )
                  goto LABEL_58;
                if ( !v19->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v18, v20, v21, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v18,
                                  v20,
                                  v21,
                                  v24,
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
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v19, 0LL);
                  if ( v18 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(
                                      (ServantVoiceMaster_o *)v18,
                                      v20,
                                      (int32_t)Instance,
                                      0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_31546548(this, v20, v21, HomeVoiceList, result, v26);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v18 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                    (ServantVoiceMaster_o *)v18,
                                    v20,
                                    v21,
                                    v24,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v19->fields.genderFlag && !v19->fields.voiceLabelSpecification )
              {
                if ( v18 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                    (ServantVoiceMaster_o *)v18,
                                    v20,
                                    v21,
                                    2,
                                    1,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v18 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v18, v20, v21, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v18 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v20, v21, BattleVoiceList, result, v28);
            return;
          case 7:
            if ( !v18 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v20, v21, NpVoiceList, result, v30);
            return;
          case 8:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                              (ServantVoiceMaster_o *)v18,
                              v20,
                              v21,
                              v24,
                              0LL);
            goto LABEL_52;
          case 9:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v19, 0LL);
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_39458332(
                              (ServantVoiceMaster_o *)v18,
                              (int32_t)Instance,
                              v20,
                              v21,
                              v24,
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
  __int64 v23; // x1
  __int64 v24; // x2
  ServantStatusListViewManager_CallbackFunc_o *v25; // x21
  __int64 v26; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v29; // x22
  __int64 v30; // x23
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  CommonUI_o *v35; // x22
  System_String_o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  CommonConfirmDialog_ClickDelegate_o *v39; // x0
  __int64 *v40; // x8
  struct ServantStatusListViewItem_o *v41; // x8
  struct UserServantEntity_o *v42; // x9
  __int64 v43; // x22
  __int64 v44; // x23
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  CommonConfirmDialog_ClickDelegate_o *v51; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_49F81A4 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1B640C8(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v9);
    sub_1B640C8(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__, v10);
    sub_1B640C8(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v12);
    sub_1B640C8(&StringLiteral_11845/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v13);
    sub_1B640C8(&StringLiteral_11846/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v14);
    sub_1B640C8(&StringLiteral_11843/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    sub_1B640C8(&StringLiteral_11842/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v17);
    byte_49F81A4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
        v30 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v29 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v30;
        *(_QWORD *)&v52.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v52, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v31 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v32 = (System_Reflection_MethodBase_o *)sub_1B640AC(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
      v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1BB5FA4(v33);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1BB5FA4(v34);
      v35 = **(CommonUI_o ***)(v34 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v37, v38);
      v40 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__;
LABEL_44:
      v51 = v39;
      CommonConfirmDialog_ClickDelegate___ctor(v39, (Il2CppObject *)this, *v40, 0LL);
      if ( !v35 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30345400(
        v35,
        (System_String_o *)StringLiteral_1/*""*/,
        v36,
        v18,
        v19,
        v51,
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
      v41 = this->fields.mainInfo;
      if ( !v41 )
        return;
      v42 = v41->fields.userSvtEntity;
      if ( !v42 )
      {
LABEL_34:
        if ( !v41->fields.isEnableSupportRandomSetting )
          return;
        v45 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
        v47 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
          v47 = sub_1BB5FA4(v47);
        v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
        if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
          v48 = sub_1BB5FA4(v48);
        v35 = **(CommonUI_o ***)(v48 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v49, v50);
        v40 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__;
        goto LABEL_44;
      }
      v44 = *(_QWORD *)&v42->fields.limitCount.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v42->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v44;
      *(_QWORD *)&v53.fields.fakeValue = v43;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL) )
      {
        v41 = this->fields.mainInfo;
        if ( !v41 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v20 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B640E0(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v25 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v23,
                                                             v24);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v25, 0LL);
        return;
      }
LABEL_47:
      sub_1B64324(v26);
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  ServantStatusListViewItem_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1

  if ( (byte_49F8154 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8154 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v19 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v17, v18);
  ServantStatusListViewItem___ctor(v19, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21);
  ServantStatusDialog__Init(this, v22);
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

  if ( (byte_49F8173 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&TutorialFlag_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_13424/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v7);
    byte_49F8173 = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37376848(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13424/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1B64324(v9);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v9, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31514248(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  ServantStatusListViewItem_o *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1

  if ( (byte_49F8155 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8155 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v19 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v17, v18);
  ServantStatusListViewItem___ctor(v19, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21);
  ServantStatusDialog__Init(this, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31514456(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusListViewItem_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_49F8156 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8156 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32468484(v17, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31514652(
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
  __int64 *v16; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v18; // x5

  if ( (byte_49F8157 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F8157 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)*v16);
  ServantStatusDialog__Open_31514932(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31514932(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w21
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49F815B & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F815B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32470112(v20, userSvtEntity, 0LL, 0LL, 0, v19, v19, 0, 0LL);
  this->fields.mainInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31515180(
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
  __int64 *v16; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v18; // x5

  if ( (byte_49F8158 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F8158 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)*v16);
  ServantStatusDialog__Open_31515460(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31515460(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49F815C & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F815C = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32470112(v20, userSvtEntity, 0LL, 0LL, callback != 0LL, v19, v19, 0, 0LL);
  this->fields.mainInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31515712(
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
  __int64 *v16; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v18; // x6

  if ( (byte_49F8159 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F8159 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)*v16);
  ServantStatusDialog__Open_31515996(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31515996(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w8
  bool v18; // cc
  unsigned __int64 v19; // x8
  char v20; // w9
  char v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1

  if ( (byte_49F815D & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F815D = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32470112(v22, userSvtEntity, 0LL, 0LL, 0, v21, v21, canMoveCombine, 0LL);
  this->fields.mainInfo = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31516256(
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
  __int64 *v16; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v18; // x6

  if ( (byte_49F815A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F815A = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)*v16);
  ServantStatusDialog__Open_31516540(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31516540(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w8
  bool v18; // cc
  unsigned __int64 v19; // x8
  char v20; // w9
  char v21; // w23
  ServantStatusListViewItem_o *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1

  if ( (byte_49F815E & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F815E = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32470112(
    v22,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v21,
    v21,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31516900(
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
  Il2CppObject *Entity; // x2
  const MethodInfo *v16; // x7

  if ( (byte_49F815F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F815F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_31517104(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31517104(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w23
  ServantStatusListViewItem_o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1

  if ( (byte_49F8160 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8160 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v17, v18);
  ServantStatusListViewItem___ctor_32470112(v24, userSvtEntity, equipIdList, questRestrictionInfo, 0, v23, v23, 0, 0LL);
  this->fields.mainInfo = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31517368(
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned int v21; // w8
  bool v22; // cc
  unsigned __int64 v23; // x8
  char v24; // w9
  char v25; // w24
  ServantStatusListViewItem_o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1

  if ( (byte_49F8161 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8161 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v21 = this->fields.kind - 2;
  v22 = v21 > 0x23;
  v23 = 0x677FFFFFEuLL >> v21;
  v24 = v22;
  v25 = v24 | v23 & 1;
  v26 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_32470112(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v25,
    v25,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31517644(
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned int v21; // w8
  bool v22; // cc
  unsigned __int64 v23; // x8
  char v24; // w9
  char v25; // w25
  ServantStatusListViewItem_o *v26; // x26
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1

  if ( (byte_49F8162 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8162 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v21 = this->fields.kind - 2;
  v22 = v21 > 0x23;
  v23 = 0x677FFFFFEuLL >> v21;
  v24 = v22;
  v25 = v24 | v23 & 1;
  v26 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_32470112(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v25,
    v25,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31517924(
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v17; // x6

  if ( (byte_49F8163 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F8163 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_31518136(this, kind, (UserServantEntity_o *)Entity, isUse, callback, openCallback, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31518136(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  char v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusListViewItem_o *v17; // x22
  int32_t v18; // w2
  char v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_49F8164 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8164 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32472448(v17, userSvtEntity, isUse, 0LL);
  this->fields.mainInfo = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31518328(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w21
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49F8165 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8165 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32474232(v20, userSvtCollectionEntity, 0, v19, 0LL);
  this->fields.mainInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31518552(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w8
  bool v18; // cc
  unsigned __int64 v19; // x8
  char v20; // w9
  char v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1

  if ( (byte_49F8166 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8166 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    imageLimitCount);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32475860(v22, userSvtCollectionEntity, imageLimitCount, 0, v21, 0LL);
  this->fields.mainInfo = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31518792(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49F8167 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8167 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32474232(v20, userSvtCollectionEntity, callback != 0LL, v19, 0LL);
  this->fields.mainInfo = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519020(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F8168 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8168 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32477284(v15, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519204(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F8169 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F8169 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32478960(v15, equipTargetInfo, kind == 19, 0LL);
  this->fields.mainInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519388(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  char v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusListViewItem_o *v17; // x22
  int32_t v18; // w2
  char v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_49F816A & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F816A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v17 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v15, v16);
  ServantStatusListViewItem___ctor_32479776(v17, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519580(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewItem_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F816B & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F816B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32480152(v15, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519756(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewItem_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F816C & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F816C = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32480152(v15, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_31519932(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewItem_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_49F816D & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_49F816D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v15 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v13, v14);
  ServantStatusListViewItem___ctor_32481228(v15, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
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
  __int64 transform; // x0
  UnityEngine_Component_o *v26; // x21
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v29; // s8
  int32_t v30; // w23
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  const MethodInfo *v33; // x1
  int32_t v34; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  struct UnityEngine_GameObject_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  float32x2_t v40; // d8
  float v41; // s9
  float v42; // s2 OVERLAPPED
  unsigned __int64 v43; // d0 OVERLAPPED
  int v44; // s1
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v52; // x26
  UnityEngine_Transform_o *v53; // x27
  float Item; // s8
  float v55; // s9
  float v56; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x23
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w22
  __int64 v63; // x1
  __int64 v64; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v66; // x21
  System_String_o *v67; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8182 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v16);
    sub_1B640C8(&NGUITools_TypeInfo, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&StringLiteral_3206/*"Battle2D"*/, v22);
    sub_1B640C8(&StringLiteral_16539/*"_y0"*/, v23);
    byte_49F8182 = 1;
  }
  v67 = 0LL;
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
      v26 = (UnityEngine_Component_o *)transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v26,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (transform & 1) != 0 )
          break;
        transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v26, 0LL);
        v26 = (UnityEngine_Component_o *)transform;
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
      v29 = *(float *)&localScale;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v69.fields.x = 1.0 / v29;
      v69.fields.y = 1.0 / v29;
      v69.fields.z = 1.0 / v29;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v69, 0LL);
      transform = (__int64)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)transform, 1, 0LL);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v30 = transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      ServantStatusDialog__DestroyBattleChr(this, v33);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                    (ServantLimitImageMaster_o *)transform,
                    v30,
                    LimitCountByImageLimitCostumeIn,
                    0LL);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v34 = transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v36 = ServantAssetLoadManager__loadBattleActor(&v67, gameObject, v30, v34, 0, 0LL);
      this->fields.battleChr = v36;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleChr, (int32_t)v36, v37, v38);
      if ( !v36 )
        goto LABEL_73;
      v39 = UnityEngine_GameObject__AddComponent_object_(
              v36,
              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !v39 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v39, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, v30, v34, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v40.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v41 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v40.n64_u64[0] = 0LL;
        v41 = 0.0;
      }
      transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !transform )
        goto LABEL_73;
      v42 = v41 + this->fields.CHARA_BASE_POSITION.fields.z;
      v43 = vadd_f32(v40, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v44 = HIDWORD(v43);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v42 - 2),
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !transform )
        goto LABEL_73;
      v70.fields.x = 0.0;
      v70.fields.z = 0.0;
      v70.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v70, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
      v46 = (UnityEngine_Transform_o *)transform;
      if ( !byte_49F7116 )
      {
        transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v45);
        byte_49F7116 = 1;
      }
      if ( !v46 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v52 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                         v47,
                                                                         v48);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v52,
            (const MethodInfo_3128EE8 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v52 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v52,
            5,
            0.75,
            (const MethodInfo_31298B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v52,
            8,
            0.75,
            (const MethodInfo_31298B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v52,
            9,
            0.75,
            (const MethodInfo_31298B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v52,
                 battleSize,
                 (const MethodInfo_3129AAC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v53 = UnityEngine_GameObject__get_transform(v36, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v52,
                     battleSize,
                     (const MethodInfo_3129818 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v55 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v52,
                    battleSize,
                    (const MethodInfo_3129818 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v56 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v52,
                    battleSize,
                    (const MethodInfo_3129818 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v53 )
              goto LABEL_73;
            v71.fields.z = v56;
            v71.fields.x = Item;
            v71.fields.y = v55;
            UnityEngine_Transform__set_localScale(v53, v71, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v39, v30, v34, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v39, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v39,
          5000.0,
          (System_String_o *)StringLiteral_16539/*"_y0"*/,
          0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v30, v34, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v39, Manager__loadAnimEvents, v30, v34, 0LL);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v39, this->fields.defaultAnimationName, 2, 0LL);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v39, this->fields.defaultAnimationName, 0LL);
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL);
      if ( !transform
        || (v58 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL)) == 0) )
      {
LABEL_73:
        sub_1B64324(transform);
      }
      v59 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v58, 0LL);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v59 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v59, 0LL);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v39;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleActor, (int32_t)v39, v60, v61);
      v62 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v36, v62, 0LL);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_33486480(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v66 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v63,
                                                               v64);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v66,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v66, 0LL);
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
  if ( (byte_49F818E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_49F818E = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_31546548(
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
  if ( (byte_49F8190 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_49F8190 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_49F818F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_49F818F = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  bool v14; // w23
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  int v22; // w19
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F818B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_49F818B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v25 = v24;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v14 = v13;
    if ( !v13 )
    {
      v22 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1B64324(v13);
  }
  while ( !System_String__Equals_61383712(assetName, (System_String_o *)v25.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v15);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1B64324(0LL);
    ServantStatusVoiceListViewManager__SetMode_34577244(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, (int32_t)voicePlayList, v16, v17);
  this->fields.voicePlayAssetName = assetName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, (int32_t)assetName, v19, v20);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v21);
  v22 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v14 && v22 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_49F8196 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49F8196 = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_31489336(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_33486480(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_32455224(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1B64324(charaGraphListViewManager);
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
  int32_t v30; // w2
  int32_t v31; // w3
  _BOOL4 v32; // w24
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int v35; // w8
  int v36; // w8
  unsigned __int8 v37; // w21
  struct ServantStatusListViewItem_o *v38; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  int v44; // w22
  BalanceConfig_c *v45; // x8
  struct ServantStatusListViewItem_o *v46; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x0
  CommonUI_o *v51; // x19
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  CommonConfirmDialog_ClickDelegate_o *v57; // x0
  __int64 *v58; // x8
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  CommonConfirmDialog_ClickDelegate_o *v63; // x24
  const MethodInfo *v64; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  ServantStatusListViewManager_CallbackFunc_o *v68; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_49F81C2 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, v9);
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v16);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__, v17);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__, v18);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__, v19);
    sub_1B640C8(&ServantStatusDialog___c__DisplayClass221_0_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_11856/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v21);
    sub_1B640C8(&StringLiteral_11854/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v22);
    sub_1B640C8(&StringLiteral_11843/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    sub_1B640C8(&StringLiteral_11844/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v25);
    sub_1B640C8(&StringLiteral_11855/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v26);
    sub_1B640C8(&StringLiteral_11842/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v27);
    byte_49F81C2 = 1;
  }
  v28 = sub_1B64314(ServantStatusDialog___c__DisplayClass221_0_TypeInfo, isOwnSetting, isRandomOn);
  ServantStatusDialog___c__DisplayClass221_0___ctor((ServantStatusDialog___c__DisplayClass221_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_53;
  v32 = isRandomOn;
  *(_QWORD *)(v28 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)this, v30, v31);
  *(_DWORD *)(v28 + 32) = index;
  *(_BYTE *)(v28 + 36) = isOwnSetting;
  *(_BYTE *)(v28 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v32 )
    {
      if ( mainInfo->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v35) = *(_BYTE *)(v28 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v33);
    v36 = *(unsigned __int8 *)(v28 + 37);
    v37 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v28 + 16) = 12;
    if ( v36 )
    {
      v38 = this->fields.mainInfo;
      if ( !v38 )
        goto LABEL_53;
      userSvtEntity = v38->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v41;
      *(_QWORD *)&v69.fields.fakeValue = v40;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                  v69,
                                                  0LL);
      v44 = (int)mainInfo;
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      if ( v44 == v45->static_fields->ServantIdMashu1 )
      {
        v46 = this->fields.mainInfo;
        if ( !v46 )
          goto LABEL_53;
        supportRandomLimitCountList = v46->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v48 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v42, v43);
          System_Func_int__bool____ctor(
            v48,
            (Il2CppObject *)v28,
            Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__48383472(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v48,
                 (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408) )
          {
            v49 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
              v49 = sub_1BB5FA4(v49);
            v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
            if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
              v50 = sub_1BB5FA4(v50);
            v51 = **(CommonUI_o ***)(v50 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                           v55,
                                                           v56);
            v58 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v37 & *(_BYTE *)(v28 + 37) & 1) != 0 )
    {
      v59 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
        v59 = sub_1BB5FA4(v59);
      v60 = *(_QWORD *)(*(_QWORD *)(v59 + 192) + 16LL);
      if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
        v60 = sub_1BB5FA4(v60);
      v51 = **(CommonUI_o ***)(v60 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v61, v62);
      v58 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v63 = v57;
      CommonConfirmDialog_ClickDelegate___ctor(v57, (Il2CppObject *)v28, *v58, 0LL);
      if ( v51 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v51,
          (System_String_o *)StringLiteral_1/*""*/,
          v52,
          v53,
          v54,
          v63,
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
LABEL_53:
      sub_1B64324(mainInfo);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v28 + 32), 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v35 = *(unsigned __int8 *)(v28 + 37);
    if ( *(_BYTE *)(v28 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v35 != 0, 0LL);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v64);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v35;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v32 )
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
    v34);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v68 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v66,
                                                         v67);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v68,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v68, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_49F81C0 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_49F81C0 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B64324(mainInfo);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49F8180 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flag);
    byte_49F8180 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v6 = this->fields.inputLockPanel;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, flag, 0LL);
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
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  __int64 v12; // x1
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int32_t v15; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x22
  System_String_o *battleLoadAsset; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  const MethodInfo *v28; // x1

  if ( (byte_49F8184 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, isModifyInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1B640C8(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49F8184 = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantStatusBattleListViewManager__ChangeSelectIndex(battleTabListViewManager, this->fields.confirmDispLv, method);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  leftItem = battleTabListViewManager->fields.leftItem;
  if ( !leftItem )
    goto LABEL_29;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= leftItem->fields.sortIndex )
    sub_1B6432C(battleTabListViewManager, v12);
  LODWORD(battleTabListViewManager->fields.bottomItem) = *((_DWORD *)&leftItem->fields.sortValue0 + confirmDispLv);
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  else if ( BYTE3(battleTabListViewManager[1].fields.listDragPrefab) )
  {
    ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__GetSvtId(
                                                                       (ServantStatusListViewItem_o *)battleTabListViewManager,
                                                                       1,
                                                                       0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_29;
  v15 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v15,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v15,
                                                                       ServantImageLimitSealAfter,
                                                                       0LL);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v19 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_61383712((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v20);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v23 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v23, 0LL);
  }
  *p_battleLoadAsset = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v19, v21, v22);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
LABEL_29:
    sub_1B64324(battleTabListViewManager);
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  battleLoadAsset = this->fields.battleLoadAsset;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v27, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v28);
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
  if ( (byte_49F8194 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_17587/*"button_lock_reg"*/, v4);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v5);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v6);
    sub_1B640C8(&StringLiteral_17588/*"button_lock_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17582/*"button_choice_unreg"*/, v8);
    sub_1B640C8(&StringLiteral_20060/*"icon_equip"*/, v9);
    sub_1B640C8(&StringLiteral_17581/*"button_choice_reg"*/, v10);
    sub_1B640C8(&StringLiteral_20061/*"icon_equip_cc"*/, v11);
    sub_1B640C8(&StringLiteral_17583/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_1B640C8(&StringLiteral_17584/*"button_favorite_unreg"*/, v13);
    byte_49F8194 = 1;
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
      v24 = (System_String_o **)(v23->fields.isLock ? &StringLiteral_17587/*"button_lock_reg"*/ : &StringLiteral_17588/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = v2->fields.mainInfo;
      if ( !v25 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v26 = (System_String_o **)(v25->fields.isChoice ? &StringLiteral_17581/*"button_choice_reg"*/ : &StringLiteral_17582/*"button_choice_unreg"*/);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v44, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v32 = (System_String_o **)&StringLiteral_17583/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v32 = (System_String_o **)&StringLiteral_17584/*"button_favorite_unreg"*/;
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
          v35 = &StringLiteral_17592/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                            &v43,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v35 = &StringLiteral_17591/*"button_push_reg"*/;
          v41 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v41 )
            v35 = &StringLiteral_17592/*"button_push_unreg"*/;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20060/*"icon_equip"*/, 0LL);
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
  v18 = (System_String_o **)(v17->fields.isLock ? &StringLiteral_17587/*"button_lock_reg"*/ : &StringLiteral_17588/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = v2->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0LL
    || (v19->fields.isChoice
      ? (v20 = (System_String_o **)&StringLiteral_17581/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17582/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1B64324(this);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20061/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x9
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  NoticeNumberComponent_o *v7; // x0

  if ( (byte_49F817F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F817F = 1;
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
    v7 = this->fields.noticeNumber;
    if ( !v7 || (NoticeNumberComponent__SetDispForce(v7, size > 0, 0LL), (v7 = this->fields.noticeNumber) == 0LL) )
      sub_1B64324(v7);
    NoticeNumberComponent__SetNumber(v7, size, 0LL);
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
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  __int64 *v57; // x8
  System_String_o **v58; // x8
  System_String_o **v59; // x8
  UICommonButton_o *v60; // x21
  bool v61; // w0
  System_String_o **v62; // x8
  System_String_o **v63; // x8
  UICommonButton_o *v64; // x21
  bool v65; // w0
  System_String_o **v66; // x8
  System_String_o **v67; // x8
  UICommonButton_o *v68; // x21
  bool v69; // w0
  _BOOL4 v70; // w21
  System_String_o **v71; // x8
  System_String_o **v72; // x8
  UICommonButton_o *voiceButton; // x21
  bool v74; // w0
  struct System_Boolean_array *tabInitList; // x8
  char *v76; // x8
  _BYTE *v77; // x8
  int v78; // t1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  ServantStatusListViewManager_CallbackFunc_o *v82; // x21
  ServantStatusListViewManager_o *v83; // x20
  ServantStatusListViewManager_CallbackFunc_o *v84; // x21
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v86; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v88; // x21
  const MethodInfo *v89; // x3
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v95; // x1
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

  if ( (byte_49F8192 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&OptionManager_TypeInfo, v11);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v12);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectBattle__, v13);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectFlavor__, v14);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectVoice__, v16);
    sub_1B640C8(&StringLiteral_17502/*"btn_txt_detail_off"*/, v17);
    sub_1B640C8(&StringLiteral_17485/*"btn_txt_battlecharacter_on"*/, v18);
    sub_1B640C8(&StringLiteral_17550/*"btn_txt_status_on"*/, v19);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v20);
    sub_1B640C8(&StringLiteral_17549/*"btn_txt_status_off"*/, v21);
    sub_1B640C8(&StringLiteral_17560/*"btn_txt_voice_on"*/, v22);
    sub_1B640C8(&StringLiteral_17530/*"btn_txt_profile_on"*/, v23);
    sub_1B640C8(&StringLiteral_17559/*"btn_txt_voice_off"*/, v24);
    sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v25);
    sub_1B640C8(&StringLiteral_17503/*"btn_txt_detail_on"*/, v26);
    sub_1B640C8(&StringLiteral_17529/*"btn_txt_profile_off"*/, v27);
    sub_1B640C8(&StringLiteral_17484/*"btn_txt_battlecharacter_off"*/, v28);
    byte_49F8192 = 1;
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
                v47 = (System_String_o **)&StringLiteral_17550/*"btn_txt_status_on"*/;
                if ( kind )
                  v47 = (System_String_o **)&StringLiteral_17549/*"btn_txt_status_off"*/;
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
                    v48 = (System_String_o **)(kind ? &StringLiteral_17406/*"btn_bg_12"*/ : &StringLiteral_17408/*"btn_bg_19"*/);
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
                                    (System_String_o *)StringLiteral_17529/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17406/*"btn_bg_12"*/,
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
                                                  v51 = (System_String_o **)&StringLiteral_17485/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17484/*"btn_txt_battlecharacter_off"*/;
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
                                                                               ? &StringLiteral_17408/*"btn_bg_19"*/
                                                                               : &StringLiteral_17406/*"btn_bg_12"*/);
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
                                                                      (System_String_o *)StringLiteral_17559/*"btn_txt_voice_off"*/,
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
      v57 = &StringLiteral_17503/*"btn_txt_detail_on"*/;
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
      v33 = (System_String_o **)&StringLiteral_17550/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17549/*"btn_txt_status_off"*/;
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
      v34 = (System_String_o **)(kind ? &StringLiteral_17406/*"btn_bg_12"*/ : &StringLiteral_17408/*"btn_bg_19"*/);
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
      v37 = &StringLiteral_17503/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v37 = &StringLiteral_17502/*"btn_txt_detail_off"*/;
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
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
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
      v43 = (System_String_o **)&StringLiteral_17550/*"btn_txt_status_on"*/;
      if ( kind )
        v43 = (System_String_o **)&StringLiteral_17549/*"btn_txt_status_off"*/;
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
      v44 = &StringLiteral_17408/*"btn_bg_19"*/;
      if ( kind )
        v44 = &StringLiteral_17406/*"btn_bg_12"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17502/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17406/*"btn_bg_12"*/, 0LL);
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
      v57 = &StringLiteral_17529/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v57, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17408/*"btn_bg_19"*/, 0LL);
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
      v58 = (System_String_o **)&StringLiteral_17550/*"btn_txt_status_on"*/;
      if ( kind )
        v58 = (System_String_o **)&StringLiteral_17549/*"btn_txt_status_off"*/;
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
      v59 = (System_String_o **)(kind ? &StringLiteral_17406/*"btn_bg_12"*/ : &StringLiteral_17408/*"btn_bg_19"*/);
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
      v62 = (System_String_o **)&StringLiteral_17530/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v62 = (System_String_o **)&StringLiteral_17529/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v62, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v63 = (System_String_o **)(kind == 1 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v63, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v64 = this->fields.profileButton;
      if ( !v64 )
        goto LABEL_287;
      v65 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v64, v65, this->fields.isInitTab, 0LL);
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
      v66 = (System_String_o **)&StringLiteral_17485/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v66 = (System_String_o **)&StringLiteral_17484/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v66, 0LL);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v67 = (System_String_o **)(kind == 2 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v67, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v68 = this->fields.battleButton;
      if ( !v68 )
        goto LABEL_287;
      v69 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v68, v69, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      v70 = isPlayVoice;
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
      if ( v70 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v30 != 1, 0LL);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v71 = (System_String_o **)&StringLiteral_17560/*"btn_txt_voice_on"*/;
          if ( !v30 )
            v71 = (System_String_o **)&StringLiteral_17559/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v71, 0LL);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v72 = (System_String_o **)(v30 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v72, 0LL);
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
                  v74 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
                  UICommonButton__SetColliderEnable(voiceButton, v74, this->fields.isInitTab, 0LL);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_287:
        sub_1B64324(statusTabBase);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17559/*"btn_txt_voice_off"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17406/*"btn_bg_12"*/, 0LL);
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
        sub_1B6432C(statusTabBase, v55);
      v76 = (char *)tabInitList + kind;
      v78 = (unsigned __int8)v76[32];
      v77 = v76 + 32;
      if ( v78 )
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
      *v77 = 1;
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
          ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v82 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                 ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                 v80,
                                                                 v81);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v82,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !statusTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v82, 0LL);
LABEL_231:
          v83 = this->fields.statusTabListViewManager;
          v84 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                 ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                 v55,
                                                                 v56);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v84,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v83 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(v83, 1, v84, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v56);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v86 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                           ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                           v55,
                                                                           v56);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v86,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v86, 0LL);
          break;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            v56);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v88 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                       v55,
                                                                       v56);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v88,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            v89);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          battleTabListViewManager->fields.callbackFunc = v88;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&battleTabListViewManager->fields.callbackFunc,
            (int32_t)v88,
            v90,
            v91);
          ServantStatusBattleListViewManager__SetMode_31475316(battleTabListViewManager, 1, v92, v93);
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
          if ( !byte_49F81D6 )
          {
            sub_1B640C8(&RandomLimitCountManager_TypeInfo, v95);
            byte_49F81D6 = 1;
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
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v95);
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
                                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
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
          v108 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                       v55,
                                                                       v56);
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

  if ( (byte_49F8197 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isVisible);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v5);
    byte_49F8197 = 1;
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
            (System_String_o *)StringLiteral_24501/*"wait"*/,
            0LL);
          return;
        }
LABEL_13:
        sub_1B64324(battleChrCamera);
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
  if ( (byte_49F8170 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    this = (ServantStatusDialog_o *)sub_1B640C8(&StringLiteral_11850/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v5);
    byte_49F8170 = 1;
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1B64324(this);
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
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v11; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v15; // x20
  const MethodInfo *v16; // x1
  struct ServantStatusListViewItem_o *v17; // x8
  bool v18; // w22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x22
  const MethodInfo *v22; // x2
  System_String_o *battleLoadAsset; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  const MethodInfo *v27; // x1

  if ( (byte_49F817C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B640C8(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F817C = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_34;
  v11 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !mainInfo )
    goto LABEL_34;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)mainInfo,
                                 v11,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                              v11,
                                              ServantImageLimitSealAfter,
                                              0LL);
  if ( !mainInfo )
    goto LABEL_34;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v15 = (System_String_o *)mainInfo;
  if ( System_String__Equals_61383712((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_31535984(this, v16);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_49F81D6 )
    {
      sub_1B640C8(&RandomLimitCountManager_TypeInfo, v16);
      byte_49F81D6 = 1;
    }
    mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(mainInfo->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v17 = this->fields.mainInfo;
    if ( v17 )
    {
      if ( !v17->fields.isConvertOverwriteImage )
        goto LABEL_22;
      return 0;
    }
LABEL_34:
    sub_1B64324(mainInfo);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v21 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v21, 0LL);
  }
  *p_battleLoadAsset = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v15, v19, v20);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v22);
  battleLoadAsset = this->fields.battleLoadAsset;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
  AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v18 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v26, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v27);
    return 1;
  }
  return v18;
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
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  AssetLoader_LoadEndDataHandler_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49F8176 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, onComplete);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__, v8);
    sub_1B640C8(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo, v9);
    byte_49F8176 = 1;
  }
  v10 = sub_1B64314(ServantStatusDialog___c__DisplayClass138_0_TypeInfo, onComplete, method);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = onComplete;
  v14 = v10 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)onComplete, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_20;
  p_cardLoadAsset = &this->fields.cardLoadAsset;
  v17 = (System_String_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_61383712(
                                              (System_String_o *)mainInfo,
                                              *p_cardLoadAsset,
                                              0LL);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_20:
    sub_1B64324(mainInfo);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v18 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v18, 0LL);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, (int32_t)v17, v19, v20);
  v21 = *p_cardLoadAsset;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v21, v24, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, 0, v25, v26);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *statusLoadAsset; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  AssetData_o *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_49F8174 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1B640C8(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F8174 = 1;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset,
    (int32_t)StatusImageFolderName,
    v11,
    v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1B64324(mainInfo);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v16, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v17, v18);
    ServantStatusDialog__EndStatusLoad(this, v19, v20);
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
  System_String_o *StatusImageFolderName; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  AssetLoader_LoadEndDataHandler_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49F8178 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, onComplete);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__, v8);
    sub_1B640C8(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo, v9);
    byte_49F8178 = 1;
  }
  v10 = sub_1B64314(ServantStatusDialog___c__DisplayClass140_0_TypeInfo, onComplete, method);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = onComplete;
  v14 = v10 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)onComplete, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  if ( !mainInfo->fields._IsTransformed_k__BackingField )
    goto LABEL_19;
  TransformedSvtId_k__BackingField = mainInfo->fields._TransformedSvtId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(TransformedSvtId_k__BackingField, 0, 0LL);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  p_transformedStatusLoadAsset = &this->fields.transformedStatusLoadAsset;
  v18 = StatusImageFolderName;
  StatusImageFolderName = (System_String_o *)System_String__Equals_61383712(
                                               StatusImageFolderName,
                                               *p_transformedStatusLoadAsset,
                                               0LL);
  if ( ((unsigned __int8)StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_21:
    sub_1B64324(StatusImageFolderName);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v19 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0LL);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, (int32_t)v18, v20, v21);
  v22 = *p_transformedStatusLoadAsset;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v25, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, 0, v26, v27);
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
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v23; // w21
  ServantStatusListViewItem_o *v24; // x20
  __int64 v25; // x1
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v27; // x9
  int32_t v28; // w21
  BalanceConfig_c *v29; // x8
  ServantLimitAddMaster_o *v30; // x22
  struct ServantStatusListViewItem_o *v31; // x9
  int32_t v32; // w4
  const MethodInfo *v33; // x5
  struct PartyListViewItem_o *v34; // x8
  ServantStatusListViewItem_o *v35; // x22
  unsigned __int64 v36; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v38; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  ServantStatusListViewItem_o *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w4
  const MethodInfo *v47; // x5
  System_Collections_Generic_List_object__o *v48; // x23
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  ServantStatusListViewItem_o *v54; // x1
  Il2CppClass **v55; // x0
  int32_t v56; // w4
  const MethodInfo *v57; // x5
  System_Collections_Generic_List_object__o *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  ServantStatusListViewItem_o *v64; // x1
  Il2CppClass **v65; // x0
  int32_t v66; // w4
  const MethodInfo *v67; // x5
  BalanceConfig_c *v68; // x8
  int v69; // w23
  System_Collections_Generic_List_object__o *v70; // x23
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  ServantStatusListViewItem_o *v76; // x1
  Il2CppClass **v77; // x0
  int32_t v78; // w4
  const MethodInfo *v79; // x5
  BalanceConfig_c *v80; // x8
  int v81; // w23
  System_Collections_Generic_List_object__o *v82; // x23
  int32_t v83; // w2
  int32_t v84; // w3
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  ServantStatusListViewItem_o *v88; // x1
  Il2CppClass **v89; // x0
  int32_t v90; // w4
  const MethodInfo *v91; // x5
  System_Collections_Generic_List_object__o *v92; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  ServantStatusListViewItem_o *v98; // x1
  Il2CppClass **v99; // x0
  int32_t v100; // w4
  const MethodInfo *v101; // x5
  System_Collections_Generic_List_object__o *v102; // x23
  int32_t ServantIdMashu3; // w2
  int32_t v104; // w2
  int32_t v105; // w3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  ServantStatusListViewItem_o *v109; // x1
  Il2CppClass **v110; // x0
  System_Collections_Generic_List_object__o *v111; // x23
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  ServantStatusListViewItem_o *v117; // x1
  Il2CppClass **v118; // x0
  int32_t v119; // w4
  const MethodInfo *v120; // x5
  System_Collections_Generic_List_object__o *v121; // x23
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  ServantStatusListViewItem_o *v127; // x1
  Il2CppClass **v128; // x0
  int64_t UserId; // x25
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w24
  System_Collections_Generic_List_object__o *v133; // x23
  int32_t v134; // w2
  int32_t v135; // w3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  ServantStatusListViewItem_o *v139; // x1
  Il2CppClass **v140; // x0
  int32_t v141; // w4
  const MethodInfo *v142; // x5
  System_Collections_Generic_List_object__o *v143; // x23
  int32_t v144; // w2
  int32_t v145; // w3
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  ServantStatusListViewItem_o *v149; // x1
  Il2CppClass **v150; // x0
  ServantVoiceRelationEntity_array *v151; // x20
  signed int max_length; // w8
  unsigned int v153; // w24
  ServantVoiceRelationEntity_o *v154; // x25
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x21
  __int64 v156; // x22
  __int64 v157; // x23
  ServantStatusDialog_o *v158; // x0
  int32_t v159; // w4
  const MethodInfo *v160; // x5
  int32_t v161; // w2
  int32_t v162; // w3
  struct System_Object_array *items; // x8
  _QWORD *v164; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v166; // x1
  Il2CppClass **v167; // x0
  System_Collections_Generic_List_object__o *v168; // x21
  ServantStatusDialog_o *v169; // x0
  int32_t v170; // w4
  const MethodInfo *v171; // x5
  int32_t v172; // w2
  int32_t v173; // w3
  struct System_Object_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  ServantStatusListViewItem_o *v177; // x1
  Il2CppClass **v178; // x0
  System_Collections_Generic_List_object__o *v179; // x21
  ServantStatusDialog_o *v180; // x0
  int32_t v181; // w4
  const MethodInfo *v182; // x5
  int32_t v183; // w2
  int32_t v184; // w3
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  ServantStatusListViewItem_o *v188; // x1
  Il2CppClass **v189; // x0
  struct System_Collections_Generic_List_string__o *v190; // x8
  const MethodInfo *v191; // x2
  __int64 v192; // x1
  NetworkManager_c *v193; // x0
  Il2CppObject *Item; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *loadVoiceData; // x20
  __int64 v198; // x1
  __int64 v199; // x2
  System_Action_o *v200; // x21
  ServantStatusListViewItem_o *v202; // [xsp+8h] [xbp-78h]
  unsigned __int64 v203; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16

  if ( (byte_49F8188 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&Method_ServantStatusDialog_EndLoadVoice__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&SoundManager_TypeInfo, v19);
    byte_49F8188 = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F7D6C )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49F7D6C = 1;
  }
  v20 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  if ( v20->static_fields->isRebootBlock )
    return 1;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v23 = (int)mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         (int32_t)mainInfo,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v23,
                                              0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v24 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v23,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v24 )
    goto LABEL_162;
  partyItem = v24->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v27 = 0LL;
    v202 = v24;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)partyItem )
        goto LABEL_163;
      v28 = *((_DWORD *)&v24->fields.memberItem + v27);
      v203 = v27;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v29 = BalanceConfig_TypeInfo;
      v30 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v31 = this->fields.mainInfo;
      if ( !v31 )
        goto LABEL_162;
      if ( !v30 )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v30,
                                                  v28,
                                                  v29->static_fields->ServantLimitMax,
                                                  v31->fields.costumeIds,
                                                  0LL);
      if ( !mainInfo )
        goto LABEL_162;
      v34 = mainInfo->fields.partyItem;
      v35 = mainInfo;
      if ( (int)v34 >= 1 )
        break;
LABEL_119:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_162;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v28, 0LL);
      v151 = relationList;
      if ( !relationList )
        goto LABEL_162;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v153 = 0;
        while ( v153 < max_length )
        {
          v154 = v151->m_Items[v153];
          if ( !v154 )
            goto LABEL_162;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v157 = *(_QWORD *)&v154->fields.relationSvtId.fields.currentCryptoKey;
          v156 = *(_QWORD *)&v154->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v205.fields.currentCryptoKey = v157;
          *(_QWORD *)&v205.fields.fakeValue = v156;
          v158 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v205, 0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v158,
                                                      0,
                                                      (int32_t)v158,
                                                      0,
                                                      v159,
                                                      v160);
          if ( !requestVoiceDataList )
            goto LABEL_162;
          items = requestVoiceDataList->fields._items;
          v164 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_162;
          size = requestVoiceDataList->fields._size;
          v166 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
          }
          else
          {
            v167 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v167[4] = (Il2CppClass *)v166;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v167 + 4), (int32_t)v166, v161, v162);
          }
          v168 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v169 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                            v154->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v169,
                                                      2,
                                                      (int32_t)v169,
                                                      0,
                                                      v170,
                                                      v171);
          if ( !v168 )
            goto LABEL_162;
          v174 = v168->fields._items;
          v175 = Method_System_Collections_Generic_List_string__Add__;
          ++v168->fields._version;
          if ( !v174 )
            goto LABEL_162;
          v176 = v168->fields._size;
          v177 = mainInfo;
          if ( (unsigned int)v176 >= v174->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v168,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
          }
          else
          {
            v178 = &v174->obj.klass + v176;
            v168->fields._size = v176 + 1;
            v178[4] = (Il2CppClass *)v177;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v178 + 4), (int32_t)v177, v172, v173);
          }
          v179 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v180 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                            v154->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v180,
                                                      1,
                                                      (int32_t)v180,
                                                      0,
                                                      v181,
                                                      v182);
          if ( !v179 )
            goto LABEL_162;
          v185 = v179->fields._items;
          v186 = Method_System_Collections_Generic_List_string__Add__;
          ++v179->fields._version;
          if ( !v185 )
            goto LABEL_162;
          v187 = v179->fields._size;
          v188 = mainInfo;
          if ( (unsigned int)v187 >= v185->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v179,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v189 = &v185->obj.klass + v187;
            v179->fields._size = v187 + 1;
            v189[4] = (Il2CppClass *)v188;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v189 + 4), (int32_t)v188, v183, v184);
          }
          max_length = v151->max_length;
          if ( (int)++v153 >= max_length )
            goto LABEL_144;
        }
LABEL_163:
        sub_1B6432C(mainInfo, v25);
      }
LABEL_144:
      v24 = v202;
      LODWORD(partyItem) = v202->fields.partyItem;
      v27 = v203 + 1;
      if ( (__int64)(v203 + 1) >= (int)partyItem )
        goto LABEL_145;
    }
    v36 = 0LL;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
        goto LABEL_163;
      v38 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v32,
                                                  v33);
      if ( !v38 )
        goto LABEL_162;
      v41 = v38->fields._items;
      v42 = Method_System_Collections_Generic_List_string__Add__;
      ++v38->fields._version;
      if ( !v41 )
        goto LABEL_162;
      v43 = v38->fields._size;
      v44 = mainInfo;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v41->obj.klass + v43;
        v38->fields._size = v43 + 1;
        v45[4] = (Il2CppClass *)v44;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
      }
      if ( v36 >= LODWORD(v35->fields.partyItem) )
        goto LABEL_163;
      v48 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v46,
                                                  v47);
      if ( !v48 )
        goto LABEL_162;
      v51 = v48->fields._items;
      v52 = Method_System_Collections_Generic_List_string__Add__;
      ++v48->fields._version;
      if ( !v51 )
        goto LABEL_162;
      v53 = v48->fields._size;
      v54 = mainInfo;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v51->obj.klass + v53;
        v48->fields._size = v53 + 1;
        v55[4] = (Il2CppClass *)v54;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v54, v49, v50);
      }
      if ( v36 >= LODWORD(v35->fields.partyItem) )
        goto LABEL_163;
      v58 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v56,
                                                  v57);
      if ( !v58 )
        goto LABEL_162;
      v61 = v58->fields._items;
      v62 = Method_System_Collections_Generic_List_string__Add__;
      ++v58->fields._version;
      if ( !v61 )
        goto LABEL_162;
      v63 = v58->fields._size;
      v64 = mainInfo;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &v61->obj.klass + v63;
        v58->fields._size = v63 + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v64, v59, v60);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v68 = BalanceConfig_TypeInfo;
      v69 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v68 = BalanceConfig_TypeInfo;
      }
      if ( v69 == v68->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v80 = BalanceConfig_TypeInfo;
      v81 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      if ( v81 == v80->static_fields->ServantIdMashu1 )
      {
        v82 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v80->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v80);
        if ( v36 >= LODWORD(v35->fields.partyItem) )
          goto LABEL_163;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v32,
                                                    v33);
        if ( !v82 )
          goto LABEL_162;
        v85 = v82->fields._items;
        v86 = Method_System_Collections_Generic_List_string__Add__;
        ++v82->fields._version;
        if ( !v85 )
          goto LABEL_162;
        v87 = v82->fields._size;
        v88 = mainInfo;
        if ( (unsigned int)v87 >= v85->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v82,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v85->obj.klass + v87;
          v82->fields._size = v87 + 1;
          v89[4] = (Il2CppClass *)v88;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v89 + 4), (int32_t)v88, v83, v84);
        }
        if ( v36 >= LODWORD(v35->fields.partyItem) )
          goto LABEL_163;
        v111 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v90,
                                                    v91);
        if ( !v111 )
          goto LABEL_162;
        v114 = v111->fields._items;
        v115 = Method_System_Collections_Generic_List_string__Add__;
        ++v111->fields._version;
        if ( !v114 )
          goto LABEL_162;
        v116 = v111->fields._size;
        v117 = mainInfo;
        if ( (unsigned int)v116 >= v114->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v111,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v118 = &v114->obj.klass + v116;
          v111->fields._size = v116 + 1;
          v118[4] = (Il2CppClass *)v117;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v117, v112, v113);
        }
        if ( v36 >= LODWORD(v35->fields.partyItem) )
          goto LABEL_163;
        v121 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v119,
                                                    v120);
        if ( !v121 )
          goto LABEL_162;
        v124 = v121->fields._items;
        v125 = Method_System_Collections_Generic_List_string__Add__;
        ++v121->fields._version;
        if ( !v124 )
          goto LABEL_162;
        v126 = v121->fields._size;
        v127 = mainInfo;
        if ( (unsigned int)v126 >= v124->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v121,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &v124->obj.klass + v126;
          v121->fields._size = v126 + 1;
          v128[4] = (Il2CppClass *)v127;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v127, v122, v123);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        static_fields = BalanceConfig_TypeInfo->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        mainInfo = (ServantStatusListViewItem_o *)CondType__IsQuestPhaseClear(
                                                    UserId,
                                                    MashuTdGradeUpQuestId,
                                                    MashuTdGradeUpQuestPhase,
                                                    -1,
                                                    0,
                                                    0LL);
        if ( ((unsigned __int8)mainInfo & 1) != 0 )
        {
          mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
          v133 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_163;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v36),
                                                      v32,
                                                      v33);
          if ( !v133 )
            goto LABEL_162;
          v136 = v133->fields._items;
          v137 = Method_System_Collections_Generic_List_string__Add__;
          ++v133->fields._version;
          if ( !v136 )
            goto LABEL_162;
          v138 = v133->fields._size;
          v139 = mainInfo;
          if ( (unsigned int)v138 >= v136->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v133,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          }
          else
          {
            v140 = &v136->obj.klass + v138;
            v133->fields._size = v138 + 1;
            v140[4] = (Il2CppClass *)v139;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v140 + 4), (int32_t)v139, v134, v135);
          }
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_163;
          v143 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v36),
                                                      v141,
                                                      v142);
          if ( !v143 )
            goto LABEL_162;
          v146 = v143->fields._items;
          v147 = Method_System_Collections_Generic_List_string__Add__;
          ++v143->fields._version;
          if ( !v146 )
            goto LABEL_162;
          v148 = v143->fields._size;
          v149 = mainInfo;
          if ( (unsigned int)v148 >= v146->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v143,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = &v146->obj.klass + v148;
            v143->fields._size = v148 + 1;
            v150[4] = (Il2CppClass *)v149;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v150 + 4), (int32_t)v149, v144, v145);
          }
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_163;
          v102 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_108:
      LODWORD(v34) = v35->fields.partyItem;
      if ( (__int64)++v36 >= (int)v34 )
        goto LABEL_119;
    }
    v70 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v68->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v68);
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_163;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v36),
                                                v66,
                                                v67);
    if ( !v70 )
      goto LABEL_162;
    v73 = v70->fields._items;
    v74 = Method_System_Collections_Generic_List_string__Add__;
    ++v70->fields._version;
    if ( !v73 )
      goto LABEL_162;
    v75 = v70->fields._size;
    v76 = mainInfo;
    if ( (unsigned int)v75 >= v73->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v70,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v73->obj.klass + v75;
      v70->fields._size = v75 + 1;
      v77[4] = (Il2CppClass *)v76;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v76, v71, v72);
    }
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_163;
    v92 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v36),
                                                v78,
                                                v79);
    if ( !v92 )
      goto LABEL_162;
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_string__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_162;
    v97 = v92->fields._size;
    v98 = mainInfo;
    if ( (unsigned int)v97 >= v95->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v92,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v95->obj.klass + v97;
      v92->fields._size = v97 + 1;
      v99[4] = (Il2CppClass *)v98;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v98, v93, v94);
    }
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_163;
    v102 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v36),
                                                v100,
                                                v101);
    if ( !v102 )
      goto LABEL_162;
    v106 = v102->fields._items;
    v107 = Method_System_Collections_Generic_List_string__Add__;
    ++v102->fields._version;
    if ( !v106 )
      goto LABEL_162;
    v108 = v102->fields._size;
    v109 = mainInfo;
    if ( (unsigned int)v108 >= v106->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v102,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v106->obj.klass + v108;
      v102->fields._size = v108 + 1;
      v110[4] = (Il2CppClass *)v109;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v109, v104, v105);
    }
    goto LABEL_108;
  }
LABEL_145:
  v190 = this->fields.requestVoiceDataList;
  if ( !v190 )
LABEL_162:
    sub_1B64324(mainInfo);
  if ( v190->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v191);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F7D6C )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v192);
    byte_49F7D6C = 1;
  }
  v193 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v193 = NetworkManager_TypeInfo;
  }
  if ( v193->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v195, v196);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v200 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v198, v199);
  System_Action___ctor(v200, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v21 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v200, 1, 0LL);
  return v21;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v12; // x21
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x19
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F818A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog_EndPlayVoice__, v4);
    sub_1B640C8(&StringLiteral_5975/*"EndWaitVoice"*/, v5);
    byte_49F818A = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_34577244(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5975/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v9, v10);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v12, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1B6406C(p_voicePlayer, 0, v14, v15);
      return;
    }
LABEL_13:
    sub_1B64324(voiceTabListViewManager);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_49F81CD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_1B640C8(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F81CD = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1B64324(Instance);
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
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_object__o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusFlavorTextListViewManager_o *v16; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v17; // x21
  struct System_Boolean_array *tabInitList; // x8

  v4 = this;
  if ( (byte_49F81CC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ServantCommentEntity__TypeInfo, setMode);
    sub_1B640C8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectFlavor__, v6);
    this = (ServantStatusDialog_o *)sub_1B640C8(&Method_ServantStatusDialog__UpdateProfileList_b__234_0__, v7);
    byte_49F81CC = 1;
  }
  if ( v4->fields.tabKind == 1 )
  {
    this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager;
    if ( !this )
      goto LABEL_13;
    ServantStatusFlavorTextListViewManager__CreateList(
      (ServantStatusFlavorTextListViewManager_o *)this,
      v4->fields.mainInfo,
      0LL);
    profileTabListViewManager = v4->fields.profileTabListViewManager;
    v11 = (System_Action_object__o *)sub_1B64314(System_Action_ServantCommentEntity__TypeInfo, v9, v10);
    System_Action_object____ctor(v11, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__234_0__, 0LL);
    if ( !profileTabListViewManager )
      goto LABEL_13;
    profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v11;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
      (int32_t)v11,
      v12,
      v13);
    if ( setMode )
    {
      v16 = v4->fields.profileTabListViewManager;
      v17 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                       v14,
                                                                       v15);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v16 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v16, 1, v17, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(this);
    }
  }
  else
  {
    tabInitList = v4->fields.tabInitList;
    if ( !tabInitList )
      goto LABEL_13;
    if ( tabInitList->max_length <= 1 )
      sub_1B6432C(this, setMode);
    tabInitList->m_Items[5] = 0;
  }
}


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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1B64324(this);
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
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F81D1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_49F81D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v7);
  }
  else
  {
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
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

  if ( (byte_49F81D2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssetData__TypeInfo, _);
    sub_1B640C8(&Method_ServantStatusDialog__LoadTransformedResource_b__194_1__, v4);
    byte_49F81D2 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_AssetData__TypeInfo, _, method);
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

  if ( (byte_49F81D3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, _);
    sub_1B640C8(&Method_ServantStatusDialog_EndLoadTransformedResource__, v4);
    byte_49F81D3 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, _, method);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v8 = ServantStatusDialog__CoWaitForEndOfFrame(v6, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  PartyOrganizationUtility_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_49F81D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F81D4 = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v11, 0LL),
        (v12 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v12, 0LL),
        (v12 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1B64324(v12);
  }
  v12->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v13);
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
  System_Collections_Generic_List_object__o *Master_object; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  ServantCommentMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w22
  __int64 v18; // x1
  System_Int32_array *v19; // x23
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49F81D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_49F81D5 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          v14 = (ServantCommentMaster_o *)Master_object;
          v16 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
          v15 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = v16;
          *(_QWORD *)&v21.fields.fakeValue = v15;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1B64170(int___TypeInfo, 1LL);
          if ( entity )
          {
            v19 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1B64170(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1B6432C(Master_object, v18);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v14 )
              {
                ServantCommentMaster__SetOpen_39300792(v14, v17, v19, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B64324(Master_object);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A7774;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A772C;
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
  if ( (byte_49F8931 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isModify);
    byte_49F8931 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A78F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7898;
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
  if ( (byte_49F8934 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isModify);
    byte_49F8934 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A77E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7790;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  char v13[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v13[0] = isModify;
  v12 = questId;
  if ( (byte_49F8932 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isModify);
    sub_1B640C8(&int_TypeInfo, v9);
    byte_49F8932 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A786C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A780C;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+2Ch] [xbp-44h] BYREF
  char v15[4]; // [xsp+38h] [xbp-38h] BYREF
  char v16[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v16[0] = isModify;
  v15[0] = isNeedSort;
  v14 = questId;
  if ( (byte_49F8933 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isModify);
    sub_1B640C8(&int_TypeInfo, v10);
    byte_49F8933 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *v3; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v3 = this;
  if ( (byte_49F8939 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)sub_1B640C8(
                                                                  &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method);
    byte_49F8939 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v3->fields.callback;
    v3->fields.__1__state = -1;
    if ( !callback )
      sub_1B64324(this);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    v3->fields.__1__state = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__195_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusDialog_o *_4__this; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F8935 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v5);
    sub_1B640C8(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__, v6);
    byte_49F8935 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
        v8 = sub_1BB5FA4(v8);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BB5FA4(v9);
      _4__this = **(struct ServantStatusDialog_o ***)(v9 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B64324(_4__this);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB5FA4(v10);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1BB5FA4(_4__this);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30345628(klass, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass217_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog___c__DisplayClass217_0_o *v3; // x19
  __int64 v4; // x1
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v3 = this;
  if ( (byte_49F8936 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass217_0_o *)sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_49F8936 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1B64324(this);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v7, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v10; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v14; // x8
  struct ServantStatusDialog_o *v15; // x8
  struct ServantStatusDialog_o *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v21; // x21

  if ( (byte_49F8937 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_49F8937 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  mainInfo = **(CommonUI_o ***)(v8 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30345628(mainInfo, 0LL, 0LL);
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
          LODWORD(mainInfo->fields.servantFramePurchaseMenuPrefab) = index;
        else
          HIDWORD(mainInfo->fields.servantFramePurchaseMenuPrefab) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.linkConfirmDialog) = isRandomOn;
          goto LABEL_21;
        }
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
          (ServantStatusListViewItem_o *)mainInfo,
          isRandomOn,
          v10);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          mainInfo = (CommonUI_o *)v14->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v14->fields.mainInfo,
              0LL);
            v15 = this->fields.__4__this;
            if ( v15 )
            {
              mainInfo = (CommonUI_o *)v15->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v15->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B64324(mainInfo);
  }
LABEL_21:
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v16->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v19 = (Il2CppObject *)this->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v19[12].monitor;
  v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v17,
                                                         v18);
  ServantStatusListViewManager_CallbackFunc___ctor(v21, v19, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v10; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v14; // x8
  struct ServantStatusDialog_o *v15; // x8
  struct ServantStatusDialog_o *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v21; // x21

  if ( (byte_49F8938 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_49F8938 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  mainInfo = **(CommonUI_o ***)(v8 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30345628(mainInfo, 0LL, 0LL);
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
          LODWORD(mainInfo->fields.servantFramePurchaseMenuPrefab) = index;
        else
          HIDWORD(mainInfo->fields.servantFramePurchaseMenuPrefab) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.linkConfirmDialog) = isRandomOn;
          goto LABEL_21;
        }
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
          (ServantStatusListViewItem_o *)mainInfo,
          isRandomOn,
          v10);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          mainInfo = (CommonUI_o *)v14->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v14->fields.mainInfo,
              0LL);
            v15 = this->fields.__4__this;
            if ( v15 )
            {
              mainInfo = (CommonUI_o *)v15->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v15->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B64324(mainInfo);
  }
LABEL_21:
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v16->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_33486480((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v19 = (Il2CppObject *)this->fields.__4__this;
  if ( !v19 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v19[12].monitor;
  v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v17,
                                                         v18);
  ServantStatusListViewManager_CallbackFunc___ctor(v21, v19, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v21, 0LL);
}