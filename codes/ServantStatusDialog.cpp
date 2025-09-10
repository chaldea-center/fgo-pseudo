void ServantStatusDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantStatusDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantStatusDialog_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2302A & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    sub_1C2D490(&StringLiteral_3108/*"BattleCharaChangeConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_12741/*"ServantStatus/BattleCharaChangeConfirm"*/);
    sub_1C2D490(&StringLiteral_409/*"#4C4C4C"*/);
    byte_4C2302A = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_409/*"#4C4C4C"*/;
  sub_1C2D434((CGThumbnailListItem_o *)ServantStatusDialog_TypeInfo->static_fields, StringLiteral_409/*"#4C4C4C"*/, v1, v2);
  v3 = StringLiteral_12741/*"ServantStatus/BattleCharaChangeConfirm"*/;
  static_fields = ServantStatusDialog_TypeInfo->static_fields;
  static_fields->BattleCharaChangeConfirmLoadAssetPath = (struct System_String_o *)StringLiteral_12741/*"ServantStatus/BattleCharaChangeConfirm"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->BattleCharaChangeConfirmLoadAssetPath, v3, v5, v6);
  v7 = StringLiteral_3108/*"BattleCharaChangeConfirmDialog"*/;
  v8 = ServantStatusDialog_TypeInfo->static_fields;
  v8->BattleCharaChangeConfirmDialogPrefabName = (struct System_String_o *)StringLiteral_3108/*"BattleCharaChangeConfirmDialog"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->BattleCharaChangeConfirmDialogPrefabName, v7, v9, v10);
}


void ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C23029 & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C23029 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v3 = (struct System_Boolean_array *)sub_1C2D538(bool___TypeInfo, 4);
  this->fields.tabInitList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tabInitList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dictChangeSvtVoiceIdList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestVoiceDataList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceDataList, (int32_t)v12, v13, v14);
  v15 = StringLiteral_24695/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24695/*"wait"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultAnimationName, v15, v16, v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4C22FD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22FD2 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, v5, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  ServantStatusDialog__InitBattleActor(this, v8);
}


void ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UICamera_c *v2; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v5; // x19
  UnityEngine_Object_o *dragged; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x20
  UnityEngine_Object_o *current; // x19
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UnityEngine_GameObject_o *v16; // x19
  Il2CppObject *v17; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UICamera_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UICamera_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _BYTE v40[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v41[4]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v42[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v43[4]; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v44[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C22FC9 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TouchEffectManager_TypeInfo);
    sub_1C2D490(&UICamera_TypeInfo);
    sub_1C2D490(&StringLiteral_9886/*"OnDragEnd"*/);
    sub_1C2D490(&StringLiteral_9908/*"OnHover"*/);
    sub_1C2D490(&StringLiteral_9939/*"OnPress"*/);
    sub_1C2D490(&StringLiteral_9949/*"OnScrollStop"*/);
    byte_4C22FC9 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v2 = UICamera_TypeInfo;
  }
  currentTouch = v2->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__UnPress(0);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(last, 0, 0) )
    {
      v5 = currentTouch->fields.last;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v5, (System_String_o *)StringLiteral_9886/*"OnDragEnd"*/, 0, 0);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0, 0) )
    {
      v10 = currentTouch->fields.dragged;
      v44[0] = 0;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44, v7, v8, v9);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v10, (System_String_o *)StringLiteral_9939/*"OnPress"*/, v11, 0);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
    {
      v16 = currentTouch->fields.current;
      v43[0] = 1;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v13, v14, v15);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v16, (System_String_o *)StringLiteral_9908/*"OnHover"*/, v17, 0);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0, 0) )
  {
    v42[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v42, v19, v20, v21);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9939/*"OnPress"*/, v22, 0);
    v41[0] = 1;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v41, v23, v24, v25);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9908/*"OnHover"*/, v26, 0);
    v40[0] = 0;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v40, v27, v28, v29);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9949/*"OnScrollStop"*/, v30, 0);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0, 0);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->current, 0, v32, v33);
  v34 = UICamera_TypeInfo->static_fields;
  v34->currentCamera = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v34->currentCamera, 0, v35, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->currentTouch = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v37->currentTouch, 0, v38, v39);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void ServantStatusDialog__ChangeBattleActorSelectIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  __int64 v8; // x1
  __int64 DispLimitCount; // x0
  __int64 v10; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusBattleListViewItem_o *v12; // x0
  __int64 v13; // x1
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C22FEB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    byte_4C22FEB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             0)) == 0 )
  {
    sub_1C2D6EC(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C2D6EC(v4, v5);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v17.fields._current, 0);
    if ( !Item )
      sub_1C2D6EC(0, v8);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C2D6EC(DispLimitCount, v10);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v12 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, 0);
      if ( !v12 )
        sub_1C2D6EC(0, v13);
      index = (unsigned int)v12->fields.index;
      v15 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v15 )
        sub_1C2D6EC(0, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v15, index, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


void ServantStatusDialog__ChangeBattleResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  SkillInfo_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  ServantLimitImageMaster_o *v12; // x21
  int32_t v13; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  const MethodInfo *v15; // x2
  struct ServantStatusListViewItem_o *v16; // x8
  struct System_Int32_array *dispSelectList; // x8
  __int64 confirmDispLv; // x9
  __int64 *v19; // x21
  __int64 *v20; // x22
  System_Int32_array *ClassSkill; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Int32_array *v24; // x0
  System_Collections_ICollection_o **v25; // x24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  ServantOverwriteStatus_o *v28; // x8
  bool v29; // w25
  System_Collections_ICollection_o *v30; // x0
  _BOOL4 v31; // w26
  bool v32; // w23
  __int64 i; // x25
  unsigned __int64 v34; // x27
  __int64 v35; // x8
  __int64 v36; // x9
  SkillInfo_o *v37; // x0
  bool v38; // w2
  int v39; // w8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x19
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2

  if ( (byte_4C22FDB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
    byte_4C22FDB = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass163_0___ctor((ServantStatusDialog___c__DisplayClass163_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_55;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  mainInfo = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
  if ( !mainInfo )
    goto LABEL_55;
  if ( !mainInfo->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, v10);
    return;
  }
  *(_DWORD *)(v5 + 68) = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.mainInfo )
    goto LABEL_55;
  v11 = *(_DWORD *)(v5 + 68);
  v12 = (ServantLimitImageMaster_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !v12 )
    goto LABEL_55;
  *(_DWORD *)(v5 + 72) = ServantLimitImageMaster__GetServantLimitCountSealAfter(v12, v11, (int32_t)mainInfo, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v13 = *(_DWORD *)(v5 + 68);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(mainInfo, 0);
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              v12,
                                              v13,
                                              ConvertOverwriteDispImageLimitCount,
                                              0);
  *(_DWORD *)(v5 + 76) = (_DWORD)mainInfo;
  v16 = this->fields.mainInfo;
  if ( !v16 )
    goto LABEL_55;
  dispSelectList = v16->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_55;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= LODWORD(dispSelectList->max_length) )
LABEL_56:
    sub_1C2D6F4(mainInfo, v7, v15);
  *(_DWORD *)(v5 + 80) = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                           v12,
                           *(_DWORD *)(v5 + 68),
                           dispSelectList->m_Items[confirmDispLv],
                           0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetNpInfo_35368000(mainInfo, (TreasureDvcInfo_o **)(v5 + 24), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetNpInfo_35368000(mainInfo, (TreasureDvcInfo_o **)(v5 + 32), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v19 = (__int64 *)(v5 + 48);
  ServantStatusListViewItem__GetSkillInfo_35367092(mainInfo, (SkillInfo_array **)(v5 + 48), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v20 = (__int64 *)(v5 + 56);
  ServantStatusListViewItem__GetSkillInfo_35367092(mainInfo, (SkillInfo_array **)(v5 + 56), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v5 + 88), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v5 + 104), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  ClassSkill = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v5 + 76), 0);
  *(_QWORD *)(v5 + 96) = ClassSkill;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 96), (int32_t)ClassSkill, v22, v23);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_55;
  v24 = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v5 + 80), 0);
  *(_QWORD *)(v5 + 112) = v24;
  v25 = (System_Collections_ICollection_o **)(v5 + 112);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 112), (int32_t)v24, v26, v27);
  mainInfo = *(ServantStatusListViewItem_o **)(v5 + 24);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)TreasureDvcInfo__Equals(
                                                    (TreasureDvcInfo_o *)mainInfo,
                                                    *(TreasureDvcInfo_o **)(v5 + 32),
                                                    0),
        v28 = *(ServantOverwriteStatus_o **)(v5 + 88),
        *(_BYTE *)(v5 + 40) = ((unsigned __int8)mainInfo & 1) == 0,
        !v28) )
  {
LABEL_55:
    sub_1C2D6EC(mainInfo, v7);
  }
  v29 = ServantOverwriteStatus__Equals(v28, *(ServantOverwriteStatus_o **)(v5 + 104), 0);
  v30 = *(System_Collections_ICollection_o **)(v5 + 96);
  *(_BYTE *)(v5 + 64) = 0;
  v31 = 0;
  if ( !BasicHelper__IsNullOrEmpty(v30, 0) )
    v31 = !BasicHelper__IsNullOrEmpty(*v25, 0)
       && !System_Linq_Enumerable__SequenceEqual_int_(
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 96),
             (System_Collections_Generic_IEnumerable_TSource__o *)*v25,
             (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v32 = !v29;
  for ( i = 4; ; ++i )
  {
    mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v34 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v34 >= SLODWORD(mainInfo->fields.commandCodeCommentEntity[1].klass) )
    {
      v39 = *(unsigned __int8 *)(v5 + 64);
      goto LABEL_45;
    }
    v35 = *v19;
    if ( !*v19 )
      goto LABEL_55;
    if ( v34 >= *(unsigned int *)(v35 + 24) )
      goto LABEL_56;
    v36 = *v20;
    if ( !*v20 )
      goto LABEL_55;
    if ( v34 >= *(unsigned int *)(v36 + 24) )
      goto LABEL_56;
    v37 = *(SkillInfo_o **)(v35 + 8 * i);
    v7 = *(SkillInfo_o **)(v36 + 8 * i);
    if ( v37 )
    {
      v38 = 1;
    }
    else
    {
      if ( !v7 )
        continue;
      v37 = *(SkillInfo_o **)(v36 + 8 * i);
      v7 = 0;
      v38 = 0;
    }
    if ( !SkillInfo__Equals(v37, v7, v38, 0) )
      break;
  }
  v39 = 1;
  *(_BYTE *)(v5 + 64) = 1;
LABEL_45:
  if ( v39 | *(unsigned __int8 *)(v5 + 40) )
  {
    if ( !v31 && !v32 )
      goto LABEL_53;
    if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    {
      ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(this, (const MethodInfo *)v7);
      battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      {
        ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
          (ServantStatusDialog___c__DisplayClass163_0_o *)v5,
          0);
        return;
      }
LABEL_53:
      ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        (ServantStatusDialog___c__DisplayClass163_0_o *)v5,
        0);
    }
    else
    {
      v41 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__,
        0);
      ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(this, v41, v42);
    }
  }
  else
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeBattleVoice(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4C2300A & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2300A = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)this, 4, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeCommandResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  _DWORD *monitor; // x8
  System_Action_object__o *v6; // x20
  const MethodInfo *v7; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C23007 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AssetData__TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__);
    byte_4C23007 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v6 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, 0);
  ServantStatusDialog__StartCommandCardLoad((ServantStatusDialog_o *)v4, (System_Action_AssetData__o *)v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeFaceResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4C2300E & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2300E = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)this, 5, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangePortraitResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4C23011 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23011 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)this, 7, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C23009 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23009 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)mainInfo, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__Close(ServantStatusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_String_o *statusLoadAsset; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *cardLoadAsset; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *battleLoadAsset; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v24; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v30; // w2
  int v31; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C22FE9 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C22FE9 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  statusTabListViewManager = this->fields.statusTabListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusListViewManager__DestroyList(statusTabListViewManager, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)statusTabListViewManager,
    0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.charaGraphListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabListViewManager,
    (const MethodInfo *)callback);
  this->fields.mainInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, 0, v6, v7);
  ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(this, v8);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0);
    this->fields.statusLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, 0, v10, v11);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0);
    this->fields.cardLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardLoadAsset, 0, v13, v14);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0);
    this->fields.battleLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, 0, v16, v17);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0);
    this->fields.transformedStatusLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.transformedStatusLoadAsset, 0, v20, v21);
  }
  ServantStatusDialog__StopVoice(this, v18);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v24 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0);
    this->fields.loadVoiceData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadVoiceData, 0, v26, v27);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1C2D6EC(statusTabListViewManager, callback);
  v30 = voiceDataList->fields._size;
  v31 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v31;
  if ( v30 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v30, 0);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !statusTabListViewManager )
    goto LABEL_44;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)statusTabListViewManager, 2, 0, 0);
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


System_Collections_IEnumerator_o *ServantStatusDialog__CoWaitForEndOfFrame(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23000 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo);
    byte_4C23000 = 1;
  }
  v4 = sub_1C2D6DC(ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__207___ctor((ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4C22FD9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FD9 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.battleChr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v7, 0);
  }
}


bool ServantStatusDialog__EnableSpecialCostume(
        ServantStatusDialog_o *this,
        System_String_o **costumeName,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ServantStatusListViewItem_o *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dispSelectList; // x22
  ServantStatusDialog___c_c *v16; // x0
  System_Func_int__bool__o *_9__251_0; // x23
  System_String_o *v18; // x21
  Il2CppObject *v19; // x24
  struct ServantStatusDialog___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x22
  System_Func_T__TResult__o *v24; // x23
  System_Collections_Generic_IEnumerable_string__o *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C23027 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__string__TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog___c__EnableSpecialCostume_b__251_0__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass251_0__EnableSpecialCostume_b__1__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass251_0_TypeInfo);
    sub_1C2D490(&ServantStatusDialog___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11900/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_25350/*"、"*/);
    byte_4C23027 = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass251_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass251_0___ctor((ServantStatusDialog___c__DisplayClass251_0_o *)v5, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)LocalizationManager__ContainsKey(
                                                   (System_String_o *)StringLiteral_11900/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/,
                                                   0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_21;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( !userSvtEntity || !UserServantEntity__IsHeroine(userSvtEntity, 0) )
  {
LABEL_21:
    *costumeName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C2D434((CGThumbnailListItem_o *)costumeName, StringLiteral_1/*""*/, v8, v9);
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = Master_object,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v12, v13),
        (Master_object = this->fields.mainInfo) == 0)
    || (Master_object = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(Master_object, 0),
        *(_DWORD *)(v5 + 24) = (_DWORD)Master_object,
        (v14 = this->fields.mainInfo) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(Master_object, v7);
  }
  dispSelectList = (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.dispSelectList;
  v16 = ServantStatusDialog___c_TypeInfo;
  if ( !ServantStatusDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo);
    v16 = ServantStatusDialog___c_TypeInfo;
  }
  _9__251_0 = v16->static_fields->__9__251_0;
  v18 = (System_String_o *)StringLiteral_25350/*"、"*/;
  if ( !_9__251_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantStatusDialog___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__251_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__251_0, v19, Method_ServantStatusDialog___c__EnableSpecialCostume_b__251_0__, 0);
    static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    static_fields->__9__251_0 = _9__251_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__251_0, (int32_t)_9__251_0, v21, v22);
  }
  v23 = System_Linq_Enumerable__Where_int_(
          dispSelectList,
          (System_Func_TSource__bool__o *)_9__251_0,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  v24 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass251_0__EnableSpecialCostume_b__1__,
    0);
  v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v23,
                                                              (System_Func_TSource__TResult__o *)v24,
                                                              (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__string___);
  v26 = System_String__Join_63500440(v18, v25, 0);
  *costumeName = v26;
  sub_1C2D434((CGThumbnailListItem_o *)costumeName, (int32_t)v26, v27, v28);
  return !System_String__IsNullOrEmpty(*costumeName, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__EndBattleConfirm(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
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
    if ( !LODWORD(tabInitList->max_length) )
      sub_1C2D6F4(this, isDecide, method);
    tabInitList->m_Items[0] = 0;
    this = (ServantStatusDialog_o *)this->fields.statusTabListViewManager;
    if ( !this )
LABEL_7:
      sub_1C2D6EC(this, isDecide);
    ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)this, 0);
    ServantStatusDialog__SetChangeBattleResource(v4, 1, v5);
  }
}


void ServantStatusDialog__EndCardLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C2300B & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2300B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)Instance, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1C2D6EC(Instance, v5);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *battleActor; // x8

  if ( (byte_4C22FDE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FDE = 1;
  }
  this->fields.isBattlePlay = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_11;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_11;
  v6 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v6,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0),
        (battleActor = this->fields.battleActor) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(mainInfo, v4);
  }
  BattleFBXComponent__SetEvolutionLevel(battleActor, v6, (int32_t)mainInfo, 0);
}


void ServantStatusDialog__EndCloseConfirmSelectFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseConfirmSelectPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseConfirmServantQuest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseSelectCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22FF4 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C22FF4 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1C2D6EC(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22FF2 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C22FF2 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1C2D6EC(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCommandCardLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C22FCF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AssetData__TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndTransformedStatusLoad__);
    byte_4C22FCF = 1;
  }
  v4 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndTransformedStatusLoad__, 0);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  void *baseObject; // x0
  UnityEngine_Object_o *changeTransformButton; // x20
  __int64 v5; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s0
  int32_t v14; // w22
  UnityEngine_GameObject_o *v15; // x20
  int v16; // w21
  UnityEngine_GameObject_o *v17; // x0
  float v18; // s0
  int32_t v19; // w22
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  float v22; // s0
  bool v23; // w1
  struct ServantStatusListViewItem_o *v24; // x8
  ServantStatusListViewItem_o **p_mainInfo; // x26
  int32_t v26; // w20
  int32_t v27; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v30; // x22
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v32; // x21
  int32_t kind; // w8
  bool v34; // w8
  bool v35; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v38; // x8
  bool *m_Items; // x10
  ServantCommentMaster_o *v40; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v45; // x1
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v47; // x21
  UnityEngine_Object_o *v48; // x21
  const MethodInfo *v49; // x2
  UILabel_o *v50; // x21
  ServantLimitAddMaster_o *v51; // x21
  int32_t v52; // w8
  char v53; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  ServantStatusListViewItem_o *v56; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v59; // x22
  int32_t v60; // w2
  int32_t limitCount; // w1
  int32_t v62; // w8
  ServantStatusListViewItem_o *v63; // x9
  struct UserServantEntity_o *v64; // x0
  int32_t v65; // w21
  int32_t v66; // w21
  ServantLimitImageMaster_o *v67; // x22
  struct ServantStatusListViewItem_o *v68; // x8
  int32_t v69; // w2
  int32_t v70; // w8
  struct ServantStatusListViewItem_o *v71; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v73; // w1
  int32_t v74; // w2
  struct ServantLeaderInfo_o *v75; // x9
  System_String_o *v76; // x1
  ServantLimitImageMaster_o *v77; // x21
  struct UserServantCollectionEntity_o *v78; // x8
  struct UIRangeLabel_o *v79; // x21
  struct ServantEntity_o *v80; // x22
  __int64 v81; // x23
  __int64 v82; // x24
  int32_t v83; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  ServantStatusListViewItem_o *v85; // x8
  ServantStatusListViewItem_o *v86; // x8
  struct ServantEntity_o *v87; // x8
  struct ServantEntity_o *v88; // x8
  int32_t GrandClassId; // w21
  UILabel_o *v90; // x0
  UserServantEntity_o *v91; // x0
  UserServantCollectionEntity_o *v92; // x0
  struct ServantStatusListViewItem_o *v93; // x8
  struct UILabel_o *v94; // x21
  UnityEngine_Object_o *battleExplanationLabel; // x21
  ServantStatusListViewItem_o *v96; // x8
  ServantLimitImageMaster_o *v97; // x21
  struct ServantStatusListViewItem_o *v98; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v100; // x22
  __int64 v101; // x23
  int32_t v102; // w22
  struct UILabel_o *v103; // x23
  System_String_o *mText; // x25
  System_String_o *v105; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v107; // x0
  System_String_o *v108; // x1
  UILabel_o *v109; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v111; // x21
  __int64 *v112; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v114; // x0
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x2
  int32_t v117; // w8
  unsigned int v118; // w8
  const MethodInfo *v119; // x1
  unsigned int v120; // w8
  bool v121; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_4C22FC7 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_11897/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_1C2D490(&StringLiteral_11898/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_1C2D490(&StringLiteral_11899/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1C2D490(&StringLiteral_11905/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_1C2D490(&StringLiteral_11904/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_1C2D490(&StringLiteral_4027/*"CancelInput"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_6000/*"EndLoadInit"*/);
    byte_4C22FC7 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_265;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseObject = (void *)UnityEngine_Object__op_Inequality(changeTransformButton, 0, 0);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_265;
    if ( mainInfo->fields._IsTransformServant_k__BackingField )
    {
      baseObject = this->fields.statusButton;
      if ( !baseObject )
        goto LABEL_265;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.statusButton )
        goto LABEL_265;
      v7 = (UnityEngine_GameObject_o *)baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v7, LocalPositionX + 0.0, 0);
      baseObject = this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_265;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.profileButton )
        goto LABEL_265;
      v11 = (UnityEngine_GameObject_o *)baseObject;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0);
      v13 = GameObjectExtensions__GetLocalPositionX(v12, 0);
      GameObjectExtensions__SetLocalPositionX(v11, v13 + (float)changeTransformAddTabMargin, 0);
      baseObject = this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_265;
      v14 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.battleButton )
        goto LABEL_265;
      v15 = (UnityEngine_GameObject_o *)baseObject;
      v16 = v14 + changeTransformAddTabMargin;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0);
      v18 = GameObjectExtensions__GetLocalPositionX(v17, 0);
      GameObjectExtensions__SetLocalPositionX(v15, v18 + (float)v16, 0);
      baseObject = this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_265;
      v19 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.voiceButton )
        goto LABEL_265;
      v20 = (UnityEngine_GameObject_o *)baseObject;
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0);
      v22 = GameObjectExtensions__GetLocalPositionX(v21, 0);
      GameObjectExtensions__SetLocalPositionX(v20, v22 + (float)(v19 + v16), 0);
      baseObject = this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_265;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_265;
      v23 = 1;
    }
    else
    {
      baseObject = this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_265;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_265;
      v23 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, v23, 0);
  }
  v24 = this->fields.mainInfo;
  if ( !v24 )
    goto LABEL_265;
  p_mainInfo = &this->fields.mainInfo;
  if ( v24->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v26 = 0;
        v27 = 21;
        break;
      case 4:
      case 0x16:
        v26 = 0;
        v27 = 22;
        break;
      case 5:
      case 0x17:
        v26 = 0;
        v27 = 23;
        break;
      case 6:
      case 0x18:
        v26 = 0;
        v27 = 24;
        break;
      case 7:
      case 0x19:
        v26 = 0;
        v27 = 25;
        break;
      case 8:
      case 0x1A:
        v26 = 0;
        v27 = 26;
        break;
      case 9:
      case 0x1B:
        v26 = 0;
        v27 = 27;
        break;
      case 0x1D:
      case 0x20:
        v26 = 0;
        v27 = 32;
        break;
      default:
        v26 = 0;
        v27 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v24->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_265;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (void *)TutorialFlag__Get_40206092(106, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v30 = this;
    else
      v30 = 0;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_265;
      favoriteUserSvtId = (*p_mainInfo)->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v32 = v30;
      else
        v32 = 0;
      if ( favoriteUserSvtId < 1 )
      {
        v34 = 0;
        v32 = this;
        if ( !this )
          goto LABEL_265;
      }
      else
      {
        baseObject = (void *)SvtType__IsOrganization(type, 0);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          kind = this->fields.kind;
          if ( kind == 3 )
          {
            v34 = 0;
            if ( !v32 )
              goto LABEL_265;
          }
          else
          {
            v34 = kind != 12;
            if ( !v32 )
              goto LABEL_265;
          }
        }
        else
        {
          v34 = 0;
          v32 = v30;
          if ( !v30 )
            goto LABEL_265;
        }
      }
    }
    else
    {
      v34 = 0;
      v32 = this;
    }
    v32->fields.isUseFavorite = v34;
    v35 = SvtType__IsOrganization(type, 0) && this->fields.kind != 12;
    this->fields.isUsePush = v35;
    baseObject = (void *)SvtType__IsEnemyCollectionDetail(type, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v26 = 0;
      v27 = 28;
    }
    else
    {
      baseObject = (void *)SvtType__IsServantEquip(type, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v62 = this->fields.kind;
        switch ( v62 )
        {
          case 3:
          case 12:
            v26 = 0;
            v27 = 12;
            break;
          case 4:
          case 13:
            v26 = 0;
            v27 = 13;
            break;
          case 5:
          case 14:
            v26 = 0;
            v27 = 14;
            break;
          case 6:
          case 15:
            v26 = 0;
            v27 = 15;
            break;
          case 7:
          case 16:
            v26 = 0;
            v27 = 16;
            break;
          case 8:
          case 17:
            v26 = 0;
            v27 = 17;
            break;
          case 9:
          case 18:
            v26 = 0;
            v27 = 18;
            break;
          case 19:
            v26 = 0;
            v27 = 19;
            break;
          case 29:
          case 31:
            v26 = 0;
            v27 = 31;
            break;
          default:
            v121 = v62 == 33;
            v27 = 11;
            v26 = v121;
            break;
        }
      }
      else
      {
        baseObject = (void *)SvtType__IsServant(type, 0);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v70 = this->fields.kind, v70 == 36) )
        {
          v26 = 0;
          goto LABEL_64;
        }
        v26 = 0;
        if ( v70 == 29 )
          v27 = 30;
        else
          v27 = 10;
      }
    }
  }
  this->fields.kind = v27;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_265;
  max_length_low = LODWORD(tabInitList->max_length);
  v38 = 0;
  m_Items = tabInitList->m_Items;
  do
  {
    if ( v38 >= max_length_low )
      sub_1C2D6F4(baseObject, method, v5);
    m_Items[v38++] = 0;
  }
  while ( v38 != 4 );
  if ( !*p_mainInfo )
    goto LABEL_265;
  if ( (*p_mainInfo)->fields.userSvtCollectionEntity )
  {
    baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_265;
    baseObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)baseObject,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*p_mainInfo )
      goto LABEL_265;
    v40 = (ServantCommentMaster_o *)baseObject;
    baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
    if ( !v40 )
      goto LABEL_265;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v40, (int32_t)baseObject, 0);
    this->fields.newProfileList = NewProfileEntities;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.newProfileList, (int32_t)NewProfileEntities, v42, v43);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_265;
    baseObject = this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_265;
    ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0);
  }
  else
  {
    baseObject = this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_265;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v45);
  baseObject = this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_265;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0, 1, 0, 0, 0);
  baseObject = this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_265;
  TitleInfoControl__changeTitleInfo_39625124((TitleInfoControl_o *)baseObject, 1, 0, 0, 0);
  if ( !*p_mainInfo )
    goto LABEL_265;
  commandCodeEntity = (*p_mainInfo)->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*p_mainInfo )
      goto LABEL_265;
    v51 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
    if ( !v51 )
      goto LABEL_265;
    baseObject = (void *)ServantLimitAddMaster__IsOverwriteSvtDetailName(v51, (int32_t)baseObject, 0);
    v52 = this->fields.kind;
    v53 = (char)baseObject;
    if ( (v52 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (void *)OptionManager__GetSpoilerSetting(0);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        if ( !*p_mainInfo )
          goto LABEL_265;
        servantLeaderInfo = (*p_mainInfo)->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_265;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (void *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v56 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        if ( (v53 & 1) != 0 )
        {
          baseObject = v56->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_265;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0);
          baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_265;
          baseObject = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseObject,
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v59 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
          if ( !v59 )
            goto LABEL_265;
          baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v59,
                                 (int32_t)baseObject,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v60 = (int)baseObject;
          baseObject = (*p_mainInfo)->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_265;
          limitCount = -1;
        }
        else
        {
          v75 = v56->fields.servantLeaderInfo;
          if ( !v75 )
            goto LABEL_265;
          baseObject = v56->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_265;
          limitCount = v75->fields.limitCount;
          v60 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v60, 0, 0);
      }
      baseObject = this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_265;
      v76 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v76, 0, 1, 0, 0, 0);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (void *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0, 0);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
LABEL_215:
        battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0, 0) )
          goto LABEL_245;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v96 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        if ( v96->fields.userSvtEntity )
        {
          v97 = (ServantLimitImageMaster_o *)baseObject;
          ServantStatusDialog__SetBattleCharaTabExplanation(this, method);
          v98 = this->fields.mainInfo;
          if ( !v98 )
            goto LABEL_265;
          userSvtEntity = v98->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_265;
          v101 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v100 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v123.fields.currentCryptoKey = v101;
          *(_QWORD *)&v123.fields.fakeValue = v100;
          baseObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v123, 0);
          if ( !v97 )
            goto LABEL_265;
          v102 = (int)baseObject;
          baseObject = (void *)ServantLimitImageMaster__IsServantLimitCountSeal(v97, (int32_t)baseObject, 3, 0);
          if ( ((unsigned __int8)baseObject & 1) == 0 )
            goto LABEL_238;
          baseObject = ServantLimitImageMaster__GetServantStatusExplanationText(
                         v97,
                         (System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                         v102,
                         0);
          v103 = this->fields.battleExplanationLabel;
          if ( !v103 )
            goto LABEL_265;
          mText = v103->fields.mText;
          v105 = (System_String_o *)baseObject;
          LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          v97,
                                                          v102,
                                                          3,
                                                          0,
                                                          0);
          v107 = System_String__Format(v105, LimitCountSealedServantName, 0);
          v108 = System_String__Concat_63457864(mText, v107, 0);
          v109 = v103;
        }
        else
        {
          userSvtCollectionEntity = v96->fields.userSvtCollectionEntity;
          v111 = this->fields.battleExplanationLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( userSvtCollectionEntity )
            v112 = &StringLiteral_11897/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
          else
            v112 = &StringLiteral_11898/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
          baseObject = LocalizationManager__Get((System_String_o *)*v112, 0);
          if ( !v111 )
            goto LABEL_265;
          v108 = (System_String_o *)baseObject;
          v109 = v111;
        }
        UILabel__set_text(v109, v108, 0);
LABEL_238:
        if ( !*p_mainInfo )
          goto LABEL_265;
        baseObject = this->fields.battleTransformNameSprite;
        if ( !baseObject )
          goto LABEL_265;
        IsTransformServant_k__BackingField = (*p_mainInfo)->fields._IsTransformServant_k__BackingField;
        baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
        if ( !baseObject )
          goto LABEL_265;
        if ( IsTransformServant_k__BackingField )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
          baseObject = this->fields.battleExplanationLabel;
          if ( !baseObject )
            goto LABEL_265;
          v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
          GameObjectExtensions__SetLocalPositionY(v114, 177.0, 0);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0);
        }
        goto LABEL_245;
      }
      v85 = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_265;
      if ( !v85->fields._IsTempGrandServant_k__BackingField )
      {
        v91 = v85->fields.userSvtEntity;
        if ( v91 )
        {
          baseObject = (void *)UserServantEntity__IsGrandServant(v91, 0);
          if ( ((unsigned __int8)baseObject & 1) == 0 )
            goto LABEL_203;
        }
        else
        {
          v92 = v85->fields.userSvtCollectionEntity;
          if ( v92 )
          {
            baseObject = (void *)UserServantCollectionEntity__IsGrandServant(v92, 0);
            if ( ((unsigned __int8)baseObject & 1) == 0 )
              goto LABEL_203;
          }
          else
          {
            baseObject = v85->fields.servantLeaderInfo;
            if ( !baseObject )
              goto LABEL_203;
            baseObject = (void *)ServantLeaderInfo__get_IsGrandSvt((ServantLeaderInfo_o *)baseObject, 0);
            if ( ((unsigned __int8)baseObject & 1) == 0 )
              goto LABEL_203;
          }
        }
      }
      v86 = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_265;
      if ( !v86->fields._IsForceNotGrand_k__BackingField )
      {
        baseObject = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v86 = *p_mainInfo;
          if ( !*p_mainInfo )
            goto LABEL_265;
          baseObject = BalanceConfig_TypeInfo;
        }
        v87 = v86->fields.svtEntity;
        if ( !v87 )
          goto LABEL_265;
        baseObject = (void *)System_Linq_Enumerable__Contains_int_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)baseObject + 23)
                                                                                     + 1208LL),
                               v87->fields.classId,
                               (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v88 = (*p_mainInfo)->fields.svtEntity;
          if ( !v88 )
            goto LABEL_265;
          if ( !baseObject )
            goto LABEL_265;
          GrandClassId = GrandGraphDetailMaster__GetGrandClassId(
                           (GrandGraphDetailMaster_o *)baseObject,
                           v88->fields.classId,
                           0);
          baseObject = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
          if ( !baseObject )
            goto LABEL_265;
          baseObject = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
                         GrandClassId,
                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
          if ( !baseObject || !this->fields.servantClassNameLabel )
            goto LABEL_265;
          method = (const MethodInfo *)*((_QWORD *)baseObject + 3);
          v90 = this->fields.servantClassNameLabel;
          goto LABEL_214;
        }
      }
LABEL_203:
      v93 = this->fields.mainInfo;
      if ( !v93 )
        goto LABEL_265;
      baseObject = v93->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
      v94 = this->fields.servantClassNameLabel;
      baseObject = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0);
      }
      else
      {
        if ( !*p_mainInfo )
          goto LABEL_265;
        baseObject = (*p_mainInfo)->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_265;
        baseObject = ServantEntity__getClassName((ServantEntity_o *)baseObject, 0);
      }
      method = (const MethodInfo *)baseObject;
      if ( !v94 )
        goto LABEL_265;
      v90 = v94;
LABEL_214:
      UILabel__set_text(v90, (System_String_o *)method, 0);
      goto LABEL_215;
    }
    if ( (unsigned int)(v52 - 6) <= 2 )
    {
      v71 = this->fields.mainInfo;
      if ( !v71 )
        goto LABEL_265;
      baseObject = v71->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v53 & 1) != 0 )
      {
        v73 = -1;
        v74 = 0;
      }
      else
      {
        v74 = -1;
        v73 = 0;
      }
      baseObject = ServantEntity__getName((ServantEntity_o *)baseObject, v73, v74, 0, 0);
      if ( !servantNameRangeLabel )
        goto LABEL_265;
      v76 = (System_String_o *)baseObject;
      baseObject = servantNameRangeLabel;
      goto LABEL_174;
    }
    v63 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_265;
    v64 = v63->fields.userSvtEntity;
    if ( v64 )
    {
      if ( (v53 & 1) == 0 )
      {
        v79 = this->fields.servantNameRangeLabel;
        v80 = v63->fields.svtEntity;
        v82 = *(_QWORD *)&v64->fields.limitCount.fields.currentCryptoKey;
        v81 = *(_QWORD *)&v64->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v82;
        *(_QWORD *)&v122.fields.fakeValue = v81;
        baseObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v122, 0);
        if ( !v80 )
          goto LABEL_265;
        v83 = (int)baseObject;
        v69 = -1;
        baseObject = v80;
        goto LABEL_172;
      }
      v65 = UserServantEntity__getCardImageLimitCount(v64, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v66 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v65, 0);
      baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_265;
      baseObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseObject,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*p_mainInfo )
        goto LABEL_265;
      v67 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
      if ( !v67 )
        goto LABEL_265;
      baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(v67, (int32_t)baseObject, v66, 0);
      v68 = this->fields.mainInfo;
      if ( !v68 )
        goto LABEL_265;
      v69 = (int)baseObject;
      baseObject = v68->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
    }
    else
    {
      if ( (v53 & 1) == 0 )
      {
        baseObject = v63->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_265;
        v79 = this->fields.servantNameRangeLabel;
        v83 = -1;
        v69 = -1;
        goto LABEL_172;
      }
      if ( v63->fields.userSvtCollectionEntity )
      {
        baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_265;
        baseObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)baseObject,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*p_mainInfo )
          goto LABEL_265;
        v77 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
        if ( !*p_mainInfo )
          goto LABEL_265;
        v78 = (*p_mainInfo)->fields.userSvtCollectionEntity;
        if ( !v78 )
          goto LABEL_265;
        if ( !v77 )
          goto LABEL_265;
        baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                               v77,
                               (int32_t)baseObject,
                               v78->fields.maxLimitCount,
                               0);
        v63 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        v69 = (int)baseObject;
      }
      else
      {
        v69 = 0;
      }
      baseObject = v63->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
    }
    v79 = this->fields.servantNameRangeLabel;
    v83 = -1;
LABEL_172:
    baseObject = ServantEntity__getName((ServantEntity_o *)baseObject, v83, v69, 0, 0);
    if ( !v79 )
      goto LABEL_265;
    v76 = (System_String_o *)baseObject;
    baseObject = v79;
    goto LABEL_174;
  }
  v47 = this->fields.servantNameRangeLabel;
  baseObject = CommandCodeEntity__GetName(commandCodeEntity, 0);
  if ( !v47 )
    goto LABEL_265;
  UIRangeLabel__Set(v47, (System_String_o *)baseObject, 0, 1, 0, 0, 0);
  v48 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
  {
    v50 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0);
    if ( v50 )
    {
      UILabel__set_text(v50, (System_String_o *)baseObject, 0);
      goto LABEL_245;
    }
LABEL_265:
    sub_1C2D6EC(baseObject, method);
  }
LABEL_245:
  baseObject = this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_265;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v49);
  ServantStatusDialog__SetMark(this, v115);
  v117 = this->fields.kind;
  if ( v117 > 28 )
  {
    v118 = v117 - 30;
    if ( v118 < 7 )
    {
      v26 = dword_C41EDC[v118];
      goto LABEL_254;
    }
LABEL_252:
    v26 = 0;
    goto LABEL_254;
  }
  if ( v117 == 10 )
  {
    v26 = 1;
    goto LABEL_254;
  }
  if ( v117 != 11 )
  {
    v26 = 1;
    if ( v117 != 28 )
      goto LABEL_252;
  }
LABEL_254:
  ServantStatusDialog__SetTabKind(this, v26, v116);
  v120 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v120 - 10 < 0x13 || v120 <= 0x24 && ((1LL << v120) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6000/*"EndLoadInit"*/,
      0.1,
      0);
  else
    ServantStatusDialog__StartStatusLoad(this, v119);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4027/*"CancelInput"*/, 0.0, 0);
}


void ServantStatusDialog__EndLoadBattle(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C22FD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22FD5 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_34406412(this, v6);
}


void ServantStatusDialog__EndLoadBattle_34406412(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4C22FD6 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C22FD6 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v4, method);
    if ( !mainInfo->fields.isConvertOverwriteImage )
      this->fields.isBattlePlay = 0;
  }
  ServantStatusDialog__PlayBattleEffect(this, 0, v2);
}


void ServantStatusDialog__EndLoadChangeBattleResource(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C22FDD & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22FDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4C22FCA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog__EndLoadInit_b__146_0__);
    byte_4C22FCA = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__146_0__, 0);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v3, v4);
  ServantStatusDialog__InitList(this, v5);
}


void ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v7; // x1
  struct System_Boolean_array *v8; // x8
  const MethodInfo *tabKind; // x1

  if ( (byte_4C23001 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23001 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0);
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_12;
  if ( !LODWORD(tabInitList->max_length) )
    goto LABEL_13;
  tabInitList->m_Items[0] = 0;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__CacheViewTopContentsAndGap((ServantStatusListViewManager_o *)Instance, 0),
        ServantStatusDialog__DestroyBattleChr(this, v7),
        v8 = this->fields.tabInitList,
        this->fields.isBattlePlay = 0,
        !v8) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  }
  if ( LODWORD(v8->max_length) <= 3 )
LABEL_13:
    sub_1C2D6F4(Instance, v4, v5);
  v8->m_Items[3] = 0;
  tabKind = (const MethodInfo *)(unsigned int)this->fields.tabKind;
  if ( (_DWORD)tabKind == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabKind);
    LODWORD(tabKind) = this->fields.tabKind;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabKind, v5);
}


void ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Item; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4C22FE1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C22FE1 = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v8 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v10 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v10[4] = (Il2CppClass *)loadVoiceData;
          sub_1C2D434((CGThumbnailListItem_o *)(v10 + 4), (int32_t)loadVoiceData, v2, v3);
        }
        this->fields.loadVoiceData = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadVoiceData, 0, v11, v12);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( voiceDataList )
            {
              CommonUI__SetLoadMode((CommonUI_o *)voiceDataList, 0, 0);
              return;
            }
          }
          else
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     voiceDataList,
                     0,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v14, v15);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v16 = this->fields.loadVoiceData;
              v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v16, v17, 1, 0);
              return;
            }
          }
        }
      }
    }
    sub_1C2D6EC(voiceDataList, loadVoiceData);
  }
}


void ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v10; // w9
  int32_t max_length; // w10
  ServantVoiceData_o *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C22FE5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6028/*"EndWaitVoice"*/);
    byte_4C22FE5 = 1;
  }
  this->fields.voicePlayer = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v10 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v10;
    max_length = voicePlayList->max_length;
    if ( v10 < max_length )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C2D6F4(voiceTabListViewManager, v6, v7);
      v12 = voicePlayList->m_Items[v10];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6028/*"EndWaitVoice"*/,
          v12->fields.delay,
          0);
        return;
      }
LABEL_18:
      sub_1C2D6EC(voiceTabListViewManager, v6);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_37531388(voiceTabListViewManager, 2, -1, 0);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, 0, v13, v14);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_37531388(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *statusTabListViewManager; // x0
  const MethodInfo *v9; // x2
  ServantStatusListViewManager_o *v10; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4C22FFD & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4C22FFD = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  statusTabListViewManager = **(CommonUI_o ***)(v7 + 184);
  if ( !statusTabListViewManager )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(statusTabListViewManager, 0);
  if ( isDecide )
  {
    statusTabListViewManager = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( !statusTabListViewManager )
      goto LABEL_13;
    ServantStatusListViewManager__CacheViewTopTargetContents(
      (ServantStatusListViewManager_o *)statusTabListViewManager,
      19,
      0);
    ServantStatusDialog__SetTabKind(this, 0, v9);
  }
  v10 = this->fields.statusTabListViewManager;
  v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !v10 )
LABEL_13:
    sub_1C2D6EC(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v10, 1, v11, 0);
}


void ServantStatusDialog__EndStatusLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C22FCD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AssetData__TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCommandCardLoad__);
    byte_4C22FCD = 1;
  }
  v4 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndCommandCardLoad__, 0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog__EndTransformedStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C22FD1 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_6000/*"EndLoadInit"*/);
    byte_4C22FD1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)Instance, 6, 0);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)Instance, 4, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1C2D6EC(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6000/*"EndLoadInit"*/, 0.1, 0);
}


void ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantStatusDialog_o *v4; // x19
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v8; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v13; // x22
  SePlayer_o *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *p_voicePlayer; // x0

  v4 = this;
  if ( (byte_4C22FE4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C22FE4 = 1;
  }
  voicePlayList = v4->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v4->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1C2D6F4(this, method, v2);
      v8 = voicePlayList->m_Items[voicePlayNum];
      if ( v8 )
      {
        voicePlayAssetName = v4->fields.voicePlayAssetName;
        id = v8->fields.id;
        v11 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v11 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
        v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndPlayVoice__, 0);
        v14 = SoundManager__playVoice_41296680(voicePlayAssetName, id, DEFAULT_VOLUME, v13, 0, 0);
        p_voicePlayer = (CGThumbnailListItem_o *)&v4->fields.voicePlayer;
        v4->fields.voicePlayer = v14;
        goto LABEL_16;
      }
LABEL_17:
      sub_1C2D6EC(this, method);
    }
    if ( v4->fields.tabKind == 3 && (v4->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_37531388((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0);
      v4->fields.voiceListIndex = -1;
    }
    v4->fields.voicePlayList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.voicePlayList, 0, v2, v3);
    p_voicePlayer = (CGThumbnailListItem_o *)&v4->fields.voicePlayAssetName;
    LODWORD(v14) = 0;
    v4->fields.voicePlayNum = 0;
    v4->fields.voicePlayAssetName = 0;
LABEL_16:
    sub_1C2D434(p_voicePlayer, (int32_t)v14, v15, v16);
  }
}


void ServantStatusDialog__EnddChangeCommandResourceLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C23008 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23008 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)Instance, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v5; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  ServantStatusDialog_o *v8; // x20
  struct ServantStatusListViewItem_o *v9; // x8
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q0
  ServantStatusDialog_o *v12; // x20
  struct ServantStatusListViewItem_o *v13; // x8
  struct UserServantEntity_o *v14; // x8
  ServantStatusDialog_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  struct ServantStatusListViewItem_o *v18; // x8
  ServantStatusDialog_o *v19; // x22
  int32_t v20; // w21
  int32_t DispLimitCount; // w0
  int32_t v22; // w20
  ServantStatusDialog_o *v23; // x23
  int32_t LimitCount; // w0
  __int64 v25; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v27; // w9
  struct ServantStatusListViewItem_o *v28; // x8
  ServantStatusDialog_o *v29; // x22
  struct ServantStatusListViewItem_o *v30; // x8
  ServantStatusDialog_o *v31; // x23
  struct ServantStatusListViewItem_o *v32; // x8
  struct ServantStatusListViewItem_o *v33; // x8
  ServantOverwriteStatus_o *v34; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v38; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v3 = this;
  if ( (byte_4C22FFA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FFA = 1;
  }
  tdInfo = 0;
  entity = 0;
  v38 = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_66;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = v3->fields.mainInfo;
  if ( !v5 )
    goto LABEL_66;
  userSvtEntity = v5->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_66;
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v8 = this;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v37;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
  if ( !v8 )
    goto LABEL_66;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
          &entity,
          (int64_t)this,
          (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v9 = v3->fields.mainInfo;
    if ( !v9 )
      goto LABEL_66;
    v10 = v9->fields.userSvtEntity;
    if ( !v10 )
      goto LABEL_66;
    v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
    v12 = this;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v37;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
    if ( !v12 )
      goto LABEL_66;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
      &entity,
      (int64_t)this,
      (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = v3->fields.mainInfo;
  if ( !v13 )
    goto LABEL_66;
  v14 = v13->fields.userSvtEntity;
  if ( !v14 )
    goto LABEL_66;
  v15 = this;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v17;
  *(_QWORD *)&v41.fields.fakeValue = v16;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41, 0);
  if ( !v15 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                    (int32_t)this,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = v3->fields.mainInfo;
  if ( !v18 )
    goto LABEL_66;
  v19 = this;
  this = (ServantStatusDialog_o *)v18->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0);
  if ( !entity )
    goto LABEL_66;
  v20 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
  if ( v20 == DispLimitCount )
    goto LABEL_65;
  v22 = DispLimitCount;
  this = (ServantStatusDialog_o *)v3->fields.mainInfo;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0),
        !v19)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, (int32_t)this, v20, 0),
        !v3->fields.mainInfo)
    || (v23 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, LimitCount, v22, 0),
        !v23)
    || !this )
  {
LABEL_66:
    sub_1C2D6EC(this, result);
  }
  m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v23 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v27 )
        sub_1C2D6F4(this, result, v25);
      if ( *((_DWORD *)&v23->fields.CHARA_BASE_POSITION.fields.x + v27) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v27) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v27 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_65;
  v28 = v3->fields.mainInfo;
  if ( !v28 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)v28->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v20, -1, 1, -1, 0);
  if ( !entity )
    goto LABEL_66;
  v29 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v22, -1, 1, -1, 0);
  v30 = v3->fields.mainInfo;
  if ( !v30 )
    goto LABEL_66;
  v31 = this;
  this = (ServantStatusDialog_o *)v30->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v20, 0, 0);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v38, -1, v22, 0, 0);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                    (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v38 )
    goto LABEL_66;
  if ( tdInfo->fields.id != v38->fields.id )
  {
LABEL_64:
    v3->fields.isNeedSort = 1;
    goto LABEL_65;
  }
  if ( !v3->fields.isNeedSort )
  {
    v32 = v3->fields.mainInfo;
    if ( v32 )
    {
      this = (ServantStatusDialog_o *)v32->fields.userSvtEntity;
      if ( this )
      {
        this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)this,
                                          v32->fields.questRestrictionInfo,
                                          0);
        v33 = v3->fields.mainInfo;
        if ( v33 )
        {
          v34 = (ServantOverwriteStatus_o *)this;
          this = (ServantStatusDialog_o *)entity;
          if ( entity )
          {
            this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                              (UserServantEntity_o *)entity,
                                              v33->fields.questRestrictionInfo,
                                              0);
            if ( v34 )
            {
              if ( !ServantOverwriteStatus__IsEqualForSort(v34, (ServantOverwriteStatus_o *)this, 0) )
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


void ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4C22FFB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FFB = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v7 = this->fields.battleActor;
    if ( !v7 )
      sub_1C2D6EC(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc, 0, v5, v6);
    this->fields.resultCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultCallbackFunc, 0, v9, v10);
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v11, v12);
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
    this->fields.resultCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultCallbackFunc, 0, v5, v6);
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v16, v17);
    ((void (__fastcall *)(intptr_t, bool, bool, _QWORD, intptr_t))resultCallbackFunc->fields.invoke_impl)(
      resultCallbackFunc->fields.method_code,
      this->fields.isModify,
      this->fields.isNeedSort,
      (unsigned int)this->fields.questId,
      resultCallbackFunc->fields.method);
  }
  else
  {
    individualityCallbackFunc = this->fields.formationCallbackFunc;
    if ( individualityCallbackFunc )
    {
      this->fields.formationCallbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.formationCallbackFunc, 0, v5, v6);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
      ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        this->fields.isModify,
        callbackFunc->fields.method);
    }
  }
}


void ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t IsModifyLock; // x0
  struct ServantStatusListViewItem_o *v4; // x1
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
  int v15; // w22
  bool v16; // w0
  int v17; // w23
  int v18; // w23
  bool v19; // w0
  int v20; // w21
  int v21; // w21
  const MethodInfo *v22; // x2
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  struct UserCommandCodeEntity_o *v25; // x8
  __int128 v26; // q0
  CommandCodeSetStatusRequest_o *v27; // x19
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x20
  __int64 v30; // x21
  int32_t v31; // w24
  int v32; // w26
  BalanceConfig_c *v33; // x0
  char v34; // w20
  int32_t ManualSetDispLimitCount; // w0
  int32_t v36; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  char v38; // w22
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v40; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  char v42; // w29
  int32_t ManualSetIconLimitCount; // w0
  int32_t v44; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  char v46; // w29
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v48; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  ServantStatusListViewItem_o *v50; // x8
  ServantStatusListViewItem_o *v51; // x8
  char v52; // w21
  char v53; // w22
  int v54; // w20
  char v55; // w26
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  __int64 v58; // x23
  bool isPush; // w27
  char v60; // w28
  bool IsModifyFavoriteUserSvtId; // w24
  NetworkManager_ResultCallbackFunc_o *v62; // x20
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  CardFavoriteRequest_o *v65; // x19
  int32_t v66; // [xsp+58h] [xbp-118h]
  int32_t v67; // [xsp+5Ch] [xbp-114h]
  int32_t v68; // [xsp+60h] [xbp-110h]
  int32_t limitCountSupport; // [xsp+64h] [xbp-10Ch]
  int32_t randomSettingSupport; // [xsp+68h] [xbp-108h]
  int32_t randomSettingOwn; // [xsp+6Ch] [xbp-104h]
  int32_t battleVoice; // [xsp+70h] [xbp-100h]
  int32_t commonFlag; // [xsp+74h] [xbp-FCh]
  int32_t iconLimitCount; // [xsp+78h] [xbp-F8h]
  int32_t portraitLimitCount; // [xsp+7Ch] [xbp-F4h]
  char v76; // [xsp+80h] [xbp-F0h]
  char v77; // [xsp+84h] [xbp-ECh]
  char v78; // [xsp+88h] [xbp-E8h]
  char v79; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4C22FF9 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C2D490(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&OtherUserNewManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_1C2D490(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C2D490(&UserCommandCodeNewManager_TypeInfo);
    sub_1C2D490(&UserServantCollectionManager_TypeInfo);
    sub_1C2D490(&UserServantNewManager_TypeInfo);
    byte_4C22FF9 = 1;
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
      UserServantEntity__SetOld(userSvtEntity, 0);
      mainInfo = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_131;
    }
  }
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserServantCollectionEntity__SetOld(userSvtCollectionEntity, 0);
    mainInfo = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
  }
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    if ( this->fields.kind != 24 )
    {
      UserCommandCodeEntity__SetOld(userCommandCodeEntity, 0);
      mainInfo = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_131;
    }
  }
  userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
  if ( userCommandCodeCollectionEntity )
  {
    UserCommandCodeCollectionEntity__SetOld(userCommandCodeCollectionEntity, 0);
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
    OtherUserNewManager__SetOld(userId, 0);
  }
  isModify = this->fields.isModify;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  v15 = UserServantNewManager__WriteData(0) || isModify;
  this->fields.isModify = v15;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  v16 = UserServantCollectionManager__WriteData(0);
  v17 = v15 | v16;
  this->fields.isModify = v15 | v16;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  v18 = v17 | ServantCommentManager__WriteData(0);
  this->fields.isModify = v18;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  v19 = OtherUserNewManager__WriteData(0);
  v20 = v18 | v19;
  this->fields.isModify = v18 | v19;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  v21 = v20 | UserCommandCodeNewManager__WriteData(0);
  this->fields.isModify = v21 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0);
  v4 = this->fields.mainInfo;
  this->fields.isModify = (v21 != 0) | IsModifyLock & 1;
  if ( !v4 )
    goto LABEL_131;
  if ( !v4->fields.userSvtEntity )
  {
    if ( v4->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v4, 0);
      if ( !*p_mainInfo )
        goto LABEL_131;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0)) & 1) != 0 )
      {
        this->fields.isModify = 1;
        v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v24,
                                  (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *p_mainInfo )
        {
          v25 = (*p_mainInfo)->fields.userCommandCodeEntity;
          if ( v25 )
          {
            v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
            v27 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v83.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v80 = v83;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v80, 0);
            if ( *p_mainInfo )
            {
              if ( v27 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v27,
                  IsModifyLock,
                  (*p_mainInfo)->fields.isLock,
                  (*p_mainInfo)->fields.isChoice,
                  0);
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
  if ( v4->fields.isConvertOverwriteImage )
    goto LABEL_35;
  IsModifyLock = (int64_t)this->fields.charaGraphListViewManager;
  if ( !IsModifyLock )
    goto LABEL_131;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v4,
                            v22);
  if ( !IsModifyLock )
  {
    v4 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
LABEL_35:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v4, 0);
    goto LABEL_51;
  }
  ManualSetCardLimitCount = *(_DWORD *)(IsModifyLock + 128);
LABEL_51:
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsChangeImageLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0);
  if ( (IsModifyLock & 1) == 0 )
    goto LABEL_134;
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_ManualSetCardLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0);
  if ( ManualSetCardLimitCount != (_DWORD)IsModifyLock )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v32 = 1;
    v31 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v33->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_134:
    if ( !*p_mainInfo )
      goto LABEL_131;
    v28 = (*p_mainInfo)->fields.userSvtEntity;
    if ( !v28 )
      goto LABEL_131;
    v30 = *(_QWORD *)&v28->fields.imageLimitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v28->fields.imageLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v84.fields.currentCryptoKey = v30;
    *(_QWORD *)&v84.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v84, 0);
    v32 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v34 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0);
    v36 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v37 )
      goto LABEL_131;
    v36 = BasicHelper__DecryptValue_43904660(v37[8], 0);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v38 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0);
    v40 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v41 )
      goto LABEL_131;
    v40 = BasicHelper__DecryptValue_43904660(v41[9], 0);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v42 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0);
    v44 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v45 )
      goto LABEL_131;
    v44 = BasicHelper__DecryptValue_43904660(v45[10], 0);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v79 = v42;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v46 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0);
    v48 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v48;
  }
  else
  {
    v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_43904660(v49[11], 0);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0);
  v50 = *p_mainInfo;
  v78 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v77 = v38;
  commonFlag = v50->fields.svtCommonFlag;
  iconLimitCount = v44;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v50, 0);
  v51 = *p_mainInfo;
  v76 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v52 = v34;
  battleVoice = v51->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v51, 0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v53 = IsModifyLock;
  v54 = v32;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v55 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v56 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_131;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  v58 = *(_QWORD *)(IsModifyLock + 128);
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v67 = v36;
  v68 = v40;
  v82 = v83;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v82, 0);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v58 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0);
  v60 = IsModifyLock;
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
  v66 = v31;
  if ( this->fields.isUseFavorite )
  {
    IsModifyLock = (int64_t)*p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_131;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0);
  }
  else
  {
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0),
        !*p_mainInfo) )
  {
LABEL_131:
    sub_1C2D6EC(IsModifyLock, v4);
  }
  if ( v54
     | v52 & 1
     | v77 & 1
     | v79 & 1
     | v46 & 1
     | v78 & 1
     | v76 & 1
     | v53 & 1
     | v55 & 1
     | v60 & 1
     | ((unsigned __int8)(IsModifyFavoriteUserSvtId | IsModifyLock)
      | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0))
     & 1 )
  {
    this->fields.isModify = 1;
    v62 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v62,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v62,
                              (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *p_mainInfo )
    {
      v63 = (*p_mainInfo)->fields.userSvtEntity;
      if ( v63 )
      {
        v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
        v65 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v83.fields.fakeValue = v64;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v81 = v83;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v81, 0);
        if ( *p_mainInfo )
        {
          if ( v65 )
          {
            CardFavoriteRequest__beginRequest(
              v65,
              IsModifyLock,
              v66,
              v67,
              v68,
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
              0);
            return;
          }
        }
      }
    }
    goto LABEL_131;
  }
LABEL_129:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v4);
}


bool ServantStatusDialog__GetEnableBattleVoiceFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
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


bool ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
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


int32_t ServantStatusDialog__GetTabKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
}


System_String_o *ServantStatusDialog__GetVoiceAssetName(
        ServantStatusDialog_o *this,
        int32_t assetType,
        int32_t svtId,
        int32_t limitCount,
        int32_t seqId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v13; // x19
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C22FDF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9512/*"NoblePhantasm_"*/);
    sub_1C2D490(&StringLiteral_4417/*"ChrVoice_"*/);
    sub_1C2D490(&StringLiteral_12756/*"Servants_"*/);
    byte_4C22FDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0);
  result = 0;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_4651390[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0);
    return System_String__Concat_63457864(*v13, v14, 0);
  }
  return result;
}


void ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pushButton; // x20
  __int64 v4; // x1
  ServantStatusDialog_c *v5; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v7; // x8
  ServantStatusDialog_c *v8; // x0
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *servantStatusBattleConfirmDialog; // x20
  System_Action_o *v12; // x20
  ServantStatusDialog_o *v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *Asset; // x0
  unsigned __int128 v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4C22FC2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndInitLoad__);
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    byte_4C22FC2 = 1;
  }
  v16 = 0u;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
  {
    v5 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v5 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v5->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v16,
                                               0);
    v7 = this->fields.pushButton;
    if ( !v7 )
      goto LABEL_27;
    v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v16;
  }
  this->fields.isInitTab = 0;
  *(_WORD *)&this->fields.isModify = 256;
  *(_DWORD *)&this->fields.isExit = 0;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4C23030 )
  {
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    byte_4C23030 = 1;
  }
  v8 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v8 = ServantStatusDialog_TypeInfo;
  }
  v8->static_fields->_IsViewCharaGraph_k__BackingField = 0;
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  if ( this->fields.kind == 33 )
  {
    this->fields.needAutoScroll = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v9);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0);
  servantStatusBattleConfirmDialog = (UnityEngine_Object_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantStatusBattleConfirmDialog, 0, 0) )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( baseObject )
    {
      ServantStatusBattleConfirmDialog__Init((ServantStatusBattleConfirmDialog_o *)baseObject, 0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1C2D6EC(baseObject, v4);
  }
LABEL_26:
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0);
  Asset = ServantStatusDialog__LoadAsset(v13, v12, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


void ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  CGThumbnailListItem_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C22FD3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FD3 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0, 0) )
  {
    p_battleChr = (CGThumbnailListItem_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_battleChr->klass = 0;
    sub_1C2D434(p_battleChr, 0, v9, v10);
  }
}


void ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v15; // x21

  if ( (byte_4C22FED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_1C2D490(&Method_ServantStatusDialog__InitList_b__184_0__);
    byte_4C22FED = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallbackFunc->fields.invoke_impl)(
      openCallbackFunc->fields.method_code,
      openCallbackFunc->fields.method);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v7 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v8);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&charaGraphListViewManager->fields.callbackFunc, (int32_t)v7, v11, v12);
  ServantStatusCharaGraphListViewManager__SetMode_34357208(charaGraphListViewManager, 2, v13);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__184_0__, 0);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v15, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(v9, v10);
  }
}


bool ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *supportRandomLimitCountList; // x8
  ServantCostumeMaster_o *v9; // x21
  signed int v10; // w25
  unsigned int max_length; // w9
  int32_t v12; // w22
  BalanceConfig_c *v13; // x0
  ServantCostumeEntity_o *v14; // x23
  struct ServantStatusListViewItem_o *v15; // x8
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitAddEntity_o *v19; // x23
  struct ServantStatusListViewItem_o *v20; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  struct ServantStatusListViewItem_o *v24; // x8
  ServantCostumeEntity_o *v26; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C2301B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantCostumeEntity_TypeInfo);
    sub_1C2D490(&ServantLimitAddEntity_TypeInfo);
    byte_4C2301B = 1;
  }
  v26 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1C2D6EC(RandomGroupIndex, v5);
  supportRandomLimitCountList = mainInfo->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    v9 = RandomGroupIndex;
    v10 = 0;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( v10 > (int)max_length )
        break;
      if ( v10 )
      {
        if ( v10 - 1 >= max_length )
          sub_1C2D6F4(RandomGroupIndex, v5, v6);
        v12 = supportRandomLimitCountList->m_Items[v10 - 1];
      }
      else
      {
        v12 = 0;
      }
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( v12 <= v13->static_fields->ServantLimitMax )
      {
        v19 = (ServantLimitAddEntity_o *)sub_1C2D6DC(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v19, 0);
        entity = v19;
        v20 = this->fields.mainInfo;
        if ( !v20 )
          goto LABEL_35;
        userSvtEntity = v20->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_35;
        v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v23;
        *(_QWORD *)&v29.fields.fakeValue = v22;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                       v29,
                                                       0);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v12,
                                                       0);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          RandomGroupIndex = (ServantCostumeMaster_o *)entity;
          if ( !entity )
            goto LABEL_35;
          RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddEntity__GetRandomGroupIndex(entity, 0);
          if ( (_DWORD)RandomGroupIndex )
            return 1;
        }
      }
      else
      {
        v14 = (ServantCostumeEntity_o *)sub_1C2D6DC(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v14, 0);
        v26 = v14;
        v15 = this->fields.mainInfo;
        if ( !v15 )
          goto LABEL_35;
        v16 = v15->fields.userSvtEntity;
        if ( !v16 )
          goto LABEL_35;
        v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v18;
        *(_QWORD *)&v28.fields.fakeValue = v17;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                       v28,
                                                       0);
        if ( !v9 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v9,
                                                       &v26,
                                                       (int32_t)RandomGroupIndex,
                                                       v12,
                                                       0);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_35;
          if ( v26->fields.groupIndex )
            return 1;
        }
      }
      v24 = this->fields.mainInfo;
      if ( v24 )
      {
        supportRandomLimitCountList = v24->fields.supportRandomLimitCountList;
        ++v10;
        if ( supportRandomLimitCountList )
          continue;
      }
      goto LABEL_35;
    }
  }
  return 0;
}


System_Collections_IEnumerator_o *ServantStatusDialog__LoadAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C22FC3 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog__LoadAsset_d__139_TypeInfo);
    byte_4C22FC3 = 1;
  }
  v4 = sub_1C2D6DC(ServantStatusDialog__LoadAsset_d__139_TypeInfo);
  ServantStatusDialog__LoadAsset_d__139___ctor((ServantStatusDialog__LoadAsset_d__139_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)(v4 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *isExistAssetStorage; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusDialog_c *v13; // x0
  System_String_o *BattleCharaChangeConfirmLoadAssetPath; // x20
  ServantStatusDialog_c *v15; // x0
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C22FC4 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
    byte_4C22FC4 = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = v5 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    goto LABEL_21;
  v13 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v13 = ServantStatusDialog_TypeInfo;
  }
  BattleCharaChangeConfirmLoadAssetPath = v13->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (Il2CppObject *)AssetManager__isExistAssetStorage(BattleCharaChangeConfirmLoadAssetPath, 0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_18:
    sub_1C2D6EC(isExistAssetStorage, v7);
  }
  isExistAssetStorage = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !isExistAssetStorage )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)isExistAssetStorage, 1, 0);
  v15 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v15 = ServantStatusDialog_TypeInfo;
  }
  v16 = v15->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0);
}


void ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C22FFF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AssetData__TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog__LoadTransformedResource_b__206_0__);
    byte_4C22FFF = 1;
  }
  v3 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__206_0__,
    0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v3, v4);
}


void ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C22FF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickCancel__);
    byte_4C22FF7 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantStatusDialog__Exit(this, v5);
  }
}


void ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantStatusListViewItem_o *v6; // x8

  v2 = this;
  if ( (byte_4C22FFE & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_4C22FFE = 1;
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
        v4 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1C2D6EC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickChangeVoice(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4C2301C & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickChangeVoice__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2301C = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.changeVoiceFlag != type )
      {
        v8 = Method_ServantStatusDialog_OnClickChangeVoice__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeVoice__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickChangeVoice__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&type);
  }
}


void ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C2301F & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickChoice__);
    byte_4C2301F = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C2D6EC(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommandCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C2300D & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickCommandCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2300D = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( LODWORD(costumeIds->max_length) <= costumeIndex )
          sub_1C2D6F4(this, *(_QWORD *)&costumeIndex, method);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.commandCardLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangeCommandResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
          return;
        }
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4C2300C & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickCommandCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2300C = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.commandCardLimitCount != dispLv )
      {
        v8 = Method_ServantStatusDialog_OnClickCommandCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaLevel__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommandCodeShow(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  System_Action_o *v13; // x23
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v16; // x20
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t kind; // w24
  Il2CppObject *v20; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  System_Action_o *v22; // x23
  int32_t v23; // w1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v27; // x21
  bool v28; // w3
  CommonUI_o *v29; // x0
  CommandCodeEntity_o *v30; // x2

  v4 = this;
  if ( (byte_4C23014 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickCommandCodeShow__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23014 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_27;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(userSvtCollectionEntity, index, 0);
    if ( UserCommandCodeEntity )
    {
      v8 = UserCommandCodeEntity;
      v9 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0);
      v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_31183376((CommonUI_o *)Instance, 20, v8, v12, v13, 0);
        return;
      }
LABEL_27:
      sub_1C2D6EC(this, *(_QWORD *)&index);
    }
    goto LABEL_17;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0);
    if ( CommandCodeEntity )
    {
      v16 = CommandCodeEntity;
      v17 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C2D474(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      kind = v4->fields.kind;
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
        if ( !v20 )
          goto LABEL_27;
        v23 = 22;
      }
      else
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
        if ( !v20 )
          goto LABEL_27;
        if ( kind != 5 )
        {
          v23 = 25;
          v29 = (CommonUI_o *)v20;
          v30 = v16;
          v28 = 0;
          goto LABEL_26;
        }
        v23 = 23;
      }
      v28 = 1;
      v29 = (CommonUI_o *)v20;
      v30 = v16;
LABEL_26:
      CommonUI__OpenServantEquipStatusDialog_31184128(v29, v23, v30, v28, v21, v22, 0);
      return;
    }
  }
LABEL_17:
  v24 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C2D474(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C23010 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickFaceCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23010 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( LODWORD(costumeIds->max_length) <= costumeIndex )
          sub_1C2D6F4(this, *(_QWORD *)&costumeIndex, method);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.iconLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangeFaceResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
          return;
        }
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickFaceCharaLevel(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4C2300F & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickFaceCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C2300F = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.iconLimitCount != dispLv )
      {
        v8 = Method_ServantStatusDialog_OnClickFaceCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaLevel__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  }
}


void ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v5; // q1
  int64_t favoriteUserSvtId; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v12; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v15; // x24
  struct ServantStatusListViewItem_o *v16; // x8
  ServantStatusDialog_o *v17; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v19; // x20
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x21
  __int64 v24; // x22
  int32_t m_CancellationTokenSource; // w25
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  ServantStatusDialog_o *v28; // x25
  const MethodInfo *v29; // x3
  ServantStatusDialog_o *v30; // x25
  void *v31; // x24
  Il2CppClass *v32; // x25
  int32_t v33; // w0
  Il2CppClass *v34; // x8
  int32_t v35; // w23
  const MethodInfo *v36; // x3
  ServantStatusDialog_o *v37; // x23
  int32_t Rarity; // w0
  const MethodInfo *v39; // x3
  ServantStatusDialog_o *v40; // x23
  struct ServantStatusListViewItem_o *v41; // x8
  const MethodInfo *v42; // x3
  ServantStatusDialog_o *v43; // x23
  struct ServantStatusListViewItem_o *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  int32_t v46; // w23
  int32_t v47; // w0
  const MethodInfo *v48; // x3
  ServantStatusDialog_o *v49; // x20
  System_String_o *v50; // x20
  System_String_o *v51; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  CommonConfirmDialog_ClickDelegate_o *v56; // x25
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v2 = this;
  if ( (byte_4C23020 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickFavorite__);
    sub_1C2D490(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11931/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11929/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11928/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11932/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_11930/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_4C23020 = 1;
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
    v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v60.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v59 = v60;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0) )
    {
      v7 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickFavorite__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    v9 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickFavorite__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    if ( favoriteUserSvtId <= 0 )
    {
      v19 = v2->fields.mainInfo;
      if ( v19 )
      {
        v20 = v19->fields.userSvtEntity;
        if ( v20 )
        {
          v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v60.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v60;
          v19->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v58, 0);
          ServantStatusDialog__SetMark(v2, v22);
          return;
        }
      }
      goto LABEL_83;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_83;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_83;
    v12 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = klass;
    *(_QWORD *)&v61.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
    if ( !v12 )
      goto LABEL_83;
    v15 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
            (int32_t)this,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v16 = v2->fields.mainInfo;
    if ( !v16 )
      goto LABEL_83;
    v17 = this;
    if ( v16->fields.isConvertOverwriteImage )
      questRestrictionInfo = v16->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11931/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
    v24 = sub_1C2D538(object___TypeInfo, 6);
    this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)Entity,
                                      questRestrictionInfo,
                                      0);
    if ( !this )
      goto LABEL_83;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
    if ( !v24 )
      goto LABEL_83;
    v28 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v24 + 32) = v28;
      sub_1C2D434((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v28, v26, v27);
      if ( !v15 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v15, 0);
      v30 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v24 + 24) <= 1u )
          goto LABEL_84;
        *(_QWORD *)(v24 + 40) = v30;
        sub_1C2D434((CGThumbnailListItem_o *)(v24 + 40), (int32_t)v30, v26, v29);
        v32 = v15[1].klass;
        v31 = v15[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v32;
        *(_QWORD *)&v62.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
        v34 = Entity[6].klass;
        *(_QWORD *)&v63.fields.fakeValue = Entity[6].monitor;
        v35 = v33;
        *(_QWORD *)&v63.fields.currentCryptoKey = v34;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
        if ( !v17 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v17,
                                          v35,
                                          (int32_t)this,
                                          1,
                                          0);
        v37 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v24 + 24) <= 2u )
            goto LABEL_84;
          *(_QWORD *)(v24 + 48) = v37;
          sub_1C2D434((CGThumbnailListItem_o *)(v24 + 48), (int32_t)v37, v26, v36);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_83;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
          v40 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v24 + 24) <= 3u )
              goto LABEL_84;
            *(_QWORD *)(v24 + 56) = v40;
            sub_1C2D434((CGThumbnailListItem_o *)(v24 + 56), (int32_t)v40, v26, v39);
            v41 = v2->fields.mainInfo;
            if ( !v41 )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)v41->fields.svtEntity;
            if ( !this )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
            v43 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v24 + 24) <= 4u )
                goto LABEL_84;
              *(_QWORD *)(v24 + 64) = v43;
              sub_1C2D434((CGThumbnailListItem_o *)(v24 + 64), (int32_t)v43, v26, v42);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_83;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0);
              v44 = v2->fields.mainInfo;
              if ( !v44 )
                goto LABEL_83;
              v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v44->fields.userSvtEntity;
              if ( !v45 )
                goto LABEL_83;
              v46 = (int)this;
              v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45[6], 0);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v17,
                                                v46,
                                                v47,
                                                1,
                                                0);
              v49 = this;
              if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v24 + 24) > 5u )
                {
                  *(_QWORD *)(v24 + 72) = v49;
                  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 72), (int32_t)v49, v26, v48);
                  this = (ServantStatusDialog_o *)System_String__Format_63499292(v23, (System_Object_array *)v24, 0);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_83;
                  v50 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_83;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11930/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                      v50 = System_String__Concat_63457864(v50, v51, 0);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11928/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                  v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v56,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31167304(
                      (CommonUI_o *)Instance,
                      v53,
                      v50,
                      v54,
                      v55,
                      v56,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0);
                    return;
                  }
LABEL_83:
                  sub_1C2D6EC(this, method);
                }
LABEL_84:
                sub_1C2D6F4(this, method, v26);
              }
            }
          }
        }
      }
    }
    v57 = sub_1C2D710();
    sub_1C2D5B8(v57, 0);
  }
}


void ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C2301E & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickLock__);
    byte_4C2301E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C2D6EC(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickPortraitCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C23013 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23013 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      costumeIds = mainInfo->fields.costumeIds;
      if ( costumeIds )
      {
        if ( LODWORD(costumeIds->max_length) <= costumeIndex )
          sub_1C2D6F4(this, *(_QWORD *)&costumeIndex, method);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.portraitLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangePortraitResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
          return;
        }
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4C23012 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23012 = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.portraitLimitCount != dispLv )
      {
        v8 = Method_ServantStatusDialog_OnClickPortraitCharaLevel__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaLevel__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&dispLv);
  }
}


void ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v4; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ServantStatusListViewItem_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Entity; // x23
  ServantStatusDialog_o *v14; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v17; // x24
  struct ServantStatusListViewItem_o *v18; // x8
  ServantStatusDialog_o *v19; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v21; // x20
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q0
  System_String_o *v24; // x21
  __int64 v25; // x22
  int32_t m_CancellationTokenSource; // w25
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  ServantStatusDialog_o *v29; // x25
  const MethodInfo *v30; // x3
  ServantStatusDialog_o *v31; // x25
  void *v32; // x24
  Il2CppClass *v33; // x25
  int32_t v34; // w0
  Il2CppClass *v35; // x8
  int32_t v36; // w23
  const MethodInfo *v37; // x3
  ServantStatusDialog_o *v38; // x23
  int32_t Rarity; // w0
  const MethodInfo *v40; // x3
  ServantStatusDialog_o *v41; // x23
  struct ServantStatusListViewItem_o *v42; // x8
  const MethodInfo *v43; // x3
  ServantStatusDialog_o *v44; // x23
  struct ServantStatusListViewItem_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  int32_t v47; // w23
  int32_t v48; // w0
  const MethodInfo *v49; // x3
  ServantStatusDialog_o *v50; // x20
  System_String_o *v51; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  CommonConfirmDialog_ClickDelegate_o *v56; // x25
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v2 = this;
  if ( (byte_4C23022 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickPush__);
    sub_1C2D490(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C23022 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_78;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v4 = v2->fields.mainInfo;
    if ( !v4 )
      goto LABEL_78;
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_78;
    v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v4->fields.pushUserSvtId;
    *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v60.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v59 = v60;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0) )
    {
      v8 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickPush__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      v10 = v2->fields.mainInfo;
      if ( v10 )
      {
        v10->fields.pushUserSvtId = 0;
LABEL_38:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_78;
    }
    v11 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickPush__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    if ( pushUserSvtId <= 0 )
    {
      v21 = v2->fields.mainInfo;
      if ( v21 )
      {
        v22 = v21->fields.userSvtEntity;
        if ( v22 )
        {
          v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v60.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v60;
          v21->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v58, 0);
          goto LABEL_38;
        }
      }
LABEL_78:
      sub_1C2D6EC(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_78;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_78;
    v14 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = klass;
    *(_QWORD *)&v61.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
    if ( !v14 )
      goto LABEL_78;
    v17 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
            (int32_t)this,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v18 = v2->fields.mainInfo;
    if ( !v18 )
      goto LABEL_78;
    v19 = this;
    if ( v18->fields.isConvertOverwriteImage )
      questRestrictionInfo = v18->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v25 = sub_1C2D538(object___TypeInfo, 6);
    this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)Entity,
                                      questRestrictionInfo,
                                      0);
    if ( !this )
      goto LABEL_78;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
    if ( !v25 )
      goto LABEL_78;
    v29 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_79;
      *(_QWORD *)(v25 + 32) = v29;
      sub_1C2D434((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v29, v27, v28);
      if ( !v17 )
        goto LABEL_78;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v17, 0);
      v31 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_79;
        *(_QWORD *)(v25 + 40) = v31;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v31, v27, v30);
        v33 = v17[1].klass;
        v32 = v17[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v33;
        *(_QWORD *)&v62.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
        v35 = Entity[6].klass;
        *(_QWORD *)&v63.fields.fakeValue = Entity[6].monitor;
        v36 = v34;
        *(_QWORD *)&v63.fields.currentCryptoKey = v35;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
        if ( !v19 )
          goto LABEL_78;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v19,
                                          v36,
                                          (int32_t)this,
                                          1,
                                          0);
        v38 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v25 + 24) <= 2u )
            goto LABEL_79;
          *(_QWORD *)(v25 + 48) = v38;
          sub_1C2D434((CGThumbnailListItem_o *)(v25 + 48), (int32_t)v38, v27, v37);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_78;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
          v41 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v25 + 24) <= 3u )
              goto LABEL_79;
            *(_QWORD *)(v25 + 56) = v41;
            sub_1C2D434((CGThumbnailListItem_o *)(v25 + 56), (int32_t)v41, v27, v40);
            v42 = v2->fields.mainInfo;
            if ( !v42 )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)v42->fields.svtEntity;
            if ( !this )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
            v44 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v25 + 24) <= 4u )
                goto LABEL_79;
              *(_QWORD *)(v25 + 64) = v44;
              sub_1C2D434((CGThumbnailListItem_o *)(v25 + 64), (int32_t)v44, v27, v43);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_78;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0);
              v45 = v2->fields.mainInfo;
              if ( !v45 )
                goto LABEL_78;
              v46 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v45->fields.userSvtEntity;
              if ( !v46 )
                goto LABEL_78;
              v47 = (int)this;
              v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46[6], 0);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v19,
                                                v47,
                                                v48,
                                                1,
                                                0);
              v50 = this;
              if ( !this || (this = (ServantStatusDialog_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v25 + 24) > 5u )
                {
                  *(_QWORD *)(v25 + 72) = v50;
                  sub_1C2D434((CGThumbnailListItem_o *)(v25 + 72), (int32_t)v50, v27, v49);
                  v51 = System_String__Format_63499292(v24, (System_Object_array *)v25, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v56,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31167744(
                      (CommonUI_o *)Instance,
                      v53,
                      v51,
                      v54,
                      v55,
                      v56,
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
                      0);
                    return;
                  }
                  goto LABEL_78;
                }
LABEL_79:
                sub_1C2D6F4(this, method, v27);
              }
            }
          }
        }
      }
    }
    v57 = sub_1C2D710();
    sub_1C2D5B8(v57, 0);
  }
}


void ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_4C23019 & 1) == 0 )
  {
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_4C23019 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v7);
  }
}


void ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C23017 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    byte_4C23017 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    ServantStatusDialog__RandomLimitCountSupportResource(this, index, v7);
  }
}


void ServantStatusDialog__OnClickServantQuest(ServantStatusDialog_o *this, int32_t questId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x22
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t QuestType; // w23
  QuestEntity_o *v12; // x24
  System_String_o *v13; // x21
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *BattleName; // x0
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  __int64 *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v22; // x21
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  System_String_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C23015 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickServantQuest__);
    sub_1C2D490(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    sub_1C2D490(&StringLiteral_11975/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11977/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11978/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_11971/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11980/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_11974/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_11979/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11976/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_11972/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11973/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_4C23015 = 1;
  }
  entity = 0;
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_25;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( !QuestInfo )
  {
LABEL_25:
    v19 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickServantQuest__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v22, 0);
      return;
    }
    goto LABEL_44;
  }
  v8 = QuestInfo;
  v9 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickServantQuest__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(v8, 0);
  Instance = MapControl_QuestInfo__GetMine(v8, 0);
  if ( !Instance )
    goto LABEL_44;
  v12 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  v13 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25078/*"{0}"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (void *)QuestEntity__getServantId(v12, 0);
    if ( !MasterData_object )
      goto LABEL_44;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
    v13 = System_String__Format(v13, BattleName, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !Instance )
LABEL_44:
    sub_1C2D6EC(Instance, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         questId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_44;
    if ( QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0) )
    {
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, 0);
      v18 = &StringLiteral_11979/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/;
      goto LABEL_42;
    }
  }
  if ( QuestType == 3 )
  {
    warId = v8->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
    else
      IsFolder = 1;
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_39:
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0);
        v18 = &StringLiteral_11975/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_42;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_39;
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0);
    v18 = &StringLiteral_11973/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
    goto LABEL_42;
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0);
  v18 = &StringLiteral_11977/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_42:
  v26 = v17;
  v27 = LocalizationManager__Get((System_String_o *)*v18, 0);
  v28 = System_String__Format(v27, (Il2CppObject *)v13, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11971/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0);
  if ( !v16 )
    goto LABEL_44;
  CommonUI__OpenConfirmDialog_31167304((CommonUI_o *)v16, v26, v28, v29, v30, v31, 26, 0, 0, 0);
}


void ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23004 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickTabBattle__);
    byte_4C23004 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23003 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickTabProfile__);
    byte_4C23003 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23002 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickTabStatus__);
    byte_4C23002 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23005 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantStatusDialog_OnClickTabVoice__);
    byte_4C23005 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


void ServantStatusDialog__OnClickTdSpeed(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  long double v19; // q0
  __int64 v20; // x8
  __int64 v21; // x0
  CommonUI_o *v22; // x22
  System_String_o *Empty; // x21
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_4C23016 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnClickTdSpeed__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__0__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass229_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11982/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11983/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11984/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_4C23016 = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass229_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass229_0___ctor((ServantStatusDialog___c__DisplayClass229_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0) == *(_DWORD *)(v5 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0);
        return;
      }
LABEL_24:
      sub_1C2D6EC(mainInfo, v7);
    }
    v12 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnClickTdSpeed__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0);
    v16 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0);
    v18 = System_String__Format_63499156(v17, TDSpeedLocalization, v16, 0);
    v20 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C7DBA4(v19);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C7DBA4(v19);
    v22 = **(CommonUI_o ***)(v21 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0);
    v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v26,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__0__,
      0);
    if ( !v22 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v22, Empty, v18, v24, v25, v26, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnConfirmSelectFavorite(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C23021 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23021 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1C2D6EC(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnConfirmSelectPush(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C23023 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23023 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1C2D6EC(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v10, 0);
}


void ServantStatusDialog__OnConfirmServantQuest(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  Il2CppObject *v15; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4C2301D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_ServantStatusDialog__OnConfirmServantQuest_b__236_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2301D = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v11, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v13, 0);
        return;
      }
    }
    goto LABEL_25;
  }
  v5 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v5, this->fields.questId, 0);
  v8 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0) )
    {
      v5 = (Il2CppObject *)v8->fields._WarInfo_k__BackingField;
      if ( !v5 )
        goto LABEL_25;
      LODWORD(v8) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v5, 0);
    }
    else
    {
      LODWORD(v8) = 0;
    }
  }
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23031 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23031 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__236_0__, 0);
  if ( !v15 )
LABEL_25:
    sub_1C2D6EC(v5, v6);
  CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0);
}


void ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4C22FF8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FF8 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0);
  }
}


void ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C23028 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3050/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_4C23028 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3050/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_1C2D6EC(transform, v4);
  }
}


void ServantStatusDialog__OnSelectBattle(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4C23006 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectBattle__);
    byte_4C23006 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      0);
    if ( !battleTabListViewManager
      || (ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v6, 0),
          (mainInfo = this->fields.mainInfo) == 0) )
    {
      sub_1C2D6EC(v7, v8);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v10 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnSelectBattle__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      ServantStatusDialog__ChangeBattleResource(this, result, v12);
    }
  }
}


void ServantStatusDialog__OnSelectCharaGraph(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C22FF3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22FF3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)gameObject, 8, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C2D6EC(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectEquipStatus(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C22FF1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22FF1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)gameObject, 8, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C2D6EC(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectFlavor(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C22FF5 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_4C22FF5 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0);
  if ( !profileTabListViewManager )
    sub_1C2D6EC(v6, v7);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v6; // x19
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct ServantStatusListViewItem_o *v12; // x8
  int64_t equipTargetId1; // x21
  ServantStatusDialog_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  System_Action_o *v16; // x23
  CommonUI_o *v17; // x0
  int64_t v18; // x2
  ServantStatusDialog_EndDelegate_o *v19; // x4
  System_Action_o *v20; // x5
  bool v21; // w6
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v24; // q1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v28; // x8
  struct ServantLeaderInfo_o *v29; // x8
  EquipTargetInfo_o *v30; // x21
  ServantStatusDialog_o *v31; // x20
  ServantStatusDialog_EndDelegate_o *v32; // x22
  System_Action_o *v33; // x23
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  struct UICommonButton_o *v41; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21
  struct ServantStatusListViewItem_o *v46; // x8
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  bool v49; // w21
  ServantStatusDialog_o *v50; // x22
  int64_t EquipIdByIndex; // x20
  ServantStatusDialog_EndDelegate_o *v52; // x23
  System_Action_o *v53; // x24
  ServantLeaderInfo_o *voiceTabBase; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int128 v56; // q1
  EquipTargetInfo_o *v57; // x20
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  int32_t v60; // w24
  Il2CppObject *v61; // x21
  ServantStatusListViewManager_o *v62; // x20
  ServantStatusListViewManager_CallbackFunc_o *v63; // x21
  struct ServantStatusListViewItem_o *v64; // x8
  struct ServantLeaderInfo_o *v65; // x8
  CommonUI_o *v66; // x0
  EquipTargetInfo_o *v67; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-60h]

  v6 = this;
  if ( (byte_4C22FF0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_Exit__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_12733/*"ServantLvExceed"*/);
    sub_1C2D490(&StringLiteral_12737/*"ServantSkillCombine"*/);
    sub_1C2D490(&StringLiteral_12734/*"ServantNpCombine"*/);
    sub_1C2D490(&StringLiteral_4576/*"CommandCardEquip"*/);
    sub_1C2D490(&StringLiteral_12721/*"ServantEQCombine"*/);
    sub_1C2D490(&StringLiteral_12718/*"ServantCombine"*/);
    sub_1C2D490(&StringLiteral_6871/*"FriendshipExceed"*/);
    sub_1C2D490(&StringLiteral_12731/*"ServantLimitCountUp"*/);
    sub_1C2D490(&StringLiteral_2290/*"AppendSkillCombine"*/);
    sub_1C2D490(&StringLiteral_4577/*"CommandCardExceed"*/);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_2291/*"AppendSkillExchange"*/);
    byte_4C22FF0 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0);
        return;
      }
      goto LABEL_114;
    }
    switch ( result )
    {
      case 1:
        if ( v6->fields.mainInfo )
          goto LABEL_10;
        goto LABEL_114;
      case 2:
LABEL_10:
        mainInfo = v6->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_114;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v10 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnSelectStatus__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = v6->fields.mainInfo;
          if ( !v12 )
            goto LABEL_114;
          equipTargetId1 = v12->fields.equipTargetId1;
          v14 = this;
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v14 )
            goto LABEL_114;
          v17 = (CommonUI_o *)v14;
          v18 = equipTargetId1;
          v19 = v15;
          v20 = v16;
          v21 = 0;
LABEL_84:
          CommonUI__OpenServantEquipStatusDialog(v17, 11, v18, 1, v19, v20, v21, 0);
          return;
        }
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_99;
        equipTarget1 = servantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_99;
        v24 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
        *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        *(_OWORD *)&v70.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v69 = v70;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v69, 0) < 1 )
          goto LABEL_99;
        v25 = Method_ServantStatusDialog_OnSelectStatus__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnSelectStatus__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C2D474(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
        kind = v6->fields.kind;
        if ( kind == 4 )
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = v6->fields.mainInfo;
          if ( !v28 )
            goto LABEL_114;
          v29 = v28->fields.servantLeaderInfo;
          if ( !v29 )
            goto LABEL_114;
          v30 = v29->fields.equipTarget1;
          v31 = this;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v31 )
            goto LABEL_114;
          v34 = 13;
        }
        else
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v64 = v6->fields.mainInfo;
          if ( !v64 )
            goto LABEL_114;
          v65 = v64->fields.servantLeaderInfo;
          if ( !v65 )
            goto LABEL_114;
          v30 = v65->fields.equipTarget1;
          v31 = this;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v31 )
            goto LABEL_114;
          if ( kind == 5 )
            v34 = 14;
          else
            v34 = 16;
        }
        v66 = (CommonUI_o *)v31;
        v67 = v30;
        goto LABEL_113;
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_12718/*"ServantCombine"*/;
        goto LABEL_66;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v40 = StringLiteral_12721/*"ServantEQCombine"*/;
        this->fields.profileButton = (struct UICommonButton_o *)StringLiteral_12721/*"ServantEQCombine"*/;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.profileButton, v40, v38, v39);
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        LODWORD(this->fields.battleButton) = id & ~(id >> 31);
        goto LABEL_67;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_12737/*"ServantSkillCombine"*/;
        goto LABEL_66;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_12731/*"ServantLimitCountUp"*/;
        goto LABEL_66;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_6871/*"FriendshipExceed"*/;
        goto LABEL_66;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_4576/*"CommandCardEquip"*/;
        goto LABEL_66;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_4577/*"CommandCardExceed"*/;
        goto LABEL_66;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_2290/*"AppendSkillCombine"*/;
        goto LABEL_66;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_2291/*"AppendSkillExchange"*/;
        goto LABEL_66;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_12734/*"ServantNpCombine"*/;
        goto LABEL_66;
      case 23:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v37 = &StringLiteral_12733/*"ServantLvExceed"*/;
LABEL_66:
        v41 = (struct UICommonButton_o *)*v37;
        this->fields.profileButton = (struct UICommonButton_o *)*v37;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.profileButton, (int32_t)v41, v35, v36);
LABEL_67:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v43 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v43 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
        v45 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v45, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0);
        if ( !Instance )
          goto LABEL_114;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v45, 0);
        return;
      case 24:
        v46 = v6->fields.mainInfo;
        if ( !v46 )
          goto LABEL_114;
        if ( v46->fields.isEquipChangeMode )
          goto LABEL_99;
LABEL_73:
        this = (ServantStatusDialog_o *)v6->fields.mainInfo;
        if ( !this )
          goto LABEL_114;
        if ( !this->fields.baseObject )
          goto LABEL_89;
        if ( ServantStatusListViewItem__GetEquipIdByIndex((ServantStatusListViewItem_o *)this, id, 0) < 1 )
        {
          this = (ServantStatusDialog_o *)v6->fields.mainInfo;
          if ( !this )
            goto LABEL_114;
LABEL_89:
          voiceTabBase = (ServantLeaderInfo_o *)this->fields.voiceTabBase;
          if ( voiceTabBase )
          {
            EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(voiceTabBase, id, 0);
            if ( !EquipTargetInfoByEquipIdx )
              return;
            v56 = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.fakeValue;
            v57 = EquipTargetInfoByEquipIdx;
            *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v70.fields.fakeValue = v56;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v68 = v70;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v68, 0) < 1 )
              return;
            v58 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v58 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnSelectStatus__);
            v59 = (System_Reflection_MethodBase_o *)sub_1C2D474(v58, v58[4]);
            OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0);
            v60 = v6->fields.kind;
            v61 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v60 == 4 )
            {
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v61 )
                goto LABEL_114;
              v34 = 13;
            }
            else
            {
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v61 )
                goto LABEL_114;
              if ( v60 == 5 )
                v34 = 14;
              else
                v34 = 16;
            }
            v66 = (CommonUI_o *)v61;
            v67 = v57;
LABEL_113:
            CommonUI__OpenServantEquipStatusDialog_31183144(v66, v34, v67, v32, v33, 0);
            return;
          }
LABEL_99:
          v62 = v6->fields.statusTabListViewManager;
          v63 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v63,
            (Il2CppObject *)v6,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( v62 )
          {
            ServantStatusListViewManager__SetMode(v62, 1, v63, 0);
            return;
          }
        }
        else
        {
          v47 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v47 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnSelectStatus__);
          v48 = (System_Reflection_MethodBase_o *)sub_1C2D474(v47, v47[4]);
          OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
          v49 = 0;
          if ( id == 1 )
          {
            this = (ServantStatusDialog_o *)v6->fields.mainInfo;
            if ( !this )
              goto LABEL_114;
            v49 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill((ServantStatusListViewItem_o *)this, 0);
          }
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v6->fields.mainInfo )
          {
            v50 = this;
            EquipIdByIndex = ServantStatusListViewItem__GetEquipIdByIndex(v6->fields.mainInfo, id, 0);
            v52 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v52,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0);
            v53 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v53, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
            if ( v50 )
            {
              v21 = v49;
              v17 = (CommonUI_o *)v50;
              v18 = EquipIdByIndex;
              v19 = v52;
              v20 = v53;
              goto LABEL_84;
            }
          }
        }
LABEL_114:
        sub_1C2D6EC(this, *(_QWORD *)&result);
      case 25:
        goto LABEL_73;
      default:
        goto LABEL_99;
    }
  }
}


void ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v8; // x23
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v13; // x23
  ServantStatusVoiceListViewItem_o *v14; // x25
  int32_t v15; // w22
  int32_t v16; // w21
  System_String_o *v17; // x24
  System_String_o *LabelName; // x0
  System_String_o *v19; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  ServantVoiceMaster_o *v23; // x0
  int32_t v24; // w1
  System_String_o *v25; // x3
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v27; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v29; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C22FF6 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C22FF6 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0);
    if ( !voiceTabListViewManager )
      goto LABEL_63;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v8, 0);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v11);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        v13 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_63;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0);
        if ( !Instance )
          goto LABEL_63;
        v14 = (ServantStatusVoiceListViewItem_o *)Instance;
        v15 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
        if ( !MasterData_object )
          goto LABEL_63;
        v16 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v15,
                        (int32_t)Instance,
                        0);
        v17 = System_Int32__ToString((int32_t)&VoicePrefix, 0);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v14, 0);
        v19 = System_String__Concat_63496112(v17, (System_String_o *)StringLiteral_16105/*"_"*/, LabelName, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v14, 0);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_53;
              if ( !v14->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v14, 0) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_42584628(
                                      (ServantVoiceMaster_o *)v13,
                                      v15,
                                      v16,
                                      (int32_t)Instance,
                                      0);
                    goto LABEL_55;
                  }
                  goto LABEL_63;
                }
                if ( !v13 )
                  goto LABEL_63;
                if ( !v14->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0);
                  goto LABEL_55;
                }
LABEL_52:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v13,
                                  v15,
                                  v16,
                                  v19,
                                  0);
                goto LABEL_55;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  if ( v14->fields.genderFlag || v14->fields.voiceLabelSpecification )
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
                    if ( v13 )
                    {
                      v22 = (int)Instance;
                      v23 = (ServantVoiceMaster_o *)v13;
                      v24 = v15;
                      v25 = v19;
LABEL_28:
                      HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v23, v24, v22, v25, 0);
LABEL_55:
                      ServantStatusDialog__PlayChrVoice_34417844(this, v15, v16, HomeVoiceList, result, v21);
                      return;
                    }
                  }
                  else
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
                    if ( v13 )
                    {
                      v22 = (int)Instance;
                      v23 = (ServantVoiceMaster_o *)v13;
                      v24 = v15;
                      v25 = 0;
                      goto LABEL_28;
                    }
                  }
LABEL_63:
                  sub_1C2D6EC(Instance, v10);
                }
LABEL_53:
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
                  goto LABEL_55;
                }
                goto LABEL_63;
              }
              if ( !v14->fields.genderFlag && !v14->fields.voiceLabelSpecification )
              {
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                    (ServantVoiceMaster_o *)v13,
                                    v15,
                                    v16,
                                    2,
                                    1,
                                    0);
                  goto LABEL_55;
                }
                goto LABEL_63;
              }
            }
            if ( !v13 )
              goto LABEL_63;
            goto LABEL_52;
          case 3:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 4:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0);
            goto LABEL_55;
          case 5:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 6:
            if ( !v13 )
              goto LABEL_63;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            ServantStatusDialog__PlayBattleVoice(this, v15, v16, BattleVoiceList, result, v27);
            return;
          case 7:
            if ( !v13 )
              goto LABEL_63;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            ServantStatusDialog__PlayNpVoice(this, v15, v16, NpVoiceList, result, v29);
            return;
          case 8:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 9:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0);
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEntity_42582632(
                              (ServantVoiceMaster_o *)v13,
                              (int32_t)Instance,
                              v15,
                              v16,
                              v19,
                              0);
            goto LABEL_55;
        }
      }
    }
  }
}


void ServantStatusDialog__OnclickRandomLimitCountBattleMask(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__OnclickRandomLimitCountMask(this, 3, v2);
}


void ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v15; // x22
  __int64 v16; // x23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  CommonUI_o *v22; // x22
  System_String_o *v23; // x23
  CommonConfirmDialog_ClickDelegate_o *v24; // x0
  intptr_t *v25; // x8
  struct ServantStatusListViewItem_o *v26; // x8
  struct UserServantEntity_o *v27; // x9
  __int64 v28; // x22
  __int64 v29; // x23
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  long double v32; // q0
  __int64 v33; // x0
  __int64 v34; // x0
  CommonConfirmDialog_ClickDelegate_o *v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4C22FFC & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_1C2D490(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__);
    sub_1C2D490(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&StringLiteral_11949/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_1C2D490(&StringLiteral_11950/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_11947/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_11946/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4C22FFC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
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
        v16 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v15 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v16;
        *(_QWORD *)&v36.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v17 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C2D474(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      v20 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1C7DBA4(v19);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1C7DBA4(v19);
      v22 = **(CommonUI_o ***)(v21 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0);
      v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__;
LABEL_44:
      v35 = v24;
      CommonConfirmDialog_ClickDelegate___ctor(v24, (Il2CppObject *)this, *v25, 0);
      if ( !v22 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_31167744(
        v22,
        (System_String_o *)StringLiteral_1/*""*/,
        v23,
        v5,
        v6,
        v35,
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
        0);
      return;
    case 2:
      v26 = this->fields.mainInfo;
      if ( !v26 )
        return;
      v27 = v26->fields.userSvtEntity;
      if ( !v27 )
      {
LABEL_34:
        if ( !v26->fields.isEnableSupportRandomSetting )
          return;
        v30 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v30 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v31 = (System_Reflection_MethodBase_o *)sub_1C2D474(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1C7DBA4(v32);
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
        if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
          v34 = sub_1C7DBA4(v32);
        v22 = **(CommonUI_o ***)(v34 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0);
        v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__;
        goto LABEL_44;
      }
      v29 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v29;
      *(_QWORD *)&v37.fields.fakeValue = v28;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v37, 0) )
      {
        v26 = this->fields.mainInfo;
        if ( !v26 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v7 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2D4A8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0);
        return;
      }
LABEL_47:
      sub_1C2D6EC(v11, v12);
    case 1:
      goto LABEL_8;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open(
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

  if ( (byte_4C22FA8 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FA8 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, 0, canMoveCombine, 0);
  this->fields.mainInfo = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


void ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4C22FCB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_13582/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_4C22FCB = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40206092(106, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13582/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0);
    if ( !Instance )
      sub_1C2D6EC(v6, v7);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 106, callback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34382744(
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

  if ( (byte_4C22FA9 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FA9 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, callback != 0, canMoveCombine, 0);
  this->fields.mainInfo = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34382952(
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

  if ( (byte_4C22FAA & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FAA = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    *(const MethodInfo **)&member);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35338688(v15, partyItem, member, 0, 0);
  this->fields.mainInfo = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


void ServantStatusDialog__Open_34383148(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x5

  if ( (byte_4C22FAB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FAB = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C2D6EC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)*v13);
  ServantStatusDialog__Open_34383428(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_34383428(
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

  if ( (byte_4C22FAF & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FAF = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(v18, userSvtEntity, 0, 0, 0, v17, v17, 0, 0, 0, 0, 0);
  this->fields.mainInfo = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void ServantStatusDialog__Open_34383688(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x5

  if ( (byte_4C22FAC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FAC = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C2D6EC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)*v13);
  ServantStatusDialog__Open_34383968(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_34383968(
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

  if ( (byte_4C22FB0 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB0 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(v18, userSvtEntity, 0, 0, callback != 0, v17, v17, 0, 0, 0, 0, 0);
  this->fields.mainInfo = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void ServantStatusDialog__Open_34384232(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_4C22FAD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FAD = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C2D6EC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)*v13);
  ServantStatusDialog__Open_34384516(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_34384516(
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

  if ( (byte_4C22FB1 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB1 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(v20, userSvtEntity, 0, 0, 0, v19, v19, canMoveCombine, 0, 0, 0, 0);
  this->fields.mainInfo = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void ServantStatusDialog__Open_34384788(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_4C22FAE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FAE = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C2D6EC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)*v13);
  ServantStatusDialog__Open_34385072(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_34385072(
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

  if ( (byte_4C22FB2 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB2 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(
    v20,
    userSvtEntity,
    0,
    0,
    callback != 0,
    v19,
    v19,
    canMoveCombine,
    0,
    0,
    0,
    0);
  this->fields.mainInfo = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void ServantStatusDialog__Open_34385444(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x7

  if ( (byte_4C22FB3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v13);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_34385648(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0, callback, 0, v15);
}


void ServantStatusDialog__Open_34385648(
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

  if ( (byte_4C22FB4 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB4 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(
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
    0);
  this->fields.mainInfo = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


void ServantStatusDialog__Open_34385924(
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

  if ( (byte_4C22FB5 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB5 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v19, v20);
  v21 = this->fields.kind - 2;
  v22 = v21 > 0x23;
  v23 = 0x677FFFFFEuLL >> v21;
  v24 = v22;
  v25 = v24 | v23 & 1;
  v26 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(
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
    0);
  this->fields.mainInfo = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


void ServantStatusDialog__Open_34386236(
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

  if ( (byte_4C22FB6 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB6 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35340724(
    v24,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0,
    v23,
    v23,
    canMoveCombine,
    0,
    0,
    0,
    0);
  this->fields.mainInfo = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_34386528(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v18; // x7

  if ( (byte_4C22FB7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FB7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_34386748(
    this,
    kind,
    (UserServantEntity_o *)Entity,
    isUse,
    callback,
    openCallback,
    isSkillChange,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34386748(
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

  if ( (byte_4C22FB8 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB8 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (const MethodInfo *)isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35343884(v17, userSvtEntity, isUse, isSkillChange, 0);
  this->fields.mainInfo = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


void ServantStatusDialog__Open_34386948(
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

  if ( (byte_4C22FB9 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FB9 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35346140(v18, userSvtCollectionEntity, 0, v17, 0);
  this->fields.mainInfo = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34387172(
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

  if ( (byte_4C22FBA & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBA = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    *(const MethodInfo **)&imageLimitCount);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35348276(v20, userSvtCollectionEntity, imageLimitCount, 0, v19, 0);
  this->fields.mainInfo = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void ServantStatusDialog__Open_34387412(
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

  if ( (byte_4C22FBB & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBB = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35346140(v18, userSvtCollectionEntity, callback != 0, v17, 0);
  this->fields.mainInfo = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void ServantStatusDialog__Open_34387640(
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

  if ( (byte_4C22FBC & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBC = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35350100(v13, servantLeaderInfo, kind != 7, 0);
  this->fields.mainInfo = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void ServantStatusDialog__Open_34387824(
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

  if ( (byte_4C22FBD & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBD = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = kind == 19;
  v14 = ((unsigned int)(kind - 13) > 6) | (0x34u >> (kind - 13)) & 1;
  v15 = v13;
  v16 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35352224(v16, equipTargetInfo, v15, v14, 0);
  this->fields.mainInfo = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v16, v17, v18);
  ServantStatusDialog__Init(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34388044(
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

  if ( (byte_4C22FBE & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBE = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    (const MethodInfo *)isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35353460(v15, commandCodeEntity, isUse, 0);
  this->fields.mainInfo = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


void ServantStatusDialog__Open_34388236(
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

  if ( (byte_4C22FBF & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FBF = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35354240(v13, userCommandCodeEntity, 0);
  this->fields.mainInfo = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void ServantStatusDialog__Open_34388412(
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

  if ( (byte_4C22FC0 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FC0 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35354240(v13, userCommandCodeEntity, 0);
  this->fields.mainInfo = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void ServantStatusDialog__Open_34388588(
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

  if ( (byte_4C22FC1 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_TypeInfo);
    byte_4C22FC1 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (const MethodInfo *)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1C2D6DC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35355752(v13, userCommandCodeCollectionEntity, 0);
  this->fields.mainInfo = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__PlayBattleEffect(ServantStatusDialog_o *this, bool noupdate, const MethodInfo *method)
{
  UnityEngine_Object_o *battleChrCamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v11; // s8
  int32_t v12; // w23
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  const MethodInfo *v15; // x1
  int32_t v16; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  struct UnityEngine_GameObject_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x22
  float32x2_t v22; // d8
  float v23; // s9
  float v24; // s2 OVERLAPPED
  unsigned __int64 v25; // d0 OVERLAPPED
  int v26; // s1
  UnityEngine_Transform_o *v27; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v31; // x26
  UnityEngine_Transform_o *v32; // x27
  float Item; // s8
  float v34; // s9
  float v35; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v37; // x24
  Il2CppObject *v38; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v43; // x21
  System_String_o *v44; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C22FDA & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3103/*"Battle2D"*/);
    sub_1C2D490(&StringLiteral_16615/*"_y0"*/);
    byte_4C22FDA = 1;
  }
  v44 = 0;
  entity = 0;
  if ( !this->fields.isBattlePlay )
  {
    battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleChrCamera, 0, 0) )
    {
      transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
      this->fields.isBattlePlay = 1;
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_73;
      v8 = transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v8,
                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v8, 0);
        v8 = transform;
        if ( !transform )
          goto LABEL_73;
      }
      if ( !Component_object )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Component_object,
                                               0);
      if ( !transform )
        goto LABEL_73;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
      if ( !transform )
        goto LABEL_73;
      v11 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_73;
      v46.fields.x = 1.0 / v11;
      v46.fields.y = 1.0 / v11;
      v46.fields.z = 1.0 / v11;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v46, 0);
      transform = (UnityEngine_Component_o *)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__GetSvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               1,
                                               0);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v12 = (int)transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0);
      ServantStatusDialog__DestroyBattleChr(this, v15);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v12,
                                               LimitCountByImageLimitCostumeIn,
                                               0);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v16 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v18 = ServantAssetLoadManager__loadBattleActor(&v44, gameObject, v12, v16, 0, 0);
      this->fields.battleChr = v18;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleChr, (int32_t)v18, v19, v20);
      if ( !v18 )
        goto LABEL_73;
      v21 = UnityEngine_GameObject__AddComponent_object_(
              v18,
              (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !v21 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v21, (UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v12,
                                               v16,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v22.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v23 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v22.n64_u64[0] = 0;
        v23 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !transform )
        goto LABEL_73;
      v24 = v23 + this->fields.CHARA_BASE_POSITION.fields.z;
      v25 = vadd_f32(v22, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v26 = HIDWORD(v25);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v24 - 2),
        0);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !transform )
        goto LABEL_73;
      v47.fields.x = 0.0;
      v47.fields.z = 0.0;
      v47.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v47, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0);
      v27 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C20DA6 )
      {
        transform = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v27 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v31 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v31,
            (const MethodInfo_33FEFE8 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v31 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            5,
            0.75,
            (const MethodInfo_33FF9B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            8,
            0.75,
            (const MethodInfo_33FF9B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            9,
            0.75,
            (const MethodInfo_33FF9B4 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v31,
                 battleSize,
                 (const MethodInfo_33FFBAC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v32 = UnityEngine_GameObject__get_transform(v18, 0);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v31,
                     battleSize,
                     (const MethodInfo_33FF918 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v34 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v31,
                    battleSize,
                    (const MethodInfo_33FF918 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v35 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v31,
                    battleSize,
                    (const MethodInfo_33FF918 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v32 )
              goto LABEL_73;
            v48.fields.z = v35;
            v48.fields.x = Item;
            v48.fields.y = v34;
            UnityEngine_Transform__set_localScale(v32, v48, 0);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v21, v12, v16, 0);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v21, 0) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v21,
          5000.0,
          (System_String_o *)StringLiteral_16615/*"_y0"*/,
          0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v12, v16, 0, 0);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v21, Manager__loadAnimEvents, v12, v16, 0);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v21, this->fields.defaultAnimationName, 2, 0);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v21, this->fields.defaultAnimationName, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
      if ( !transform
        || (v37 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v21,
                                                      0)) == 0) )
      {
LABEL_73:
        sub_1C2D6EC(transform, v6);
      }
      v38 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v37, 0);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v38, 0);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v21;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)v21, v39, v40);
      v41 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3103/*"Battle2D"*/, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v18, v41, 0);
      if ( !noupdate )
      {
        transform = (UnityEngine_Component_o *)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)transform, 3, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_37473996(this->fields.statusTabListViewManager, 2, 0);
            return;
          }
          goto LABEL_73;
        }
        v43 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v43,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v43, 0);
      }
    }
  }
}


bool ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_4C22FE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4C22FE6 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayChrVoice(
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


bool ServantStatusDialog__PlayChrVoice_34417844(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_4C22FE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4C22FE8 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_4C22FE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4C22FE7 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceDataList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  bool v12; // w23
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  int v21; // w19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C22FE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4C22FE3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !voicePlayList || !voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1C2D6EC(0, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v12 = v10;
    if ( !v10 )
    {
      v21 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1C2D6EC(v10, v11);
  }
  while ( !System_String__Equals_63493168(assetName, (System_String_o *)v24.fields._current, 0) );
  ServantStatusDialog__StopVoice(this, v13);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1C2D6EC(0, v14);
    ServantStatusVoiceListViewManager__SetMode_37531388(voiceTabListViewManager, 2, listIndex, 0);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayList, (int32_t)voicePlayList, v15, v16);
  this->fields.voicePlayAssetName = assetName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, (int32_t)assetName, v18, v19);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v20);
  v21 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v12 && v21 == 7;
}


void ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4C22FEE & 1) == 0 )
  {
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C22FEE = 1;
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
      OptionManager__Recover(0);
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_34357208(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_37473996(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_35321028(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0);
            return;
          }
        }
      }
    }
    sub_1C2D6EC(charaGraphListViewManager, method);
  }
}


void ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        bool isRandomOn,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _BOOL4 v14; // w24
  const MethodInfo *v15; // x2
  int v16; // w8
  long double inited; // q0
  int v18; // w8
  unsigned __int8 v19; // w21
  struct ServantStatusListViewItem_o *v20; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  int v24; // w22
  BalanceConfig_c *v25; // x8
  struct ServantStatusListViewItem_o *v26; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v28; // x23
  __int64 v29; // x0
  __int64 v30; // x0
  CommonUI_o *v31; // x19
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  CommonConfirmDialog_ClickDelegate_o *v35; // x0
  intptr_t *v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  CommonConfirmDialog_ClickDelegate_o *v39; // x24
  const MethodInfo *v40; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C2301A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__0__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__1__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__2__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass233_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11947/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_11948/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11946/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4C2301A = 1;
  }
  v9 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass233_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass233_0___ctor((ServantStatusDialog___c__DisplayClass233_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_53;
  v14 = isRandomOn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 32) = index;
  *(_BYTE *)(v9 + 36) = isOwnSetting;
  *(_BYTE *)(v9 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v14 )
    {
      if ( mainInfo->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v16) = *(_BYTE *)(v9 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v11);
    v18 = *(unsigned __int8 *)(v9 + 37);
    v19 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v9 + 16) = 12;
    if ( v18 )
    {
      v20 = this->fields.mainInfo;
      if ( !v20 )
        goto LABEL_53;
      userSvtEntity = v20->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v23;
      *(_QWORD *)&v43.fields.fakeValue = v22;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                  v43,
                                                  0);
      v24 = (int)mainInfo;
      v25 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( v24 == v25->static_fields->ServantIdMashu1 )
      {
        v26 = this->fields.mainInfo;
        if ( !v26 )
          goto LABEL_53;
        supportRandomLimitCountList = v26->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v28 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v28,
            (Il2CppObject *)v9,
            Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__0__,
            0);
          if ( BasicHelper__Any_int__51083888(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v28,
                 (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856) )
          {
            v29 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
              v29 = sub_1C7DBA4(inited);
            v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
            if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
              v30 = sub_1C7DBA4(inited);
            v31 = **(CommonUI_o ***)(v30 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0);
            v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0);
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0);
            v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v36 = &Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v19 & *(_BYTE *)(v9 + 37) & 1) != 0 )
    {
      v37 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C7DBA4(inited);
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C7DBA4(inited);
      v31 = **(CommonUI_o ***)(v38 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
      v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v36 = &Method_ServantStatusDialog___c__DisplayClass233_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v39 = v35;
      CommonConfirmDialog_ClickDelegate___ctor(v35, (Il2CppObject *)v9, *v36, 0);
      if ( v31 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v31,
          (System_String_o *)StringLiteral_1/*""*/,
          v32,
          v33,
          v34,
          v39,
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
          0);
        return;
      }
LABEL_53:
      sub_1C2D6EC(mainInfo, v11);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v9 + 32), 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v16 = *(unsigned __int8 *)(v9 + 37);
    if ( *(_BYTE *)(v9 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v16 != 0, 0);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v40);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v16;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v14 )
    goto LABEL_14;
  if ( mainInfo->fields.ownRandomSettingButtonIndex != index )
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0);
LABEL_47:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)mainInfo,
    this->fields.mainInfo,
    v15);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v42 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v42,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v42, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C23018 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C23018 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)mainInfo, 9, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C2D6EC(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(ServantStatusDialog_o *this, const MethodInfo *method)
{
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x19
  CGThumbnailListItem_o *p_cashedBattleCharaChangeConfirmAssetData; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22FC5 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C22FC5 = 1;
  }
  cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
  if ( cashedBattleCharaChangeConfirmAssetData )
  {
    p_cashedBattleCharaChangeConfirmAssetData = (CGThumbnailListItem_o *)&this->fields.cashedBattleCharaChangeConfirmAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(cashedBattleCharaChangeConfirmAssetData, 0);
    p_cashedBattleCharaChangeConfirmAssetData->klass = 0;
    sub_1C2D434(p_cashedBattleCharaChangeConfirmAssetData, 0, v5, v6);
  }
}


void ServantStatusDialog__SetActiveInputLockPanel(ServantStatusDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C22FD8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FD8 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0, 0) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x21
  CGThumbnailListItem_o *p_battleCharaChangeConfirmDialog; // x19
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x21
  UnityEngine_Transform_o *v8; // x20
  Il2CppObject *Object_object__51051712; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C22FC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Transform___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    byte_4C22FC6 = 1;
  }
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
  {
    battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_battleCharaChangeConfirmDialog = (CGThumbnailListItem_o *)&this->fields.battleCharaChangeConfirmDialog;
    if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      goto LABEL_15;
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_18;
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               baseObject,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Transform___);
    cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
    v8 = (UnityEngine_Transform_o *)baseObject;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    if ( !cashedBattleCharaChangeConfirmAssetData )
      goto LABEL_18;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                cashedBattleCharaChangeConfirmAssetData,
                                ServantStatusDialog_TypeInfo->static_fields->BattleCharaChangeConfirmDialogPrefabName,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752420(
                                               Object_object__51051712,
                                               v8,
                                               (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    if ( !baseObject )
      goto LABEL_18;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         baseObject,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    p_battleCharaChangeConfirmDialog->klass = (CGThumbnailListItem_c *)Component_object;
    sub_1C2D434(p_battleCharaChangeConfirmDialog, (int32_t)Component_object, v11, v12);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)p_battleCharaChangeConfirmDialog->klass, 0, 0) )
    {
LABEL_15:
      baseObject = (UnityEngine_GameObject_o *)p_battleCharaChangeConfirmDialog->klass;
      if ( p_battleCharaChangeConfirmDialog->klass )
      {
        BattleCharaChangeConfirmDialog__Init((BattleCharaChangeConfirmDialog_o *)baseObject, 0);
        return;
      }
LABEL_18:
      sub_1C2D6EC(baseObject, v5);
    }
  }
}


void ServantStatusDialog__SetBattleCharaTabExplanation(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusDialog_o *v3; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UILabel_o *battleExplanationLabel; // x19
  bool v6; // w20
  System_String_o *v7; // x0
  System_String_o *costumeName; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4C23026 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11900/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_11896/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    byte_4C23026 = 1;
  }
  costumeName = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
LABEL_13:
    sub_1C2D6EC(this, method);
  if ( !mainInfo->fields.userSvtEntity )
    return;
  battleExplanationLabel = v3->fields.battleExplanationLabel;
  v6 = ServantStatusDialog__EnableSpecialCostume(v3, &costumeName, v2);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v6 )
    {
LABEL_7:
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, 0);
      this = (ServantStatusDialog_o *)System_String__Format(v7, (Il2CppObject *)costumeName, 0);
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v6 )
      goto LABEL_7;
  }
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0);
LABEL_10:
  method = (const MethodInfo *)this;
  if ( !battleExplanationLabel )
    goto LABEL_13;
  UILabel__set_text(battleExplanationLabel, (System_String_o *)this, 0);
}


void ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x2
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int v13; // w9
  _DWORD *v14; // x8
  int v15; // w23
  int v16; // w24
  int v17; // w22
  __int64 v18; // x8
  bool v19; // w8
  int32_t v20; // w21
  int32_t ConvertOverwriteDispImageLimitCount; // w22
  int32_t ServantImageLimitSealAfter; // w22
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v24; // x22
  const MethodInfo *v25; // x1
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x21
  System_Action_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x23
  System_String_o *v34; // x21
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  const MethodInfo *v36; // x1

  if ( (byte_4C22FDC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
    byte_4C22FDC = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass165_0___ctor((ServantStatusDialog___c__DisplayClass165_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  ServantStatusBattleListViewManager__ChangeSelectIndex(battleTabListViewManager, this->fields.confirmDispLv, 0);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  leftItem = battleTabListViewManager->fields.leftItem;
  if ( !leftItem )
    goto LABEL_41;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= leftItem->fields.sortIndex )
    sub_1C2D6F4(battleTabListViewManager, v7, v10);
  v13 = *((_DWORD *)&leftItem->fields.sortValue0 + confirmDispLv);
  v14 = *(_DWORD **)&battleTabListViewManager[1].fields.oldScrollPosition.fields.x;
  LODWORD(battleTabListViewManager->fields.bottomItem) = v13;
  if ( !v14 )
    goto LABEL_41;
  v15 = v14[4];
  v16 = v14[5];
  v17 = v14[6];
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  }
  else
  {
    if ( BYTE3(battleTabListViewManager[1].fields.itemSortList) )
    {
      ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
      battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
      if ( !battleTabListViewManager )
        goto LABEL_41;
    }
    ServantStatusListViewItem__SetCostumeData((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  }
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  v18 = *(_QWORD *)&battleTabListViewManager[1].fields.oldScrollPosition.fields.x;
  if ( !v18 )
    goto LABEL_41;
  v19 = v16 != *(_DWORD *)(v18 + 20)
     || v15 != *(_DWORD *)(v18 + 16)
     || v17 != ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  *(_BYTE *)(v5 + 24) = v19;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_41;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__GetSvtId(
                                                                       (ServantStatusListViewItem_o *)battleTabListViewManager,
                                                                       1,
                                                                       0);
  if ( !this->fields.mainInfo )
    goto LABEL_41;
  v20 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v20,
                                 ConvertOverwriteDispImageLimitCount,
                                 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v20,
                                                                       ServantImageLimitSealAfter,
                                                                       0);
  if ( !battleTabListViewManager )
LABEL_41:
    sub_1C2D6EC(battleTabListViewManager, v7);
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v24 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_63493168((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0) )
  {
    if ( !*(_BYTE *)(v5 + 24) )
    {
LABEL_31:
      ServantStatusDialog__EndChangeBattleResource(this, v25);
      return;
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__,
      0);
    if ( charaGraphListViewManager )
    {
      charaGraphListViewManager->fields.callbackFunc2 = v27;
      sub_1C2D434((CGThumbnailListItem_o *)&charaGraphListViewManager->fields.callbackFunc2, (int32_t)v27, v28, v29);
      ServantStatusCharaGraphListViewManager__SetMode_34357208(charaGraphListViewManager, 3, v30);
      goto LABEL_31;
    }
    goto LABEL_41;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0) )
  {
    v33 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v33, 0);
  }
  *p_battleLoadAsset = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, (int32_t)v24, v31, v32);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_41;
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0);
  v34 = *p_battleLoadAsset;
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0) )
    ServantStatusDialog__BattleAssetLoadError(this, v36);
}


void ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  unsigned int kind; // w9
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantStatusListViewItem_o *v6; // x8
  System_String_o **v7; // x8
  struct ServantStatusListViewItem_o *v8; // x8
  System_String_o **v9; // x8
  UnityEngine_Object_o *v10; // x20
  struct ServantStatusListViewItem_o *v11; // x8
  struct ServantStatusListViewItem_o *v12; // x8
  System_String_o **v13; // x8
  struct ServantStatusListViewItem_o *v14; // x8
  System_String_o **v15; // x8
  struct ServantStatusListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x9
  UISprite_o *favoriteSprite; // x20
  __int128 v19; // q1
  ServantStatusDialog_o *favoriteUserSvtId; // x22
  System_String_o **v21; // x8
  UnityEngine_Object_o *pushButton; // x20
  struct ServantStatusListViewItem_o *v23; // x8
  __int64 *v24; // x8
  struct ServantStatusListViewItem_o *v25; // x8
  struct UserServantEntity_o *v26; // x9
  __int128 v27; // q1
  ServantStatusDialog_o *pushSprite; // x20
  ServantStatusDialog_o *pushUserSvtId; // x21
  bool v30; // zf
  struct ServantStatusListViewItem_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-50h]

  v2 = this;
  if ( (byte_4C22FEC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&StringLiteral_17644/*"button_lock_reg"*/);
    sub_1C2D490(&StringLiteral_17648/*"button_push_reg"*/);
    sub_1C2D490(&StringLiteral_17649/*"button_push_unreg"*/);
    sub_1C2D490(&StringLiteral_17645/*"button_lock_unreg"*/);
    sub_1C2D490(&StringLiteral_17639/*"button_choice_unreg"*/);
    sub_1C2D490(&StringLiteral_20174/*"icon_equip"*/);
    sub_1C2D490(&StringLiteral_17638/*"button_choice_reg"*/);
    sub_1C2D490(&StringLiteral_20175/*"icon_equip_cc"*/);
    sub_1C2D490(&StringLiteral_17640/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_17641/*"button_favorite_unreg"*/);
    byte_4C22FEC = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_83;
  }
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(userSvtEntity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v2->fields.markBase;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v12 = v2->fields.mainInfo;
      if ( !v12 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_83;
      v13 = (System_String_o **)(v12->fields.isLock ? &StringLiteral_17644/*"button_lock_reg"*/ : &StringLiteral_17645/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v13, 0);
      v14 = v2->fields.mainInfo;
      if ( !v14 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v15 = (System_String_o **)(v14->fields.isChoice ? &StringLiteral_17638/*"button_choice_reg"*/ : &StringLiteral_17639/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v15, 0);
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUseFavorite, 0);
      v16 = v2->fields.mainInfo;
      if ( !v16 )
        goto LABEL_83;
      v17 = v16->fields.userSvtEntity;
      if ( !v17 )
        goto LABEL_83;
      favoriteSprite = v2->fields.favoriteSprite;
      v19 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      favoriteUserSvtId = (ServantStatusDialog_o *)v16->fields.favoriteUserSvtId;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v33, 0);
      if ( !favoriteSprite )
        goto LABEL_83;
      v21 = (System_String_o **)&StringLiteral_17640/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v21 = (System_String_o **)&StringLiteral_17641/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v21, 0);
      pushButton = (UnityEngine_Object_o *)v2->fields.pushButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
      {
        this = (ServantStatusDialog_o *)v2->fields.pushButton;
        if ( !this )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUsePush, 0);
        v23 = v2->fields.mainInfo;
        if ( !v23 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)v23->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) || v2->fields.kind == 3 )
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            3,
            1,
            this->klass[1]._1.implementedInterfaces);
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_83;
          v24 = &StringLiteral_17649/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                            this,
                                            0,
                                            1,
                                            this->klass[1]._1.implementedInterfaces);
          v25 = v2->fields.mainInfo;
          if ( !v25 )
            goto LABEL_83;
          v26 = v25->fields.userSvtEntity;
          if ( !v26 )
            goto LABEL_83;
          v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
          pushSprite = (ServantStatusDialog_o *)v2->fields.pushSprite;
          pushUserSvtId = (ServantStatusDialog_o *)v25->fields.pushUserSvtId;
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v34.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v34;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v32, 0);
          if ( !pushSprite )
            goto LABEL_83;
          v24 = &StringLiteral_17648/*"button_push_reg"*/;
          v30 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v30 )
            v24 = &StringLiteral_17649/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0);
      }
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v31 = v2->fields.mainInfo;
      if ( !v31 )
        goto LABEL_83;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31->fields.isUse, 0);
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20174/*"icon_equip"*/, 0);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = v2->fields.mainInfo;
  if ( !v6 )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_83;
  v7 = (System_String_o **)(v6->fields.isLock ? &StringLiteral_17644/*"button_lock_reg"*/ : &StringLiteral_17645/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v7, 0), (v8 = v2->fields.mainInfo) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0
    || (v8->fields.isChoice
      ? (v9 = (System_String_o **)&StringLiteral_17638/*"button_choice_reg"*/)
      : (v9 = (System_String_o **)&StringLiteral_17639/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v9, 0),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_83:
    sub_1C2D6EC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v10 = (UnityEngine_Object_o *)v2->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v2->fields.pushButton;
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = v2->fields.mainInfo;
  if ( !v11 )
    goto LABEL_83;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11->fields.isUse, 0);
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20175/*"icon_equip_cc"*/, 0);
}


void ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4C22FD7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22FD7 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList )
    size = newProfileList->fields._size;
  else
    size = 0;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noticeNumber, 0, 0) )
  {
    v7 = this->fields.noticeNumber;
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v7, size > 0, 0);
    v7 = this->fields.noticeNumber;
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v7, size, 0);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0, 0) )
    {
      v7 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v7 )
      {
        ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)v7, 0, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(v7, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 statusTabBase; // x0
  int v6; // w23
  bool v7; // w1
  UnityEngine_Object_o *battleActor; // x21
  System_String_o **v9; // x8
  System_String_o **v10; // x8
  UICommonButton_o *v11; // x21
  bool v12; // w0
  __int64 *v13; // x8
  System_String_o **v14; // x8
  UICommonButton_o *profileButton; // x21
  bool v16; // w0
  char isInitTab; // w2
  bool v18; // w1
  System_String_o **v19; // x8
  __int64 *v20; // x8
  UICommonButton_o *v21; // x21
  bool v22; // w0
  System_String_o **v23; // x8
  System_String_o **v24; // x8
  UICommonButton_o *statusButton; // x21
  bool enabled; // w0
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UICommonButton_o *battleButton; // x21
  bool v30; // w0
  const MethodInfo *v31; // x2
  __int64 *v32; // x8
  System_String_o **v33; // x8
  System_String_o **v34; // x8
  UICommonButton_o *v35; // x21
  bool v36; // w0
  System_String_o **v37; // x8
  System_String_o **v38; // x8
  UICommonButton_o *v39; // x21
  bool v40; // w0
  System_String_o **v41; // x8
  System_String_o **v42; // x8
  UICommonButton_o *v43; // x21
  bool v44; // w0
  _BOOL4 v45; // w21
  System_String_o **v46; // x8
  System_String_o **v47; // x8
  UICommonButton_o *voiceButton; // x21
  bool v49; // w0
  struct System_Boolean_array *tabInitList; // x8
  char *v51; // x8
  _BYTE *v52; // x8
  int v53; // t1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v55; // x21
  ServantStatusListViewManager_o *v56; // x20
  ServantStatusListViewManager_CallbackFunc_o *v57; // x21
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v59; // x21
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v61; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v63; // x2
  struct ServantStatusListViewItem_o *v64; // x8
  struct ServantStatusListViewItem_o *v65; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v67; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v71; // x0
  BgmManager_c *v72; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v74; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v75; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C22FEA & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1C2D490(&StringLiteral_17554/*"btn_txt_detail_off"*/);
    sub_1C2D490(&StringLiteral_17537/*"btn_txt_battlecharacter_on"*/);
    sub_1C2D490(&StringLiteral_17602/*"btn_txt_status_on"*/);
    sub_1C2D490(&StringLiteral_17438/*"btn_bg_12"*/);
    sub_1C2D490(&StringLiteral_17601/*"btn_txt_status_off"*/);
    sub_1C2D490(&StringLiteral_17617/*"btn_txt_voice_on"*/);
    sub_1C2D490(&StringLiteral_17582/*"btn_txt_profile_on"*/);
    sub_1C2D490(&StringLiteral_17616/*"btn_txt_voice_off"*/);
    sub_1C2D490(&StringLiteral_17440/*"btn_bg_19"*/);
    sub_1C2D490(&StringLiteral_17555/*"btn_txt_detail_on"*/);
    sub_1C2D490(&StringLiteral_17581/*"btn_txt_profile_off"*/);
    sub_1C2D490(&StringLiteral_17536/*"btn_txt_battlecharacter_off"*/);
    byte_4C22FEA = 1;
  }
  voice = 0;
  illust = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.profileTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.battleTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.voiceTabBase;
    if ( !statusTabBase )
      goto LABEL_287;
    v6 = 1;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        statusTabBase = (__int64)this->fields.battleActor;
        if ( !statusTabBase )
          goto LABEL_287;
        BattleFBXComponent__playAnimation((BattleFBXComponent_o *)statusTabBase, this->fields.defaultAnimationName, 0);
      }
      break;
    case 1:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v7 = 1;
      goto LABEL_33;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v7 = 0;
LABEL_33:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v7, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      break;
  }
  v6 = 0;
LABEL_37:
  switch ( this->fields.kind )
  {
    case 4:
    case 5:
    case 7:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( statusTabBase )
      {
        statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
        if ( statusTabBase )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
          statusTabBase = (__int64)this->fields.statusButton;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
              statusTabBase,
              1,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
            statusTabBase = (__int64)this->fields.statusButton;
            if ( statusTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
              statusTabBase = (__int64)this->fields.statusTitleSprite;
              if ( statusTabBase )
              {
                v23 = (System_String_o **)&StringLiteral_17602/*"btn_txt_status_on"*/;
                if ( kind )
                  v23 = (System_String_o **)&StringLiteral_17601/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v23, 0);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v24 = (System_String_o **)(kind ? &StringLiteral_17438/*"btn_bg_12"*/ : &StringLiteral_17440/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v24, 0);
                    statusTabBase = (__int64)this->fields.statusButton;
                    if ( statusTabBase )
                    {
                      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 536LL))(
                                        statusTabBase,
                                        0,
                                        this->fields.isInitTab,
                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                      statusButton = this->fields.statusButton;
                      if ( statusButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.statusButton,
                                    0);
                        UICommonButton__SetColliderEnable(statusButton, enabled, this->fields.isInitTab, 0);
                        statusTabBase = (__int64)this->fields.profileButton;
                        if ( statusTabBase )
                        {
                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)statusTabBase,
                                                     0);
                          if ( statusTabBase )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
                            statusTabBase = (__int64)this->fields.profileButton;
                            if ( statusTabBase )
                            {
                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                statusTabBase,
                                1,
                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                              statusTabBase = (__int64)this->fields.profileButton;
                              if ( statusTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
                                statusTabBase = (__int64)this->fields.profileTitleSprite;
                                if ( statusTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)statusTabBase,
                                    (System_String_o *)StringLiteral_17581/*"btn_txt_profile_off"*/,
                                    0);
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
                                        (System_String_o *)StringLiteral_17438/*"btn_bg_12"*/,
                                        0);
                                      statusTabBase = (__int64)this->fields.profileButton;
                                      if ( statusTabBase )
                                      {
                                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                                  + 536LL))(
                                          statusTabBase,
                                          3,
                                          1,
                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                        statusTabBase = (__int64)this->fields.battleButton;
                                        if ( statusTabBase )
                                        {
                                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)statusTabBase,
                                                                     0);
                                          if ( statusTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)statusTabBase,
                                              1,
                                              0);
                                            statusTabBase = (__int64)this->fields.battleButton;
                                            if ( statusTabBase )
                                            {
                                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 392LL))(
                                                statusTabBase,
                                                1,
                                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                              statusTabBase = (__int64)this->fields.battleButton;
                                              if ( statusTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)statusTabBase,
                                                  kind != 2,
                                                  0);
                                                statusTabBase = (__int64)this->fields.battleTitleSprite;
                                                if ( statusTabBase )
                                                {
                                                  v27 = (System_String_o **)&StringLiteral_17537/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v27 = (System_String_o **)&StringLiteral_17536/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v27, 0);
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
                                                      v28 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17440/*"btn_bg_19"*/
                                                                               : &StringLiteral_17438/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v28, 0);
                                                      statusTabBase = (__int64)this->fields.battleButton;
                                                      if ( statusTabBase )
                                                      {
                                                        statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                                                                          statusTabBase,
                                                                          0,
                                                                          this->fields.isInitTab,
                                                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                                        battleButton = this->fields.battleButton;
                                                        if ( battleButton )
                                                        {
                                                          v30 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v30,
                                                            this->fields.isInitTab,
                                                            0);
                                                          statusTabBase = (__int64)this->fields.voiceButton;
                                                          if ( statusTabBase )
                                                          {
                                                            statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)statusTabBase,
                                                                                       0);
                                                            if ( statusTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)statusTabBase,
                                                                1,
                                                                0);
                                                              statusTabBase = (__int64)this->fields.voiceButton;
                                                              if ( statusTabBase )
                                                              {
                                                                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                                                  statusTabBase,
                                                                  1,
                                                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                                                statusTabBase = (__int64)this->fields.voiceButton;
                                                                if ( statusTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)statusTabBase,
                                                                    0,
                                                                    0);
                                                                  statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                  if ( statusTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)statusTabBase,
                                                                      (System_String_o *)StringLiteral_17616/*"btn_txt_voice_off"*/,
                                                                      0);
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
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v32 = &StringLiteral_17555/*"btn_txt_detail_on"*/;
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
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v9 = (System_String_o **)&StringLiteral_17602/*"btn_txt_status_on"*/;
      if ( kind )
        v9 = (System_String_o **)&StringLiteral_17601/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v9, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v10 = (System_String_o **)(kind ? &StringLiteral_17438/*"btn_bg_12"*/ : &StringLiteral_17440/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v10, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v11 = this->fields.statusButton;
      if ( !v11 )
        goto LABEL_287;
      v12 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v11, v12, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v13 = &StringLiteral_17555/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v13 = &StringLiteral_17554/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v13, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v14 = (System_String_o **)(kind == 1 ? &StringLiteral_17440/*"btn_bg_19"*/ : &StringLiteral_17438/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v14, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_287;
      v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      isInitTab = this->fields.isInitTab;
      v18 = v16;
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
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v19 = (System_String_o **)&StringLiteral_17602/*"btn_txt_status_on"*/;
      if ( kind )
        v19 = (System_String_o **)&StringLiteral_17601/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v19, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v20 = &StringLiteral_17440/*"btn_bg_19"*/;
      if ( kind )
        v20 = &StringLiteral_17438/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v20, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v21 = this->fields.statusButton;
      if ( !v21 )
        goto LABEL_287;
      v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v21, v22, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17554/*"btn_txt_detail_off"*/, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17438/*"btn_bg_12"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
        statusTabBase,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      goto LABEL_215;
    case 0x1C:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v32 = &StringLiteral_17581/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v32, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17440/*"btn_bg_19"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        1,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_287;
      v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      isInitTab = 1;
LABEL_214:
      UICommonButton__SetColliderEnable(profileButton, v18, isInitTab, 0);
LABEL_215:
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
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
        0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v33 = (System_String_o **)&StringLiteral_17602/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17601/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v33, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v34 = (System_String_o **)(kind ? &StringLiteral_17438/*"btn_bg_12"*/ : &StringLiteral_17440/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v34, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v35 = this->fields.statusButton;
      if ( !v35 )
        goto LABEL_287;
      v36 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v35, v36, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v37 = (System_String_o **)&StringLiteral_17582/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v37 = (System_String_o **)&StringLiteral_17581/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v37, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17440/*"btn_bg_19"*/ : &StringLiteral_17438/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v38, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v39 = this->fields.profileButton;
      if ( !v39 )
        goto LABEL_287;
      v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      UICommonButton__SetColliderEnable(v39, v40, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 2, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v41 = (System_String_o **)&StringLiteral_17537/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v41 = (System_String_o **)&StringLiteral_17536/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v41, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v42 = (System_String_o **)(kind == 2 ? &StringLiteral_17440/*"btn_bg_19"*/ : &StringLiteral_17438/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v42, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v43 = this->fields.battleButton;
      if ( !v43 )
        goto LABEL_287;
      v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0);
      UICommonButton__SetColliderEnable(v43, v44, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      v45 = isPlayVoice;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      if ( v45 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v6 != 1, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v46 = (System_String_o **)&StringLiteral_17617/*"btn_txt_voice_on"*/;
          if ( !v6 )
            v46 = (System_String_o **)&StringLiteral_17616/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v46, 0);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v47 = (System_String_o **)(v6 ? &StringLiteral_17440/*"btn_bg_19"*/ : &StringLiteral_17438/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v47, 0);
              statusTabBase = (__int64)this->fields.voiceButton;
              if ( statusTabBase )
              {
                statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                         + 536LL))(
                                  statusTabBase,
                                  0,
                                  this->fields.isInitTab,
                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                voiceButton = this->fields.voiceButton;
                if ( voiceButton )
                {
                  v49 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0);
                  UICommonButton__SetColliderEnable(voiceButton, v49, this->fields.isInitTab, 0);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_287:
        sub_1C2D6EC(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17616/*"btn_txt_voice_off"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17438/*"btn_bg_12"*/, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        3,
                        1,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
LABEL_220:
      tabInitList = this->fields.tabInitList;
      if ( !tabInitList )
        goto LABEL_287;
      if ( LODWORD(tabInitList->max_length) <= kind )
        sub_1C2D6F4(statusTabBase, *(_QWORD *)&kind, v31);
      v51 = (char *)tabInitList + kind;
      v53 = (unsigned __int8)v51[32];
      v52 = v51 + 32;
      if ( v53 )
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
      *v52 = 1;
      switch ( kind )
      {
        case 0:
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            0);
          if ( this->fields.isInit )
            goto LABEL_231;
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)statusTabBase, 6, 0);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)statusTabBase, 4, 0);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v55 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( !statusTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v55, 0);
LABEL_231:
          v56 = this->fields.statusTabListViewManager;
          v57 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( !v56 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(v56, 1, v57, 0);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v31);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v59 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v59,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v59, 0);
          break;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            0);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v61 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v61,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            0);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v61, 0);
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
          mainInfo = this->fields.mainInfo;
          if ( !mainInfo || !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !mainInfo->fields._IsTransformed_k__BackingField,
            0);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          if ( !byte_4C2302F )
          {
            sub_1C2D490(&RandomLimitCountManager_TypeInfo);
            byte_4C2302F = 1;
          }
          statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(statusTabBase + 184) + 8LL) )
            goto LABEL_252;
          v64 = this->fields.mainInfo;
          if ( !v64 )
            goto LABEL_287;
          if ( !v64->fields.isConvertOverwriteImage )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, *(const MethodInfo **)&kind);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v63);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
          v65 = this->fields.mainInfo;
          if ( !v65 )
            goto LABEL_287;
          if ( !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v65->fields._IsTransformed_k__BackingField,
            0);
          statusTabBase = (__int64)this->fields.mainInfo;
          if ( !statusTabBase )
            goto LABEL_287;
          battleTransformNameLabel = this->fields.battleTransformNameLabel;
          statusTabBase = (__int64)ServantStatusListViewItem__GetTransformName(
                                     (ServantStatusListViewItem_o *)statusTabBase,
                                     0);
          if ( !battleTransformNameLabel )
            goto LABEL_287;
          UILabel__set_text(battleTransformNameLabel, (System_String_o *)statusTabBase, 0);
          break;
        case 3:
          v67 = this->fields.mainInfo;
          if ( !v67 )
            goto LABEL_287;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_287;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v67,
            (System_Int32_array *)statusTabBase,
            0);
LABEL_262:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            BgmVolume = OptionManager__GetBgmVolume(0);
            v71 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v71 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v71->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              if ( !OptionManager__GetVolumeMute(0) )
              {
                v72 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v72 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v72->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0);
              }
            }
          }
          v74 = this->fields.voiceTabListViewManager;
          v75 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v75,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0);
          if ( !v74 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v74, 1, v75, 0);
          break;
        default:
          break;
      }
LABEL_278:
      if ( !(v6 & 1 | !this->fields.isBgmLow) )
      {
        this->fields.isBgmLow = 0;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        OptionManager__Recover(0);
      }
      this->fields.isInitTab = 1;
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetVisibleHighPriorityObject(
        ServantStatusDialog_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Component_o *battleChrCamera; // x0
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_4C22FEF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C22FEF = 1;
  }
  if ( this->fields.tabKind == 2 )
  {
    battleChrCamera = (UnityEngine_Component_o *)this->fields.battleChrCamera;
    if ( !battleChrCamera )
      goto LABEL_13;
    battleChrCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(battleChrCamera, 0);
    if ( !battleChrCamera )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleChrCamera, isVisible, 0);
    if ( isVisible )
    {
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        battleChrCamera = (UnityEngine_Component_o *)this->fields.battleActor;
        if ( battleChrCamera )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)battleChrCamera,
            (System_String_o *)StringLiteral_24695/*"wait"*/,
            0);
          return;
        }
LABEL_13:
        sub_1C2D6EC(battleChrCamera, isVisible);
      }
    }
  }
}


void ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_4C22FC8 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C2D490(&StringLiteral_11954/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_4C22FC8 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields.userSvtEntity || item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
    if ( this )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_15;
  }
  this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
  if ( !this )
    goto LABEL_15;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  battleMaskInfoLabel = v4->fields.battleMaskInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11954/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0);
}


bool ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v4; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v8; // x20
  struct ServantStatusListViewItem_o *v9; // x8
  bool v10; // w22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_4C22FD4 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22FD4 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_34;
  v4 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !mainInfo )
    goto LABEL_34;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)mainInfo,
                                 v4,
                                 ConvertOverwriteDispImageLimitCount,
                                 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                              v4,
                                              ServantImageLimitSealAfter,
                                              0);
  if ( !mainInfo )
    goto LABEL_34;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v8 = (System_String_o *)mainInfo;
  if ( System_String__Equals_63493168((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_34406412(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4C2302F )
    {
      sub_1C2D490(&RandomLimitCountManager_TypeInfo);
      byte_4C2302F = 1;
    }
    mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(mainInfo->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v9 = this->fields.mainInfo;
    if ( v9 )
    {
      if ( !v9->fields.isConvertOverwriteImage )
        goto LABEL_22;
      return 0;
    }
LABEL_34:
    sub_1C2D6EC(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0) )
  {
    v13 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v13, 0);
  }
  *p_battleLoadAsset = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleLoadAsset, (int32_t)v8, v11, v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v14);
  battleLoadAsset = this->fields.battleLoadAsset;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v10 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v16, 1, 0) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v17);
    return 1;
  }
  return v10;
}


void ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x22
  AssetLoader_LoadEndDataHandler_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C22FCE & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
    byte_4C22FCE = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass150_0___ctor((ServantStatusDialog___c__DisplayClass150_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = onComplete;
  v10 = v5 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0);
  if ( !mainInfo )
    goto LABEL_20;
  p_cardLoadAsset = &this->fields.cardLoadAsset;
  v13 = (System_String_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_63493168(
                                              (System_String_o *)mainInfo,
                                              *p_cardLoadAsset,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_20:
    sub_1C2D6EC(mainInfo, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0) )
  {
    v14 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v14, 0);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  *p_cardLoadAsset = v13;
  sub_1C2D434((CGThumbnailListItem_o *)p_cardLoadAsset, (int32_t)v13, v15, v16);
  v17 = *p_cardLoadAsset;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v17, v18, 1, 0) )
  {
    *p_cardLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_cardLoadAsset, 0, v19, v20);
    goto LABEL_18;
  }
}


void ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v4; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *statusLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AssetData_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C22FCC & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndStatusLoad__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22FCC = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_12;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_12;
  v4 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v4, LimitCount, 0);
  this->fields.statusLoadAsset = StatusImageFolderName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, (int32_t)StatusImageFolderName, v7, v8);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1C2D6EC(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  statusLoadAsset = this->fields.statusLoadAsset;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v10, 1, 0) )
  {
    this->fields.statusLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.statusLoadAsset, 0, v11, v12);
    ServantStatusDialog__EndStatusLoad(this, v13, v14);
  }
}


void ServantStatusDialog__StartTransformedStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *StatusImageFolderName; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  AssetLoader_LoadEndDataHandler_o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C22FD0 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__);
    sub_1C2D490(&ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
    byte_4C22FD0 = 1;
  }
  v5 = sub_1C2D6DC(ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass152_0___ctor((ServantStatusDialog___c__DisplayClass152_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = onComplete;
  v10 = v5 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  if ( !mainInfo->fields._IsTransformed_k__BackingField )
    goto LABEL_19;
  TransformedSvtId_k__BackingField = mainInfo->fields._TransformedSvtId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(TransformedSvtId_k__BackingField, 0, 0);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  p_transformedStatusLoadAsset = &this->fields.transformedStatusLoadAsset;
  v14 = StatusImageFolderName;
  StatusImageFolderName = (System_String_o *)System_String__Equals_63493168(
                                               StatusImageFolderName,
                                               *p_transformedStatusLoadAsset,
                                               0);
  if ( ((unsigned __int8)StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_21:
    sub_1C2D6EC(StatusImageFolderName, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0) )
  {
    v15 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v15, 0);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0);
  *p_transformedStatusLoadAsset = v14;
  sub_1C2D434((CGThumbnailListItem_o *)p_transformedStatusLoadAsset, (int32_t)v14, v16, v17);
  v18 = *p_transformedStatusLoadAsset;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v18, v19, 1, 0) )
  {
    *p_transformedStatusLoadAsset = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_transformedStatusLoadAsset, 0, v20, v21);
    goto LABEL_19;
  }
}


bool ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  bool v4; // w19
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w22
  ServantStatusListViewItem_o *v7; // x20
  __int64 v8; // x2
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v10; // x9
  int32_t v11; // w22
  BalanceConfig_c *v12; // x8
  ServantLimitAddMaster_o *v13; // x23
  struct ServantStatusListViewItem_o *v14; // x9
  int32_t v15; // w4
  const MethodInfo *v16; // x5
  struct PartyListViewItem_o *v17; // x8
  ServantStatusListViewItem_o *v18; // x23
  unsigned __int64 v19; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  ServantStatusListViewItem_o *v27; // x1
  Il2CppClass **v28; // x0
  int32_t v29; // w4
  const MethodInfo *v30; // x5
  System_Collections_Generic_List_object__o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  ServantStatusListViewItem_o *v37; // x1
  Il2CppClass **v38; // x0
  int32_t v39; // w4
  const MethodInfo *v40; // x5
  System_Collections_Generic_List_object__o *v41; // x24
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  ServantStatusListViewItem_o *v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w4
  const MethodInfo *v50; // x5
  BalanceConfig_c *v51; // x8
  int v52; // w24
  System_Collections_Generic_List_object__o *v53; // x24
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  ServantStatusListViewItem_o *v59; // x1
  Il2CppClass **v60; // x0
  int32_t v61; // w4
  const MethodInfo *v62; // x5
  BalanceConfig_c *v63; // x8
  int v64; // w24
  System_Collections_Generic_List_object__o *v65; // x24
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  ServantStatusListViewItem_o *v71; // x1
  Il2CppClass **v72; // x0
  int32_t v73; // w4
  const MethodInfo *v74; // x5
  System_Collections_Generic_List_object__o *v75; // x24
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  ServantStatusListViewItem_o *v81; // x1
  Il2CppClass **v82; // x0
  int32_t v83; // w4
  const MethodInfo *v84; // x5
  System_Collections_Generic_List_object__o *v85; // x24
  int32_t ServantIdMashu3; // w2
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  ServantStatusListViewItem_o *v92; // x1
  Il2CppClass **v93; // x0
  System_Collections_Generic_List_object__o *v94; // x24
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  ServantStatusListViewItem_o *v100; // x1
  Il2CppClass **v101; // x0
  int32_t v102; // w4
  const MethodInfo *v103; // x5
  System_Collections_Generic_List_object__o *v104; // x24
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  ServantStatusListViewItem_o *v110; // x1
  Il2CppClass **v111; // x0
  NetworkManager_c *v112; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t userIdNumber; // x24
  int32_t MashuTdGradeUpQuestId; // w26
  int32_t MashuTdGradeUpQuestPhase; // w25
  System_Collections_Generic_List_object__o *v117; // x24
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  ServantStatusListViewItem_o *v123; // x1
  Il2CppClass **v124; // x0
  int32_t v125; // w4
  const MethodInfo *v126; // x5
  System_Collections_Generic_List_object__o *v127; // x24
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  ServantStatusListViewItem_o *v133; // x1
  Il2CppClass **v134; // x0
  ServantVoiceRelationEntity_array *v135; // x20
  int max_length; // w8
  unsigned int v137; // w25
  ServantVoiceRelationEntity_o *v138; // x26
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x22
  __int64 v140; // x23
  __int64 v141; // x24
  ServantStatusDialog_o *v142; // x0
  int32_t v143; // w4
  const MethodInfo *v144; // x5
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  struct System_Object_array *items; // x8
  _QWORD *v148; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v150; // x1
  Il2CppClass **v151; // x0
  System_Collections_Generic_List_object__o *v152; // x22
  ServantStatusDialog_o *v153; // x0
  int32_t v154; // w4
  const MethodInfo *v155; // x5
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  ServantStatusListViewItem_o *v161; // x1
  Il2CppClass **v162; // x0
  System_Collections_Generic_List_object__o *v163; // x22
  ServantStatusDialog_o *v164; // x0
  int32_t v165; // w4
  const MethodInfo *v166; // x5
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  ServantStatusListViewItem_o *v172; // x1
  Il2CppClass **v173; // x0
  struct System_Collections_Generic_List_string__o *v174; // x8
  const MethodInfo *v175; // x2
  NetworkManager_c *v176; // x0
  Il2CppObject *Item; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  System_String_o *loadVoiceData; // x20
  System_Action_o *v181; // x21
  ServantStatusListViewItem_o *v183; // [xsp+8h] [xbp-78h]
  unsigned __int64 v184; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  if ( (byte_4C22FE0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C22FE0 = 1;
  }
  relationList = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C2267F )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2267F = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->isRebootBlock )
    return 1;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v6 = (int)mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         (int32_t)mainInfo,
         (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v6,
                                              0);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_166;
  v7 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v6,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v7 )
    goto LABEL_166;
  partyItem = v7->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v10 = 0;
    v183 = v7;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)partyItem )
        goto LABEL_167;
      v11 = *((_DWORD *)&v7->fields.memberItem + v10);
      v184 = v10;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v12 = BalanceConfig_TypeInfo;
      v13 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      v14 = this->fields.mainInfo;
      if ( !v14 )
        goto LABEL_166;
      if ( !v13 )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v13,
                                                  v11,
                                                  v12->static_fields->ServantLimitMax,
                                                  v14->fields.costumeIds,
                                                  0);
      if ( !mainInfo )
        goto LABEL_166;
      v17 = mainInfo->fields.partyItem;
      v18 = mainInfo;
      if ( (int)v17 >= 1 )
        break;
LABEL_123:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_166;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v11, 0);
      v135 = relationList;
      if ( !relationList )
        goto LABEL_166;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v137 = 0;
        while ( v137 < max_length )
        {
          v138 = v135->m_Items[v137];
          if ( !v138 )
            goto LABEL_166;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v141 = *(_QWORD *)&v138->fields.relationSvtId.fields.currentCryptoKey;
          v140 = *(_QWORD *)&v138->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v186.fields.currentCryptoKey = v141;
          *(_QWORD *)&v186.fields.fakeValue = v140;
          v142 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v186, 0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v142,
                                                      0,
                                                      (int32_t)v142,
                                                      0,
                                                      v143,
                                                      v144);
          if ( !requestVoiceDataList )
            goto LABEL_166;
          items = requestVoiceDataList->fields._items;
          v148 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_166;
          size = requestVoiceDataList->fields._size;
          v150 = mainInfo;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v151 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v151[4] = (Il2CppClass *)v150;
            sub_1C2D434((CGThumbnailListItem_o *)(v151 + 4), (int32_t)v150, v145, v146);
          }
          v152 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v153 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                            v138->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v153,
                                                      2,
                                                      (int32_t)v153,
                                                      0,
                                                      v154,
                                                      v155);
          if ( !v152 )
            goto LABEL_166;
          v158 = v152->fields._items;
          v159 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !v158 )
            goto LABEL_166;
          v160 = v152->fields._size;
          v161 = mainInfo;
          if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v152,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
          }
          else
          {
            v162 = &v158->obj.klass + v160;
            v152->fields._size = v160 + 1;
            v162[4] = (Il2CppClass *)v161;
            sub_1C2D434((CGThumbnailListItem_o *)(v162 + 4), (int32_t)v161, v156, v157);
          }
          v163 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v164 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                            v138->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v164,
                                                      1,
                                                      (int32_t)v164,
                                                      0,
                                                      v165,
                                                      v166);
          if ( !v163 )
            goto LABEL_166;
          v169 = v163->fields._items;
          v170 = Method_System_Collections_Generic_List_string__Add__;
          ++v163->fields._version;
          if ( !v169 )
            goto LABEL_166;
          v171 = v163->fields._size;
          v172 = mainInfo;
          if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v163,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v163->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1C2D434((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v172, v167, v168);
          }
          max_length = v135->max_length;
          if ( (int)++v137 >= max_length )
            goto LABEL_148;
        }
LABEL_167:
        sub_1C2D6F4(mainInfo, method, v8);
      }
LABEL_148:
      v7 = v183;
      LODWORD(partyItem) = v183->fields.partyItem;
      v10 = v184 + 1;
      if ( (__int64)(v184 + 1) >= (int)partyItem )
        goto LABEL_149;
    }
    v19 = 0;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_167;
      v21 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v11,
                                                  *((_DWORD *)p_memberItem + v19),
                                                  v15,
                                                  v16);
      if ( !v21 )
        goto LABEL_166;
      v24 = v21->fields._items;
      v25 = Method_System_Collections_Generic_List_string__Add__;
      ++v21->fields._version;
      if ( !v24 )
        goto LABEL_166;
      v26 = v21->fields._size;
      v27 = mainInfo;
      if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v24->obj.klass + v26;
        v21->fields._size = v26 + 1;
        v28[4] = (Il2CppClass *)v27;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
      }
      if ( v19 >= LODWORD(v18->fields.partyItem) )
        goto LABEL_167;
      v31 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v11,
                                                  *((_DWORD *)p_memberItem + v19),
                                                  v29,
                                                  v30);
      if ( !v31 )
        goto LABEL_166;
      v34 = v31->fields._items;
      v35 = Method_System_Collections_Generic_List_string__Add__;
      ++v31->fields._version;
      if ( !v34 )
        goto LABEL_166;
      v36 = v31->fields._size;
      v37 = mainInfo;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v34->obj.klass + v36;
        v31->fields._size = v36 + 1;
        v38[4] = (Il2CppClass *)v37;
        sub_1C2D434((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v37, v32, v33);
      }
      if ( v19 >= LODWORD(v18->fields.partyItem) )
        goto LABEL_167;
      v41 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v11,
                                                  *((_DWORD *)p_memberItem + v19),
                                                  v39,
                                                  v40);
      if ( !v41 )
        goto LABEL_166;
      v44 = v41->fields._items;
      v45 = Method_System_Collections_Generic_List_string__Add__;
      ++v41->fields._version;
      if ( !v44 )
        goto LABEL_166;
      v46 = v41->fields._size;
      v47 = mainInfo;
      if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v44->obj.klass + v46;
        v41->fields._size = v46 + 1;
        v48[4] = (Il2CppClass *)v47;
        sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v42, v43);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v51 = BalanceConfig_TypeInfo;
      v52 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( v52 == v51->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v63 = BalanceConfig_TypeInfo;
      v64 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v63 = BalanceConfig_TypeInfo;
      }
      if ( v64 == v63->static_fields->ServantIdMashu1 )
      {
        v65 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v63->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v63);
        if ( v19 >= LODWORD(v18->fields.partyItem) )
          goto LABEL_167;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v19),
                                                    v15,
                                                    v16);
        if ( !v65 )
          goto LABEL_166;
        v68 = v65->fields._items;
        v69 = Method_System_Collections_Generic_List_string__Add__;
        ++v65->fields._version;
        if ( !v68 )
          goto LABEL_166;
        v70 = v65->fields._size;
        v71 = mainInfo;
        if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v65,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v68->obj.klass + v70;
          v65->fields._size = v70 + 1;
          v72[4] = (Il2CppClass *)v71;
          sub_1C2D434((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v71, v66, v67);
        }
        if ( v19 >= LODWORD(v18->fields.partyItem) )
          goto LABEL_167;
        v94 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v19),
                                                    v73,
                                                    v74);
        if ( !v94 )
          goto LABEL_166;
        v97 = v94->fields._items;
        v98 = Method_System_Collections_Generic_List_string__Add__;
        ++v94->fields._version;
        if ( !v97 )
          goto LABEL_166;
        v99 = v94->fields._size;
        v100 = mainInfo;
        if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v97->obj.klass + v99;
          v94->fields._size = v99 + 1;
          v101[4] = (Il2CppClass *)v100;
          sub_1C2D434((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v100, v95, v96);
        }
        if ( v19 >= LODWORD(v18->fields.partyItem) )
          goto LABEL_167;
        v104 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v19),
                                                    v102,
                                                    v103);
        if ( !v104 )
          goto LABEL_166;
        v107 = v104->fields._items;
        v108 = Method_System_Collections_Generic_List_string__Add__;
        ++v104->fields._version;
        if ( !v107 )
          goto LABEL_166;
        v109 = v104->fields._size;
        v110 = mainInfo;
        if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v104,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v111 = &v107->obj.klass + v109;
          v104->fields._size = v109 + 1;
          v111[4] = (Il2CppClass *)v110;
          sub_1C2D434((CGThumbnailListItem_o *)(v111 + 4), (int32_t)v110, v105, v106);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        v112 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v112 = NetworkManager_TypeInfo;
        }
        static_fields = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v112->static_fields->userIdNumber;
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
                                                    0);
        if ( ((unsigned __int8)mainInfo & 1) != 0 )
        {
          mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
          v117 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v19 >= LODWORD(v18->fields.partyItem) )
            goto LABEL_167;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v19),
                                                      v15,
                                                      v16);
          if ( !v117 )
            goto LABEL_166;
          v120 = v117->fields._items;
          v121 = Method_System_Collections_Generic_List_string__Add__;
          ++v117->fields._version;
          if ( !v120 )
            goto LABEL_166;
          v122 = v117->fields._size;
          v123 = mainInfo;
          if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v117,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            v124 = &v120->obj.klass + v122;
            v117->fields._size = v122 + 1;
            v124[4] = (Il2CppClass *)v123;
            sub_1C2D434((CGThumbnailListItem_o *)(v124 + 4), (int32_t)v123, v118, v119);
          }
          if ( v19 >= LODWORD(v18->fields.partyItem) )
            goto LABEL_167;
          v127 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v19),
                                                      v125,
                                                      v126);
          if ( !v127 )
            goto LABEL_166;
          v130 = v127->fields._items;
          v131 = Method_System_Collections_Generic_List_string__Add__;
          ++v127->fields._version;
          if ( !v130 )
            goto LABEL_166;
          v132 = v127->fields._size;
          v133 = mainInfo;
          if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v127,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = &v130->obj.klass + v132;
            v127->fields._size = v132 + 1;
            v134[4] = (Il2CppClass *)v133;
            sub_1C2D434((CGThumbnailListItem_o *)(v134 + 4), (int32_t)v133, v128, v129);
          }
          if ( v19 >= LODWORD(v18->fields.partyItem) )
            goto LABEL_167;
          v85 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_112:
      LODWORD(v17) = v18->fields.partyItem;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_123;
    }
    v53 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( v19 >= LODWORD(v18->fields.partyItem) )
      goto LABEL_167;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v19),
                                                v49,
                                                v50);
    if ( !v53 )
      goto LABEL_166;
    v56 = v53->fields._items;
    v57 = Method_System_Collections_Generic_List_string__Add__;
    ++v53->fields._version;
    if ( !v56 )
      goto LABEL_166;
    v58 = v53->fields._size;
    v59 = mainInfo;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v56->obj.klass + v58;
      v53->fields._size = v58 + 1;
      v60[4] = (Il2CppClass *)v59;
      sub_1C2D434((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v59, v54, v55);
    }
    if ( v19 >= LODWORD(v18->fields.partyItem) )
      goto LABEL_167;
    v75 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v19),
                                                v61,
                                                v62);
    if ( !v75 )
      goto LABEL_166;
    v78 = v75->fields._items;
    v79 = Method_System_Collections_Generic_List_string__Add__;
    ++v75->fields._version;
    if ( !v78 )
      goto LABEL_166;
    v80 = v75->fields._size;
    v81 = mainInfo;
    if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v78->obj.klass + v80;
      v75->fields._size = v80 + 1;
      v82[4] = (Il2CppClass *)v81;
      sub_1C2D434((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v81, v76, v77);
    }
    if ( v19 >= LODWORD(v18->fields.partyItem) )
      goto LABEL_167;
    v85 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v19),
                                                v83,
                                                v84);
    if ( !v85 )
      goto LABEL_166;
    v89 = v85->fields._items;
    v90 = Method_System_Collections_Generic_List_string__Add__;
    ++v85->fields._version;
    if ( !v89 )
      goto LABEL_166;
    v91 = v85->fields._size;
    v92 = mainInfo;
    if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v85,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &v89->obj.klass + v91;
      v85->fields._size = v91 + 1;
      v93[4] = (Il2CppClass *)v92;
      sub_1C2D434((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v92, v87, v88);
    }
    goto LABEL_112;
  }
LABEL_149:
  v174 = this->fields.requestVoiceDataList;
  if ( !v174 )
LABEL_166:
    sub_1C2D6EC(mainInfo, method);
  if ( v174->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  ServantStatusDialog__SetTabKind(this, 3, v175);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C2267F )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2267F = 1;
  }
  v176 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v176 = NetworkManager_TypeInfo;
  }
  if ( v176->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v178, v179);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v181 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v181, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v4 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v181, 1, 0);
  return v4;
}


void ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v9; // x21
  CGThumbnailListItem_o *p_voicePlayer; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C22FE2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_1C2D490(&StringLiteral_6028/*"EndWaitVoice"*/);
    byte_4C22FE2 = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_37531388(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71148584(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6028/*"EndWaitVoice"*/,
      0);
    this->fields.voicePlayList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayList, 0, v4, v5);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayAssetName, 0, v6, v7);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0);
    SePlayer__RemoveCallback(voicePlayer, v9, 0);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (CGThumbnailListItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0);
      p_voicePlayer->klass = 0;
      sub_1C2D434(p_voicePlayer, 0, v11, v12);
      return;
    }
LABEL_13:
    sub_1C2D6EC(voiceTabListViewManager, method);
  }
}


void ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_4C23025 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1C2D490(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23025 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CvMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0 )
    {
      sub_1C2D6EC(Instance, v6);
    }
    ServantStatusFlavorTextListViewManager__UpdateCvName(
      profileTabListViewManager,
      (System_String_o *)Instance[1].monitor,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__UpdateProfileList(ServantStatusDialog_o *this, bool setMode, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct System_Boolean_array *tabInitList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  System_Action_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ServantStatusFlavorTextListViewManager_o *v10; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v11; // x21
  struct ServantStatusFlavorTextListViewManager_o *v12; // x8

  v4 = this;
  if ( (byte_4C23024 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_1C2D490(&Method_ServantStatusDialog__UpdateProfileList_b__246_0__);
    byte_4C23024 = 1;
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
      0);
    profileTabListViewManager = v4->fields.profileTabListViewManager;
    v7 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__246_0__, 0);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v7;
      sub_1C2D434((CGThumbnailListItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent, (int32_t)v7, v8, v9);
      if ( !setMode )
        return;
      v10 = v4->fields.profileTabListViewManager;
      v11 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0);
      if ( v10 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v10, 1, v11, 0);
        v12 = v4->fields.profileTabListViewManager;
        if ( v12 )
        {
          v12->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1C2D6EC(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( LODWORD(tabInitList->max_length) <= 1 )
    sub_1C2D6F4(this, setMode, method);
  tabInitList->m_Items[1] = 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__UpdateServantDetailName(
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
      this = (ServantStatusDialog_o *)ServantEntity__getName(svtEntity, -1, imageLimitCount, 0, 0);
      if ( servantNameRangeLabel )
      {
        UIRangeLabel__Set(servantNameRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
        return;
      }
    }
LABEL_8:
    sub_1C2D6EC(this, *(_QWORD *)&imageLimitCount);
  }
}


void ServantStatusDialog__UpdateServantParameters(
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
        0);
      return;
    }
LABEL_7:
    sub_1C2D6EC(this, imageLimitCount);
  }
}


void ServantStatusDialog___EndLoadInit_b__146_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1C2D6EC(this, method);
  if ( mainInfo->fields._IsTransformServant_k__BackingField )
    EventTutorialMaster__CheckTutorial(0, 86, 0, 0, 0, 0, 0, 0);
}


void ServantStatusDialog___InitList_b__184_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  this->fields.needAutoScroll = 0;
}


void ServantStatusDialog___LoadTransformedResource_b__206_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C2302B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AssetData__TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog__LoadTransformedResource_b__206_1__);
    byte_4C2302B = 1;
  }
  v4 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__206_1__,
    0);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog___LoadTransformedResource_b__206_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  ServantStatusDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C2302C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_4C2302C = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void ServantStatusDialog___OnConfirmServantQuest_b__236_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  PartyOrganizationUtility_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C2302D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2302D = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v5, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v6, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(v6, v7);
  }
  v6->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v7);
}


void ServantStatusDialog___OnclickRandomLimitCountMask_b__203_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void ServantStatusDialog___OnclickRandomLimitCountMask_b__203_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void ServantStatusDialog___UpdateProfileList_b__246_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Master_object; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  ServantCommentMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w22
  __int64 v14; // x2
  System_Int32_array *v15; // x23
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C2302E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2302E = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          v10 = (ServantCommentMaster_o *)Master_object;
          v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
          v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v17.fields.currentCryptoKey = v12;
          *(_QWORD *)&v17.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17, 0);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1C2D538(int___TypeInfo, 1);
          if ( entity )
          {
            v15 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1C2D538(int___TypeInfo, 1);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1C2D6F4(Master_object, v6, v14);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v10 )
              {
                ServantCommentMaster__SetOpen_42407144(v10, v13, v15, (System_Int32_array *)Master_object, 0);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C2D6EC(Master_object, v6);
  }
}


bool ServantStatusDialog__get_IsViewCharaGraph(const MethodInfo *method)
{
  ServantStatusDialog_c *v1; // x0

  if ( (byte_4C22FA6 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    byte_4C22FA6 = 1;
  }
  v1 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v1 = ServantStatusDialog_TypeInfo;
  }
  return v1->static_fields->_IsViewCharaGraph_k__BackingField;
}


void ServantStatusDialog__set_IsViewCharaGraph(bool value, const MethodInfo *method)
{
  ServantStatusDialog_c *v3; // x0

  if ( (byte_4C22FA7 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_TypeInfo);
    byte_4C22FA7 = 1;
  }
  v3 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v3 = ServantStatusDialog_TypeInfo;
  }
  v3->static_fields->_IsViewCharaGraph_k__BackingField = value;
}


void ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6DE48;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DE00;
}


System_IAsyncResult_o *ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isModify;
  if ( (byte_4C237E0 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C237E0 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    this->fields.method);
}


void ServantStatusDialog_EndIndividualityDelegate___ctor(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6DFC4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DF6C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
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
  _QWORD v13[3]; // [xsp+0h] [xbp-50h] BYREF
  bool v14[4]; // [xsp+18h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  if ( (byte_4C237E3 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C237E3 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isNeedSort, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusDialog_EndIndividualityDelegate__Invoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    isNeedSort,
    this->fields.method);
}


void ServantStatusDialog_FormationEndDelegate___ctor(
        ServantStatusDialog_FormationEndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6DEBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DE64;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14 = questId;
  if ( (byte_4C237E1 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C237E1 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, *(_QWORD *)&questId, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusDialog_FormationEndDelegate__Invoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    questId,
    this->fields.method);
}


void ServantStatusDialog_ResultDelegate___ctor(
        ServantStatusDialog_ResultDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6DF40;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DEE0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ServantStatusDialog_ResultDelegate__BeginInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  bool v20[4]; // [xsp+38h] [xbp-38h] BYREF
  bool v21[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v21[0] = isModify;
  v20[0] = isNeedSort;
  v19 = questId;
  if ( (byte_4C237E2 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C237E2 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(bool_TypeInfo, v21, isNeedSort, *(_QWORD *)&questId, callback);
  v17[1] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusDialog_ResultDelegate__Invoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    isNeedSort,
    questId,
    this->fields.method);
}


void ServantStatusDialog__CoWaitForEndOfFrame_d__207___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__CoWaitForEndOfFrame_d__207__MoveNext(
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
  if ( (byte_4C237EF & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C237EF = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C2D6EC(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__207_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__CoWaitForEndOfFrame_d__207__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__LoadAsset_d__139___ctor(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__LoadAsset_d__139__MoveNext(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantStatusDialog__LoadAsset_d__139_o *v4; // x19
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ServantStatusDialog___c__DisplayClass139_0_o *_8__1; // x21
  System_Action_o *v9; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v10; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v11; // x21
  System_Action_o *v12; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v13; // x21
  System_Action_o *v14; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v15; // x8
  struct System_Action_o *callback; // x8
  bool result; // w0
  CGThumbnailListItem_o *v18; // x19
  int v19; // w8
  CGThumbnailListItem_o *p__2__current; // x19

  v4 = this;
  if ( (byte_4C237F0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__);
    this = (ServantStatusDialog__LoadAsset_d__139_o *)sub_1C2D490(&ServantStatusDialog___c__DisplayClass139_0_TypeInfo);
    byte_4C237F0 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C2D6DC(ServantStatusDialog___c__DisplayClass139_0_TypeInfo);
      System_Object___ctor(v5, 0);
      v4->fields.__8__1 = (struct ServantStatusDialog___c__DisplayClass139_0_o *)v5;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v5, v6, v7);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_33;
      _8__1->fields.isUISkinLoaded = 0;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        (Il2CppObject *)_8__1,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v9, 2, 1, 0);
LABEL_9:
      v10 = v4->fields.__8__1;
      if ( !v10 )
        goto LABEL_33;
      if ( !v10->fields.isUISkinLoaded )
      {
        v4->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(p__2__current, 0, v2, v3);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      this = (ServantStatusDialog__LoadAsset_d__139_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_33;
      this = (ServantStatusDialog__LoadAsset_d__139_o *)AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 1, 0);
      v10->fields.isTerminalUISkinLoaded = (unsigned __int8)this & 1;
      v11 = v4->fields.__8__1;
      if ( !v11 )
        goto LABEL_33;
      if ( !v11->fields.isTerminalUISkinLoaded )
      {
        v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v12,
          (Il2CppObject *)v11,
          Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__,
          0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadUISkin(v12, 1, 1, 0);
      }
LABEL_18:
      v13 = v4->fields.__8__1;
      if ( !v13 )
        goto LABEL_33;
      if ( !v13->fields.isTerminalUISkinLoaded )
      {
        v4->fields.__2__current = 0;
        v18 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v18, 0, v2, v3);
        v19 = 2;
        goto LABEL_31;
      }
      v13->fields.isEventUIAtlasLoaded = 0;
      v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)v13,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v14, 1, 0);
LABEL_24:
      v15 = v4->fields.__8__1;
      if ( !v15 )
LABEL_33:
        sub_1C2D6EC(this, method);
      if ( !v15->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0;
        v18 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v18, 0, v2, v3);
        v19 = 3;
LABEL_31:
        LODWORD(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = v19;
        return 1;
      }
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_33;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
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


Il2CppObject *ServantStatusDialog__LoadAsset_d__139__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__LoadAsset_d__139__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ServantStatusDialog__LoadAsset_d__139_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ServantStatusDialog__LoadAsset_d__139__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__LoadAsset_d__139__System_IDisposable_Dispose(
        ServantStatusDialog__LoadAsset_d__139_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C237E4 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog___c_TypeInfo);
    byte_4C237E4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantStatusDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusDialog___c_TypeInfo->static_fields->__9 = (struct ServantStatusDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantStatusDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantStatusDialog___c___ctor(ServantStatusDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c___EnableSpecialCostume_b__251_0(
        ServantStatusDialog___c_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4C237E5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C237E5 = 1;
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


void ServantStatusDialog___c__DisplayClass139_0___ctor(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__0(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__1(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTerminalUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass139_0___LoadAsset_b__2(
        ServantStatusDialog___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass140_0___ctor(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass140_0___LoadBattleCharaChangeConfirmAsset_b__0(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusDialog___c__DisplayClass140_0_o *v5; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  struct System_Action_o *callback; // x8

  v5 = this;
  if ( (byte_4C237E6 & 1) == 0 )
  {
    this = (ServantStatusDialog___c__DisplayClass140_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C237E6 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.cashedBattleCharaChangeConfirmAssetData = assetData,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&_4__this->fields.cashedBattleCharaChangeConfirmAssetData,
          (int32_t)assetData,
          (int32_t)method,
          v3),
        (callback = v5->fields.callback) == 0)
    || (((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (ServantStatusDialog___c__DisplayClass140_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
}


void ServantStatusDialog___c__DisplayClass150_0___ctor(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass150_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1C2D6EC(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass152_0___ctor(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass152_0___StartTransformedStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1C2D6EC(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass163_0___ctor(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog_o *_4__this; // x0
  struct ServantStatusDialog_o *v4; // x8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C237E9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C237E9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(_4__this, 0), (v4 = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)v4->fields.battleCharaChangeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(this, v6);
  else
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
      this,
      v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__3(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.servantStatusBattleConfirmDialog) == 0)
    || (ServantStatusBattleConfirmDialog__Close((ServantStatusBattleConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__4(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.battleCharaChangeConfirmDialog) == 0)
    || (BattleCharaChangeConfirmDialog__Close((BattleCharaChangeConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  int32_t nowDispLimitCount; // w20
  TreasureDvcInfo_o *nowTdInfo; // x21
  SkillInfo_array *nowSkillInfoList; // x22
  ServantOverwriteStatus_o *nowStatus; // x23
  System_Int32_array *nowClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v8; // x25
  int32_t nextDispLimitCount; // w20
  TreasureDvcInfo_o *nextTdInfo; // x21
  SkillInfo_array *nextSkillInfoList; // x22
  ServantOverwriteStatus_o *nextStatus; // x23
  System_Int32_array *nextClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x26
  BattleCharaChangeConfirmListViewItem_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  BattleCharaChangeConfirmDialog_o *battleCharaChangeConfirmDialog; // x21
  BattleCharaChangeConfirmDialog_ClickDelegate_o *v20; // x22

  if ( (byte_4C237E8 & 1) == 0 )
  {
    sub_1C2D490(&BattleCharaChangeConfirmListViewItem_TypeInfo);
    sub_1C2D490(&BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__);
    byte_4C237E8 = 1;
  }
  nowDispLimitCount = this->fields.nowDispLimitCount;
  nowTdInfo = this->fields.nowTdInfo;
  nowSkillInfoList = this->fields.nowSkillInfoList;
  nowStatus = this->fields.nowStatus;
  nowClassSkill = this->fields.nowClassSkill;
  v8 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1C2D6DC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v8,
    nowDispLimitCount,
    nowTdInfo,
    nowSkillInfoList,
    nowStatus,
    nowClassSkill,
    0);
  nextDispLimitCount = this->fields.nextDispLimitCount;
  nextTdInfo = this->fields.nextTdInfo;
  nextSkillInfoList = this->fields.nextSkillInfoList;
  nextStatus = this->fields.nextStatus;
  nextClassSkill = this->fields.nextClassSkill;
  v14 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1C2D6DC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v14,
    nextDispLimitCount,
    nextTdInfo,
    nextSkillInfoList,
    nextStatus,
    nextClassSkill,
    0);
  LODWORD(nextTdInfo) = this->fields.svtId;
  LODWORD(nextSkillInfoList) = this->fields.limitCount;
  v15 = (BattleCharaChangeConfirmListViewItem_o *)sub_1C2D6DC(BattleCharaChangeConfirmListViewItem_TypeInfo);
  BattleCharaChangeConfirmListViewItem___ctor(v15, (int32_t)nextTdInfo, (int32_t)nextSkillInfoList, v8, v14, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (battleCharaChangeConfirmDialog = _4__this->fields.battleCharaChangeConfirmDialog,
        v20 = (BattleCharaChangeConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo),
        BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__,
          0),
        !battleCharaChangeConfirmDialog) )
  {
    sub_1C2D6EC(v16, v17);
  }
  BattleCharaChangeConfirmDialog__Open(battleCharaChangeConfirmDialog, v20, v15, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass163_0_o *v2; // x19
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  TreasureDvcInfo_o *nowTdInfo; // x21
  TreasureDvcInfo_o *nextTdInfo; // x22
  _BOOL4 isTdModify; // w26
  SkillInfo_array *nowSkillInfoList; // x23
  SkillInfo_array *nextSkillInfoList; // x24
  _BOOL4 isSkillModify; // w27
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v11; // x25

  v2 = this;
  if ( (byte_4C237E7 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass163_0_o *)sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__);
    byte_4C237E7 = 1;
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
  v11 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__,
    0);
  if ( !servantStatusBattleConfirmDialog )
LABEL_6:
    sub_1C2D6EC(this, method);
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    nowTdInfo,
    nextTdInfo,
    isTdModify,
    nowSkillInfoList,
    nextSkillInfoList,
    isSkillModify,
    v11,
    v2->fields.svtId,
    v2->fields.limitCount,
    v2->fields.nowDispLimitCount,
    v2->fields.nextDispLimitCount,
    0);
}


void ServantStatusDialog___c__DisplayClass165_0___ctor(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__0(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_34357208((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__1(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass165_0_o *v4; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x21
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v4 = this;
  if ( (byte_4C237EA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass165_0_o *)sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__);
    byte_4C237EA = 1;
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
      _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__,
        0);
      v4->fields.__9__2 = _9__2;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( !charaGraphListViewManager )
LABEL_11:
      sub_1C2D6EC(this, data);
    ServantStatusCharaGraphListViewManager__SetMode_34357312(charaGraphListViewManager, 3, _9__2, 0);
  }
  this = (ServantStatusDialog___c__DisplayClass165_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_11;
  ServantStatusDialog__EndLoadChangeBattleResource((ServantStatusDialog_o *)this, data, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_34357208((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass229_0___ctor(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass229_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  struct ServantStatusDialog_o *_4__this; // x0
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C237EB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__1__);
    byte_4C237EB = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0);
      v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
        v8 = sub_1C7DBA4(v7);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1C7DBA4(v7);
      _4__this = **(struct ServantStatusDialog_o ***)(v9 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
        return;
      }
    }
LABEL_19:
    sub_1C2D6EC(_4__this, isDecide);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1C7DBA4(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass229_0__OnClickTdSpeed_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_31167972(klass, _9__1, 0);
}


void ServantStatusDialog___c__DisplayClass229_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass229_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass229_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_4C237EC & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass229_0_o *)sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4C237EC = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !monitor) )
  {
    sub_1C2D6EC(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v5, 0);
}


void ServantStatusDialog___c__DisplayClass233_0___ctor(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v9; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  struct ServantStatusDialog_o *v15; // x8
  Il2CppObject *v16; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v18; // x21

  if ( (byte_4C237ED & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4C237ED = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  mainInfo = **(CommonUI_o ***)(v7 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_31167972(mainInfo, 0, 0);
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
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting((ServantStatusListViewItem_o *)mainInfo, isRandomOn, v9);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          mainInfo = (CommonUI_o *)v13->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v13->fields.mainInfo,
              0);
            v14 = this->fields.__4__this;
            if ( v14 )
            {
              mainInfo = (CommonUI_o *)v14->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v14->fields.mainInfo,
                  0);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C2D6EC(mainInfo, isDecide);
  }
LABEL_21:
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v15->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  v16 = (Il2CppObject *)this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v16[12].monitor;
  v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v18, v16, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass233_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass233_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v9; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  struct ServantStatusDialog_o *v15; // x8
  Il2CppObject *v16; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v18; // x21

  if ( (byte_4C237EE & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4C237EE = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v3);
  mainInfo = **(CommonUI_o ***)(v7 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_31167972(mainInfo, 0, 0);
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
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting((ServantStatusListViewItem_o *)mainInfo, isRandomOn, v9);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          mainInfo = (CommonUI_o *)v13->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v13->fields.mainInfo,
              0);
            v14 = this->fields.__4__this;
            if ( v14 )
            {
              mainInfo = (CommonUI_o *)v14->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v14->fields.mainInfo,
                  0);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C2D6EC(mainInfo, isDecide);
  }
LABEL_21:
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v15->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37473996((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  v16 = (Il2CppObject *)this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v16[12].monitor;
  v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C2D6DC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v18, v16, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v18, 0);
}


void ServantStatusDialog___c__DisplayClass251_0___ctor(
        ServantStatusDialog___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantStatusDialog___c__DisplayClass251_0___EnableSpecialCostume_b__1(
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
                                 0)) == 0 )
  {
    sub_1C2D6EC(servantCostumeMaster, *(_QWORD *)&dispLimitCount);
  }
  return (System_String_o *)*((_QWORD *)servantCostumeMaster + 4);
}