void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct ServantStatusDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantStatusDialog_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B183EC & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_3090/*"BattleCharaChangeConfirmDialog"*/, v4);
    sub_1BCAFF8(&StringLiteral_12632/*"ServantStatus/BattleCharaChangeConfirm"*/, v5);
    sub_1BCAFF8(&StringLiteral_407/*"#4C4C4C"*/, v6);
    byte_4B183EC = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_407/*"#4C4C4C"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantStatusDialog_TypeInfo->static_fields, StringLiteral_407/*"#4C4C4C"*/, v2, v3);
  v7 = StringLiteral_12632/*"ServantStatus/BattleCharaChangeConfirm"*/;
  static_fields = ServantStatusDialog_TypeInfo->static_fields;
  static_fields->BattleCharaChangeConfirmLoadAssetPath = (struct System_String_o *)StringLiteral_12632/*"ServantStatus/BattleCharaChangeConfirm"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->BattleCharaChangeConfirmLoadAssetPath, v7, v9, v10);
  v11 = StringLiteral_3090/*"BattleCharaChangeConfirmDialog"*/;
  v12 = ServantStatusDialog_TypeInfo->static_fields;
  v12->BattleCharaChangeConfirmDialogPrefabName = (struct System_String_o *)StringLiteral_3090/*"BattleCharaChangeConfirmDialog"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v12->BattleCharaChangeConfirmDialogPrefabName, v11, v13, v14);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B183EB & 1) == 0 )
  {
    sub_1BCAFF8(&bool___TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v7);
    byte_4B183EB = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v8 = (struct System_Boolean_array *)sub_1BCB0A0(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tabInitList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dictChangeSvtVoiceIdList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestVoiceDataList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceDataList, (int32_t)v17, v18, v19);
  v20 = StringLiteral_24501/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24501/*"wait"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.defaultAnimationName, v20, v21, v22);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4B18394 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B18394 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, v6, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v8);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v9);
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
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  CGThumbnailListItem_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UICamera_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  char v47[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v48[4]; // [xsp+8h] [xbp-58h] BYREF
  char v49[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v50[4]; // [xsp+18h] [xbp-48h] BYREF
  char v51[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1838B & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v2);
    sub_1BCAFF8(&TouchEffectManager_TypeInfo, v3);
    sub_1BCAFF8(&UICamera_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_9815/*"OnDragEnd"*/, v5);
    sub_1BCAFF8(&StringLiteral_9837/*"OnHover"*/, v6);
    sub_1BCAFF8(&StringLiteral_9868/*"OnPress"*/, v7);
    sub_1BCAFF8(&StringLiteral_9878/*"OnScrollStop"*/, v8);
    byte_4B1838B = 1;
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
      UICamera__Notify(v12, (System_String_o *)StringLiteral_9815/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v17 = currentTouch->fields.dragged;
      v51[0] = 0;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v51, v14, v15, v16);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v17, (System_String_o *)StringLiteral_9868/*"OnPress"*/, v18, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v23 = currentTouch->fields.current;
      v50[0] = 1;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v50, v20, v21, v22);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v23, (System_String_o *)StringLiteral_9837/*"OnHover"*/, v24, 0LL);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v49[0] = 0;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v49, v26, v27, v28);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9868/*"OnPress"*/, v29, 0LL);
    v48[0] = 1;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v48, v30, v31, v32);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9837/*"OnHover"*/, v33, 0LL);
    v47[0] = 0;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v47, v34, v35, v36);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9878/*"OnScrollStop"*/, v37, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->current, 0, v39, v40);
  v41 = (CGThumbnailListItem_o *)UICamera_TypeInfo->static_fields;
  v41[1].klass = 0LL;
  sub_1BCAF9C(v41 + 1, 0, v42, v43);
  v44 = UICamera_TypeInfo->static_fields;
  v44->currentTouch = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v44->currentTouch, 0, v45, v46);
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
  __int64 v8; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  __int64 v11; // x1
  __int64 DispLimitCount; // x0
  __int64 v13; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusBattleListViewItem_o *v15; // x0
  __int64 v16; // x1
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B183AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_4B183AD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             0LL)) == 0LL )
  {
    sub_1BCB254(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1BCB254(v7, v8);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v20.fields._current, 0LL);
    if ( !Item )
      sub_1BCB254(0LL, v11);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCB254(DispLimitCount, v13);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, 0LL);
      if ( !v15 )
        sub_1BCB254(0LL, v16);
      index = (unsigned int)v15->fields.index;
      v18 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v18 )
        sub_1BCB254(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v18, index, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  SkillInfo_o *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int32_t v18; // w22
  ServantLimitImageMaster_o *v19; // x21
  int32_t v20; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  const MethodInfo *v22; // x2
  struct ServantStatusListViewItem_o *v23; // x8
  struct System_Int32_array *dispSelectList; // x8
  __int64 confirmDispLv; // x9
  __int64 *v26; // x21
  __int64 *v27; // x22
  System_Int32_array *ClassSkill; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x0
  System_Collections_ICollection_o **v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ServantOverwriteStatus_o *v35; // x8
  bool v36; // w25
  System_Collections_ICollection_o *v37; // x0
  _BOOL4 v38; // w26
  bool v39; // w23
  __int64 i; // x25
  unsigned __int64 v41; // x27
  __int64 v42; // x8
  __int64 v43; // x9
  SkillInfo_o *v44; // x0
  bool v45; // w2
  int v46; // w8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x19
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x2

  if ( (byte_4B1839D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__, v10);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass163_0_TypeInfo, v11);
    byte_4B1839D = 1;
  }
  v12 = sub_1BCB244(ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass163_0___ctor((ServantStatusDialog___c__DisplayClass163_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_55;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  mainInfo = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
  if ( !mainInfo )
    goto LABEL_55;
  if ( !mainInfo->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, v17);
    return;
  }
  *(_DWORD *)(v12 + 68) = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.mainInfo )
    goto LABEL_55;
  v18 = *(_DWORD *)(v12 + 68);
  v19 = (ServantLimitImageMaster_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0LL);
  if ( !v19 )
    goto LABEL_55;
  *(_DWORD *)(v12 + 112) = ServantLimitImageMaster__GetServantLimitCountSealAfter(v19, v18, (int32_t)mainInfo, 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v20 = *(_DWORD *)(v12 + 68);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          mainInfo,
                                          0LL);
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              v19,
                                              v20,
                                              ConvertOverwriteDispImageLimitCount,
                                              0LL);
  *(_DWORD *)(v12 + 72) = (_DWORD)mainInfo;
  v23 = this->fields.mainInfo;
  if ( !v23 )
    goto LABEL_55;
  dispSelectList = v23->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_55;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= dispSelectList->max_length )
LABEL_56:
    sub_1BCB25C(mainInfo, v14, v22);
  *(_DWORD *)(v12 + 76) = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                            v19,
                            *(_DWORD *)(v12 + 68),
                            dispSelectList->m_Items[confirmDispLv + 1],
                            0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetNpInfo_34973340(mainInfo, (TreasureDvcInfo_o **)(v12 + 24), *(_DWORD *)(v12 + 72), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetNpInfo_34973340(mainInfo, (TreasureDvcInfo_o **)(v12 + 32), *(_DWORD *)(v12 + 76), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v26 = (__int64 *)(v12 + 48);
  ServantStatusListViewItem__GetSkillInfo_34972432(mainInfo, (SkillInfo_array **)(v12 + 48), *(_DWORD *)(v12 + 72), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v27 = (__int64 *)(v12 + 56);
  ServantStatusListViewItem__GetSkillInfo_34972432(mainInfo, (SkillInfo_array **)(v12 + 56), *(_DWORD *)(v12 + 76), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v12 + 80), *(_DWORD *)(v12 + 72), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v12 + 96), *(_DWORD *)(v12 + 76), 0LL);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ClassSkill = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v12 + 72), 0LL);
  *(_QWORD *)(v12 + 88) = ClassSkill;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 88), (int32_t)ClassSkill, v29, v30);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v31 = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v12 + 76), 0LL);
  *(_QWORD *)(v12 + 104) = v31;
  v32 = (System_Collections_ICollection_o **)(v12 + 104);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 104), (int32_t)v31, v33, v34);
  mainInfo = *(ServantStatusListViewItem_o **)(v12 + 24);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)TreasureDvcInfo__Equals(
                                                    (TreasureDvcInfo_o *)mainInfo,
                                                    *(TreasureDvcInfo_o **)(v12 + 32),
                                                    0LL),
        v35 = *(ServantOverwriteStatus_o **)(v12 + 80),
        *(_BYTE *)(v12 + 40) = ((unsigned __int8)mainInfo & 1) == 0,
        !v35) )
  {
LABEL_55:
    sub_1BCB254(mainInfo, v14);
  }
  v36 = ServantOverwriteStatus__Equals(v35, *(ServantOverwriteStatus_o **)(v12 + 96), 0LL);
  v37 = *(System_Collections_ICollection_o **)(v12 + 88);
  *(_BYTE *)(v12 + 64) = 0;
  v38 = 0;
  if ( !BasicHelper__IsNullOrEmpty(v37, 0LL) )
    v38 = !BasicHelper__IsNullOrEmpty(*v32, 0LL)
       && !System_Linq_Enumerable__SequenceEqual_int_(
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v12 + 88),
             (System_Collections_Generic_IEnumerable_TSource__o *)*v32,
             (const MethodInfo_3051C1C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v39 = !v36;
  for ( i = 4LL; ; ++i )
  {
    mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v41 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v41 >= SLODWORD(mainInfo->fields.commandCodeCommentEntity[1].klass) )
    {
      v46 = *(unsigned __int8 *)(v12 + 64);
      goto LABEL_45;
    }
    v42 = *v26;
    if ( !*v26 )
      goto LABEL_55;
    if ( v41 >= *(unsigned int *)(v42 + 24) )
      goto LABEL_56;
    v43 = *v27;
    if ( !*v27 )
      goto LABEL_55;
    if ( v41 >= *(unsigned int *)(v43 + 24) )
      goto LABEL_56;
    v44 = *(SkillInfo_o **)(v42 + 8 * i);
    v14 = *(SkillInfo_o **)(v43 + 8 * i);
    if ( v44 )
    {
      v45 = 1;
    }
    else
    {
      if ( !v14 )
        continue;
      v44 = *(SkillInfo_o **)(v43 + 8 * i);
      v14 = 0LL;
      v45 = 0;
    }
    if ( !SkillInfo__Equals(v44, v14, v45, 0LL) )
      break;
  }
  v46 = 1;
  *(_BYTE *)(v12 + 64) = 1;
LABEL_45:
  if ( v46 | *(unsigned __int8 *)(v12 + 40) )
  {
    if ( !v38 && !v39 )
      goto LABEL_53;
    if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    {
      ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(this, (const MethodInfo *)v14);
      battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0LL, 0LL) )
      {
        ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
          (ServantStatusDialog___c__DisplayClass163_0_o *)v12,
          0LL);
        return;
      }
LABEL_53:
      ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        (ServantStatusDialog___c__DisplayClass163_0_o *)v12,
        0LL);
    }
    else
    {
      v48 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v12,
        Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__,
        0LL);
      ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(this, v48, v49);
    }
  }
  else
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v22);
  }
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
  if ( (byte_4B183CC & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B183CC = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(this, *(_QWORD *)&type);
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
  if ( (byte_4B183C9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, v5);
    byte_4B183C9 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1BCB254(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v7 = (System_Action_object__o *)sub_1BCB244(System_Action_AssetData__TypeInfo);
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
  if ( (byte_4B183D0 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B183D0 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4B183D3 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B183D3 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(this, *(_QWORD *)&dispLv);
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

  if ( (byte_4B183CB & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B183CB = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(mainInfo, *(_QWORD *)&type);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  System_String_o *statusLoadAsset; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *cardLoadAsset; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *battleLoadAsset; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v32; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v38; // w2
  int v39; // w9
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B183AB & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, callback);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_1BCAFF8(&SoundManager_TypeInfo, v12);
    byte_4B183AB = 1;
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
    (const MethodInfo *)callback);
  this->fields.mainInfo = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, 0, v14, v15);
  ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(this, v16);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, 0, v18, v19);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cardLoadAsset, 0, v21, v22);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, 0, v24, v25);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.transformedStatusLoadAsset, 0, v28, v29);
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadVoiceData, 0, v34, v35);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v40.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1BCB254(statusTabListViewManager, callback);
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
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B183C2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo, callback);
    byte_4B183C2 = 1;
  }
  v4 = sub_1BCB244(ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__207___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B1839B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1839B = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BCB254(0LL, v4);
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
    UnityEngine_Object__Destroy_70136076(v7, 0LL);
  }
}


bool __fastcall ServantStatusDialog__EnableSpecialCostume(
        ServantStatusDialog_o *this,
        System_String_o **costumeName,
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
  __int64 v18; // x20
  ServantStatusListViewItem_o *Master_object; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct ServantStatusListViewItem_o *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dispSelectList; // x22
  ServantStatusDialog___c_c *v29; // x0
  System_Func_int__bool__o *_9__251_0; // x23
  System_String_o *v31; // x21
  Il2CppObject *v32; // x24
  struct ServantStatusDialog___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_T__TResult__o *v37; // x23
  System_Collections_Generic_IEnumerable_string__o *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4B183E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCostumeMaster___, costumeName);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_int__string___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1BCAFF8(&System_Func_int__string__TypeInfo, v8);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__EnableSpecialCostume_b__251_0__, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass251_0__EnableSpecialCostume_b__1__, v12);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass251_0_TypeInfo, v13);
    sub_1BCAFF8(&ServantStatusDialog___c_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_11802/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, v15);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v16);
    sub_1BCAFF8(&StringLiteral_25152/*"、"*/, v17);
    byte_4B183E9 = 1;
  }
  v18 = sub_1BCB244(ServantStatusDialog___c__DisplayClass251_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass251_0___ctor((ServantStatusDialog___c__DisplayClass251_0_o *)v18, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)LocalizationManager__ContainsKey(
                                                   (System_String_o *)StringLiteral_11802/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/,
                                                   0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_21;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( !userSvtEntity || !UserServantEntity__IsHeroine(userSvtEntity, 0LL) )
  {
LABEL_21:
    *costumeName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)costumeName, (int32_t)StringLiteral_1/*""*/, v21, v22);
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = Master_object,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Master_object, v25, v26),
        (Master_object = this->fields.mainInfo) == 0LL)
    || (Master_object = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(Master_object, 0LL),
        *(_DWORD *)(v18 + 24) = (_DWORD)Master_object,
        (v27 = this->fields.mainInfo) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(Master_object, v20);
  }
  dispSelectList = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.dispSelectList;
  v29 = ServantStatusDialog___c_TypeInfo;
  if ( !ServantStatusDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo);
    v29 = ServantStatusDialog___c_TypeInfo;
  }
  _9__251_0 = v29->static_fields->__9__251_0;
  v31 = (System_String_o *)StringLiteral_25152/*"、"*/;
  if ( !_9__251_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = ServantStatusDialog___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__251_0 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__251_0, v32, Method_ServantStatusDialog___c__EnableSpecialCostume_b__251_0__, 0LL);
    static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    static_fields->__9__251_0 = _9__251_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__251_0, (int32_t)_9__251_0, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_int_(
          dispSelectList,
          (System_Func_TSource__bool__o *)_9__251_0,
          (const MethodInfo_305D9B4 *)Method_System_Linq_Enumerable_Where_int___);
  v37 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_ServantStatusDialog___c__DisplayClass251_0__EnableSpecialCostume_b__1__,
    0LL);
  v38 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v36,
                                                              (System_Func_TSource__TResult__o *)v37,
                                                              (const MethodInfo_304C604 *)Method_System_Linq_Enumerable_Select_int__string___);
  v39 = System_String__Join_62493000(v31, v38, 0LL);
  *costumeName = v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)costumeName, (int32_t)v39, v40, v41);
  return !System_String__IsNullOrEmpty(*costumeName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Boolean_array *tabInitList; // x8
  ServantStatusDialog_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( isDecide )
  {
    tabInitList = this->fields.tabInitList;
    v4 = this;
    if ( !tabInitList )
      goto LABEL_7;
    if ( !tabInitList->max_length )
      sub_1BCB25C(this, isDecide, method);
    tabInitList->m_Items[4] = 0;
    this = (ServantStatusDialog_o *)this->fields.statusTabListViewManager;
    if ( !this )
LABEL_7:
      sub_1BCB254(this, isDecide);
    ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)this, 0LL);
    ServantStatusDialog__SetChangeBattleResource(v4, 1, v5);
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

  if ( (byte_4B183CD & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B183CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B183A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B183A0 = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v8,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1BCB254(mainInfo, v6);
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

  if ( (byte_4B183B6 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B183B6 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BCB254(v6, v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v5, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B183B4 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B183B4 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BCB254(v6, v7);
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

  if ( (byte_4B18391 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AssetData__TypeInfo, data);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndTransformedStatusLoad__, v4);
    byte_4B18391 = 1;
  }
  v5 = (System_Action_object__o *)sub_1BCB244(System_Action_AssetData__TypeInfo);
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
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Object_o *changeTransformButton; // x20
  __int64 v25; // x2
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
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v66; // x1
  struct ServantStatusListViewItem_o *v67; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v69; // x21
  UnityEngine_Object_o *v70; // x21
  const MethodInfo *v71; // x2
  UILabel_o *v72; // x21
  ServantLimitAddMaster_o *v73; // x21
  int32_t v74; // w8
  char v75; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v77; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v79; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v82; // x22
  struct ServantStatusListViewItem_o *v83; // x8
  int32_t v84; // w2
  int32_t limitCount; // w1
  int32_t v86; // w8
  struct ServantStatusListViewItem_o *v87; // x9
  struct UserServantEntity_o *v88; // x0
  int32_t v89; // w21
  int32_t v90; // w21
  ServantLimitImageMaster_o *v91; // x22
  struct ServantStatusListViewItem_o *v92; // x8
  int32_t v93; // w2
  int32_t v94; // w8
  struct ServantStatusListViewItem_o *v95; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v97; // w1
  int32_t v98; // w2
  struct ServantLeaderInfo_o *v99; // x9
  System_String_o *v100; // x1
  ServantLimitImageMaster_o *v101; // x21
  struct ServantStatusListViewItem_o *v102; // x8
  struct UserServantCollectionEntity_o *v103; // x8
  struct UIRangeLabel_o *v104; // x21
  struct ServantEntity_o *v105; // x22
  __int64 v106; // x23
  __int64 v107; // x24
  int32_t v108; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v110; // x8
  UILabel_o *v111; // x21
  struct ServantStatusListViewItem_o *v112; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v114; // x8
  ServantLimitImageMaster_o *v115; // x21
  struct ServantStatusListViewItem_o *v116; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v118; // x22
  __int64 v119; // x23
  int32_t v120; // w22
  struct UILabel_o *v121; // x23
  System_String_o *mText; // x25
  System_String_o *v123; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v125; // x0
  System_String_o *v126; // x1
  UILabel_o *v127; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v129; // x21
  __int64 *v130; // x8
  struct ServantStatusListViewItem_o *v131; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v133; // x0
  const MethodInfo *v134; // x1
  const MethodInfo *v135; // x2
  int32_t v136; // w8
  unsigned int v137; // w8
  const MethodInfo *v138; // x1
  unsigned int v139; // w8
  bool v140; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_4B18389 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&OptionManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_11799/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_1BCAFF8(&StringLiteral_11800/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v16);
    sub_1BCAFF8(&StringLiteral_11801/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v17);
    sub_1BCAFF8(&StringLiteral_11807/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v18);
    sub_1BCAFF8(&StringLiteral_11806/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v19);
    sub_1BCAFF8(&StringLiteral_3997/*"CancelInput"*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    sub_1BCAFF8(&StringLiteral_5959/*"EndLoadInit"*/, v22);
    byte_4B18389 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_238;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeTransformButton, 0LL, 0LL);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_238;
    if ( mainInfo->fields._IsTransformServant_k__BackingField )
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !baseObject )
        goto LABEL_238;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.statusButton )
        goto LABEL_238;
      v27 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v27, LocalPositionX + 0.0, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_238;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_238;
      v31 = baseObject;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      v33 = GameObjectExtensions__GetLocalPositionX(v32, 0LL);
      GameObjectExtensions__SetLocalPositionX(v31, v33 + (float)changeTransformAddTabMargin, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_238;
      v34 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_238;
      v35 = baseObject;
      v36 = v34 + changeTransformAddTabMargin;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v38 = GameObjectExtensions__GetLocalPositionX(v37, 0LL);
      GameObjectExtensions__SetLocalPositionX(v35, v38 + (float)v36, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_238;
      v39 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_238;
      v40 = baseObject;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v42 = GameObjectExtensions__GetLocalPositionX(v41, 0LL);
      GameObjectExtensions__SetLocalPositionX(v40, v42 + (float)(v39 + v36), 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_238;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_238;
      v43 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_238;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_238;
      v43 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v43, 0LL);
  }
  v44 = this->fields.mainInfo;
  if ( !v44 )
    goto LABEL_238;
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
      goto LABEL_238;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_39617644(106, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v49 = this;
    else
      v49 = 0LL;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v50 = this->fields.mainInfo;
      if ( !v50 )
        goto LABEL_238;
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
          goto LABEL_238;
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
              goto LABEL_238;
          }
          else
          {
            v54 = kind != 12;
            if ( !v52 )
              goto LABEL_238;
          }
        }
        else
        {
          v54 = 0;
          v52 = v49;
          if ( !v49 )
            goto LABEL_238;
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
        v86 = this->fields.kind;
        switch ( v86 )
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
            v140 = v86 == 33;
            v46 = 11;
            v45 = v140;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v94 = this->fields.kind, v94 == 36) )
        {
          v45 = 0;
          goto LABEL_64;
        }
        v45 = 0;
        if ( v94 == 29 )
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
    goto LABEL_238;
  max_length = tabInitList->max_length;
  v58 = 0LL;
  v59 = &tabInitList->m_Items[4];
  do
  {
    if ( v58 >= max_length )
      sub_1BCB25C(baseObject, method, v25);
    v59[v58++] = 0;
  }
  while ( v58 != 4 );
  v60 = this->fields.mainInfo;
  if ( !v60 )
    goto LABEL_238;
  if ( v60->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_238;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_238;
    v61 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v61 )
      goto LABEL_238;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v61, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.newProfileList, (int32_t)NewProfileEntities, v63, v64);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_238;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_238;
    ShiningIconComponent__Set_40206624((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_238;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v66);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_238;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_238;
  TitleInfoControl__changeTitleInfo_39038344((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v67 = this->fields.mainInfo;
  if ( !v67 )
    goto LABEL_238;
  commandCodeEntity = v67->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_238;
    v73 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v73 )
      goto LABEL_238;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v73,
                                               (int32_t)baseObject,
                                               0LL);
    v74 = this->fields.kind;
    v75 = (char)baseObject;
    if ( (v74 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v77 = this->fields.mainInfo;
        if ( !v77 )
          goto LABEL_238;
        servantLeaderInfo = v77->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_238;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v79 = this->fields.mainInfo;
        if ( !v79 )
          goto LABEL_238;
        if ( (v75 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v79->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_238;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_238;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_238;
          v82 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v82 )
            goto LABEL_238;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v82,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v83 = this->fields.mainInfo;
          if ( !v83 )
            goto LABEL_238;
          v84 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v83->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_238;
          limitCount = -1;
        }
        else
        {
          v99 = v79->fields.servantLeaderInfo;
          if ( !v99 )
            goto LABEL_238;
          baseObject = (UnityEngine_GameObject_o *)v79->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_238;
          limitCount = v99->fields.limitCount;
          v84 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v84, 0, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_238;
      v100 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v100, 0LL, 1, 0, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v110 = this->fields.mainInfo;
        if ( !v110 )
          goto LABEL_238;
        baseObject = (UnityEngine_GameObject_o *)v110->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_238;
        v111 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v112 = this->fields.mainInfo;
          if ( !v112 )
            goto LABEL_238;
          baseObject = (UnityEngine_GameObject_o *)v112->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_238;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        method = (const MethodInfo *)baseObject;
        if ( !v111 )
          goto LABEL_238;
        UILabel__set_text(v111, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_218;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v114 = this->fields.mainInfo;
      if ( !v114 )
        goto LABEL_238;
      if ( v114->fields.userSvtEntity )
      {
        v115 = (ServantLimitImageMaster_o *)baseObject;
        ServantStatusDialog__SetBattleCharaTabExplanation(this, method);
        v116 = this->fields.mainInfo;
        if ( !v116 )
          goto LABEL_238;
        userSvtEntity = v116->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_238;
        v119 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v118 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v142.fields.currentCryptoKey = v119;
        *(_QWORD *)&v142.fields.fakeValue = v118;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                   v142,
                                                   0LL);
        if ( !v115 )
          goto LABEL_238;
        v120 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v115,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_211;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v115,
                                                   (System_String_o *)StringLiteral_11801/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v120,
                                                   0LL);
        v121 = this->fields.battleExplanationLabel;
        if ( !v121 )
          goto LABEL_238;
        mText = v121->fields.mText;
        v123 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v115,
                                                        v120,
                                                        3,
                                                        0,
                                                        0LL);
        v125 = System_String__Format(v123, LimitCountSealedServantName, 0LL);
        v126 = System_String__Concat_62450424(mText, v125, 0LL);
        v127 = v121;
      }
      else
      {
        userSvtCollectionEntity = v114->fields.userSvtCollectionEntity;
        v129 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v130 = &StringLiteral_11799/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v130 = &StringLiteral_11800/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v130, 0LL);
        if ( !v129 )
          goto LABEL_238;
        v126 = (System_String_o *)baseObject;
        v127 = v129;
      }
      UILabel__set_text(v127, v126, 0LL);
LABEL_211:
      v131 = this->fields.mainInfo;
      if ( !v131 )
        goto LABEL_238;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_238;
      IsTransformServant_k__BackingField = v131->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_238;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_238;
        v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v133, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_218;
    }
    if ( (unsigned int)(v74 - 6) <= 2 )
    {
      v95 = this->fields.mainInfo;
      if ( !v95 )
        goto LABEL_238;
      baseObject = (UnityEngine_GameObject_o *)v95->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_238;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v75 & 1) != 0 )
      {
        v97 = -1;
        v98 = 0;
      }
      else
      {
        v98 = -1;
        v97 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v97, v98, 0, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_238;
      v100 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v87 = this->fields.mainInfo;
    if ( !v87 )
      goto LABEL_238;
    v88 = v87->fields.userSvtEntity;
    if ( v88 )
    {
      if ( (v75 & 1) == 0 )
      {
        v104 = this->fields.servantNameRangeLabel;
        v105 = v87->fields.svtEntity;
        v107 = *(_QWORD *)&v88->fields.limitCount.fields.currentCryptoKey;
        v106 = *(_QWORD *)&v88->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v141.fields.currentCryptoKey = v107;
        *(_QWORD *)&v141.fields.fakeValue = v106;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                   v141,
                                                   0LL);
        if ( !v105 )
          goto LABEL_238;
        v108 = (int)baseObject;
        v93 = -1;
        baseObject = (UnityEngine_GameObject_o *)v105;
        goto LABEL_172;
      }
      v89 = UserServantEntity__getCardImageLimitCount(v88, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v90 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v89, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_238;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_238;
      v91 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v91 )
        goto LABEL_238;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v91,
                                                 (int32_t)baseObject,
                                                 v90,
                                                 0LL);
      v92 = this->fields.mainInfo;
      if ( !v92 )
        goto LABEL_238;
      v93 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v92->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_238;
    }
    else
    {
      if ( (v75 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v87->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_238;
        v104 = this->fields.servantNameRangeLabel;
        v108 = -1;
        v93 = -1;
        goto LABEL_172;
      }
      if ( v87->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_238;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_238;
        v101 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v102 = this->fields.mainInfo;
        if ( !v102 )
          goto LABEL_238;
        v103 = v102->fields.userSvtCollectionEntity;
        if ( !v103 )
          goto LABEL_238;
        if ( !v101 )
          goto LABEL_238;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v101,
                                                   (int32_t)baseObject,
                                                   v103->fields.maxLimitCount,
                                                   0LL);
        v87 = this->fields.mainInfo;
        if ( !v87 )
          goto LABEL_238;
        v93 = (int)baseObject;
      }
      else
      {
        v93 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v87->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_238;
    }
    v104 = this->fields.servantNameRangeLabel;
    v108 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v108, v93, 0, 0LL);
    if ( !v104 )
      goto LABEL_238;
    v100 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v104;
    goto LABEL_174;
  }
  v69 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v69 )
    goto LABEL_238;
  UIRangeLabel__Set(v69, (System_String_o *)baseObject, 0LL, 1, 0, 0, 0LL);
  v70 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    v72 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v72 )
    {
      UILabel__set_text(v72, (System_String_o *)baseObject, 0LL);
      goto LABEL_218;
    }
LABEL_238:
    sub_1BCB254(baseObject, method);
  }
LABEL_218:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_238;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v71);
  ServantStatusDialog__SetMark(this, v134);
  v136 = this->fields.kind;
  if ( v136 > 28 )
  {
    v137 = v136 - 30;
    if ( v137 < 7 )
    {
      v45 = dword_C1ABB4[v137];
      goto LABEL_227;
    }
LABEL_225:
    v45 = 0;
    goto LABEL_227;
  }
  if ( v136 == 10 )
  {
    v45 = 1;
    goto LABEL_227;
  }
  if ( v136 != 11 )
  {
    v45 = 1;
    if ( v136 != 28 )
      goto LABEL_225;
  }
LABEL_227:
  ServantStatusDialog__SetTabKind(this, v45, v135);
  v139 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v139 - 10 < 0x13 || v139 <= 0x24 && ((1LL << v139) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5959/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v138);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3997/*"CancelInput"*/,
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

  if ( (byte_4B18397 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4B18397 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_33983400(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_33983400(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4B18398 & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, method);
    byte_4B18398 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B1825A )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, method);
    byte_4B1825A = 1;
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
      sub_1BCB254(v4, method);
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

  if ( (byte_4B1839F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4B1839F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4B1838C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog__EndLoadInit_b__146_0__, v3);
    byte_4B1838C = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__146_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v4, v5);
  ServantStatusDialog__InitList(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v7; // x1
  struct System_Boolean_array *v8; // x8
  const MethodInfo *tabKind; // x1

  if ( (byte_4B183C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B183C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v8 = this->fields.tabInitList,
        this->fields.isBattlePlay = 0,
        !v8) )
  {
LABEL_12:
    sub_1BCB254(Instance, v4);
  }
  if ( v8->max_length <= 3 )
LABEL_13:
    sub_1BCB25C(Instance, v4, v5);
  v8->m_Items[7] = 0;
  tabKind = (const MethodInfo *)(unsigned int)this->fields.tabKind;
  if ( (_DWORD)tabKind == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabKind);
    LODWORD(tabKind) = this->fields.tabKind;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabKind, v5);
}


void __fastcall ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v19; // x3
  Il2CppObject *Item; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x20
  System_Action_o *v24; // x21

  if ( (byte_4B183A3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndLoadVoice__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&SoundManager_TypeInfo, v11);
    byte_4B183A3 = 1;
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
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)loadVoiceData;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)loadVoiceData, v2, v3);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadVoiceData, 0, v18, v19);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v21, v22);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v23 = this->fields.loadVoiceData;
              v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
              System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v23, v24, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1BCB254(voiceDataList, loadVoiceData);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v10; // w9
  il2cpp_array_size_t max_length; // w10
  ServantVoiceData_o *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B183A7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5986/*"EndWaitVoice"*/, method);
    byte_4B183A7 = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v10 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v10;
    max_length = voicePlayList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= max_length )
        sub_1BCB25C(voiceTabListViewManager, v6, v7);
      v12 = voicePlayList->m_Items[v10];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5986/*"EndWaitVoice"*/,
          v12->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1BCB254(voiceTabListViewManager, v6);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_37168100(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, 0, v13, v14);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_37168100(voiceTabListViewManager, 2, -1, 0LL);
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

  if ( (byte_4B183BF & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B183BF = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
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
  v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v12 )
LABEL_13:
    sub_1BCB254(statusTabListViewManager, isDecide);
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

  if ( (byte_4B1838F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AssetData__TypeInfo, data);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCommandCardLoad__, v4);
    byte_4B1838F = 1;
  }
  v5 = (System_Action_object__o *)sub_1BCB244(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4B18393 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_5959/*"EndLoadInit"*/, v6);
    byte_4B18393 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(Instance, v8);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5959/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v18; // x3
  CGThumbnailListItem_o *p_voicePlayer; // x0

  v4 = this;
  if ( (byte_4B183A6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndPlayVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&SoundManager_TypeInfo, v6);
    byte_4B183A6 = 1;
  }
  voicePlayList = v4->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v4->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1BCB25C(this, method, v2);
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
        v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v16 = SoundManager__playVoice_40693920(voicePlayAssetName, id, DEFAULT_VOLUME, v15, 0, 0LL);
        p_voicePlayer = (CGThumbnailListItem_o *)&v4->fields.voicePlayer;
        v4->fields.voicePlayer = v16;
        goto LABEL_16;
      }
LABEL_17:
      sub_1BCB254(this, method);
    }
    if ( v4->fields.tabKind == 3 && (v4->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_37168100((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v4->fields.voiceListIndex = -1;
    }
    v4->fields.voicePlayList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.voicePlayList, 0, v2, v3);
    p_voicePlayer = (CGThumbnailListItem_o *)&v4->fields.voicePlayAssetName;
    LODWORD(v16) = 0;
    v4->fields.voicePlayNum = 0;
    v4->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1BCAF9C(p_voicePlayer, (int32_t)v16, v17, v18);
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

  if ( (byte_4B183CA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B183CA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(Instance, v7);
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
  __int64 v34; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v36; // w9
  struct ServantStatusListViewItem_o *v37; // x8
  ServantStatusDialog_o *v38; // x22
  struct ServantStatusListViewItem_o *v39; // x8
  ServantStatusDialog_o *v40; // x23
  struct ServantStatusListViewItem_o *v41; // x8
  struct ServantStatusListViewItem_o *v42; // x8
  ServantOverwriteStatus_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v47; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v3 = this;
  if ( (byte_4B183BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B183BC = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v47 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_66;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v14 = v3->fields.mainInfo;
  if ( !v14 )
    goto LABEL_66;
  userSvtEntity = v14->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_66;
  v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v17 = this;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v45 = v46;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v45, 0LL);
  if ( !v17 )
    goto LABEL_66;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v18 = v3->fields.mainInfo;
    if ( !v18 )
      goto LABEL_66;
    v19 = v18->fields.userSvtEntity;
    if ( !v19 )
      goto LABEL_66;
    v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
    v21 = this;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v20;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v44 = v46;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v44, 0LL);
    if ( !v21 )
      goto LABEL_66;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = v3->fields.mainInfo;
  if ( !v22 )
    goto LABEL_66;
  v23 = v22->fields.userSvtEntity;
  if ( !v23 )
    goto LABEL_66;
  v24 = this;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v26;
  *(_QWORD *)&v50.fields.fakeValue = v25;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v50, 0LL);
  if ( !v24 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v27 = v3->fields.mainInfo;
  if ( !v27 )
    goto LABEL_66;
  v28 = this;
  this = (ServantStatusDialog_o *)v27->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_66;
  v29 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( v29 == DispLimitCount )
    goto LABEL_65;
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
LABEL_66:
    sub_1BCB254(this, result);
  }
  m_CancellationTokenSource = v32->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v32 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v36 )
        sub_1BCB25C(this, result, v34);
      if ( *((_DWORD *)&v32->fields.CHARA_BASE_POSITION.fields.x + v36) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v36) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v36 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_65;
  v37 = v3->fields.mainInfo;
  if ( !v37 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)v37->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v29, -1, 1, -1, 0LL);
  if ( !entity )
    goto LABEL_66;
  v38 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v31, -1, 1, -1, 0LL);
  v39 = v3->fields.mainInfo;
  if ( !v39 )
    goto LABEL_66;
  v40 = this;
  this = (ServantStatusDialog_o *)v39->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v29, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v47, -1, v31, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                    (const MethodInfo_3051C1C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v47 )
    goto LABEL_66;
  if ( tdInfo->fields.id != v47->fields.id )
  {
LABEL_64:
    v3->fields.isNeedSort = 1;
    goto LABEL_65;
  }
  if ( !v3->fields.isNeedSort )
  {
    v41 = v3->fields.mainInfo;
    if ( v41 )
    {
      this = (ServantStatusDialog_o *)v41->fields.userSvtEntity;
      if ( this )
      {
        this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)this,
                                          v41->fields.questRestrictionInfo,
                                          0LL);
        v42 = v3->fields.mainInfo;
        if ( v42 )
        {
          v43 = (ServantOverwriteStatus_o *)this;
          this = (ServantStatusDialog_o *)entity;
          if ( entity )
          {
            this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                              (UserServantEntity_o *)entity,
                                              v42->fields.questRestrictionInfo,
                                              0LL);
            if ( v43 )
            {
              if ( !ServantOverwriteStatus__IsEqualForSort(v43, (ServantOverwriteStatus_o *)this, 0LL) )
                goto LABEL_64;
              goto LABEL_65;
            }
          }
        }
      }
    }
    goto LABEL_66;
  }
LABEL_65:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleFBXComponent_o *v7; // x0
  void *individualityCallbackFunc; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  if ( (byte_4B183BD & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B183BD = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v7 = this->fields.battleActor;
    if ( !v7 )
      sub_1BCB254(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc, 0, v5, v6);
    this->fields.resultCallbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resultCallbackFunc, 0, v9, v10);
    this->fields.callbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v11, v12);
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resultCallbackFunc, 0, v5, v6);
    this->fields.callbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v16, v17);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.formationCallbackFunc, 0, v5, v6);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
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

  if ( (byte_4B183BB & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BCAFF8(&OtherUserNewManager_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_1BCAFF8(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_1BCAFF8(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_1BCAFF8(&UserServantCollectionManager_TypeInfo, v14);
    sub_1BCAFF8(&UserServantNewManager_TypeInfo, v15);
    byte_4B183BB = 1;
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
        v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v37,
                                  (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
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
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v93, 0LL);
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
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v97, 0LL);
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
    v49 = BasicHelper__DecryptValue_43270112(v50[8], 0LL);
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
    v53 = BasicHelper__DecryptValue_43270112(v54[9], 0LL);
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
    v57 = BasicHelper__DecryptValue_43270112(v58[10], 0LL);
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
    portraitLimitCount = BasicHelper__DecryptValue_43270112(v62[11], 0LL);
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
  v71 = *(_QWORD *)(IsModifyLock + 128);
  *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v96.fields.fakeValue = v70;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v49;
  v81 = v53;
  v95 = v96;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v95, 0LL);
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
    sub_1BCB254(IsModifyLock, v17);
  }
  if ( v67 | v65 & 1 | v90 & 1 | v92 & 1 | v59 & 1 | v91 & 1 | v89 & 1 | v66 & 1 | v68 & 1 | v73 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v75 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v75,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v75,
                              (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
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
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v94, 0LL);
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

  if ( (byte_4B183A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_9443/*"NoblePhantasm_"*/, v10);
    sub_1BCAFF8(&StringLiteral_4388/*"ChrVoice_"*/, v11);
    sub_1BCAFF8(&StringLiteral_12647/*"Servants_"*/, v12);
    byte_4B183A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v14);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v19 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v17 = (System_String_o **)off_4558280[assetType];
    v18 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_62450424(*v17, v18, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *pushButton; // x20
  __int64 v7; // x1
  ServantStatusDialog_c *v8; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v10; // x8
  ServantStatusDialog_c *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *servantStatusBattleConfirmDialog; // x20
  System_Action_o *v15; // x20
  ServantStatusDialog_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *Asset; // x0
  unsigned __int128 v19; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B18384 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v5);
    byte_4B18384 = 1;
  }
  v19 = 0uLL;
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
                                               (UnityEngine_Color_o *)&v19,
                                               0LL);
    v10 = this->fields.pushButton;
    if ( !v10 )
      goto LABEL_27;
    v10->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v19;
  }
  this->fields.isInitTab = 0;
  *(_WORD *)&this->fields.isModify = 256;
  *(_DWORD *)&this->fields.isExit = 0;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4B183F1 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v7);
    byte_4B183F1 = 1;
  }
  v11 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v11 = ServantStatusDialog_TypeInfo;
  }
  v11->static_fields->_IsViewCharaGraph_k__BackingField = 0;
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  if ( this->fields.kind == 33 )
  {
    this->fields.needAutoScroll = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v12);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0LL);
  servantStatusBattleConfirmDialog = (UnityEngine_Object_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantStatusBattleConfirmDialog, 0LL, 0LL) )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( baseObject )
    {
      ServantStatusBattleConfirmDialog__Init((ServantStatusBattleConfirmDialog_o *)baseObject, 0LL);
      goto LABEL_26;
    }
LABEL_27:
    sub_1BCB254(baseObject, v7);
  }
LABEL_26:
  v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
  Asset = ServantStatusDialog__LoadAsset(v16, v15, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  CGThumbnailListItem_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B18395 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18395 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BCB254(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0LL, 0LL) )
  {
    p_battleChr = (CGThumbnailListItem_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1BCAF9C(p_battleChr, 0, v9, v10);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v18; // x21

  if ( (byte_4B183AF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectCharaGraph__, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog__InitList_b__184_0__, v7);
    byte_4B183AF = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v10 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v11);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&charaGraphListViewManager->fields.callbackFunc, (int32_t)v10, v14, v15);
  ServantStatusCharaGraphListViewManager__SetMode_33934572(charaGraphListViewManager, 2, v16);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__184_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(v12, v13);
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

  if ( (byte_4B183DD & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&ServantCostumeEntity_TypeInfo, v7);
    sub_1BCAFF8(&ServantLimitAddEntity_TypeInfo, v8);
    byte_4B183DD = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1BCB254(RandomGroupIndex, v11);
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
          sub_1BCB25C(RandomGroupIndex, v11, v12);
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
        v25 = (ServantLimitAddEntity_o *)sub_1BCB244(ServantLimitAddEntity_TypeInfo);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
        v20 = (ServantCostumeEntity_o *)sub_1BCB244(ServantCostumeEntity_TypeInfo);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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


System_Collections_IEnumerator_o *__fastcall ServantStatusDialog__LoadAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B18385 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog__LoadAsset_d__139_TypeInfo, callback);
    byte_4B18385 = 1;
  }
  v4 = sub_1BCB244(ServantStatusDialog__LoadAsset_d__139_TypeInfo);
  ServantStatusDialog__LoadAsset_d__139___ctor((ServantStatusDialog__LoadAsset_d__139_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  *(_QWORD *)(v4 + 40) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 40), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  Il2CppObject *isExistAssetStorage; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ServantStatusDialog_c *v18; // x0
  System_String_o *BattleCharaChangeConfirmLoadAssetPath; // x20
  ServantStatusDialog_c *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_4B18386 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, callback);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__, v8);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo, v9);
    byte_4B18386 = 1;
  }
  v10 = sub_1BCB244(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callback;
  v15 = v10 + 24;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)callback, v16, v17);
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    goto LABEL_21;
  v18 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v18 = ServantStatusDialog_TypeInfo;
  }
  BattleCharaChangeConfirmLoadAssetPath = v18->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (Il2CppObject *)AssetManager__isExistAssetStorage(BattleCharaChangeConfirmLoadAssetPath, 0LL);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
      return;
    }
LABEL_18:
    sub_1BCB254(isExistAssetStorage, v12);
  }
  isExistAssetStorage = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !isExistAssetStorage )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)isExistAssetStorage, 1, 0LL);
  v20 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v20 = ServantStatusDialog_TypeInfo;
  }
  v21 = v20->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
}


void __fastcall ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B183C1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AssetData__TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog__LoadTransformedResource_b__206_0__, v3);
    byte_4B183C1 = 1;
  }
  v4 = (System_Action_object__o *)sub_1BCB244(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__206_0__,
    0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B183B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickCancel__, method);
    byte_4B183B9 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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
  if ( (byte_4B183C0 & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnClickChangeTransform__, method);
    byte_4B183C0 = 1;
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
        v4 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1BCB254(this, method);
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
  if ( (byte_4B183DE & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickChangeVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183DE = 1;
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
          v10 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickChangeVoice__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B183E1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickChoice__, method);
    byte_4B183E1 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCB254(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
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
  if ( (byte_4B183CF & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickCommandCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183CF = 1;
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
          sub_1BCB25C(this, *(_QWORD *)&costumeIndex, method);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4B183CE & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickCommandCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183CE = 1;
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
          v10 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4B183D6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickCommandCodeShow__, v9);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectEquipStatus__, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_4B183D6 = 1;
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
        v18 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v21,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30779484((CommonUI_o *)Instance, 20, v17, v21, v22, 0LL);
        return;
      }
LABEL_27:
      sub_1BCB254(this, *(_QWORD *)&index);
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
        v26 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0LL);
      kind = v4->fields.kind;
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v29 )
          goto LABEL_27;
        v32 = 22;
      }
      else
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
      CommonUI__OpenServantEquipStatusDialog_30780236(v38, v32, v39, v37, v30, v31, 0LL);
      return;
    }
  }
LABEL_17:
  v33 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v36 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4B183D2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickFaceCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183D2 = 1;
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
          sub_1BCB25C(this, *(_QWORD *)&costumeIndex, method);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4B183D1 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickFaceCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183D1 = 1;
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
          v10 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&dispLv);
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
  Il2CppObject *v36; // x24
  struct ServantStatusListViewItem_o *v37; // x8
  ServantStatusDialog_o *v38; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v40; // x20
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q0
  const MethodInfo *v43; // x1
  System_String_o *v44; // x21
  __int64 v45; // x22
  int32_t m_CancellationTokenSource; // w25
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  ServantStatusDialog_o *v49; // x25
  const MethodInfo *v50; // x3
  ServantStatusDialog_o *v51; // x25
  void *v52; // x24
  Il2CppClass *v53; // x25
  int32_t v54; // w0
  Il2CppClass *v55; // x8
  int32_t v56; // w23
  const MethodInfo *v57; // x3
  ServantStatusDialog_o *v58; // x23
  int32_t Rarity; // w0
  const MethodInfo *v60; // x3
  ServantStatusDialog_o *v61; // x23
  struct ServantStatusListViewItem_o *v62; // x8
  const MethodInfo *v63; // x3
  ServantStatusDialog_o *v64; // x23
  struct ServantStatusListViewItem_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  int32_t v67; // w23
  int32_t v68; // w0
  const MethodInfo *v69; // x3
  ServantStatusDialog_o *v70; // x20
  System_String_o *v71; // x20
  System_String_o *v72; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  CommonConfirmDialog_ClickDelegate_o *v77; // x25
  __int64 v78; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  v2 = this;
  if ( (byte_4B183E2 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&object___TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&Rarity_TypeInfo, v14);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickFavorite__, v15);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&StringLiteral_11833/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_1BCAFF8(&StringLiteral_11831/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_1BCAFF8(&StringLiteral_11830/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_1BCAFF8(&StringLiteral_11834/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_11832/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_4B183E2 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_83;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v81.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v80 = v81;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v80, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickFavorite__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
      return;
    }
    v30 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickFavorite__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v40 = v2->fields.mainInfo;
      if ( v40 )
      {
        v41 = v40->fields.userSvtEntity;
        if ( v41 )
        {
          v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
          *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v81.fields.fakeValue = v42;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v79 = v81;
          v40->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                            &v79,
                                            0LL);
          ServantStatusDialog__SetMark(v2, v43);
          return;
        }
      }
      goto LABEL_83;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_83;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_83;
    v33 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v82.fields.currentCryptoKey = klass;
    *(_QWORD *)&v82.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v82, 0LL);
    if ( !v33 )
      goto LABEL_83;
    v36 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
            (int32_t)this,
            (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v37 = v2->fields.mainInfo;
    if ( !v37 )
      goto LABEL_83;
    v38 = this;
    if ( v37->fields.isConvertOverwriteImage )
      questRestrictionInfo = v37->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0LL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v45 = sub_1BCB0A0(object___TypeInfo, 6LL);
    this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)Entity,
                                      questRestrictionInfo,
                                      0LL);
    if ( !this )
      goto LABEL_83;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0LL);
    if ( !v45 )
      goto LABEL_83;
    v49 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v45 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v45 + 32) = v49;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v49, v47, v48);
      if ( !v36 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v36, 0LL);
      v51 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v45 + 24) <= 1u )
          goto LABEL_84;
        *(_QWORD *)(v45 + 40) = v51;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 40), (int32_t)v51, v47, v50);
        v53 = v36[1].klass;
        v52 = v36[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v83.fields.currentCryptoKey = v53;
        *(_QWORD *)&v83.fields.fakeValue = v52;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v83, 0LL);
        v55 = Entity[6].klass;
        *(_QWORD *)&v84.fields.fakeValue = Entity[6].monitor;
        v56 = v54;
        *(_QWORD *)&v84.fields.currentCryptoKey = v55;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v84, 0LL);
        if ( !v38 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v38,
                                          v56,
                                          (int32_t)this,
                                          1,
                                          0LL);
        v58 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v45 + 24) <= 2u )
            goto LABEL_84;
          *(_QWORD *)(v45 + 48) = v58;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 48), (int32_t)v58, v47, v57);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_83;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
          v61 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v45 + 24) <= 3u )
              goto LABEL_84;
            *(_QWORD *)(v45 + 56) = v61;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 56), (int32_t)v61, v47, v60);
            v62 = v2->fields.mainInfo;
            if ( !v62 )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)v62->fields.svtEntity;
            if ( !this )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v64 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v45 + 24) <= 4u )
                goto LABEL_84;
              *(_QWORD *)(v45 + 64) = v64;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 64), (int32_t)v64, v47, v63);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_83;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v65 = v2->fields.mainInfo;
              if ( !v65 )
                goto LABEL_83;
              v66 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v65->fields.userSvtEntity;
              if ( !v66 )
                goto LABEL_83;
              v67 = (int)this;
              v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v66[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v38,
                                                v67,
                                                v68,
                                                1,
                                                0LL);
              v70 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v45 + 24) > 5u )
                {
                  *(_QWORD *)(v45 + 72) = v70;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 72), (int32_t)v70, v47, v69);
                  this = (ServantStatusDialog_o *)System_String__Format_62491852(v44, (System_Object_array *)v45, 0LL);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_83;
                  v71 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_83;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v71 = System_String__Concat_62450424(v71, v72, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11830/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v77,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30763412(
                      (CommonUI_o *)Instance,
                      v74,
                      v71,
                      v75,
                      v76,
                      v77,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_83:
                  sub_1BCB254(this, method);
                }
LABEL_84:
                sub_1BCB25C(this, method, v47);
              }
            }
          }
        }
      }
    }
    v78 = sub_1BCB278();
    sub_1BCB120(v78, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B183E0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickLock__, method);
    byte_4B183E0 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCB254(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
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
  if ( (byte_4B183D5 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183D5 = 1;
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
          sub_1BCB25C(this, *(_QWORD *)&costumeIndex, method);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4B183D4 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4B183D4 = 1;
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
          v10 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BCB254(this, *(_QWORD *)&dispLv);
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
  Il2CppObject *v37; // x24
  struct ServantStatusListViewItem_o *v38; // x8
  ServantStatusDialog_o *v39; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v41; // x20
  struct UserServantEntity_o *v42; // x8
  __int128 v43; // q0
  System_String_o *v44; // x21
  __int64 v45; // x22
  int32_t m_CancellationTokenSource; // w25
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  ServantStatusDialog_o *v49; // x25
  const MethodInfo *v50; // x3
  ServantStatusDialog_o *v51; // x25
  void *v52; // x24
  Il2CppClass *v53; // x25
  int32_t v54; // w0
  Il2CppClass *v55; // x8
  int32_t v56; // w23
  const MethodInfo *v57; // x3
  ServantStatusDialog_o *v58; // x23
  int32_t Rarity; // w0
  const MethodInfo *v60; // x3
  ServantStatusDialog_o *v61; // x23
  struct ServantStatusListViewItem_o *v62; // x8
  const MethodInfo *v63; // x3
  ServantStatusDialog_o *v64; // x23
  struct ServantStatusListViewItem_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  int32_t v67; // w23
  int32_t v68; // w0
  const MethodInfo *v69; // x3
  ServantStatusDialog_o *v70; // x20
  System_String_o *v71; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  System_String_o *v75; // x24
  CommonConfirmDialog_ClickDelegate_o *v76; // x25
  __int64 v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  v2 = this;
  if ( (byte_4B183E4 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&object___TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&Rarity_TypeInfo, v14);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickPush__, v15);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnConfirmSelectPush__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_1BCAFF8(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_1BCAFF8(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_4B183E4 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_78;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v24 = v2->fields.mainInfo;
    if ( !v24 )
      goto LABEL_78;
    userSvtEntity = v24->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_78;
    v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v24->fields.pushUserSvtId;
    *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v80.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v79 = v80;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v79, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickPush__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0LL);
      v30 = v2->fields.mainInfo;
      if ( v30 )
      {
        v30->fields.pushUserSvtId = 0LL;
LABEL_38:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_78;
    }
    v31 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickPush__);
    v32 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v41 = v2->fields.mainInfo;
      if ( v41 )
      {
        v42 = v41->fields.userSvtEntity;
        if ( v42 )
        {
          v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v80.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v78 = v80;
          v41->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v78, 0LL);
          goto LABEL_38;
        }
      }
LABEL_78:
      sub_1BCB254(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_78;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_78;
    v34 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v81.fields.currentCryptoKey = klass;
    *(_QWORD *)&v81.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v81, 0LL);
    if ( !v34 )
      goto LABEL_78;
    v37 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
            (int32_t)this,
            (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v38 = v2->fields.mainInfo;
    if ( !v38 )
      goto LABEL_78;
    v39 = this;
    if ( v38->fields.isConvertOverwriteImage )
      questRestrictionInfo = v38->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0LL;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v45 = sub_1BCB0A0(object___TypeInfo, 6LL);
    this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)Entity,
                                      questRestrictionInfo,
                                      0LL);
    if ( !this )
      goto LABEL_78;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0LL);
    if ( !v45 )
      goto LABEL_78;
    v49 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v45 + 24) )
        goto LABEL_79;
      *(_QWORD *)(v45 + 32) = v49;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v49, v47, v48);
      if ( !v37 )
        goto LABEL_78;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v37, 0LL);
      v51 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v45 + 24) <= 1u )
          goto LABEL_79;
        *(_QWORD *)(v45 + 40) = v51;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 40), (int32_t)v51, v47, v50);
        v53 = v37[1].klass;
        v52 = v37[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v82.fields.currentCryptoKey = v53;
        *(_QWORD *)&v82.fields.fakeValue = v52;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v82, 0LL);
        v55 = Entity[6].klass;
        *(_QWORD *)&v83.fields.fakeValue = Entity[6].monitor;
        v56 = v54;
        *(_QWORD *)&v83.fields.currentCryptoKey = v55;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v83, 0LL);
        if ( !v39 )
          goto LABEL_78;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v39,
                                          v56,
                                          (int32_t)this,
                                          1,
                                          0LL);
        v58 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v45 + 24) <= 2u )
            goto LABEL_79;
          *(_QWORD *)(v45 + 48) = v58;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 48), (int32_t)v58, v47, v57);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_78;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
          v61 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v45 + 24) <= 3u )
              goto LABEL_79;
            *(_QWORD *)(v45 + 56) = v61;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 56), (int32_t)v61, v47, v60);
            v62 = v2->fields.mainInfo;
            if ( !v62 )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)v62->fields.svtEntity;
            if ( !this )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v64 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v45 + 24) <= 4u )
                goto LABEL_79;
              *(_QWORD *)(v45 + 64) = v64;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 64), (int32_t)v64, v47, v63);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_78;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0LL);
              v65 = v2->fields.mainInfo;
              if ( !v65 )
                goto LABEL_78;
              v66 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v65->fields.userSvtEntity;
              if ( !v66 )
                goto LABEL_78;
              v67 = (int)this;
              v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v66[6], 0LL);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v39,
                                                v67,
                                                v68,
                                                1,
                                                0LL);
              v70 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v45 + 24) > 5u )
                {
                  *(_QWORD *)(v45 + 72) = v70;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 72), (int32_t)v70, v47, v69);
                  v71 = System_String__Format_62491852(v44, (System_Object_array *)v45, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v76,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30763852(
                      (CommonUI_o *)Instance,
                      v73,
                      v71,
                      v74,
                      v75,
                      v76,
                      LODWORD(this->fields.voiceButton[4].fields.specifyHoverColor.fields.r),
                      LODWORD(this->fields.voiceButton[4].fields.specifyHoverColor.fields.a),
                      15.0,
                      700,
                      0,
                      480,
                      -162.5,
                      0,
                      0,
                      240,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_78;
                }
LABEL_79:
                sub_1BCB25C(this, method, v47);
              }
            }
          }
        }
      }
    }
    v77 = sub_1BCB278();
    sub_1BCB120(v77, 0LL);
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

  if ( (byte_4B183DB & 1) == 0 )
  {
    sub_1BCAFF8(&OptionManager_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v5);
    byte_4B183DB = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v6 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
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

  if ( (byte_4B183D9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__, *(_QWORD *)&index);
    byte_4B183D9 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  void *Instance; // x0
  __int64 v30; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v32; // x22
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  int32_t QuestType; // w23
  QuestEntity_o *v36; // x24
  System_String_o *v37; // x21
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *BattleName; // x0
  Il2CppObject *v40; // x20
  System_String_o *v41; // x0
  __int64 *v42; // x8
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v46; // x21
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  System_String_o *v50; // x22
  System_String_o *v51; // x0
  System_String_o *v52; // x21
  System_String_o *v53; // x23
  System_String_o *v54; // x24
  CommonConfirmDialog_ClickDelegate_o *v55; // x25
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B183D7 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestExtensionMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickServantQuest__, v12);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnConfirmServantQuest__, v13);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v17);
    sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v18);
    sub_1BCAFF8(&StringLiteral_11877/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v19);
    sub_1BCAFF8(&StringLiteral_11879/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v20);
    sub_1BCAFF8(&StringLiteral_11880/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v21);
    sub_1BCAFF8(&StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v22);
    sub_1BCAFF8(&StringLiteral_11882/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, v23);
    sub_1BCAFF8(&StringLiteral_11876/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v24);
    sub_1BCAFF8(&StringLiteral_11881/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/, v25);
    sub_1BCAFF8(&StringLiteral_11878/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v26);
    sub_1BCAFF8(&StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v27);
    sub_1BCAFF8(&StringLiteral_11875/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v28);
    byte_4B183D7 = 1;
  }
  entity = 0LL;
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_25;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_25:
    v43 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v43 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickServantQuest__);
    v44 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v43, v43[4]);
    OverwriteAssetSoundName__PlaySystemSe(v44, 2, 0, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v46 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v46,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v46, 0LL);
      return;
    }
    goto LABEL_44;
  }
  v32 = QuestInfo;
  v33 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickServantQuest__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v32, 0LL);
  Instance = MapControl_QuestInfo__GetMine(v32, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v36 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  v37 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24882/*"{0}"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (void *)QuestEntity__getServantId(v36, 0LL);
    if ( !MasterData_object )
      goto LABEL_44;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
    v37 = System_String__Format(v37, BattleName, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !Instance )
LABEL_44:
    sub_1BCB254(Instance, v30);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         questId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_44;
    if ( QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0LL) )
    {
      v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, 0LL);
      v42 = &StringLiteral_11881/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/;
      goto LABEL_42;
    }
  }
  if ( QuestType == 3 )
  {
    warId = v32->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_39:
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v42 = &StringLiteral_11877/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_42;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_39;
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11876/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v42 = &StringLiteral_11875/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
    goto LABEL_42;
  }
  v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
  v42 = &StringLiteral_11879/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_42:
  v50 = v41;
  v51 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
  v52 = System_String__Format(v51, (Il2CppObject *)v37, 0LL);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11874/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v55,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v40 )
    goto LABEL_44;
  CommonUI__OpenConfirmDialog_30763412((CommonUI_o *)v40, v50, v52, v53, v54, v55, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B183C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickTabBattle__, method);
    byte_4B183C6 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B183C5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickTabProfile__, method);
    byte_4B183C5 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B183C4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickTabStatus__, method);
    byte_4B183C4 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B183C7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickTabVoice__, method);
    byte_4B183C7 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v23; // x21
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  long double v31; // q0
  __int64 v32; // x8
  __int64 v33; // x0
  CommonUI_o *v34; // x22
  System_String_o *Empty; // x21
  System_String_o *v36; // x23
  System_String_o *v37; // x24
  CommonConfirmDialog_ClickDelegate_o *v38; // x25

  if ( (byte_4B183D8 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnClickTdSpeed__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BCAFF8(&ServantStatusListViewItemDrawButton_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_1BCAFF8(&string_TypeInfo, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__0__, v12);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass229_0_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_11884/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_1BCAFF8(&StringLiteral_11885/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_1BCAFF8(&StringLiteral_11886/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_4B183D8 = 1;
  }
  v17 = sub_1BCB244(ServantStatusDialog___c__DisplayClass229_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass229_0___ctor((ServantStatusDialog___c__DisplayClass229_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_24;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v23 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
LABEL_24:
      sub_1BCB254(mainInfo, v19);
    }
    v24 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnClickTdSpeed__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v28 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v17 + 24), 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11886/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v30 = System_String__Format_62491716(v29, TDSpeedLocalization, v28, 0LL);
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1C1B45C(v31);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C1B45C(v31);
    v34 = **(CommonUI_o ***)(v33 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11885/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11884/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v38,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v34 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v34, Empty, v30, v36, v37, v38, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0LL);
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
  if ( (byte_4B183E3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B183E3 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BCB254(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v13, 0LL);
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
  if ( (byte_4B183E5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B183E5 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BCB254(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v13, 0LL);
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

  if ( (byte_4B183DF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BCAFF8(&Method_ServantStatusDialog__OnConfirmServantQuest_b__236_0__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
    byte_4B183DF = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v19, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  v13 = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v13, (int32_t)v16, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B183F2 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v22);
    byte_4B183F2 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__236_0__, 0LL);
  if ( !v24 )
LABEL_25:
    sub_1BCB254(v13, v14);
  CommonUI__maskFadeout((CommonUI_o *)v24, 1, DEFAULT_FADE_TIME, v27, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4B183BA & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B183BA = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BCB254(0LL, v4);
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

  if ( (byte_4B183EA & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3034/*"Base/TitlePrefab/BackObj/BtnBg"*/, v3);
    byte_4B183EA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3034/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
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
    sub_1BCB254(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_4B183C8 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    byte_4B183C8 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v7 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !battleTabListViewManager
      || (ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v7, 0LL),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1BCB254(v8, v9);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v11 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnSelectBattle__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v13);
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

  if ( (byte_4B183B5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B183B5 = 1;
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
    ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BCB254(gameObject, v8);
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

  if ( (byte_4B183B3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B183B3 = 1;
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
    ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BCB254(gameObject, v8);
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

  if ( (byte_4B183B7 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_4B183B7 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1BCB254(v7, v8);
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
  ServantStatusDialog_o *v35; // x20
  ServantStatusDialog_EndDelegate_o *v36; // x22
  System_Action_o *v37; // x23
  CommonUI_o *v38; // x0
  int64_t v39; // x2
  ServantStatusDialog_EndDelegate_o *v40; // x4
  System_Action_o *v41; // x5
  bool v42; // w6
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v45; // q1
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v49; // x8
  struct ServantLeaderInfo_o *v50; // x8
  EquipTargetInfo_o *v51; // x21
  ServantStatusDialog_o *v52; // x20
  ServantStatusDialog_EndDelegate_o *v53; // x22
  System_Action_o *v54; // x23
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 *v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  struct UICommonButton_o *v62; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v64; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v66; // x21
  struct ServantStatusListViewItem_o *v67; // x8
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  bool v70; // w21
  ServantStatusDialog_o *v71; // x22
  int64_t EquipIdByIndex; // x20
  ServantStatusDialog_EndDelegate_o *v73; // x23
  System_Action_o *v74; // x24
  ServantLeaderInfo_o *voiceTabBase; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int128 v77; // q1
  EquipTargetInfo_o *v78; // x20
  int64_t v79; // x0
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  int32_t v82; // w24
  Il2CppObject *v83; // x21
  ServantStatusListViewManager_o *v84; // x20
  ServantStatusListViewManager_CallbackFunc_o *v85; // x21
  struct ServantStatusListViewItem_o *v86; // x8
  struct ServantLeaderInfo_o *v87; // x8
  CommonUI_o *v88; // x0
  EquipTargetInfo_o *v89; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-60h]

  v6 = this;
  if ( (byte_4B183B2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v7);
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog_Exit__, v12);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectEquipStatus__, v13);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1BCAFF8(&StringLiteral_12624/*"ServantLvExceed"*/, v17);
    sub_1BCAFF8(&StringLiteral_12628/*"ServantSkillCombine"*/, v18);
    sub_1BCAFF8(&StringLiteral_12625/*"ServantNpCombine"*/, v19);
    sub_1BCAFF8(&StringLiteral_4546/*"CommandCardEquip"*/, v20);
    sub_1BCAFF8(&StringLiteral_12612/*"ServantEQCombine"*/, v21);
    sub_1BCAFF8(&StringLiteral_12609/*"ServantCombine"*/, v22);
    sub_1BCAFF8(&StringLiteral_6824/*"FriendshipExceed"*/, v23);
    sub_1BCAFF8(&StringLiteral_12622/*"ServantLimitCountUp"*/, v24);
    sub_1BCAFF8(&StringLiteral_2279/*"AppendSkillCombine"*/, v25);
    sub_1BCAFF8(&StringLiteral_4547/*"CommandCardExceed"*/, v26);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_2280/*"AppendSkillExchange"*/, v27);
    byte_4B183B2 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v29 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      goto LABEL_116;
    }
    switch ( result )
    {
      case 1:
        if ( v6->fields.mainInfo )
          goto LABEL_10;
        goto LABEL_116;
      case 2:
LABEL_10:
        mainInfo = v6->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_116;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v31 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v31 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnSelectStatus__);
          v32 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v31, v31[4]);
          OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = v6->fields.mainInfo;
          if ( !v33 )
            goto LABEL_116;
          equipTargetId1 = v33->fields.equipTargetId1;
          v35 = this;
          v36 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v36,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v37 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v37, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v35 )
            goto LABEL_116;
          v38 = (CommonUI_o *)v35;
          v39 = equipTargetId1;
          v40 = v36;
          v41 = v37;
          v42 = 0;
LABEL_84:
          CommonUI__OpenServantEquipStatusDialog(v38, 11, v39, 1, v40, v41, v42, 0LL);
          return;
        }
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_101;
        equipTarget1 = servantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_101;
        v45 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
        *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        *(_OWORD *)&v92.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v91 = v92;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v91, 0LL) < 1 )
          goto LABEL_101;
        v46 = Method_ServantStatusDialog_OnSelectStatus__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnSelectStatus__);
        v47 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v46, v46[4]);
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0LL);
        kind = v6->fields.kind;
        if ( kind == 4 )
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v49 = v6->fields.mainInfo;
          if ( !v49 )
            goto LABEL_116;
          v50 = v49->fields.servantLeaderInfo;
          if ( !v50 )
            goto LABEL_116;
          v51 = v50->fields.equipTarget1;
          v52 = this;
          v53 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v53,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v54 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v54, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v52 )
            goto LABEL_116;
          v55 = 13;
        }
        else
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v86 = v6->fields.mainInfo;
          if ( !v86 )
            goto LABEL_116;
          v87 = v86->fields.servantLeaderInfo;
          if ( !v87 )
            goto LABEL_116;
          v51 = v87->fields.equipTarget1;
          v52 = this;
          v53 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v53,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v54 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v54, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v52 )
            goto LABEL_116;
          if ( kind == 5 )
            v55 = 14;
          else
            v55 = 16;
        }
        v88 = (CommonUI_o *)v52;
        v89 = v51;
        goto LABEL_115;
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_12609/*"ServantCombine"*/;
        goto LABEL_66;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v61 = StringLiteral_12612/*"ServantEQCombine"*/;
        this->fields.statusButton = (struct UICommonButton_o *)StringLiteral_12612/*"ServantEQCombine"*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.statusButton, v61, v59, v60);
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        LODWORD(this->fields.profileButton) = id & ~(id >> 31);
        goto LABEL_67;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_12628/*"ServantSkillCombine"*/;
        goto LABEL_66;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_12622/*"ServantLimitCountUp"*/;
        goto LABEL_66;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_6824/*"FriendshipExceed"*/;
        goto LABEL_66;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_4546/*"CommandCardEquip"*/;
        goto LABEL_66;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_4547/*"CommandCardExceed"*/;
        goto LABEL_66;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_2279/*"AppendSkillCombine"*/;
        goto LABEL_66;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_2280/*"AppendSkillExchange"*/;
        goto LABEL_66;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_12625/*"ServantNpCombine"*/;
        goto LABEL_66;
      case 23:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v58 = &StringLiteral_12624/*"ServantLvExceed"*/;
LABEL_66:
        v62 = (struct UICommonButton_o *)*v58;
        this->fields.statusButton = (struct UICommonButton_o *)*v58;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.statusButton, (int32_t)v62, v56, v57);
LABEL_67:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v64 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v64 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v64->static_fields->DEFAULT_FADE_TIME;
        v66 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(v66, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_116;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v66, 0LL);
        return;
      case 24:
        v67 = v6->fields.mainInfo;
        if ( !v67 )
          goto LABEL_116;
        if ( v67->fields.isEquipChangeMode )
          goto LABEL_101;
LABEL_73:
        this = (ServantStatusDialog_o *)v6->fields.mainInfo;
        if ( !this )
          goto LABEL_116;
        if ( !this->fields.baseObject )
          goto LABEL_89;
        if ( ServantStatusListViewItem__GetEquipIdByIndex((ServantStatusListViewItem_o *)this, id, 0LL) < 1 )
        {
          this = (ServantStatusDialog_o *)v6->fields.mainInfo;
          if ( !this )
            goto LABEL_116;
LABEL_89:
          voiceTabBase = (ServantLeaderInfo_o *)this->fields.voiceTabBase;
          if ( voiceTabBase )
          {
            EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(voiceTabBase, id, 0LL);
            if ( !EquipTargetInfoByEquipIdx )
              return;
            v77 = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.fakeValue;
            v78 = EquipTargetInfoByEquipIdx;
            *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v92.fields.fakeValue = v77;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v90 = v92;
            v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v90, 0LL);
            if ( v79 < 1 )
              v78 = 0LL;
            if ( v79 < 1 )
              return;
            v80 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v80 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnSelectStatus__);
            v81 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v80, v80[4]);
            OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0, 0LL);
            v82 = v6->fields.kind;
            v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v82 == 4 )
            {
              v53 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v53,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v54 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
              System_Action___ctor(v54, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v83 )
                goto LABEL_116;
              v55 = 13;
            }
            else
            {
              v53 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v53,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v54 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
              System_Action___ctor(v54, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v83 )
                goto LABEL_116;
              if ( v82 == 5 )
                v55 = 14;
              else
                v55 = 16;
            }
            v88 = (CommonUI_o *)v83;
            v89 = v78;
LABEL_115:
            CommonUI__OpenServantEquipStatusDialog_30779252(v88, v55, v89, v53, v54, 0LL);
            return;
          }
LABEL_101:
          v84 = v6->fields.statusTabListViewManager;
          v85 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v85,
            (Il2CppObject *)v6,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( v84 )
          {
            ServantStatusListViewManager__SetMode(v84, 1, v85, 0LL);
            return;
          }
        }
        else
        {
          v68 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v68 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnSelectStatus__);
          v69 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v68, v68[4]);
          OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0LL);
          v70 = 0;
          if ( id == 1 )
          {
            this = (ServantStatusDialog_o *)v6->fields.mainInfo;
            if ( !this )
              goto LABEL_116;
            v70 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill((ServantStatusListViewItem_o *)this, 0LL);
          }
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v6->fields.mainInfo )
          {
            v71 = this;
            EquipIdByIndex = ServantStatusListViewItem__GetEquipIdByIndex(v6->fields.mainInfo, id, 0LL);
            v73 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v73,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0LL);
            v74 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(v74, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
            if ( v71 )
            {
              v42 = v70;
              v38 = (CommonUI_o *)v71;
              v39 = EquipIdByIndex;
              v40 = v73;
              v41 = v74;
              goto LABEL_84;
            }
          }
        }
LABEL_116:
        sub_1BCB254(this, *(_QWORD *)&result);
      case 25:
        goto LABEL_73;
      default:
        goto LABEL_101;
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
  int32_t v28; // w2
  ServantVoiceMaster_o *v29; // x0
  int32_t v30; // w1
  System_String_o *v31; // x3
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v33; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v35; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B183B8 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v12);
    byte_4B183B8 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !voiceTabListViewManager )
      goto LABEL_63;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        v19 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_63;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_63;
        v20 = (ServantStatusVoiceListViewItem_o *)Instance;
        v21 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
        if ( !MasterData_object )
          goto LABEL_63;
        v22 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v21,
                        (int32_t)Instance,
                        0LL);
        v23 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v20, 0LL);
        v25 = System_String__Concat_62488672(v23, (System_String_o *)StringLiteral_15973/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_55;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v20, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_53;
              if ( !v20->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL);
                  if ( v19 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_41962072(
                                      (ServantVoiceMaster_o *)v19,
                                      v21,
                                      v22,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_55;
                  }
                  goto LABEL_63;
                }
                if ( !v19 )
                  goto LABEL_63;
                if ( !v20->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v19, v21, v22, 0LL);
                  goto LABEL_55;
                }
LABEL_52:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v19,
                                  v21,
                                  v22,
                                  v25,
                                  0LL);
                goto LABEL_55;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  if ( v20->fields.genderFlag || v20->fields.voiceLabelSpecification )
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
                    if ( v19 )
                    {
                      v28 = (int)Instance;
                      v29 = (ServantVoiceMaster_o *)v19;
                      v30 = v21;
                      v31 = v25;
LABEL_28:
                      HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v29, v30, v28, v31, 0LL);
LABEL_55:
                      ServantStatusDialog__PlayChrVoice_33994832(this, v21, v22, HomeVoiceList, result, v27);
                      return;
                    }
                  }
                  else
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
                    if ( v19 )
                    {
                      v28 = (int)Instance;
                      v29 = (ServantVoiceMaster_o *)v19;
                      v30 = v21;
                      v31 = 0LL;
                      goto LABEL_28;
                    }
                  }
LABEL_63:
                  sub_1BCB254(Instance, v16);
                }
LABEL_53:
                if ( v19 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                    (ServantVoiceMaster_o *)v19,
                                    v21,
                                    v22,
                                    v25,
                                    0LL);
                  goto LABEL_55;
                }
                goto LABEL_63;
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
                  goto LABEL_55;
                }
                goto LABEL_63;
              }
            }
            if ( !v19 )
              goto LABEL_63;
            goto LABEL_52;
          case 3:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_55;
          case 4:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v19, v21, v22, 0LL);
            goto LABEL_55;
          case 5:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_55;
          case 6:
            if ( !v19 )
              goto LABEL_63;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v21, v22, BattleVoiceList, result, v33);
            return;
          case 7:
            if ( !v19 )
              goto LABEL_63;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v21, v22, NpVoiceList, result, v35);
            return;
          case 8:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                              (ServantVoiceMaster_o *)v19,
                              v21,
                              v22,
                              v25,
                              0LL);
            goto LABEL_55;
          case 9:
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v19, v21, v22, v25, 0LL);
            goto LABEL_55;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
            if ( !v19 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEntity_41960076(
                              (ServantVoiceMaster_o *)v19,
                              (int32_t)Instance,
                              v21,
                              v22,
                              v25,
                              0LL);
            goto LABEL_55;
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

  if ( (byte_4B183BE & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v9);
    sub_1BCAFF8(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v12);
    sub_1BCAFF8(&StringLiteral_11851/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v13);
    sub_1BCAFF8(&StringLiteral_11852/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v14);
    sub_1BCAFF8(&StringLiteral_11849/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v15);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v16);
    sub_1BCAFF8(&StringLiteral_11848/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v17);
    byte_4B183BE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11849/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v49, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v30 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0LL);
      v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1C1B45C(v32);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C1B45C(v32);
      v35 = **(CommonUI_o ***)(v34 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__;
LABEL_44:
      v48 = v37;
      CommonConfirmDialog_ClickDelegate___ctor(v37, (Il2CppObject *)this, *v38, 0LL);
      if ( !v35 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30763852(
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
          v43 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v44 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0LL);
        v46 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
          v46 = sub_1C1B45C(v45);
        v47 = *(_QWORD *)(*(_QWORD *)(v46 + 192) + 16LL);
        if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
          v47 = sub_1C1B45C(v45);
        v35 = **(CommonUI_o ***)(v47 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__;
        goto LABEL_44;
      }
      v42 = *(_QWORD *)&v40->fields.limitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v40->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v42;
      *(_QWORD *)&v50.fields.fakeValue = v41;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v50, 0LL) )
      {
        v39 = this->fields.mainInfo;
        if ( !v39 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v20 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BCB010(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v23 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      sub_1BCB254(v24, v25);
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
  const MethodInfo *v16; // x3
  ServantStatusListViewItem_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B1836A & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1836A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
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

  if ( (byte_4B1838D & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, callback);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_13471/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v7);
    byte_4B1838D = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39617644(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13471/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1BCB254(v9, v10);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v9, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33960108(
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
  const MethodInfo *v16; // x3
  ServantStatusListViewItem_o *v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B1836B & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1836B = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33960316(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4B1836C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1836C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34944028(v15, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33960512(
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

  if ( (byte_4B1836D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1836D = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCB254(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)*v17);
  ServantStatusDialog__Open_33960792(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33960792(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w21
  ServantStatusListViewItem_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4B18371 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18371 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(v18, userSvtEntity, 0LL, 0LL, 0, v17, v17, 0, 0, 0, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33961052(
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

  if ( (byte_4B1836E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1836E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCB254(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)*v17);
  ServantStatusDialog__Open_33961332(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33961332(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w22
  ServantStatusListViewItem_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4B18372 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18372 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(v18, userSvtEntity, 0LL, 0LL, callback != 0LL, v17, v17, 0, 0, 0, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33961596(
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

  if ( (byte_4B1836F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1836F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCB254(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)*v17);
  ServantStatusDialog__Open_33961880(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33961880(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4B18373 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18373 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(v20, userSvtEntity, 0LL, 0LL, 0, v19, v19, canMoveCombine, 0, 0, 0, 0LL);
  this->fields.mainInfo = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33962152(
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

  if ( (byte_4B18370 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B18370 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCB254(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)*v17);
  ServantStatusDialog__Open_33962436(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33962436(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w23
  ServantStatusListViewItem_o *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4B18374 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18374 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(
    v20,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v19,
    v19,
    canMoveCombine,
    0,
    0,
    0,
    0LL);
  this->fields.mainInfo = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33962808(
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

  if ( (byte_4B18375 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B18375 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v15);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_33963012(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33963012(
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
  const MethodInfo *v16; // x3
  unsigned int v17; // w8
  bool v18; // cc
  unsigned __int64 v19; // x8
  char v20; // w9
  char v21; // w23
  ServantStatusListViewItem_o *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1

  if ( (byte_4B18376 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18376 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(
    v22,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v21,
    v21,
    0,
    0,
    0,
    0,
    0LL);
  this->fields.mainInfo = v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33963288(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        bool isGrand,
        bool isForceNotGrand,
        bool isChangeFriendShipSkill,
        const MethodInfo *method)
{
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  unsigned int v21; // w8
  bool v22; // cc
  unsigned __int64 v23; // x8
  char v24; // w9
  char v25; // w24
  ServantStatusListViewItem_o *v26; // x25
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1

  if ( (byte_4B18377 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18377 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v19, v20);
  v21 = this->fields.kind - 2;
  v22 = v21 > 0x23;
  v23 = 0x677FFFFFEuLL >> v21;
  v24 = v22;
  v25 = v24 | v23 & 1;
  v26 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v25,
    v25,
    canMoveCombine,
    isGrand,
    isForceNotGrand,
    isChangeFriendShipSkill,
    0LL);
  this->fields.mainInfo = v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33963600(
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
  const MethodInfo *v18; // x3
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w25
  ServantStatusListViewItem_o *v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1

  if ( (byte_4B18378 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18378 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34946064(
    v24,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v23,
    v23,
    canMoveCombine,
    0,
    0,
    0,
    0LL);
  this->fields.mainInfo = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33963892(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v20; // x7

  if ( (byte_4B18379 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B18379 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v18);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_33964112(
    this,
    kind,
    (UserServantEntity_o *)Entity,
    isUse,
    callback,
    openCallback,
    isSkillChange,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33964112(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ServantStatusListViewItem_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B1837A & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34949224(v17, userSvtEntity, isUse, isSkillChange, 0LL);
  this->fields.mainInfo = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33964312(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w21
  ServantStatusListViewItem_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4B1837B & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34951480(v18, userSvtCollectionEntity, 0, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33964536(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4B1837C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    *(const MethodInfo **)&imageLimitCount);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34953616(v20, userSvtCollectionEntity, imageLimitCount, 0, v19, 0LL);
  this->fields.mainInfo = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33964776(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w22
  ServantStatusListViewItem_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4B1837D & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837D = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34951480(v18, userSvtCollectionEntity, callback != 0LL, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965004(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusListViewItem_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B1837E & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34955440(v13, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965188(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool v13; // zf
  bool v14; // w21
  bool v15; // w22
  ServantStatusListViewItem_o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  if ( (byte_4B1837F & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B1837F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = kind == 19;
  v14 = ((unsigned int)(kind - 13) > 6) | (0x34u >> (kind - 13)) & 1;
  v15 = v13;
  v16 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34957564(v16, equipTargetInfo, v15, v14, 0LL);
  this->fields.mainInfo = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v16, v17, v18);
  ServantStatusDialog__Init(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965408(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1

  if ( (byte_4B18380 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18380 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    (const MethodInfo *)isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34958800(v15, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965600(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B18381 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18381 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34959580(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965776(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B18382 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18382 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34959580(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_33965952(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B18383 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4B18383 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BCB244(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34961092(v13, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
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
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  float32x2_t v41; // d8
  float v42; // s9
  float v43; // s2 OVERLAPPED
  unsigned __int64 v44; // d0 OVERLAPPED
  int v45; // s1
  UnityEngine_Transform_o *v46; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v50; // x26
  UnityEngine_Transform_o *v51; // x27
  float Item; // s8
  float v53; // s9
  float v54; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x23
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v62; // x21
  System_String_o *v63; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1839C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v16);
    sub_1BCAFF8(&NGUITools_TypeInfo, v17);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v18);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BCAFF8(&StringLiteral_3085/*"Battle2D"*/, v22);
    sub_1BCAFF8(&StringLiteral_16482/*"_y0"*/, v23);
    byte_4B1839C = 1;
  }
  v63 = 0LL;
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
                             (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
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
      v65.fields.x = 1.0 / v30;
      v65.fields.y = 1.0 / v30;
      v65.fields.z = 1.0 / v30;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v65, 0LL);
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
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
      v37 = ServantAssetLoadManager__loadBattleActor(&v63, gameObject, v31, v35, 0, 0LL);
      this->fields.battleChr = v37;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleChr, (int32_t)v37, v38, v39);
      if ( !v37 )
        goto LABEL_73;
      v40 = UnityEngine_GameObject__AddComponent_object_(
              v37,
              (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !v40 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v40, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, v31, v35, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v41.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v42 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v41.n64_u64[0] = 0LL;
        v42 = 0.0;
      }
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !transform )
        goto LABEL_73;
      v43 = v42 + this->fields.CHARA_BASE_POSITION.fields.z;
      v44 = vadd_f32(v41, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v45 = HIDWORD(v44);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v43 - 2),
        0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !transform )
        goto LABEL_73;
      v66.fields.x = 0.0;
      v66.fields.z = 0.0;
      v66.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v66, 0LL);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      v46 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4B16196 )
      {
        transform = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v25);
        byte_4B16196 = 1;
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
          v50 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v50,
            (const MethodInfo_3326768 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v50 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            5,
            0.75,
            (const MethodInfo_3327134 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            8,
            0.75,
            (const MethodInfo_3327134 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            9,
            0.75,
            (const MethodInfo_3327134 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v50,
                 battleSize,
                 (const MethodInfo_332732C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v51 = UnityEngine_GameObject__get_transform(v37, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v50,
                     battleSize,
                     (const MethodInfo_3327098 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v53 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v50,
                    battleSize,
                    (const MethodInfo_3327098 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v54 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v50,
                    battleSize,
                    (const MethodInfo_3327098 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v51 )
              goto LABEL_73;
            v67.fields.z = v54;
            v67.fields.x = Item;
            v67.fields.y = v53;
            UnityEngine_Transform__set_localScale(v51, v67, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v40, v31, v35, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v40, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v40,
          5000.0,
          (System_String_o *)StringLiteral_16482/*"_y0"*/,
          0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v31, v35, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v40, Manager__loadAnimEvents, v31, v35, 0LL);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v40, this->fields.defaultAnimationName, 2, 0LL);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v40, this->fields.defaultAnimationName, 0LL);
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
      if ( !transform
        || (v56 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL)) == 0) )
      {
LABEL_73:
        sub_1BCB254(transform, v25);
      }
      v57 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v56, 0LL);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v57 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v57, 0LL);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v40;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)v40, v58, v59);
      v60 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3085/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v37, v60, 0LL);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_37110808(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v62 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v62,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v62, 0LL);
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
  if ( (byte_4B183A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B183A8 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_33994832(
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
  if ( (byte_4B183AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B183AA = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_4B183A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4B183A9 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B183A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4B183A5 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1BCB254(0LL, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v27 = v26;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v15 = v13;
    if ( !v13 )
    {
      v24 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1BCB254(v13, v14);
  }
  while ( !System_String__Equals_62485728(assetName, (System_String_o *)v27.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v16);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1BCB254(0LL, v17);
    ServantStatusVoiceListViewManager__SetMode_37168100(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayList, (int32_t)voicePlayList, v18, v19);
  this->fields.voicePlayAssetName = assetName;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, (int32_t)assetName, v21, v22);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v23);
  v24 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v15 && v24 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4B183B0 & 1) == 0 )
  {
    sub_1BCAFF8(&OptionManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B183B0 = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_33934572(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_37110808(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_34926368(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCB254(charaGraphListViewManager, method);
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
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL4 v33; // w24
  const MethodInfo *v34; // x2
  int v35; // w8
  long double inited; // q0
  int v37; // w8
  unsigned __int8 v38; // w21
  struct ServantStatusListViewItem_o *v39; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v41; // x22
  __int64 v42; // x23
  int v43; // w22
  BalanceConfig_c *v44; // x8
  struct ServantStatusListViewItem_o *v45; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v47; // x23
  __int64 v48; // x0
  __int64 v49; // x0
  CommonUI_o *v50; // x19
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  CommonConfirmDialog_ClickDelegate_o *v54; // x0
  __int64 *v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  const MethodInfo *v59; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v61; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4B183DC & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, v9);
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v16);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__0__, v17);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__1__, v18);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__2__, v19);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass233_0_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_11862/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v21);
    sub_1BCAFF8(&StringLiteral_11860/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v22);
    sub_1BCAFF8(&StringLiteral_11849/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v23);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v24);
    sub_1BCAFF8(&StringLiteral_11850/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v25);
    sub_1BCAFF8(&StringLiteral_11861/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v26);
    sub_1BCAFF8(&StringLiteral_11848/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v27);
    byte_4B183DC = 1;
  }
  v28 = sub_1BCB244(ServantStatusDialog___c__DisplayClass233_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass233_0___ctor((ServantStatusDialog___c__DisplayClass233_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_53;
  v33 = isRandomOn;
  *(_QWORD *)(v28 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 24), (int32_t)this, v31, v32);
  *(_DWORD *)(v28 + 32) = index;
  *(_BYTE *)(v28 + 36) = isOwnSetting;
  *(_BYTE *)(v28 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v33 )
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
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v30);
    v37 = *(unsigned __int8 *)(v28 + 37);
    v38 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v28 + 16) = 12;
    if ( v37 )
    {
      v39 = this->fields.mainInfo;
      if ( !v39 )
        goto LABEL_53;
      userSvtEntity = v39->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = v42;
      *(_QWORD *)&v62.fields.fakeValue = v41;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                  v62,
                                                  0LL);
      v43 = (int)mainInfo;
      v44 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v44 = BalanceConfig_TypeInfo;
      }
      if ( v43 == v44->static_fields->ServantIdMashu1 )
      {
        v45 = this->fields.mainInfo;
        if ( !v45 )
          goto LABEL_53;
        supportRandomLimitCountList = v45->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v47 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v47,
            (Il2CppObject *)v28,
            Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__50347164(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v47,
                 (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080) )
          {
            v48 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
              v48 = sub_1C1B45C(inited);
            v49 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
            if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
              v49 = sub_1C1B45C(inited);
            v50 = **(CommonUI_o ***)(v49 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v55 = &Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v38 & *(_BYTE *)(v28 + 37) & 1) != 0 )
    {
      v56 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C1B45C(inited);
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1C1B45C(inited);
      v50 = **(CommonUI_o ***)(v57 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11849/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v55 = &Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v58 = v54;
      CommonConfirmDialog_ClickDelegate___ctor(v54, (Il2CppObject *)v28, *v55, 0LL);
      if ( v50 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v50,
          (System_String_o *)StringLiteral_1/*""*/,
          v51,
          v52,
          v53,
          v58,
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
      sub_1BCB254(mainInfo, v30);
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
        v59);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v35;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v33 )
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
  ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v61 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v61,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v61, 0LL);
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

  if ( (byte_4B183DA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4B183DA = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BCB254(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
}


void __fastcall ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x19
  CGThumbnailListItem_o *p_cashedBattleCharaChangeConfirmAssetData; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B18387 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    byte_4B18387 = 1;
  }
  cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
  if ( cashedBattleCharaChangeConfirmAssetData )
  {
    p_cashedBattleCharaChangeConfirmAssetData = (CGThumbnailListItem_o *)&this->fields.cashedBattleCharaChangeConfirmAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39722652(cashedBattleCharaChangeConfirmAssetData, 0LL);
    p_cashedBattleCharaChangeConfirmAssetData->klass = 0LL;
    sub_1BCAF9C(p_cashedBattleCharaChangeConfirmAssetData, 0, v5, v6);
  }
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

  if ( (byte_4B1839A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, flag);
    byte_4B1839A = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1BCB254(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


void __fastcall ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x21
  CGThumbnailListItem_o *p_battleCharaChangeConfirmDialog; // x19
  __int64 v10; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x21
  UnityEngine_Transform_o *v13; // x20
  Il2CppObject *Object_object__50315216; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B18388 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Transform___, v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v7);
    byte_4B18388 = 1;
  }
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
  {
    battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_battleCharaChangeConfirmDialog = (CGThumbnailListItem_o *)&this->fields.battleCharaChangeConfirmDialog;
    if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0LL, 0LL) )
      goto LABEL_15;
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_18;
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               baseObject,
                                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Transform___);
    cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
    v13 = (UnityEngine_Transform_o *)baseObject;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    if ( !cashedBattleCharaChangeConfirmAssetData )
      goto LABEL_18;
    Object_object__50315216 = AssetData__GetObject_object__50315216(
                                cashedBattleCharaChangeConfirmAssetData,
                                ServantStatusDialog_TypeInfo->static_fields->BattleCharaChangeConfirmDialogPrefabName,
                                (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                               Object_object__50315216,
                                               v13,
                                               (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
    if ( !baseObject )
      goto LABEL_18;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         baseObject,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    p_battleCharaChangeConfirmDialog->klass = (CGThumbnailListItem_c *)Component_object;
    sub_1BCAF9C(p_battleCharaChangeConfirmDialog, (int32_t)Component_object, v16, v17);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)p_battleCharaChangeConfirmDialog->klass, 0LL, 0LL) )
    {
LABEL_15:
      baseObject = (UnityEngine_GameObject_o *)p_battleCharaChangeConfirmDialog->klass;
      if ( p_battleCharaChangeConfirmDialog->klass )
      {
        BattleCharaChangeConfirmDialog__Init((BattleCharaChangeConfirmDialog_o *)baseObject, 0LL);
        return;
      }
LABEL_18:
      sub_1BCB254(baseObject, v10);
    }
  }
}


void __fastcall ServantStatusDialog__SetBattleCharaTabExplanation(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusDialog_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UILabel_o *battleExplanationLabel; // x19
  bool v8; // w20
  System_String_o *v9; // x0
  System_String_o *costumeName; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B183E8 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_11802/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, v4);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_11798/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v5);
    byte_4B183E8 = 1;
  }
  costumeName = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
LABEL_13:
    sub_1BCB254(this, method);
  if ( !mainInfo->fields.userSvtEntity )
    return;
  battleExplanationLabel = v3->fields.battleExplanationLabel;
  v8 = ServantStatusDialog__EnableSpecialCostume(v3, &costumeName, v2);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v8 )
    {
LABEL_7:
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, 0LL);
      this = (ServantStatusDialog_o *)System_String__Format(v9, (Il2CppObject *)costumeName, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_7;
  }
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
LABEL_10:
  method = (const MethodInfo *)this;
  if ( !battleExplanationLabel )
    goto LABEL_13;
  UILabel__set_text(battleExplanationLabel, (System_String_o *)this, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int v22; // w9
  _DWORD *v23; // x8
  int v24; // w23
  int v25; // w24
  int v26; // w22
  __int64 v27; // x8
  bool v28; // w8
  int32_t v29; // w21
  int32_t ConvertOverwriteDispImageLimitCount; // w22
  int32_t ServantImageLimitSealAfter; // w22
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v33; // x22
  const MethodInfo *v34; // x1
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x21
  System_Action_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x23
  System_String_o *v43; // x21
  AssetLoader_LoadEndDataHandler_o *v44; // x22
  const MethodInfo *v45; // x1

  if ( (byte_4B1839E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isModifyInfo);
    sub_1BCAFF8(&AssetManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__, v11);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__, v12);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass165_0_TypeInfo, v13);
    byte_4B1839E = 1;
  }
  v14 = sub_1BCB244(ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass165_0___ctor((ServantStatusDialog___c__DisplayClass165_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_41;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  ServantStatusBattleListViewManager__ChangeSelectIndex(battleTabListViewManager, this->fields.confirmDispLv, 0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  leftItem = battleTabListViewManager->fields.leftItem;
  if ( !leftItem )
    goto LABEL_41;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= leftItem->fields.sortIndex )
    sub_1BCB25C(battleTabListViewManager, v16, v19);
  v22 = *((_DWORD *)&leftItem->fields.sortValue0 + confirmDispLv);
  v23 = *(_DWORD **)&battleTabListViewManager[1].fields.oldScrollPosition.fields.x;
  LODWORD(battleTabListViewManager->fields.bottomItem) = v22;
  if ( !v23 )
    goto LABEL_41;
  v24 = v23[4];
  v25 = v23[5];
  v26 = v23[6];
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  else
  {
    if ( BYTE3(battleTabListViewManager[1].fields.itemSortList) )
    {
      ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
      battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
      if ( !battleTabListViewManager )
        goto LABEL_41;
    }
    ServantStatusListViewItem__SetCostumeData((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  }
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  v27 = *(_QWORD *)&battleTabListViewManager[1].fields.oldScrollPosition.fields.x;
  if ( !v27 )
    goto LABEL_41;
  v28 = v25 != *(_DWORD *)(v27 + 20)
     || v24 != *(_DWORD *)(v27 + 16)
     || v26 != ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)battleTabListViewManager, 0LL);
  *(_BYTE *)(v14 + 24) = v28;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__GetSvtId(
                                                                       (ServantStatusListViewItem_o *)battleTabListViewManager,
                                                                       1,
                                                                       0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_41;
  v29 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v29,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v29,
                                                                       ServantImageLimitSealAfter,
                                                                       0LL);
  if ( !battleTabListViewManager )
LABEL_41:
    sub_1BCB254(battleTabListViewManager, v16);
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v33 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_62485728((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    if ( !*(_BYTE *)(v14 + 24) )
    {
LABEL_31:
      ServantStatusDialog__EndChangeBattleResource(this, v34);
      return;
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    v36 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v14,
      Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__,
      0LL);
    if ( charaGraphListViewManager )
    {
      charaGraphListViewManager->fields.callbackFunc2 = v36;
      sub_1BCAF9C((CGThumbnailListItem_o *)&charaGraphListViewManager->fields.callbackFunc2, (int32_t)v36, v37, v38);
      ServantStatusCharaGraphListViewManager__SetMode_33934572(charaGraphListViewManager, 3, v39);
      goto LABEL_31;
    }
    goto LABEL_41;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v42 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v42, 0LL);
  }
  *p_battleLoadAsset = v33;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, (int32_t)v33, v40, v41);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  v43 = *p_battleLoadAsset;
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v14,
    Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v43, v44, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v45);
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
  if ( (byte_4B183AE & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_17503/*"button_lock_reg"*/, v4);
    sub_1BCAFF8(&StringLiteral_17507/*"button_push_reg"*/, v5);
    sub_1BCAFF8(&StringLiteral_17508/*"button_push_unreg"*/, v6);
    sub_1BCAFF8(&StringLiteral_17504/*"button_lock_unreg"*/, v7);
    sub_1BCAFF8(&StringLiteral_17498/*"button_choice_unreg"*/, v8);
    sub_1BCAFF8(&StringLiteral_20009/*"icon_equip"*/, v9);
    sub_1BCAFF8(&StringLiteral_17497/*"button_choice_reg"*/, v10);
    sub_1BCAFF8(&StringLiteral_20010/*"icon_equip_cc"*/, v11);
    sub_1BCAFF8(&StringLiteral_17499/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_17500/*"button_favorite_unreg"*/, v13);
    byte_4B183AE = 1;
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
      v24 = (System_String_o **)(v23->fields.isLock ? &StringLiteral_17503/*"button_lock_reg"*/ : &StringLiteral_17504/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = v2->fields.mainInfo;
      if ( !v25 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v26 = (System_String_o **)(v25->fields.isChoice ? &StringLiteral_17497/*"button_choice_reg"*/ : &StringLiteral_17498/*"button_choice_unreg"*/);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v44, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v32 = (System_String_o **)&StringLiteral_17499/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v32 = (System_String_o **)&StringLiteral_17500/*"button_favorite_unreg"*/;
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
          v35 = &StringLiteral_17508/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                            &v43,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v35 = &StringLiteral_17507/*"button_push_reg"*/;
          v41 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v41 )
            v35 = &StringLiteral_17508/*"button_push_unreg"*/;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20009/*"icon_equip"*/, 0LL);
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
  v18 = (System_String_o **)(v17->fields.isLock ? &StringLiteral_17503/*"button_lock_reg"*/ : &StringLiteral_17504/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = v2->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0LL
    || (v19->fields.isChoice
      ? (v20 = (System_String_o **)&StringLiteral_17497/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17498/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1BCB254(this, method);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20010/*"icon_equip_cc"*/, 0LL);
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

  if ( (byte_4B18399 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18399 = 1;
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
        ShiningIconComponent__Set_40206624((ShiningIconComponent_o *)v8, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1BCB254(v8, v7);
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
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v85; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v87; // x2
  struct ServantStatusListViewItem_o *v88; // x8
  struct ServantStatusListViewItem_o *v89; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v91; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v95; // x0
  BgmManager_c *v96; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v98; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v99; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B183AC & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BCAFF8(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&OptionManager_TypeInfo, v11);
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectBattle__, v13);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectFlavor__, v14);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectVoice__, v16);
    sub_1BCAFF8(&StringLiteral_17415/*"btn_txt_detail_off"*/, v17);
    sub_1BCAFF8(&StringLiteral_17398/*"btn_txt_battlecharacter_on"*/, v18);
    sub_1BCAFF8(&StringLiteral_17463/*"btn_txt_status_on"*/, v19);
    sub_1BCAFF8(&StringLiteral_17304/*"btn_bg_12"*/, v20);
    sub_1BCAFF8(&StringLiteral_17462/*"btn_txt_status_off"*/, v21);
    sub_1BCAFF8(&StringLiteral_17476/*"btn_txt_voice_on"*/, v22);
    sub_1BCAFF8(&StringLiteral_17443/*"btn_txt_profile_on"*/, v23);
    sub_1BCAFF8(&StringLiteral_17475/*"btn_txt_voice_off"*/, v24);
    sub_1BCAFF8(&StringLiteral_17306/*"btn_bg_19"*/, v25);
    sub_1BCAFF8(&StringLiteral_17416/*"btn_txt_detail_on"*/, v26);
    sub_1BCAFF8(&StringLiteral_17442/*"btn_txt_profile_off"*/, v27);
    sub_1BCAFF8(&StringLiteral_17397/*"btn_txt_battlecharacter_off"*/, v28);
    byte_4B183AC = 1;
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
                v47 = (System_String_o **)&StringLiteral_17463/*"btn_txt_status_on"*/;
                if ( kind )
                  v47 = (System_String_o **)&StringLiteral_17462/*"btn_txt_status_off"*/;
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
                    v48 = (System_String_o **)(kind ? &StringLiteral_17304/*"btn_bg_12"*/ : &StringLiteral_17306/*"btn_bg_19"*/);
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
                                    (System_String_o *)StringLiteral_17442/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17304/*"btn_bg_12"*/,
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
                                                  v51 = (System_String_o **)&StringLiteral_17398/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17397/*"btn_txt_battlecharacter_off"*/;
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
                                                                               ? &StringLiteral_17306/*"btn_bg_19"*/
                                                                               : &StringLiteral_17304/*"btn_bg_12"*/);
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
                                                                      (System_String_o *)StringLiteral_17475/*"btn_txt_voice_off"*/,
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
      v56 = &StringLiteral_17416/*"btn_txt_detail_on"*/;
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
      v33 = (System_String_o **)&StringLiteral_17463/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17462/*"btn_txt_status_off"*/;
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
      v34 = (System_String_o **)(kind ? &StringLiteral_17304/*"btn_bg_12"*/ : &StringLiteral_17306/*"btn_bg_19"*/);
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
      v37 = &StringLiteral_17416/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v37 = &StringLiteral_17415/*"btn_txt_detail_off"*/;
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
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
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
      v43 = (System_String_o **)&StringLiteral_17463/*"btn_txt_status_on"*/;
      if ( kind )
        v43 = (System_String_o **)&StringLiteral_17462/*"btn_txt_status_off"*/;
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
      v44 = &StringLiteral_17306/*"btn_bg_19"*/;
      if ( kind )
        v44 = &StringLiteral_17304/*"btn_bg_12"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17415/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17304/*"btn_bg_12"*/, 0LL);
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
      v56 = &StringLiteral_17442/*"btn_txt_profile_off"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17306/*"btn_bg_19"*/, 0LL);
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
      v57 = (System_String_o **)&StringLiteral_17463/*"btn_txt_status_on"*/;
      if ( kind )
        v57 = (System_String_o **)&StringLiteral_17462/*"btn_txt_status_off"*/;
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
      v58 = (System_String_o **)(kind ? &StringLiteral_17304/*"btn_bg_12"*/ : &StringLiteral_17306/*"btn_bg_19"*/);
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
      v61 = (System_String_o **)&StringLiteral_17443/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v61 = (System_String_o **)&StringLiteral_17442/*"btn_txt_profile_off"*/;
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
      v62 = (System_String_o **)(kind == 1 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
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
      v65 = (System_String_o **)&StringLiteral_17398/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v65 = (System_String_o **)&StringLiteral_17397/*"btn_txt_battlecharacter_off"*/;
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
      v66 = (System_String_o **)(kind == 2 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
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
          v70 = (System_String_o **)&StringLiteral_17476/*"btn_txt_voice_on"*/;
          if ( !v30 )
            v70 = (System_String_o **)&StringLiteral_17475/*"btn_txt_voice_off"*/;
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
              v71 = (System_String_o **)(v30 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
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
        sub_1BCB254(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17475/*"btn_txt_voice_off"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17304/*"btn_bg_12"*/, 0LL);
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
        sub_1BCB25C(statusTabBase, *(_QWORD *)&kind, v55);
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
          ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v79 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v83 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
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
            0LL);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v85 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v85,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v85, 0LL);
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
          if ( !byte_4B1825A )
          {
            sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind);
            byte_4B1825A = 1;
          }
          statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(statusTabBase + 184) + 8LL) )
            goto LABEL_252;
          v88 = this->fields.mainInfo;
          if ( !v88 )
            goto LABEL_287;
          if ( !v88->fields.isConvertOverwriteImage )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, *(const MethodInfo **)&kind);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v87);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
          v89 = this->fields.mainInfo;
          if ( !v89 )
            goto LABEL_287;
          if ( !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v89->fields._IsTransformed_k__BackingField,
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
          v91 = this->fields.mainInfo;
          if ( !v91 )
            goto LABEL_287;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0LL);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_287;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v91,
            (System_Int32_array *)statusTabBase,
            0LL);
LABEL_262:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v95 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v95 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v95->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v96 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v96 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v96->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v98 = this->fields.voiceTabListViewManager;
          v99 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v99,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v98 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v98, 1, v99, 0LL);
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

  if ( (byte_4B183B1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isVisible);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v5);
    byte_4B183B1 = 1;
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
        sub_1BCB254(battleChrCamera, isVisible);
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
  if ( (byte_4B1838A & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&StringLiteral_11856/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v5);
    byte_4B1838A = 1;
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1BCB254(this, item);
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
  struct ServantStatusListViewItem_o *v16; // x8
  bool v17; // w22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x22
  const MethodInfo *v21; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  const MethodInfo *v24; // x1

  if ( (byte_4B18396 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, v5);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B18396 = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( System_String__Equals_62485728((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_33983400(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4B1825A )
    {
      sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, method);
      byte_4B1825A = 1;
    }
    mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(mainInfo->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v16 = this->fields.mainInfo;
    if ( v16 )
    {
      if ( !v16->fields.isConvertOverwriteImage )
        goto LABEL_22;
      return 0;
    }
LABEL_34:
    sub_1BCB254(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v20 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
  *p_battleLoadAsset = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, (int32_t)v15, v18, v19);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v21);
  battleLoadAsset = this->fields.battleLoadAsset;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v17 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v23, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v24);
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
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x22
  AssetLoader_LoadEndDataHandler_o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B18390 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, onComplete);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__, v8);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass150_0_TypeInfo, v9);
    byte_4B18390 = 1;
  }
  v10 = sub_1BCB244(ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass150_0___ctor((ServantStatusDialog___c__DisplayClass150_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = onComplete;
  v15 = v10 + 16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)onComplete, v13, v14);
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
  v18 = (System_String_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_62485728(
                                              (System_String_o *)mainInfo,
                                              *p_cardLoadAsset,
                                              0LL);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
      return;
    }
LABEL_20:
    sub_1BCB254(mainInfo, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v19 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0LL);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_cardLoadAsset, (int32_t)v18, v20, v21);
  v22 = *p_cardLoadAsset;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_cardLoadAsset, 0, v24, v25);
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
  const MethodInfo *v12; // x3
  System_String_o *statusLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  AssetData_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4B1838E & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B1838E = 1;
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, (int32_t)StatusImageFolderName, v11, v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1BCB254(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v14, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, 0, v15, v16);
    ServantStatusDialog__EndStatusLoad(this, v17, v18);
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
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x22
  AssetLoader_LoadEndDataHandler_o *v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B18392 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, onComplete);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__, v8);
    sub_1BCAFF8(&ServantStatusDialog___c__DisplayClass152_0_TypeInfo, v9);
    byte_4B18392 = 1;
  }
  v10 = sub_1BCB244(ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass152_0___ctor((ServantStatusDialog___c__DisplayClass152_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = onComplete;
  v15 = v10 + 16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)onComplete, v13, v14);
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
  v19 = StatusImageFolderName;
  StatusImageFolderName = (System_String_o *)System_String__Equals_62485728(
                                               StatusImageFolderName,
                                               *p_transformedStatusLoadAsset,
                                               0LL);
  if ( ((unsigned __int8)StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v15 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
      return;
    }
LABEL_21:
    sub_1BCB254(StatusImageFolderName, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v20 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_transformedStatusLoadAsset, (int32_t)v19, v21, v22);
  v23 = *p_transformedStatusLoadAsset;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v23, v24, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_transformedStatusLoadAsset, 0, v25, v26);
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
  int32_t v23; // w22
  ServantStatusListViewItem_o *v24; // x20
  __int64 v25; // x2
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v27; // x9
  int32_t v28; // w22
  BalanceConfig_c *v29; // x8
  ServantLimitAddMaster_o *v30; // x23
  struct ServantStatusListViewItem_o *v31; // x9
  int32_t v32; // w4
  const MethodInfo *v33; // x5
  struct PartyListViewItem_o *v34; // x8
  ServantStatusListViewItem_o *v35; // x23
  unsigned __int64 v36; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v38; // x24
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  ServantStatusListViewItem_o *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w4
  const MethodInfo *v47; // x5
  System_Collections_Generic_List_object__o *v48; // x24
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  ServantStatusListViewItem_o *v54; // x1
  Il2CppClass **v55; // x0
  int32_t v56; // w4
  const MethodInfo *v57; // x5
  System_Collections_Generic_List_object__o *v58; // x24
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  ServantStatusListViewItem_o *v64; // x1
  Il2CppClass **v65; // x0
  int32_t v66; // w4
  const MethodInfo *v67; // x5
  BalanceConfig_c *v68; // x8
  int v69; // w24
  System_Collections_Generic_List_object__o *v70; // x24
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  ServantStatusListViewItem_o *v76; // x1
  Il2CppClass **v77; // x0
  int32_t v78; // w4
  const MethodInfo *v79; // x5
  BalanceConfig_c *v80; // x8
  int v81; // w24
  System_Collections_Generic_List_object__o *v82; // x24
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  ServantStatusListViewItem_o *v88; // x1
  Il2CppClass **v89; // x0
  int32_t v90; // w4
  const MethodInfo *v91; // x5
  System_Collections_Generic_List_object__o *v92; // x24
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  ServantStatusListViewItem_o *v98; // x1
  Il2CppClass **v99; // x0
  int32_t v100; // w4
  const MethodInfo *v101; // x5
  System_Collections_Generic_List_object__o *v102; // x24
  int32_t ServantIdMashu3; // w2
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  ServantStatusListViewItem_o *v109; // x1
  Il2CppClass **v110; // x0
  System_Collections_Generic_List_object__o *v111; // x24
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  ServantStatusListViewItem_o *v117; // x1
  Il2CppClass **v118; // x0
  int32_t v119; // w4
  const MethodInfo *v120; // x5
  System_Collections_Generic_List_object__o *v121; // x24
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  ServantStatusListViewItem_o *v127; // x1
  Il2CppClass **v128; // x0
  __int64 v129; // x1
  NetworkManager_c *v130; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t userIdNumber; // x24
  int32_t MashuTdGradeUpQuestId; // w26
  int32_t MashuTdGradeUpQuestPhase; // w25
  System_Collections_Generic_List_object__o *v135; // x24
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  ServantStatusListViewItem_o *v141; // x1
  Il2CppClass **v142; // x0
  int32_t v143; // w4
  const MethodInfo *v144; // x5
  System_Collections_Generic_List_object__o *v145; // x24
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  ServantStatusListViewItem_o *v151; // x1
  Il2CppClass **v152; // x0
  ServantVoiceRelationEntity_array *v153; // x20
  signed int max_length; // w8
  unsigned int v155; // w25
  ServantVoiceRelationEntity_o *v156; // x26
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x22
  __int64 v158; // x23
  __int64 v159; // x24
  ServantStatusDialog_o *v160; // x0
  int32_t v161; // w4
  const MethodInfo *v162; // x5
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  struct System_Object_array *items; // x8
  _QWORD *v166; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v168; // x1
  Il2CppClass **v169; // x0
  System_Collections_Generic_List_object__o *v170; // x22
  ServantStatusDialog_o *v171; // x0
  int32_t v172; // w4
  const MethodInfo *v173; // x5
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  ServantStatusListViewItem_o *v179; // x1
  Il2CppClass **v180; // x0
  System_Collections_Generic_List_object__o *v181; // x22
  ServantStatusDialog_o *v182; // x0
  int32_t v183; // w4
  const MethodInfo *v184; // x5
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  ServantStatusListViewItem_o *v190; // x1
  Il2CppClass **v191; // x0
  struct System_Collections_Generic_List_string__o *v192; // x8
  const MethodInfo *v193; // x2
  NetworkManager_c *v194; // x0
  Il2CppObject *Item; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  System_String_o *loadVoiceData; // x20
  System_Action_o *v199; // x21
  ServantStatusListViewItem_o *v201; // [xsp+8h] [xbp-78h]
  unsigned __int64 v202; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16

  if ( (byte_4B183A2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v3);
    sub_1BCAFF8(&CondType_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndLoadVoice__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&SoundManager_TypeInfo, v19);
    byte_4B183A2 = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B17950 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B17950 = 1;
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
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v23 = (int)mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         (int32_t)mainInfo,
         (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v23,
                                              0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v24 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v23,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v24 )
    goto LABEL_166;
  partyItem = v24->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v27 = 0LL;
    v201 = v24;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)partyItem )
        goto LABEL_167;
      v28 = *((_DWORD *)&v24->fields.memberItem + v27);
      v202 = v27;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v29 = BalanceConfig_TypeInfo;
      v30 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v31 = this->fields.mainInfo;
      if ( !v31 )
        goto LABEL_166;
      if ( !v30 )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v30,
                                                  v28,
                                                  v29->static_fields->ServantLimitMax,
                                                  v31->fields.costumeIds,
                                                  0LL);
      if ( !mainInfo )
        goto LABEL_166;
      v34 = mainInfo->fields.partyItem;
      v35 = mainInfo;
      if ( (int)v34 >= 1 )
        break;
LABEL_123:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_166;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v28, 0LL);
      v153 = relationList;
      if ( !relationList )
        goto LABEL_166;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v155 = 0;
        while ( v155 < max_length )
        {
          v156 = v153->m_Items[v155];
          if ( !v156 )
            goto LABEL_166;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v159 = *(_QWORD *)&v156->fields.relationSvtId.fields.currentCryptoKey;
          v158 = *(_QWORD *)&v156->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v204.fields.currentCryptoKey = v159;
          *(_QWORD *)&v204.fields.fakeValue = v158;
          v160 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v204, 0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v160,
                                                      0,
                                                      (int32_t)v160,
                                                      0,
                                                      v161,
                                                      v162);
          if ( !requestVoiceDataList )
            goto LABEL_166;
          items = requestVoiceDataList->fields._items;
          v166 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_166;
          size = requestVoiceDataList->fields._size;
          v168 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
          }
          else
          {
            v169 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v169[4] = (Il2CppClass *)v168;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v169 + 4), (int32_t)v168, v163, v164);
          }
          v170 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v171 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                            v156->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v171,
                                                      2,
                                                      (int32_t)v171,
                                                      0,
                                                      v172,
                                                      v173);
          if ( !v170 )
            goto LABEL_166;
          v176 = v170->fields._items;
          v177 = Method_System_Collections_Generic_List_string__Add__;
          ++v170->fields._version;
          if ( !v176 )
            goto LABEL_166;
          v178 = v170->fields._size;
          v179 = mainInfo;
          if ( (unsigned int)v178 >= v176->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v170,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v180 = &v176->obj.klass + v178;
            v170->fields._size = v178 + 1;
            v180[4] = (Il2CppClass *)v179;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v179, v174, v175);
          }
          v181 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v182 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                            v156->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v182,
                                                      1,
                                                      (int32_t)v182,
                                                      0,
                                                      v183,
                                                      v184);
          if ( !v181 )
            goto LABEL_166;
          v187 = v181->fields._items;
          v188 = Method_System_Collections_Generic_List_string__Add__;
          ++v181->fields._version;
          if ( !v187 )
            goto LABEL_166;
          v189 = v181->fields._size;
          v190 = mainInfo;
          if ( (unsigned int)v189 >= v187->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v181,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v191 = &v187->obj.klass + v189;
            v181->fields._size = v189 + 1;
            v191[4] = (Il2CppClass *)v190;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v191 + 4), (int32_t)v190, v185, v186);
          }
          max_length = v153->max_length;
          if ( (int)++v155 >= max_length )
            goto LABEL_148;
        }
LABEL_167:
        sub_1BCB25C(mainInfo, method, v25);
      }
LABEL_148:
      v24 = v201;
      LODWORD(partyItem) = v201->fields.partyItem;
      v27 = v202 + 1;
      if ( (__int64)(v202 + 1) >= (int)partyItem )
        goto LABEL_149;
    }
    v36 = 0LL;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
        goto LABEL_167;
      v38 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v32,
                                                  v33);
      if ( !v38 )
        goto LABEL_166;
      v41 = v38->fields._items;
      v42 = Method_System_Collections_Generic_List_string__Add__;
      ++v38->fields._version;
      if ( !v41 )
        goto LABEL_166;
      v43 = v38->fields._size;
      v44 = mainInfo;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v41->obj.klass + v43;
        v38->fields._size = v43 + 1;
        v45[4] = (Il2CppClass *)v44;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
      }
      if ( v36 >= LODWORD(v35->fields.partyItem) )
        goto LABEL_167;
      v48 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v46,
                                                  v47);
      if ( !v48 )
        goto LABEL_166;
      v51 = v48->fields._items;
      v52 = Method_System_Collections_Generic_List_string__Add__;
      ++v48->fields._version;
      if ( !v51 )
        goto LABEL_166;
      v53 = v48->fields._size;
      v54 = mainInfo;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v51->obj.klass + v53;
        v48->fields._size = v53 + 1;
        v55[4] = (Il2CppClass *)v54;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v54, v49, v50);
      }
      if ( v36 >= LODWORD(v35->fields.partyItem) )
        goto LABEL_167;
      v58 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v28,
                                                  *((_DWORD *)p_memberItem + v36),
                                                  v56,
                                                  v57);
      if ( !v58 )
        goto LABEL_166;
      v61 = v58->fields._items;
      v62 = Method_System_Collections_Generic_List_string__Add__;
      ++v58->fields._version;
      if ( !v61 )
        goto LABEL_166;
      v63 = v58->fields._size;
      v64 = mainInfo;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &v61->obj.klass + v63;
        v58->fields._size = v63 + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v64, v59, v60);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
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
        goto LABEL_166;
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
          goto LABEL_167;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v32,
                                                    v33);
        if ( !v82 )
          goto LABEL_166;
        v85 = v82->fields._items;
        v86 = Method_System_Collections_Generic_List_string__Add__;
        ++v82->fields._version;
        if ( !v85 )
          goto LABEL_166;
        v87 = v82->fields._size;
        v88 = mainInfo;
        if ( (unsigned int)v87 >= v85->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v82,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v85->obj.klass + v87;
          v82->fields._size = v87 + 1;
          v89[4] = (Il2CppClass *)v88;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v88, v83, v84);
        }
        if ( v36 >= LODWORD(v35->fields.partyItem) )
          goto LABEL_167;
        v111 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v90,
                                                    v91);
        if ( !v111 )
          goto LABEL_166;
        v114 = v111->fields._items;
        v115 = Method_System_Collections_Generic_List_string__Add__;
        ++v111->fields._version;
        if ( !v114 )
          goto LABEL_166;
        v116 = v111->fields._size;
        v117 = mainInfo;
        if ( (unsigned int)v116 >= v114->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v111,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v118 = &v114->obj.klass + v116;
          v111->fields._size = v116 + 1;
          v118[4] = (Il2CppClass *)v117;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v118 + 4), (int32_t)v117, v112, v113);
        }
        if ( v36 >= LODWORD(v35->fields.partyItem) )
          goto LABEL_167;
        v121 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v36),
                                                    v119,
                                                    v120);
        if ( !v121 )
          goto LABEL_166;
        v124 = v121->fields._items;
        v125 = Method_System_Collections_Generic_List_string__Add__;
        ++v121->fields._version;
        if ( !v124 )
          goto LABEL_166;
        v126 = v121->fields._size;
        v127 = mainInfo;
        if ( (unsigned int)v126 >= v124->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v121,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &v124->obj.klass + v126;
          v121->fields._size = v126 + 1;
          v128[4] = (Il2CppClass *)v127;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v128 + 4), (int32_t)v127, v122, v123);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v129);
          byte_4B165D1 = 1;
        }
        v130 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v130 = NetworkManager_TypeInfo;
        }
        static_fields = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v130->static_fields->userIdNumber;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        mainInfo = (ServantStatusListViewItem_o *)CondType__IsQuestPhaseClear(
                                                    userIdNumber,
                                                    MashuTdGradeUpQuestId,
                                                    MashuTdGradeUpQuestPhase,
                                                    -1,
                                                    0,
                                                    0LL);
        if ( ((unsigned __int8)mainInfo & 1) != 0 )
        {
          mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
          v135 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_167;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v36),
                                                      v32,
                                                      v33);
          if ( !v135 )
            goto LABEL_166;
          v138 = v135->fields._items;
          v139 = Method_System_Collections_Generic_List_string__Add__;
          ++v135->fields._version;
          if ( !v138 )
            goto LABEL_166;
          v140 = v135->fields._size;
          v141 = mainInfo;
          if ( (unsigned int)v140 >= v138->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v135,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
          }
          else
          {
            v142 = &v138->obj.klass + v140;
            v135->fields._size = v140 + 1;
            v142[4] = (Il2CppClass *)v141;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v142 + 4), (int32_t)v141, v136, v137);
          }
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_167;
          v145 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v36),
                                                      v143,
                                                      v144);
          if ( !v145 )
            goto LABEL_166;
          v148 = v145->fields._items;
          v149 = Method_System_Collections_Generic_List_string__Add__;
          ++v145->fields._version;
          if ( !v148 )
            goto LABEL_166;
          v150 = v145->fields._size;
          v151 = mainInfo;
          if ( (unsigned int)v150 >= v148->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v145,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
          }
          else
          {
            v152 = &v148->obj.klass + v150;
            v145->fields._size = v150 + 1;
            v152[4] = (Il2CppClass *)v151;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v151, v146, v147);
          }
          if ( v36 >= LODWORD(v35->fields.partyItem) )
            goto LABEL_167;
          v102 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_112:
      LODWORD(v34) = v35->fields.partyItem;
      if ( (__int64)++v36 >= (int)v34 )
        goto LABEL_123;
    }
    v70 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v68->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v68);
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_167;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v36),
                                                v66,
                                                v67);
    if ( !v70 )
      goto LABEL_166;
    v73 = v70->fields._items;
    v74 = Method_System_Collections_Generic_List_string__Add__;
    ++v70->fields._version;
    if ( !v73 )
      goto LABEL_166;
    v75 = v70->fields._size;
    v76 = mainInfo;
    if ( (unsigned int)v75 >= v73->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v70,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v73->obj.klass + v75;
      v70->fields._size = v75 + 1;
      v77[4] = (Il2CppClass *)v76;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v76, v71, v72);
    }
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_167;
    v92 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v36),
                                                v78,
                                                v79);
    if ( !v92 )
      goto LABEL_166;
    v95 = v92->fields._items;
    v96 = Method_System_Collections_Generic_List_string__Add__;
    ++v92->fields._version;
    if ( !v95 )
      goto LABEL_166;
    v97 = v92->fields._size;
    v98 = mainInfo;
    if ( (unsigned int)v97 >= v95->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v92,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v95->obj.klass + v97;
      v92->fields._size = v97 + 1;
      v99[4] = (Il2CppClass *)v98;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v98, v93, v94);
    }
    if ( v36 >= LODWORD(v35->fields.partyItem) )
      goto LABEL_167;
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
      goto LABEL_166;
    v106 = v102->fields._items;
    v107 = Method_System_Collections_Generic_List_string__Add__;
    ++v102->fields._version;
    if ( !v106 )
      goto LABEL_166;
    v108 = v102->fields._size;
    v109 = mainInfo;
    if ( (unsigned int)v108 >= v106->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v102,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v106->obj.klass + v108;
      v102->fields._size = v108 + 1;
      v110[4] = (Il2CppClass *)v109;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v109, v104, v105);
    }
    goto LABEL_112;
  }
LABEL_149:
  v192 = this->fields.requestVoiceDataList;
  if ( !v192 )
LABEL_166:
    sub_1BCB254(mainInfo, method);
  if ( v192->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v193);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B17950 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B17950 = 1;
  }
  v194 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v194 = NetworkManager_TypeInfo;
  }
  if ( v194->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v196, v197);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v199 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v199, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v21 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v199, 1, 0LL);
  return v21;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v11; // x21
  CGThumbnailListItem_o *p_voicePlayer; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B183A4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndPlayVoice__, v3);
    sub_1BCAFF8(&StringLiteral_5986/*"EndWaitVoice"*/, v4);
    byte_4B183A4 = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_37168100(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_70120956(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5986/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayList, 0, v6, v7);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, 0, v8, v9);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v11, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (CGThumbnailListItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1BCAF9C(p_voicePlayer, 0, v13, v14);
      return;
    }
LABEL_13:
    sub_1BCB254(voiceTabListViewManager, method);
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

  if ( (byte_4B183E7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_1BCAFF8(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B183E7 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1BCB254(Instance, v8);
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
  CGThumbnailListItem_o *profileTabListViewManager; // x21
  System_Action_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusFlavorTextListViewManager_o *v13; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v14; // x21
  struct ServantStatusFlavorTextListViewManager_o *v15; // x8

  v4 = this;
  if ( (byte_4B183E6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ServantCommentEntity__TypeInfo, setMode);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectFlavor__, v6);
    this = (ServantStatusDialog_o *)sub_1BCAFF8(&Method_ServantStatusDialog__UpdateProfileList_b__246_0__, v7);
    byte_4B183E6 = 1;
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
    profileTabListViewManager = (CGThumbnailListItem_o *)v4->fields.profileTabListViewManager;
    v10 = (System_Action_object__o *)sub_1BCB244(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__246_0__, 0LL);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager[1].klass = (CGThumbnailListItem_c *)v10;
      sub_1BCAF9C(profileTabListViewManager + 1, (int32_t)v10, v11, v12);
      if ( !setMode )
        return;
      v13 = v4->fields.profileTabListViewManager;
      v14 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v13 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v13, 1, v14, 0LL);
        v15 = v4->fields.profileTabListViewManager;
        if ( v15 )
        {
          v15->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1BCB254(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( tabInitList->max_length <= 1 )
    sub_1BCB25C(this, setMode, method);
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
      this = (ServantStatusDialog_o *)ServantEntity__getName(svtEntity, -1, imageLimitCount, 0, 0LL);
      if ( servantNameRangeLabel )
      {
        UIRangeLabel__Set(servantNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0, 0LL);
        return;
      }
    }
LABEL_8:
    sub_1BCB254(this, *(_QWORD *)&imageLimitCount);
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
    sub_1BCB254(this, imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__146_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1BCB254(this, method);
  if ( mainInfo->fields._IsTransformServant_k__BackingField )
    EventTutorialMaster__CheckTutorial(0, 86, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog___InitList_b__184_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  this->fields.needAutoScroll = 0;
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__206_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B183ED & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_AssetData__TypeInfo, _);
    sub_1BCAFF8(&Method_ServantStatusDialog__LoadTransformedResource_b__206_1__, v4);
    byte_4B183ED = 1;
  }
  v5 = (System_Action_object__o *)sub_1BCB244(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__206_1__,
    0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v5, v6);
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__206_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  ServantStatusDialog_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4B183EE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, _);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndLoadTransformedResource__, v4);
    byte_4B183EE = 1;
  }
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v8 = ServantStatusDialog__CoWaitForEndOfFrame(v6, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__236_0(
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

  if ( (byte_4B183EF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v6);
    byte_4B183EF = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v9, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v10, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(v10, v11);
  }
  v10->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v11);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__203_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__203_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___UpdateProfileList_b__246_0(
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
  __int64 v19; // x2
  System_Int32_array *v20; // x23
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B183F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B183F0 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
          *(_QWORD *)&v22.fields.currentCryptoKey = v17;
          *(_QWORD *)&v22.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1BCB0A0(int___TypeInfo, 1LL);
          if ( entity )
          {
            v20 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1BCB0A0(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1BCB25C(Master_object, v11, v19);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v15 )
              {
                ServantCommentMaster__SetOpen_41788456(v15, v18, v20, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v21);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCB254(Master_object, v11);
  }
}


bool __fastcall ServantStatusDialog__get_IsViewCharaGraph(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusDialog_c *v2; // x0

  if ( (byte_4B18368 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, v1);
    byte_4B18368 = 1;
  }
  v2 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v2 = ServantStatusDialog_TypeInfo;
  }
  return v2->static_fields->_IsViewCharaGraph_k__BackingField;
}


void __fastcall ServantStatusDialog__set_IsViewCharaGraph(bool value, const MethodInfo *method)
{
  ServantStatusDialog_c *v3; // x0

  if ( (byte_4B18369 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_TypeInfo, method);
    byte_4B18369 = 1;
  }
  v3 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v3 = ServantStatusDialog_TypeInfo;
  }
  v3->static_fields->_IsViewCharaGraph_k__BackingField = value;
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11D98;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11D50;
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
  if ( (byte_4B18BF6 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isModify);
    byte_4B18BF6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11F14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11EBC;
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
  if ( (byte_4B18BF9 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isModify);
    byte_4B18BF9 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isNeedSort, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11E0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11DB4;
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
  if ( (byte_4B18BF7 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isModify);
    sub_1BCAFF8(&int_TypeInfo, v9);
    byte_4B18BF7 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&questId, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11E90;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11E30;
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
  if ( (byte_4B18BF8 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isModify);
    sub_1BCAFF8(&int_TypeInfo, v10);
    byte_4B18BF8 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(bool_TypeInfo, v22, isNeedSort, *(_QWORD *)&questId, callback);
  v18[1] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v18, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__207___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__207__MoveNext(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4B18C05 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)sub_1BCAFF8(
                                                                  &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method);
    byte_4B18C05 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1BCB254(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__207_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__LoadAsset_d__139___ctor(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusDialog__LoadAsset_d__139__MoveNext(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantStatusDialog__LoadAsset_d__139_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ServantStatusDialog___c__DisplayClass139_0_o *_8__1; // x21
  System_Action_o *v15; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v16; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v17; // x21
  System_Action_o *v18; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v19; // x21
  System_Action_o *v20; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v21; // x8
  struct System_Action_o *callback; // x8
  bool result; // w0
  CGThumbnailListItem_o *v24; // x19
  int v25; // w8
  CGThumbnailListItem_o *p__2__current; // x19

  v4 = this;
  if ( (byte_4B18C06 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__, v7);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__, v8);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__, v9);
    this = (ServantStatusDialog__LoadAsset_d__139_o *)sub_1BCAFF8(
                                                        &ServantStatusDialog___c__DisplayClass139_0_TypeInfo,
                                                        v10);
    byte_4B18C06 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_1BCB244(ServantStatusDialog___c__DisplayClass139_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      v4->fields.__8__1 = (struct ServantStatusDialog___c__DisplayClass139_0_o *)v11;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v11, v12, v13);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_33;
      _8__1->fields.isUISkinLoaded = 0;
      v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)_8__1,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v15, 2, 1, 0LL);
LABEL_9:
      v16 = v4->fields.__8__1;
      if ( !v16 )
        goto LABEL_33;
      if ( !v16->fields.isUISkinLoaded )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(p__2__current, 0, v2, v3);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      this = (ServantStatusDialog__LoadAsset_d__139_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_33;
      this = (ServantStatusDialog__LoadAsset_d__139_o *)AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 1, 0LL);
      v16->fields.isTerminalUISkinLoaded = (unsigned __int8)this & 1;
      v17 = v4->fields.__8__1;
      if ( !v17 )
        goto LABEL_33;
      if ( !v17->fields.isTerminalUISkinLoaded )
      {
        v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)v17,
          Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__,
          0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadUISkin(v18, 1, 1, 0LL);
      }
LABEL_18:
      v19 = v4->fields.__8__1;
      if ( !v19 )
        goto LABEL_33;
      if ( !v19->fields.isTerminalUISkinLoaded )
      {
        v4->fields.__2__current = 0LL;
        v24 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v24, 0, v2, v3);
        v25 = 2;
        goto LABEL_31;
      }
      v19->fields.isEventUIAtlasLoaded = 0;
      v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v19,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v20, 1, 0LL);
LABEL_24:
      v21 = v4->fields.__8__1;
      if ( !v21 )
LABEL_33:
        sub_1BCB254(this, method);
      if ( !v21->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v24 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v24, 0, v2, v3);
        v25 = 3;
LABEL_31:
        LODWORD(v24[-1].fields._ThumbnailSpritePath_k__BackingField) = v25;
        return 1;
      }
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_33;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_9;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_18;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_24;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ServantStatusDialog__LoadAsset_d__139__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusDialog__LoadAsset_d__139__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_ServantStatusDialog__LoadAsset_d__139_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall ServantStatusDialog__LoadAsset_d__139__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusDialog__LoadAsset_d__139__System_IDisposable_Dispose(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18BFA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog___c_TypeInfo, v1);
    byte_4B18BFA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusDialog___c_TypeInfo->static_fields->__9 = (struct ServantStatusDialog___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantStatusDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantStatusDialog___c___ctor(ServantStatusDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog___c___EnableSpecialCostume_b__251_0(
        ServantStatusDialog___c_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4B18BFB & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount);
    byte_4B18BFB = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->CostumeIdMashu == dispLimitCount )
    return 1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return static_fields->SpecialLimitCountPLD == dispLimitCount;
}


void __fastcall ServantStatusDialog___c__DisplayClass139_0___ctor(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__0(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isUISkinLoaded = 1;
}


void __fastcall ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__1(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTerminalUISkinLoaded = 1;
}


void __fastcall ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__2(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___ctor(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___LoadBattleCharaChangeConfirmAsset_b__0(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusDialog___c__DisplayClass140_0_o *v5; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  struct System_Action_o *callback; // x8

  v5 = this;
  if ( (byte_4B18BFC & 1) == 0 )
  {
    this = (ServantStatusDialog___c__DisplayClass140_0_o *)sub_1BCAFF8(
                                                             &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                             assetData);
    byte_4B18BFC = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.cashedBattleCharaChangeConfirmAssetData = assetData,
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&_4__this->fields.cashedBattleCharaChangeConfirmAssetData,
          (int32_t)assetData,
          (int32_t)method,
          v3),
        (callback = v5->fields.callback) == 0LL)
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg),
        (this = (ServantStatusDialog___c__DisplayClass140_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass150_0___ctor(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass150_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1BCB254(this, data);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))onComplete->fields.m_target)(
    onComplete->fields.original_method_info,
    data,
    *(_QWORD *)&onComplete->fields.extra_arg);
}


void __fastcall ServantStatusDialog___c__DisplayClass152_0___ctor(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass152_0___StartTransformedStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1BCB254(this, data);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))onComplete->fields.m_target)(
    onComplete->fields.original_method_info,
    data,
    *(_QWORD *)&onComplete->fields.extra_arg);
}


void __fastcall ServantStatusDialog___c__DisplayClass163_0___ctor(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog_o *_4__this; // x0
  struct ServantStatusDialog_o *v4; // x8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4B18BFF & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18BFF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)v4->fields.battleCharaChangeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0LL, 0LL) )
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(this, v6);
  else
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
      this,
      v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__3(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.servantStatusBattleConfirmDialog) == 0LL)
    || (ServantStatusBattleConfirmDialog__Close((ServantStatusBattleConfirmDialog_o *)this, 0LL),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__4(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.battleCharaChangeConfirmDialog) == 0LL)
    || (BattleCharaChangeConfirmDialog__Close((BattleCharaChangeConfirmDialog_o *)this, 0LL),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t nowDispLimitCount; // w20
  TreasureDvcInfo_o *nowTdInfo; // x21
  SkillInfo_array *nowSkillInfoList; // x22
  ServantOverwriteStatus_o *nowStatus; // x23
  System_Int32_array *nowClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v11; // x25
  int32_t nextDispLimitCount; // w20
  TreasureDvcInfo_o *nextTdInfo; // x21
  SkillInfo_array *nextSkillInfoList; // x22
  ServantOverwriteStatus_o *nextStatus; // x23
  System_Int32_array *nextClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v17; // x26
  BattleCharaChangeConfirmListViewItem_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  BattleCharaChangeConfirmDialog_o *battleCharaChangeConfirmDialog; // x21
  BattleCharaChangeConfirmDialog_ClickDelegate_o *v23; // x22

  if ( (byte_4B18BFE & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCharaChangeConfirmListViewItem_TypeInfo, method);
    sub_1BCAFF8(&BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BCAFF8(&BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo, v4);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__, v5);
    byte_4B18BFE = 1;
  }
  nowDispLimitCount = this->fields.nowDispLimitCount;
  nowTdInfo = this->fields.nowTdInfo;
  nowSkillInfoList = this->fields.nowSkillInfoList;
  nowStatus = this->fields.nowStatus;
  nowClassSkill = this->fields.nowClassSkill;
  v11 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1BCB244(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v11,
    nowDispLimitCount,
    nowTdInfo,
    nowSkillInfoList,
    nowStatus,
    nowClassSkill,
    0LL);
  nextDispLimitCount = this->fields.nextDispLimitCount;
  nextTdInfo = this->fields.nextTdInfo;
  nextSkillInfoList = this->fields.nextSkillInfoList;
  nextStatus = this->fields.nextStatus;
  nextClassSkill = this->fields.nextClassSkill;
  v17 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1BCB244(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v17,
    nextDispLimitCount,
    nextTdInfo,
    nextSkillInfoList,
    nextStatus,
    nextClassSkill,
    0LL);
  LODWORD(nextTdInfo) = this->fields.svtId;
  LODWORD(nextSkillInfoList) = this->fields.limitCount;
  v18 = (BattleCharaChangeConfirmListViewItem_o *)sub_1BCB244(BattleCharaChangeConfirmListViewItem_TypeInfo);
  BattleCharaChangeConfirmListViewItem___ctor(v18, (int32_t)nextTdInfo, (int32_t)nextSkillInfoList, v11, v17, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (battleCharaChangeConfirmDialog = _4__this->fields.battleCharaChangeConfirmDialog,
        v23 = (BattleCharaChangeConfirmDialog_ClickDelegate_o *)sub_1BCB244(BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo),
        BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
          v23,
          (Il2CppObject *)this,
          Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__,
          0LL),
        !battleCharaChangeConfirmDialog) )
  {
    sub_1BCB254(v19, v20);
  }
  BattleCharaChangeConfirmDialog__Open(battleCharaChangeConfirmDialog, v23, v18, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass163_0_o *v2; // x19
  __int64 v3; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  TreasureDvcInfo_o *nowTdInfo; // x21
  TreasureDvcInfo_o *nextTdInfo; // x22
  _BOOL4 isTdModify; // w26
  SkillInfo_array *nowSkillInfoList; // x23
  SkillInfo_array *nextSkillInfoList; // x24
  _BOOL4 isSkillModify; // w27
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v12; // x25

  v2 = this;
  if ( (byte_4B18BFD & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass163_0_o *)sub_1BCAFF8(
                                                             &Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__,
                                                             v3);
    byte_4B18BFD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  servantStatusBattleConfirmDialog = _4__this->fields.servantStatusBattleConfirmDialog;
  nowTdInfo = v2->fields.nowTdInfo;
  nextTdInfo = v2->fields.nextTdInfo;
  isTdModify = v2->fields.isTdModify;
  nowSkillInfoList = v2->fields.nowSkillInfoList;
  nextSkillInfoList = v2->fields.nextSkillInfoList;
  isSkillModify = v2->fields.isSkillModify;
  v12 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1BCB244(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)v2,
    Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
LABEL_6:
    sub_1BCB254(this, method);
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    nowTdInfo,
    nextTdInfo,
    isTdModify,
    nowSkillInfoList,
    nextSkillInfoList,
    isSkillModify,
    v12,
    v2->fields.svtId,
    v2->fields.nowDispLimitCount,
    v2->fields.nextDispLimitCount,
    0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass165_0___ctor(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__0(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_33934572((ServantStatusCharaGraphListViewManager_o *)this, 2, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__1(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass165_0_o *v4; // x20
  __int64 v5; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x21
  System_Action_o *_9__2; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B18C00 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    this = (ServantStatusDialog___c__DisplayClass165_0_o *)sub_1BCAFF8(
                                                             &Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__,
                                                             v5);
    byte_4B18C00 = 1;
  }
  if ( v4->fields.isUpdateParam )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_11;
    charaGraphListViewManager = _4__this->fields.charaGraphListViewManager;
    _9__2 = v4->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__,
        0LL);
      v4->fields.__9__2 = _9__2;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v9, v10);
    }
    if ( !charaGraphListViewManager )
LABEL_11:
      sub_1BCB254(this, data);
    ServantStatusCharaGraphListViewManager__SetMode_33934676(charaGraphListViewManager, 3, _9__2, 0LL);
  }
  this = (ServantStatusDialog___c__DisplayClass165_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  ServantStatusDialog__EndLoadChangeBattleResource((ServantStatusDialog_o *)this, data, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_33934572((ServantStatusCharaGraphListViewManager_o *)this, 2, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass229_0___ctor(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass229_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B18C01 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    sub_1BCAFF8(&Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__1__, v7);
    byte_4B18C01 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C1B45C(v9);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C1B45C(v9);
      _4__this = **(struct ServantStatusDialog_o ***)(v11 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BCB254(_4__this, isDecide);
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1B45C(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1C1B45C(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30764080(klass, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass229_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass229_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21

  v2 = this;
  if ( (byte_4B18C02 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass229_0_o *)sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4B18C02 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v6,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1BCB254(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v6, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass233_0___ctor(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
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

  if ( (byte_4B18C03 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B18C03 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30764080(mainInfo, 0LL, 0LL);
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
    sub_1BCB254(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v20, v18, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
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

  if ( (byte_4B18C04 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4B18C04 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30764080(mainInfo, 0LL, 0LL);
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
    sub_1BCB254(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37110808((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCB244(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v20, v18, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v20, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass251_0___ctor(
        ServantStatusDialog___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantStatusDialog___c__DisplayClass251_0___EnableSpecialCostume_b__1(
        ServantStatusDialog___c__DisplayClass251_0_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  void *servantCostumeMaster; // x0

  servantCostumeMaster = this->fields.servantCostumeMaster;
  if ( !servantCostumeMaster
    || (servantCostumeMaster = ServantCostumeMaster__GetEntity(
                                 (ServantCostumeMaster_o *)servantCostumeMaster,
                                 this->fields.svtId,
                                 dispLimitCount,
                                 0LL)) == 0LL )
  {
    sub_1BCB254(servantCostumeMaster, *(_QWORD *)&dispLimitCount);
  }
  return (System_String_o *)*((_QWORD *)servantCostumeMaster + 4);
}