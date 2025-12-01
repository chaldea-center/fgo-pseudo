void ServantStatusDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantStatusDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantStatusDialog_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CC2F8A & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_3105/*"BattleCharaChangeConfirmDialog"*/);
    sub_1C713B0(&StringLiteral_12756/*"ServantStatus/BattleCharaChangeConfirm"*/);
    sub_1C713B0(&StringLiteral_408/*"#4C4C4C"*/);
    byte_4CC2F8A = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_408/*"#4C4C4C"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_408/*"#4C4C4C"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_12756/*"ServantStatus/BattleCharaChangeConfirm"*/;
  static_fields = ServantStatusDialog_TypeInfo->static_fields;
  static_fields->BattleCharaChangeConfirmLoadAssetPath = (struct System_String_o *)StringLiteral_12756/*"ServantStatus/BattleCharaChangeConfirm"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->BattleCharaChangeConfirmLoadAssetPath,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_3105/*"BattleCharaChangeConfirmDialog"*/;
  v16 = ServantStatusDialog_TypeInfo->static_fields;
  v16->BattleCharaChangeConfirmDialogPrefabName = (struct System_String_o *)StringLiteral_3105/*"BattleCharaChangeConfirmDialog"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v16->BattleCharaChangeConfirmDialogPrefabName,
    v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CC2F89 & 1) == 0 )
  {
    sub_1C713B0(&bool___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&StringLiteral_24848/*"wait"*/);
    byte_4CC2F89 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v3 = (struct System_Boolean_array *)sub_1C71458(bool___TypeInfo, 4);
  this->fields.tabInitList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tabInitList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.dictChangeSvtVoiceIdList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestVoiceDataList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voiceDataList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_24848/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24848/*"wait"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.defaultAnimationName, v31, v32, v33, v34, v35, v36, v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4CC2F2D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2F2D = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleLoadAsset, v9, v2, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v11);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  ServantStatusDialog__InitBattleActor(this, v12);
}


void ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UICamera_c *v2; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v5; // x19
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UICamera_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  GrandQuestFolderBoardItem_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _BYTE v37[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v38[4]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v39[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v40[4]; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v41[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CC2F24 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TouchEffectManager_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9893/*"OnDragEnd"*/);
    sub_1C713B0(&StringLiteral_9915/*"OnHover"*/);
    sub_1C713B0(&StringLiteral_9946/*"OnPress"*/);
    sub_1C713B0(&StringLiteral_9956/*"OnScrollStop"*/);
    byte_4CC2F24 = 1;
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
      UICamera__Notify(v5, (System_String_o *)StringLiteral_9893/*"OnDragEnd"*/, 0, 0);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0, 0) )
    {
      v7 = currentTouch->fields.dragged;
      v41[0] = 0;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v41);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v7, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v8, 0);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
    {
      v10 = currentTouch->fields.current;
      v40[0] = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v40);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v10, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v11, 0);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0, 0) )
  {
    v39[0] = 0;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v39);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v13, 0);
    v38[0] = 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v38);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v14, 0);
    v37[0] = 0;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v37);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9956/*"OnScrollStop"*/, v15, 0);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0, 0);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->current, 0, v17, v18, v19, v20, v21, v22);
  v23 = UICamera_TypeInfo->static_fields;
  v23->currentCamera = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->currentCamera, 0, v24, v25, v26, v27, v28, v29);
  v30 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
  v30[1].klass = 0;
  sub_1C71354(v30 + 1, 0, v31, v32, v33, v34, v35, v36);
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

  if ( (byte_4CC2F46 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    byte_4CC2F46 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             0)) == 0 )
  {
    sub_1C71608(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C71608(v4, v5);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v17.fields._current, 0);
    if ( !Item )
      sub_1C71608(0, v8);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C71608(DispLimitCount, v10);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v12 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, 0);
      if ( !v12 )
        sub_1C71608(0, v13);
      index = (unsigned int)v12->fields.index;
      v15 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v15 )
        sub_1C71608(0, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v15, index, 0);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


void ServantStatusDialog__ChangeBattleResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  SkillInfo_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  int32_t v15; // w22
  ServantLimitImageMaster_o *v16; // x21
  int32_t v17; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w0
  struct ServantStatusListViewItem_o *v19; // x8
  struct System_Int32_array *dispSelectList; // x8
  __int64 confirmDispLv; // x9
  __int64 *v22; // x21
  __int64 *v23; // x22
  System_Int32_array *ClassSkill; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Int32_array *v31; // x0
  System_Collections_ICollection_o **v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  ServantOverwriteStatus_o *v39; // x8
  bool v40; // w25
  System_Collections_ICollection_o *v41; // x0
  const MethodInfo *v42; // x2
  _BOOL4 v43; // w26
  bool v44; // w23
  __int64 i; // x25
  unsigned __int64 v46; // x27
  __int64 v47; // x8
  __int64 v48; // x9
  SkillInfo_o *v49; // x0
  bool v50; // w2
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x19
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x2

  if ( (byte_4CC2F36 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
    byte_4CC2F36 = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass163_0___ctor((ServantStatusDialog___c__DisplayClass163_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_54;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
  if ( !mainInfo )
    goto LABEL_54;
  if ( !mainInfo->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, v14);
    return;
  }
  *(_DWORD *)(v5 + 68) = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.mainInfo )
    goto LABEL_54;
  v15 = *(_DWORD *)(v5 + 68);
  v16 = (ServantLimitImageMaster_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !v16 )
    goto LABEL_54;
  *(_DWORD *)(v5 + 72) = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v15, (int32_t)mainInfo, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  v17 = *(_DWORD *)(v5 + 68);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(mainInfo, 0);
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              v16,
                                              v17,
                                              ConvertOverwriteDispImageLimitCount,
                                              0);
  *(_DWORD *)(v5 + 76) = (_DWORD)mainInfo;
  v19 = this->fields.mainInfo;
  if ( !v19 )
    goto LABEL_54;
  dispSelectList = v19->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_54;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= LODWORD(dispSelectList->max_length) )
LABEL_55:
    sub_1C71610(mainInfo);
  *(_DWORD *)(v5 + 80) = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                           v16,
                           *(_DWORD *)(v5 + 68),
                           dispSelectList->m_Items[confirmDispLv],
                           0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  ServantStatusListViewItem__GetNpInfo_35646288(mainInfo, (TreasureDvcInfo_o **)(v5 + 24), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  ServantStatusListViewItem__GetNpInfo_35646288(mainInfo, (TreasureDvcInfo_o **)(v5 + 32), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  v22 = (__int64 *)(v5 + 48);
  ServantStatusListViewItem__GetSkillInfo_35645292(mainInfo, (SkillInfo_array **)(v5 + 48), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  v23 = (__int64 *)(v5 + 56);
  ServantStatusListViewItem__GetSkillInfo_35645292(mainInfo, (SkillInfo_array **)(v5 + 56), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v5 + 88), *(_DWORD *)(v5 + 76), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  ServantStatusListViewItem__GetStatus(mainInfo, (ServantOverwriteStatus_o **)(v5 + 104), *(_DWORD *)(v5 + 80), 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  ClassSkill = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v5 + 76), 0);
  *(_QWORD *)(v5 + 96) = ClassSkill;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 96), (int32_t)ClassSkill, v25, v26, v27, v28, v29, v30);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_54;
  v31 = ServantStatusListViewItem__GetClassSkill(mainInfo, *(_DWORD *)(v5 + 80), 0);
  *(_QWORD *)(v5 + 112) = v31;
  v32 = (System_Collections_ICollection_o **)(v5 + 112);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 112), (int32_t)v31, v33, v34, v35, v36, v37, v38);
  mainInfo = *(ServantStatusListViewItem_o **)(v5 + 24);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)TreasureDvcInfo__Equals(
                                                    (TreasureDvcInfo_o *)mainInfo,
                                                    *(TreasureDvcInfo_o **)(v5 + 32),
                                                    0),
        v39 = *(ServantOverwriteStatus_o **)(v5 + 88),
        *(_BYTE *)(v5 + 40) = ((unsigned __int8)mainInfo & 1) == 0,
        !v39) )
  {
LABEL_54:
    sub_1C71608(mainInfo, v7);
  }
  v40 = ServantOverwriteStatus__Equals(v39, *(ServantOverwriteStatus_o **)(v5 + 104), 0);
  v41 = *(System_Collections_ICollection_o **)(v5 + 96);
  *(_BYTE *)(v5 + 64) = 0;
  v43 = 0;
  if ( !BasicHelper__IsNullOrEmpty(v41, 0) )
    v43 = !BasicHelper__IsNullOrEmpty(*v32, 0)
       && !System_Linq_Enumerable__SequenceEqual_int_(
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 96),
             (System_Collections_Generic_IEnumerable_TSource__o *)*v32,
             (const MethodInfo_3184DE0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v44 = !v40;
  for ( i = 4; ; ++i )
  {
    mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v46 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v46 >= SLODWORD(mainInfo->fields.commandCodeCommentEntity[1].klass) )
      break;
    v47 = *v22;
    if ( !*v22 )
      goto LABEL_54;
    if ( v46 >= *(unsigned int *)(v47 + 24) )
      goto LABEL_55;
    v48 = *v23;
    if ( !*v23 )
      goto LABEL_54;
    if ( v46 >= *(unsigned int *)(v48 + 24) )
      goto LABEL_55;
    v49 = *(SkillInfo_o **)(v47 + 8 * i);
    v7 = *(SkillInfo_o **)(v48 + 8 * i);
    if ( v49 )
    {
      v50 = 1;
    }
    else
    {
      if ( !v7 )
        continue;
      v49 = *(SkillInfo_o **)(v48 + 8 * i);
      v7 = 0;
      v50 = 0;
    }
    if ( !SkillInfo__Equals(v49, v7, v50, 0) )
    {
      *(_BYTE *)(v5 + 64) = 1;
      break;
    }
  }
  if ( v43 || v44 )
  {
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
LABEL_51:
      ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        (ServantStatusDialog___c__DisplayClass163_0_o *)v5,
        0);
    }
    else
    {
      v52 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__,
        0);
      ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(this, v52, v53);
    }
  }
  else
  {
    if ( *(unsigned __int8 *)(v5 + 64) | *(unsigned __int8 *)(v5 + 40) )
      goto LABEL_51;
    ServantStatusDialog__SetChangeBattleResource(this, 0, v42);
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
  if ( (byte_4CC2F65 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F65 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)this, 4, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeCharaGraph(
        ServantStatusDialog_o *this,
        int32_t imageLimitCountStage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w20
  int32_t LimitCount; // w21
  int32_t SealAfter; // w23
  int32_t v9; // w24
  Il2CppObject *Master_object; // x21
  int32_t v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x2
  struct ServantStatusListViewItem_o *v14; // x8
  UIRangeLabel_o *servantNameRangeLabel; // x23
  struct ServantStatusListViewItem_o *v16; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t cvId; // w23
  const MethodInfo *v19; // x2
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC2F87 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC2F87 = 1;
  }
  entity = 0;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_33;
  if ( !ServantStatusListViewItem__SelectCardImageLimitCountStage(mainInfo, imageLimitCountStage, 0) )
    return;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_33;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_33;
  v6 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  SealAfter = LimitCountUtility__GetSealAfter(v6, LimitCount, imageLimitCountStage, 1, 0);
  v9 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, SealAfter, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__IsOtherImage(imageLimitCountStage, 0);
  v11 = ((unsigned __int8)mainInfo & 1) != 0 ? 0 : v9;
  if ( !this->fields.mainInfo )
    goto LABEL_33;
  v12 = ((unsigned __int8)mainInfo & 1) != 0 ? 1 : SealAfter;
  if ( ServantStatusListViewItem__UpdateServantComment(this->fields.mainInfo, v6, v12, 0) )
    ServantStatusDialog__UpdateProfileList(this, 1, v13);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !mainInfo )
    goto LABEL_33;
  ServantStatusFlavorTextListViewManager__UpdateParameter_35601428(
    (ServantStatusFlavorTextListViewManager_o *)mainInfo,
    0);
  if ( !Master_object )
    goto LABEL_33;
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                              (ServantLimitAddMaster_o *)Master_object,
                                              v6,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
    v14 = this->fields.mainInfo;
    if ( !v14 )
      goto LABEL_33;
    mainInfo = (ServantStatusListViewItem_o *)v14->fields.svtEntity;
    if ( !mainInfo )
      goto LABEL_33;
    servantNameRangeLabel = this->fields.servantNameRangeLabel;
    mainInfo = (ServantStatusListViewItem_o *)ServantEntity__getName((ServantEntity_o *)mainInfo, -1, v11, 0, 0);
    if ( !servantNameRangeLabel )
      goto LABEL_33;
    UIRangeLabel__Set(servantNameRangeLabel, (System_String_o *)mainInfo, 0, 1, 0, 0, 0);
  }
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__IsOverwriteCv(
                                              (ServantLimitAddMaster_o *)Master_object,
                                              v6,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) == 0 )
    return;
  v16 = this->fields.mainInfo;
  if ( !v16 || (svtEntity = v16->fields.svtEntity) == 0 )
LABEL_33:
    sub_1C71608(mainInfo, *(_QWORD *)&imageLimitCountStage);
  cvId = svtEntity->fields.cvId;
  if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, v6, v11, 0) )
  {
    mainInfo = (ServantStatusListViewItem_o *)entity;
    if ( entity )
    {
      cvId = ServantLimitAddEntity__GetOverwriteCvId(entity, cvId, 0);
      goto LABEL_31;
    }
    goto LABEL_33;
  }
LABEL_31:
  ServantStatusDialog__UpdateCv(this, cvId, v19);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeCommandResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  _DWORD *monitor; // x8
  System_Action_object__o *v6; // x20
  const MethodInfo *v7; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4CC2F62 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__);
    byte_4CC2F62 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1C71608(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v6 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
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
  if ( (byte_4CC2F6A & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6A = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)this, 5, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4CC2F6E & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6E = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)this, 7, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(this, *(_QWORD *)&dispLv);
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

  if ( (byte_4CC2F64 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F64 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__Close(ServantStatusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  System_String_o *statusLoadAsset; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_String_o *cardLoadAsset; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_o *battleLoadAsset; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v44; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v54; // w2
  int v55; // w9
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC2F44 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC2F44 = 1;
  }
  memset(&v56, 0, sizeof(v56));
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, 0, v6, v7, v8, v9, v10, v11);
  ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(this, v12);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0);
    this->fields.statusLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.statusLoadAsset, 0, v14, v15, v16, v17, v18, v19);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0);
    this->fields.cardLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cardLoadAsset, 0, v21, v22, v23, v24, v25, v26);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0);
    this->fields.battleLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleLoadAsset, 0, v28, v29, v30, v31, v32, v33);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0);
    this->fields.transformedStatusLoadAsset = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.transformedStatusLoadAsset,
      0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  ServantStatusDialog__StopVoice(this, v34);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v44 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v44;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0);
    this->fields.loadVoiceData = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData, 0, v46, v47, v48, v49, v50, v51);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v56.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1C71608(statusTabListViewManager, callback);
  v54 = voiceDataList->fields._size;
  v55 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v55;
  if ( v54 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v54, 0);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC2F5B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo);
    byte_4CC2F5B = 1;
  }
  v4 = sub_1C715FC(ServantStatusDialog__CoWaitForEndOfFrame_d__207_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__207___ctor((ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C71608(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4CC2F34 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2F34 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C71608(0, v4);
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
    UnityEngine_Object__Destroy_71724608(v7, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct ServantStatusListViewItem_o *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dispSelectList; // x22
  ServantStatusDialog___c_c *v24; // x0
  System_Func_int__bool__o *_9__255_0; // x23
  System_String_o *v26; // x21
  Il2CppObject *v27; // x24
  struct ServantStatusDialog___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  System_Func_T__TResult__o *v36; // x23
  System_Collections_Generic_IEnumerable_string__o *v37; // x0
  System_String_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CC2F86 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C713B0(&System_Func_int__string__TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog___c__EnableSpecialCostume_b__255_0__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass255_0__EnableSpecialCostume_b__1__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass255_0_TypeInfo);
    sub_1C713B0(&ServantStatusDialog___c_TypeInfo);
    sub_1C713B0(&StringLiteral_11912/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_25503/*"、"*/);
    byte_4CC2F86 = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass255_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass255_0___ctor((ServantStatusDialog___c__DisplayClass255_0_o *)v5, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)LocalizationManager__ContainsKey(
                                                   (System_String_o *)StringLiteral_11912/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/,
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)costumeName, StringLiteral_1/*""*/, v8, v9, v10, v11, v12, v13);
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = Master_object,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Master_object, v16, v17, v18, v19, v20, v21),
        (Master_object = this->fields.mainInfo) == 0)
    || (Master_object = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(Master_object, 0),
        *(_DWORD *)(v5 + 24) = (_DWORD)Master_object,
        (v22 = this->fields.mainInfo) == 0) )
  {
LABEL_23:
    sub_1C71608(Master_object, v7);
  }
  dispSelectList = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.dispSelectList;
  v24 = ServantStatusDialog___c_TypeInfo;
  if ( !ServantStatusDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo);
    v24 = ServantStatusDialog___c_TypeInfo;
  }
  _9__255_0 = v24->static_fields->__9__255_0;
  v26 = (System_String_o *)StringLiteral_25503/*"、"*/;
  if ( !_9__255_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = ServantStatusDialog___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__255_0 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__255_0, v27, Method_ServantStatusDialog___c__EnableSpecialCostume_b__255_0__, 0);
    static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    static_fields->__9__255_0 = _9__255_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__255_0,
      (int32_t)_9__255_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = System_Linq_Enumerable__Where_int_(
          dispSelectList,
          (System_Func_TSource__bool__o *)_9__255_0,
          (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
  v36 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass255_0__EnableSpecialCostume_b__1__,
    0);
  v37 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v35,
                                                              (System_Func_TSource__TResult__o *)v36,
                                                              (const MethodInfo_317EBF8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v38 = System_String__Join_64074316(v26, v37, 0);
  *costumeName = v38;
  sub_1C71354((GrandQuestFolderBoardItem_o *)costumeName, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  return !System_String__IsNullOrEmpty(*costumeName, 0);
}


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
      sub_1C71610(this);
    tabInitList->m_Items[0] = 0;
    this = (ServantStatusDialog_o *)this->fields.statusTabListViewManager;
    if ( !this )
LABEL_7:
      sub_1C71608(this, isDecide);
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

  if ( (byte_4CC2F66 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F66 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)Instance, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1C71608(Instance, v5);
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

  if ( (byte_4CC2F39 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F39 = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v6,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0),
        (battleActor = this->fields.battleActor) == 0) )
  {
LABEL_11:
    sub_1C71608(mainInfo, v4);
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

  if ( (byte_4CC2F4F & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F4F = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1C71608(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC2F4D & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F4D = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1C71608(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCommandCardLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F2A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndTransformedStatusLoad__);
    byte_4CC2F2A = 1;
  }
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndTransformedStatusLoad__, 0);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  void *baseObject; // x0
  UnityEngine_Object_o *changeTransformButton; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s0
  int32_t v13; // w22
  UnityEngine_GameObject_o *v14; // x20
  int v15; // w21
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s0
  int32_t v18; // w22
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s0
  bool v22; // w1
  struct ServantStatusListViewItem_o *v23; // x8
  ServantStatusListViewItem_o **p_mainInfo; // x26
  int32_t v25; // w20
  int32_t v26; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v29; // x22
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v31; // x21
  int32_t kind; // w8
  bool v33; // w8
  bool v34; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v37; // x8
  bool *m_Items; // x10
  ServantCommentMaster_o *v39; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v48; // x1
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v50; // x21
  UnityEngine_Object_o *v51; // x21
  const MethodInfo *v52; // x2
  UILabel_o *v53; // x21
  ServantLimitAddMaster_o *v54; // x21
  int32_t v55; // w8
  char v56; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  ServantStatusListViewItem_o *v59; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v62; // x22
  int32_t v63; // w2
  int32_t limitCount; // w1
  int32_t v65; // w8
  ServantStatusListViewItem_o *v66; // x9
  struct UserServantEntity_o *v67; // x0
  int32_t v68; // w21
  int32_t v69; // w21
  ServantLimitImageMaster_o *v70; // x22
  struct ServantStatusListViewItem_o *v71; // x8
  int32_t v72; // w2
  int32_t v73; // w8
  struct ServantStatusListViewItem_o *v74; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v76; // w1
  int32_t v77; // w2
  struct ServantLeaderInfo_o *v78; // x9
  System_String_o *v79; // x1
  ServantLimitImageMaster_o *v80; // x21
  struct UserServantCollectionEntity_o *v81; // x8
  struct UIRangeLabel_o *v82; // x21
  struct ServantEntity_o *v83; // x22
  __int64 v84; // x23
  __int64 v85; // x24
  int32_t v86; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  ServantStatusListViewItem_o *v88; // x8
  ServantStatusListViewItem_o *v89; // x8
  struct ServantEntity_o *v90; // x8
  struct ServantEntity_o *v91; // x8
  int32_t GrandClassId; // w21
  UILabel_o *v93; // x0
  UserServantEntity_o *v94; // x0
  UserServantCollectionEntity_o *v95; // x0
  struct ServantStatusListViewItem_o *v96; // x8
  struct UILabel_o *v97; // x21
  UnityEngine_Object_o *battleExplanationLabel; // x21
  ServantStatusListViewItem_o *v99; // x8
  ServantLimitImageMaster_o *v100; // x21
  struct ServantStatusListViewItem_o *v101; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v103; // x22
  __int64 v104; // x23
  int32_t v105; // w22
  struct UILabel_o *v106; // x23
  System_String_o *mText; // x25
  System_String_o *v108; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v110; // x0
  System_String_o *v111; // x1
  UILabel_o *v112; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v114; // x21
  __int64 *v115; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x2
  int32_t v120; // w8
  unsigned int v121; // w8
  const MethodInfo *v122; // x1
  unsigned int v123; // w8
  bool v124; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  if ( (byte_4CC2F22 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&StringLiteral_11909/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_1C713B0(&StringLiteral_11910/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_1C713B0(&StringLiteral_11911/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1C713B0(&StringLiteral_11917/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_1C713B0(&StringLiteral_11916/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_1C713B0(&StringLiteral_4029/*"CancelInput"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_6001/*"EndLoadInit"*/);
    byte_4CC2F22 = 1;
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
      v6 = (UnityEngine_GameObject_o *)baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v6, LocalPositionX + 0.0, 0);
      baseObject = this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_265;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.profileButton )
        goto LABEL_265;
      v10 = (UnityEngine_GameObject_o *)baseObject;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0);
      v12 = GameObjectExtensions__GetLocalPositionX(v11, 0);
      GameObjectExtensions__SetLocalPositionX(v10, v12 + (float)changeTransformAddTabMargin, 0);
      baseObject = this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_265;
      v13 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.battleButton )
        goto LABEL_265;
      v14 = (UnityEngine_GameObject_o *)baseObject;
      v15 = v13 + changeTransformAddTabMargin;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0);
      v17 = GameObjectExtensions__GetLocalPositionX(v16, 0);
      GameObjectExtensions__SetLocalPositionX(v14, v17 + (float)v15, 0);
      baseObject = this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_265;
      v18 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.voiceButton )
        goto LABEL_265;
      v19 = (UnityEngine_GameObject_o *)baseObject;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0);
      v21 = GameObjectExtensions__GetLocalPositionX(v20, 0);
      GameObjectExtensions__SetLocalPositionX(v19, v21 + (float)(v18 + v15), 0);
      baseObject = this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_265;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_265;
      v22 = 1;
    }
    else
    {
      baseObject = this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_265;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_265;
      v22 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, v22, 0);
  }
  v23 = this->fields.mainInfo;
  if ( !v23 )
    goto LABEL_265;
  p_mainInfo = &this->fields.mainInfo;
  if ( v23->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v25 = 0;
        v26 = 21;
        break;
      case 4:
      case 0x16:
        v25 = 0;
        v26 = 22;
        break;
      case 5:
      case 0x17:
        v25 = 0;
        v26 = 23;
        break;
      case 6:
      case 0x18:
        v25 = 0;
        v26 = 24;
        break;
      case 7:
      case 0x19:
        v25 = 0;
        v26 = 25;
        break;
      case 8:
      case 0x1A:
        v25 = 0;
        v26 = 26;
        break;
      case 9:
      case 0x1B:
        v25 = 0;
        v26 = 27;
        break;
      case 0x1D:
      case 0x20:
        v25 = 0;
        v26 = 32;
        break;
      default:
        v25 = 0;
        v26 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v23->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_265;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (void *)TutorialFlag__Get_40699620(106, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v29 = this;
    else
      v29 = 0;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      if ( !*p_mainInfo )
        goto LABEL_265;
      favoriteUserSvtId = (*p_mainInfo)->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v31 = v29;
      else
        v31 = 0;
      if ( favoriteUserSvtId < 1 )
      {
        v33 = 0;
        v31 = this;
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
            v33 = 0;
            if ( !v31 )
              goto LABEL_265;
          }
          else
          {
            v33 = kind != 12;
            if ( !v31 )
              goto LABEL_265;
          }
        }
        else
        {
          v33 = 0;
          v31 = v29;
          if ( !v29 )
            goto LABEL_265;
        }
      }
    }
    else
    {
      v33 = 0;
      v31 = this;
    }
    v31->fields.isUseFavorite = v33;
    v34 = SvtType__IsOrganization(type, 0) && this->fields.kind != 12;
    this->fields.isUsePush = v34;
    baseObject = (void *)SvtType__IsEnemyCollectionDetail(type, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v25 = 0;
      v26 = 28;
    }
    else
    {
      baseObject = (void *)SvtType__IsServantEquip(type, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v65 = this->fields.kind;
        switch ( v65 )
        {
          case 3:
          case 12:
            v25 = 0;
            v26 = 12;
            break;
          case 4:
          case 13:
            v25 = 0;
            v26 = 13;
            break;
          case 5:
          case 14:
            v25 = 0;
            v26 = 14;
            break;
          case 6:
          case 15:
            v25 = 0;
            v26 = 15;
            break;
          case 7:
          case 16:
            v25 = 0;
            v26 = 16;
            break;
          case 8:
          case 17:
            v25 = 0;
            v26 = 17;
            break;
          case 9:
          case 18:
            v25 = 0;
            v26 = 18;
            break;
          case 19:
            v25 = 0;
            v26 = 19;
            break;
          case 29:
          case 31:
            v25 = 0;
            v26 = 31;
            break;
          default:
            v124 = v65 == 33;
            v26 = 11;
            v25 = v124;
            break;
        }
      }
      else
      {
        baseObject = (void *)SvtType__IsServant(type, 0);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v73 = this->fields.kind, v73 == 36) )
        {
          v25 = 0;
          goto LABEL_64;
        }
        v25 = 0;
        if ( v73 == 29 )
          v26 = 30;
        else
          v26 = 10;
      }
    }
  }
  this->fields.kind = v26;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_265;
  max_length_low = LODWORD(tabInitList->max_length);
  v37 = 0;
  m_Items = tabInitList->m_Items;
  do
  {
    if ( v37 >= max_length_low )
      sub_1C71610(baseObject);
    m_Items[v37++] = 0;
  }
  while ( v37 != 4 );
  if ( !*p_mainInfo )
    goto LABEL_265;
  if ( (*p_mainInfo)->fields.userSvtCollectionEntity )
  {
    baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_265;
    baseObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)baseObject,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*p_mainInfo )
      goto LABEL_265;
    v39 = (ServantCommentMaster_o *)baseObject;
    baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
    if ( !v39 )
      goto LABEL_265;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v39, (int32_t)baseObject, 0);
    this->fields.newProfileList = NewProfileEntities;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_265;
    baseObject = this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_265;
    ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0);
  }
  else
  {
    baseObject = this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_265;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v48);
  baseObject = this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_265;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0, 1, 0, 0, 0);
  baseObject = this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_265;
  TitleInfoControl__changeTitleInfo_40112904((TitleInfoControl_o *)baseObject, 1, 0, 0, 0);
  if ( !*p_mainInfo )
    goto LABEL_265;
  commandCodeEntity = (*p_mainInfo)->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*p_mainInfo )
      goto LABEL_265;
    v54 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
    if ( !v54 )
      goto LABEL_265;
    baseObject = (void *)ServantLimitAddMaster__IsOverwriteSvtDetailName(v54, (int32_t)baseObject, 0);
    v55 = this->fields.kind;
    v56 = (char)baseObject;
    if ( (v55 & 0xFFFFFFFE) == 4 )
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
        v59 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        if ( (v56 & 1) != 0 )
        {
          baseObject = v59->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_265;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CardImageLimitCount, 0);
          baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_265;
          baseObject = DataManager__GetMasterData_object_(
                         (DataManager_o *)baseObject,
                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v62 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
          if ( !v62 )
            goto LABEL_265;
          baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v62,
                                 (int32_t)baseObject,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v63 = (int)baseObject;
          baseObject = (*p_mainInfo)->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_265;
          limitCount = -1;
        }
        else
        {
          v78 = v59->fields.servantLeaderInfo;
          if ( !v78 )
            goto LABEL_265;
          baseObject = v59->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_265;
          limitCount = v78->fields.limitCount;
          v63 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v63, 0, 0);
      }
      baseObject = this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_265;
      v79 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v79, 0, 1, 0, 0, 0);
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
        baseObject = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v99 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        if ( v99->fields.userSvtEntity )
        {
          v100 = (ServantLimitImageMaster_o *)baseObject;
          ServantStatusDialog__SetBattleCharaTabExplanation(this, method);
          v101 = this->fields.mainInfo;
          if ( !v101 )
            goto LABEL_265;
          userSvtEntity = v101->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_265;
          v104 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v103 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v126.fields.currentCryptoKey = v104;
          *(_QWORD *)&v126.fields.fakeValue = v103;
          baseObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v126, 0);
          if ( !v100 )
            goto LABEL_265;
          v105 = (int)baseObject;
          baseObject = (void *)ServantLimitImageMaster__IsServantLimitCountSeal(v100, (int32_t)baseObject, 3, 0);
          if ( ((unsigned __int8)baseObject & 1) == 0 )
            goto LABEL_238;
          baseObject = ServantLimitImageMaster__GetServantStatusExplanationText(
                         v100,
                         (System_String_o *)StringLiteral_11911/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                         v105,
                         0);
          v106 = this->fields.battleExplanationLabel;
          if ( !v106 )
            goto LABEL_265;
          mText = v106->fields.mText;
          v108 = (System_String_o *)baseObject;
          LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          v100,
                                                          v105,
                                                          3,
                                                          0,
                                                          0);
          v110 = System_String__Format(v108, LimitCountSealedServantName, 0);
          v111 = System_String__Concat_64031724(mText, v110, 0);
          v112 = v106;
        }
        else
        {
          userSvtCollectionEntity = v99->fields.userSvtCollectionEntity;
          v114 = this->fields.battleExplanationLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( userSvtCollectionEntity )
            v115 = &StringLiteral_11909/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
          else
            v115 = &StringLiteral_11910/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
          baseObject = LocalizationManager__Get((System_String_o *)*v115, 0);
          if ( !v114 )
            goto LABEL_265;
          v111 = (System_String_o *)baseObject;
          v112 = v114;
        }
        UILabel__set_text(v112, v111, 0);
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
          v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
          GameObjectExtensions__SetLocalPositionY(v117, 177.0, 0);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0);
        }
        goto LABEL_245;
      }
      v88 = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_265;
      if ( !v88->fields._IsTempGrandServant_k__BackingField )
      {
        v94 = v88->fields.userSvtEntity;
        if ( v94 )
        {
          baseObject = (void *)UserServantEntity__IsGrandServant(v94, 0);
          if ( ((unsigned __int8)baseObject & 1) == 0 )
            goto LABEL_203;
        }
        else
        {
          v95 = v88->fields.userSvtCollectionEntity;
          if ( v95 )
          {
            baseObject = (void *)UserServantCollectionEntity__IsGrandServant(v95, 0);
            if ( ((unsigned __int8)baseObject & 1) == 0 )
              goto LABEL_203;
          }
          else
          {
            baseObject = v88->fields.servantLeaderInfo;
            if ( !baseObject )
              goto LABEL_203;
            baseObject = (void *)ServantLeaderInfo__get_IsGrandSvt((ServantLeaderInfo_o *)baseObject, 0);
            if ( ((unsigned __int8)baseObject & 1) == 0 )
              goto LABEL_203;
          }
        }
      }
      v89 = *p_mainInfo;
      if ( !*p_mainInfo )
        goto LABEL_265;
      if ( !v89->fields._IsForceNotGrand_k__BackingField )
      {
        baseObject = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v89 = *p_mainInfo;
          if ( !*p_mainInfo )
            goto LABEL_265;
          baseObject = BalanceConfig_TypeInfo;
        }
        v90 = v89->fields.svtEntity;
        if ( !v90 )
          goto LABEL_265;
        baseObject = (void *)System_Linq_Enumerable__Contains_int_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)baseObject + 23)
                                                                                     + 1208LL),
                               v90->fields.classId,
                               (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          baseObject = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
          if ( !*p_mainInfo )
            goto LABEL_265;
          v91 = (*p_mainInfo)->fields.svtEntity;
          if ( !v91 )
            goto LABEL_265;
          if ( !baseObject )
            goto LABEL_265;
          GrandClassId = GrandGraphDetailMaster__GetGrandClassId(
                           (GrandGraphDetailMaster_o *)baseObject,
                           v91->fields.classId,
                           0);
          baseObject = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantClassMaster___);
          if ( !baseObject )
            goto LABEL_265;
          baseObject = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
                         GrandClassId,
                         (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
          if ( !baseObject || !this->fields.servantClassNameLabel )
            goto LABEL_265;
          method = (const MethodInfo *)*((_QWORD *)baseObject + 3);
          v93 = this->fields.servantClassNameLabel;
          goto LABEL_214;
        }
      }
LABEL_203:
      v96 = this->fields.mainInfo;
      if ( !v96 )
        goto LABEL_265;
      baseObject = v96->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
      v97 = this->fields.servantClassNameLabel;
      baseObject = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0);
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
      if ( !v97 )
        goto LABEL_265;
      v93 = v97;
LABEL_214:
      UILabel__set_text(v93, (System_String_o *)method, 0);
      goto LABEL_215;
    }
    if ( (unsigned int)(v55 - 6) <= 2 )
    {
      v74 = this->fields.mainInfo;
      if ( !v74 )
        goto LABEL_265;
      baseObject = v74->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v56 & 1) != 0 )
      {
        v76 = -1;
        v77 = 0;
      }
      else
      {
        v77 = -1;
        v76 = 0;
      }
      baseObject = ServantEntity__getName((ServantEntity_o *)baseObject, v76, v77, 0, 0);
      if ( !servantNameRangeLabel )
        goto LABEL_265;
      v79 = (System_String_o *)baseObject;
      baseObject = servantNameRangeLabel;
      goto LABEL_174;
    }
    v66 = *p_mainInfo;
    if ( !*p_mainInfo )
      goto LABEL_265;
    v67 = v66->fields.userSvtEntity;
    if ( v67 )
    {
      if ( (v56 & 1) == 0 )
      {
        v82 = this->fields.servantNameRangeLabel;
        v83 = v66->fields.svtEntity;
        v85 = *(_QWORD *)&v67->fields.limitCount.fields.currentCryptoKey;
        v84 = *(_QWORD *)&v67->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v125.fields.currentCryptoKey = v85;
        *(_QWORD *)&v125.fields.fakeValue = v84;
        baseObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v125, 0);
        if ( !v83 )
          goto LABEL_265;
        v86 = (int)baseObject;
        v72 = -1;
        baseObject = v83;
        goto LABEL_172;
      }
      v68 = UserServantEntity__getCardImageLimitCount(v67, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v69 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v68, 0);
      baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_265;
      baseObject = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseObject,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*p_mainInfo )
        goto LABEL_265;
      v70 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
      if ( !v70 )
        goto LABEL_265;
      baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(v70, (int32_t)baseObject, v69, 0);
      v71 = this->fields.mainInfo;
      if ( !v71 )
        goto LABEL_265;
      v72 = (int)baseObject;
      baseObject = v71->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
    }
    else
    {
      if ( (v56 & 1) == 0 )
      {
        baseObject = v66->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_265;
        v82 = this->fields.servantNameRangeLabel;
        v86 = -1;
        v72 = -1;
        goto LABEL_172;
      }
      if ( v66->fields.userSvtCollectionEntity )
      {
        baseObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_265;
        baseObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)baseObject,
                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*p_mainInfo )
          goto LABEL_265;
        v80 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (void *)ServantStatusListViewItem__get_SvtId(*p_mainInfo, 0);
        if ( !*p_mainInfo )
          goto LABEL_265;
        v81 = (*p_mainInfo)->fields.userSvtCollectionEntity;
        if ( !v81 )
          goto LABEL_265;
        if ( !v80 )
          goto LABEL_265;
        baseObject = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                               v80,
                               (int32_t)baseObject,
                               v81->fields.maxLimitCount,
                               0);
        v66 = *p_mainInfo;
        if ( !*p_mainInfo )
          goto LABEL_265;
        v72 = (int)baseObject;
      }
      else
      {
        v72 = 0;
      }
      baseObject = v66->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_265;
    }
    v82 = this->fields.servantNameRangeLabel;
    v86 = -1;
LABEL_172:
    baseObject = ServantEntity__getName((ServantEntity_o *)baseObject, v86, v72, 0, 0);
    if ( !v82 )
      goto LABEL_265;
    v79 = (System_String_o *)baseObject;
    baseObject = v82;
    goto LABEL_174;
  }
  v50 = this->fields.servantNameRangeLabel;
  baseObject = CommandCodeEntity__GetName(commandCodeEntity, 0);
  if ( !v50 )
    goto LABEL_265;
  UIRangeLabel__Set(v50, (System_String_o *)baseObject, 0, 1, 0, 0, 0);
  v51 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
  {
    v53 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0);
    if ( v53 )
    {
      UILabel__set_text(v53, (System_String_o *)baseObject, 0);
      goto LABEL_245;
    }
LABEL_265:
    sub_1C71608(baseObject, method);
  }
LABEL_245:
  baseObject = this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_265;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v52);
  ServantStatusDialog__SetMark(this, v118);
  v120 = this->fields.kind;
  if ( v120 > 28 )
  {
    v121 = v120 - 30;
    if ( v121 < 7 )
    {
      v25 = dword_D22230[v121];
      goto LABEL_254;
    }
LABEL_252:
    v25 = 0;
    goto LABEL_254;
  }
  if ( v120 == 10 )
  {
    v25 = 1;
    goto LABEL_254;
  }
  if ( v120 != 11 )
  {
    v25 = 1;
    if ( v120 != 28 )
      goto LABEL_252;
  }
LABEL_254:
  ServantStatusDialog__SetTabKind(this, v25, v119);
  v123 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v123 - 10 < 0x13 || v123 <= 0x24 && ((1LL << v123) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6001/*"EndLoadInit"*/,
      0.1,
      0);
  else
    ServantStatusDialog__StartStatusLoad(this, v122);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4029/*"CancelInput"*/, 0.0, 0);
}


void ServantStatusDialog__EndLoadBattle(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4CC2F30 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F30 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_34649392(this, v6);
}


void ServantStatusDialog__EndLoadBattle_34649392(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4CC2F31 & 1) == 0 )
  {
    sub_1C713B0(&RandomLimitCountManager_TypeInfo);
    byte_4CC2F31 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CC2F8F )
  {
    sub_1C713B0(&RandomLimitCountManager_TypeInfo);
    byte_4CC2F8F = 1;
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
      sub_1C71608(v4, method);
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

  if ( (byte_4CC2F38 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4CC2F25 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog__EndLoadInit_b__146_0__);
    byte_4CC2F25 = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__146_0__, 0);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v3, v4);
  ServantStatusDialog__InitList(this, v5);
}


void ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct System_Boolean_array *tabInitList; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Boolean_array *v8; // x8
  const MethodInfo *tabKind; // x1

  if ( (byte_4CC2F5C & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F5C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        ServantStatusDialog__DestroyBattleChr(this, v6),
        v8 = this->fields.tabInitList,
        this->fields.isBattlePlay = 0,
        !v8) )
  {
LABEL_12:
    sub_1C71608(Instance, v4);
  }
  if ( LODWORD(v8->max_length) <= 3 )
LABEL_13:
    sub_1C71610(Instance);
  v8->m_Items[3] = 0;
  tabKind = (const MethodInfo *)(unsigned int)this->fields.tabKind;
  if ( (_DWORD)tabKind == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabKind);
    LODWORD(tabKind) = this->fields.tabKind;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabKind, v7);
}


void ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Item; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_o *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_4CC2F3C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC2F3C = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v12 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v14[4] = (Il2CppClass *)loadVoiceData;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)loadVoiceData, v2, v3, v4, v5, v6, v7);
        }
        this->fields.loadVoiceData = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData, 0, v15, v16, v17, v18, v19, v20);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData,
              (int32_t)Item,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v28 = this->fields.loadVoiceData;
              v29 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v28, v29, 1, 0);
              return;
            }
          }
        }
      }
    }
    sub_1C71608(voiceDataList, loadVoiceData);
  }
}


void ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v18; // w9
  int32_t max_length; // w10
  ServantVoiceData_o *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CC2F40 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6029/*"EndWaitVoice"*/);
    byte_4CC2F40 = 1;
  }
  this->fields.voicePlayer = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, 0, v2, v3, v4, v5, v6, v7);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v18 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v18;
    max_length = voicePlayList->max_length;
    if ( v18 < max_length )
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C71610(voiceTabListViewManager);
      v20 = voicePlayList->m_Items[v18];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6029/*"EndWaitVoice"*/,
          v20->fields.delay,
          0);
        return;
      }
LABEL_18:
      sub_1C71608(voiceTabListViewManager, v10);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_37825736(voiceTabListViewManager, 2, -1, 0);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList, 0, v11, v12, v13, v14, v15, v16);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName, 0, v21, v22, v23, v24, v25, v26);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_37825736(voiceTabListViewManager, 2, -1, 0);
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

  if ( (byte_4CC2F58 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4CC2F58 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(v3);
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
  v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !v10 )
LABEL_13:
    sub_1C71608(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v10, 1, v11, 0);
}


void ServantStatusDialog__EndStatusLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F28 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCommandCardLoad__);
    byte_4CC2F28 = 1;
  }
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4CC2F2C & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_6001/*"EndLoadInit"*/);
    byte_4CC2F2C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)Instance, 6, 0);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)Instance, 4, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6001/*"EndLoadInit"*/, 0.1, 0);
}


void ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusDialog_o *v8; // x19
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v15; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v17; // x22
  SePlayer_o *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x0

  v8 = this;
  if ( (byte_4CC2F3F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC2F3F = 1;
  }
  voicePlayList = v8->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v8->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1C71610(this);
      v12 = voicePlayList->m_Items[voicePlayNum];
      if ( v12 )
      {
        voicePlayAssetName = v8->fields.voicePlayAssetName;
        id = v12->fields.id;
        v15 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v15 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
        v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0);
        v18 = SoundManager__playVoice_41795520(voicePlayAssetName, id, DEFAULT_VOLUME, v17, 0, 0);
        p_voicePlayer = (GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayer;
        v8->fields.voicePlayer = v18;
        goto LABEL_16;
      }
LABEL_17:
      sub_1C71608(this, method);
    }
    if ( v8->fields.tabKind == 3 && (v8->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_37825736((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0);
      v8->fields.voiceListIndex = -1;
    }
    v8->fields.voicePlayList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayList, 0, v2, v3, v4, v5, v6, v7);
    p_voicePlayer = (GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayAssetName;
    LODWORD(v18) = 0;
    v8->fields.voicePlayNum = 0;
    v8->fields.voicePlayAssetName = 0;
LABEL_16:
    sub_1C71354(p_voicePlayer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4CC2F63 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F63 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)Instance, 4, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(Instance, v5);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v26; // w9
  struct ServantStatusListViewItem_o *v27; // x8
  ServantStatusDialog_o *v28; // x22
  struct ServantStatusListViewItem_o *v29; // x8
  ServantStatusDialog_o *v30; // x23
  struct ServantStatusListViewItem_o *v31; // x8
  struct ServantStatusListViewItem_o *v32; // x8
  ServantOverwriteStatus_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v37; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v3 = this;
  if ( (byte_4CC2F55 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F55 = 1;
  }
  tdInfo = 0;
  entity = 0;
  v37 = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_66;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = v3->fields.mainInfo;
  if ( !v5 )
    goto LABEL_66;
  userSvtEntity = v5->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_66;
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v8 = this;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = v36;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v35, 0);
  if ( !v8 )
    goto LABEL_66;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
          &entity,
          (int64_t)this,
          (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v9 = v3->fields.mainInfo;
    if ( !v9 )
      goto LABEL_66;
    v10 = v9->fields.userSvtEntity;
    if ( !v10 )
      goto LABEL_66;
    v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
    v12 = this;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v36;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v34, 0);
    if ( !v12 )
      goto LABEL_66;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
      &entity,
      (int64_t)this,
      (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
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
  *(_QWORD *)&v40.fields.currentCryptoKey = v17;
  *(_QWORD *)&v40.fields.fakeValue = v16;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v40, 0);
  if ( !v15 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                    (int32_t)this,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C71608(this, result);
  }
  m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v23 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v26 )
        sub_1C71610(this);
      if ( *((_DWORD *)&v23->fields.CHARA_BASE_POSITION.fields.x + v26) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v26) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v26 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_65;
  v27 = v3->fields.mainInfo;
  if ( !v27 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)v27->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v20, -1, 1, -1, 0);
  if ( !entity )
    goto LABEL_66;
  v28 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v22, -1, 1, -1, 0);
  v29 = v3->fields.mainInfo;
  if ( !v29 )
    goto LABEL_66;
  v30 = this;
  this = (ServantStatusDialog_o *)v29->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v20, 0, 0);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v37, -1, v22, 0, 0);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                    (const MethodInfo_3184DE0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v37 )
    goto LABEL_66;
  if ( tdInfo->fields.id != v37->fields.id )
  {
LABEL_64:
    v3->fields.isNeedSort = 1;
    goto LABEL_65;
  }
  if ( !v3->fields.isNeedSort )
  {
    v31 = v3->fields.mainInfo;
    if ( v31 )
    {
      this = (ServantStatusDialog_o *)v31->fields.userSvtEntity;
      if ( this )
      {
        this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)this,
                                          v31->fields.questRestrictionInfo,
                                          0);
        v32 = v3->fields.mainInfo;
        if ( v32 )
        {
          v33 = (ServantOverwriteStatus_o *)this;
          this = (ServantStatusDialog_o *)entity;
          if ( entity )
          {
            this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                              (UserServantEntity_o *)entity,
                                              v32->fields.questRestrictionInfo,
                                              0);
            if ( v33 )
            {
              if ( !ServantOverwriteStatus__IsEqualForSort(v33, (ServantOverwriteStatus_o *)this, 0) )
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
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x21
  UserServantEntity_c *v5; // x0
  UnityEngine_Object_o *battleActor; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  void *individualityCallbackFunc; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  v2 = this;
  if ( (byte_4CC2F56 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&UserServantEntity_TypeInfo);
    byte_4CC2F56 = 1;
  }
  mainInfo = v2->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = UserServantEntity_TypeInfo;
    if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v5 = UserServantEntity_TypeInfo;
    }
    userSvtEntity->fields.dispLimitCountAfter = v5->static_fields->InitDispLimitCountAfter;
  }
  battleActor = (UnityEngine_Object_o *)v2->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v2->fields.battleActor;
    if ( this )
    {
      BattleFBXComponent__RevertShaderFloatProperty((BattleFBXComponent_o *)this, 0);
      goto LABEL_13;
    }
LABEL_23:
    sub_1C71608(this, method);
  }
LABEL_13:
  individualityCallbackFunc = v2->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    v2->fields.individualityCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.individualityCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    v2->fields.resultCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.resultCallbackFunc, 0, v14, v15, v16, v17, v18, v19);
    v2->fields.callbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
    isModify = v2->fields.isModify;
    isNeedSort = v2->fields.isNeedSort;
LABEL_15:
    (*((void (__fastcall **)(_QWORD, _BOOL8, __int64, _QWORD))individualityCallbackFunc + 3))(
      *((_QWORD *)individualityCallbackFunc + 8),
      isModify,
      isNeedSort,
      *((_QWORD *)individualityCallbackFunc + 5));
    return;
  }
  resultCallbackFunc = v2->fields.resultCallbackFunc;
  if ( resultCallbackFunc )
  {
    v2->fields.resultCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.resultCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    v2->fields.callbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v29, v30, v31, v32, v33, v34);
    ((void (__fastcall *)(intptr_t, bool, bool, _QWORD, intptr_t))resultCallbackFunc->fields.invoke_impl)(
      resultCallbackFunc->fields.method_code,
      v2->fields.isModify,
      v2->fields.isNeedSort,
      (unsigned int)v2->fields.questId,
      resultCallbackFunc->fields.method);
  }
  else
  {
    individualityCallbackFunc = v2->fields.formationCallbackFunc;
    if ( individualityCallbackFunc )
    {
      v2->fields.formationCallbackFunc = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.formationCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
      isModify = v2->fields.isModify;
      isNeedSort = (unsigned int)v2->fields.questId;
      goto LABEL_15;
    }
    callbackFunc = v2->fields.callbackFunc;
    if ( callbackFunc )
    {
      v2->fields.callbackFunc = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v2->fields.isModify,
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

  if ( (byte_4CC2F54 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&OtherUserNewManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_1C713B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C713B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1C713B0(&UserServantCollectionManager_TypeInfo);
    sub_1C713B0(&UserServantNewManager_TypeInfo);
    byte_4CC2F54 = 1;
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
        v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v24,
                                  (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
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
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v80, 0);
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
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v84, 0);
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
    v36 = BasicHelper__DecryptValue_44438400(v37[8], 0);
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
    v40 = BasicHelper__DecryptValue_44438400(v41[9], 0);
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
    v44 = BasicHelper__DecryptValue_44438400(v45[10], 0);
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
    portraitLimitCount = BasicHelper__DecryptValue_44438400(v49[11], 0);
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
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v82, 0);
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
    sub_1C71608(IsModifyLock, v4);
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
    v62 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v62,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v62,
                              (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
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
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v81, 0);
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

  if ( (byte_4CC2F3A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_9520/*"NoblePhantasm_"*/);
    sub_1C713B0(&StringLiteral_4417/*"ChrVoice_"*/);
    sub_1C713B0(&StringLiteral_12771/*"Servants_"*/);
    byte_4CC2F3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
    sub_1C71608(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0);
  result = 0;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_46E0E58[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0);
    return System_String__Concat_64031724(*v13, v14, 0);
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

  if ( (byte_4CC2F1D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndInitLoad__);
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    byte_4CC2F1D = 1;
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
  if ( !byte_4CC2F90 )
  {
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    byte_4CC2F90 = 1;
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
    sub_1C71608(baseObject, v4);
  }
LABEL_26:
  v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0);
  Asset = ServantStatusDialog__LoadAsset(v13, v12, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


void ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  GrandQuestFolderBoardItem_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC2F2E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2F2E = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C71608(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0);
  }
  battleChr = (UnityEngine_Object_o *)this->fields.battleChr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleChr, 0, 0) )
  {
    p_battleChr = (GrandQuestFolderBoardItem_o *)&this->fields.battleChr;
    klass = (UnityEngine_Object_o *)p_battleChr->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(klass, 0);
    p_battleChr->klass = 0;
    sub_1C71354(p_battleChr, 0, v9, v10, v11, v12, v13, v14);
  }
}


void ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v23; // x21

  if ( (byte_4CC2F48 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_1C713B0(&Method_ServantStatusDialog__InitList_b__184_0__);
    byte_4CC2F48 = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallbackFunc->fields.invoke_impl)(
      openCallbackFunc->fields.method_code,
      openCallbackFunc->fields.method);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v11 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v12);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v11;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int32_t)v11,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ServantStatusCharaGraphListViewManager__SetMode_34600188(charaGraphListViewManager, 2, v21);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__184_0__, 0);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v23, 0);
      return;
    }
LABEL_10:
    sub_1C71608(v13, v14);
  }
}


bool ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v5; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *supportRandomLimitCountList; // x8
  ServantCostumeMaster_o *v8; // x21
  signed int v9; // w25
  unsigned int max_length; // w9
  int32_t v11; // w22
  BalanceConfig_c *v12; // x0
  ServantCostumeEntity_o *v13; // x23
  struct ServantStatusListViewItem_o *v14; // x8
  struct UserServantEntity_o *v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitAddEntity_o *v18; // x23
  struct ServantStatusListViewItem_o *v19; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v21; // x23
  __int64 v22; // x24
  struct ServantStatusListViewItem_o *v23; // x8
  ServantCostumeEntity_o *v25; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4CC2F7A & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantCostumeEntity_TypeInfo);
    sub_1C713B0(&ServantLimitAddEntity_TypeInfo);
    byte_4CC2F7A = 1;
  }
  v25 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1C71608(RandomGroupIndex, v5);
  supportRandomLimitCountList = mainInfo->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    v8 = RandomGroupIndex;
    v9 = 0;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( v9 > (int)max_length )
        break;
      if ( v9 )
      {
        if ( v9 - 1 >= max_length )
          sub_1C71610(RandomGroupIndex);
        v11 = supportRandomLimitCountList->m_Items[v9 - 1];
      }
      else
      {
        v11 = 0;
      }
      v12 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( v11 <= v12->static_fields->ServantLimitMax )
      {
        v18 = (ServantLimitAddEntity_o *)sub_1C715FC(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v18, 0);
        entity = v18;
        v19 = this->fields.mainInfo;
        if ( !v19 )
          goto LABEL_35;
        userSvtEntity = v19->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_35;
        v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v22;
        *(_QWORD *)&v28.fields.fakeValue = v21;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                       v28,
                                                       0);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
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
        v13 = (ServantCostumeEntity_o *)sub_1C715FC(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v13, 0);
        v25 = v13;
        v14 = this->fields.mainInfo;
        if ( !v14 )
          goto LABEL_35;
        v15 = v14->fields.userSvtEntity;
        if ( !v15 )
          goto LABEL_35;
        v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = v17;
        *(_QWORD *)&v27.fields.fakeValue = v16;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                       v27,
                                                       0);
        if ( !v8 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v8,
                                                       &v25,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
                                                       0);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_35;
          if ( v25->fields.groupIndex )
            return 1;
        }
      }
      v23 = this->fields.mainInfo;
      if ( v23 )
      {
        supportRandomLimitCountList = v23->fields.supportRandomLimitCountList;
        ++v9;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC2F1E & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog__LoadAsset_d__139_TypeInfo);
    byte_4CC2F1E = 1;
  }
  v4 = sub_1C715FC(ServantStatusDialog__LoadAsset_d__139_TypeInfo);
  ServantStatusDialog__LoadAsset_d__139___ctor((ServantStatusDialog__LoadAsset_d__139_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C71608(v5, v6);
  *(_QWORD *)(v4 + 40) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)callback, v7, v8, v9, v10, v11, v12);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusDialog_c *v21; // x0
  System_String_o *BattleCharaChangeConfirmLoadAssetPath; // x20
  ServantStatusDialog_c *v23; // x0
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21

  if ( (byte_4CC2F1F & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
    byte_4CC2F1F = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    goto LABEL_21;
  v21 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v21 = ServantStatusDialog_TypeInfo;
  }
  BattleCharaChangeConfirmLoadAssetPath = v21->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (Il2CppObject *)AssetManager__isExistAssetStorage(BattleCharaChangeConfirmLoadAssetPath, 0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_18:
    sub_1C71608(isExistAssetStorage, v7);
  }
  isExistAssetStorage = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !isExistAssetStorage )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)isExistAssetStorage, 1, 0);
  v23 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v23 = ServantStatusDialog_TypeInfo;
  }
  v24 = v23->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass140_0__LoadBattleCharaChangeConfirmAsset_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0);
}


void ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CC2F5A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog__LoadTransformedResource_b__206_0__);
    byte_4CC2F5A = 1;
  }
  v3 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4CC2F52 & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickCancel__);
    byte_4CC2F52 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  if ( (byte_4CC2F59 & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_4CC2F59 = 1;
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
        v4 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1C71608(this, method);
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
  if ( (byte_4CC2F7B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickChangeVoice__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F7B = 1;
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
          v8 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickChangeVoice__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&type);
  }
}


void ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC2F7E & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickChoice__);
    byte_4CC2F7E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C71608(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommand(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_object__o *v8; // x20
  const MethodInfo *v9; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4CC2F69 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickCommand__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F69 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      if ( ServantStatusListViewItem__SelectCommandCardLimitCountStageList(mainInfo, index, 0) )
      {
        v6 = Method_ServantStatusDialog_OnClickCommand__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommand__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommand__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
        v8 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
        System_Action_object____ctor(
          v8,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EnddChangeCommandResourceLoad__,
          0);
        ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v8, v9);
        return;
      }
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    }
    sub_1C71608(mainInfo, *(_QWORD *)&index);
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
  if ( (byte_4CC2F68 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickCommandCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F68 = 1;
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
          sub_1C71610(this);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.commandCardLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangeCommandResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4CC2F67 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickCommandCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F67 = 1;
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
          v8 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4CC2F72 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickCommandCodeShow__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F72 = 1;
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
        v9 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0);
      v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_31456308((CommonUI_o *)Instance, 20, v8, v12, v13, 0);
        return;
      }
LABEL_27:
      sub_1C71608(this, *(_QWORD *)&index);
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
        v17 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C71394(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      kind = v4->fields.kind;
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
        if ( !v20 )
          goto LABEL_27;
        v23 = 22;
      }
      else
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
      CommonUI__OpenServantEquipStatusDialog_31457060(v29, v23, v30, v28, v21, v22, 0);
      return;
    }
  }
LABEL_17:
  v24 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C71394(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
void ServantStatusDialog__OnClickFace(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4CC2F6D & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickFace__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = (ServantStatusListViewManager_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    if ( ServantStatusListViewItem__SelectIconLimitCountStageList((ServantStatusListViewItem_o *)mainInfo, index, 0) )
    {
      v6 = Method_ServantStatusDialog_OnClickFace__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFace__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickFace__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_37768252(mainInfo, 5, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_1C71608(mainInfo, *(_QWORD *)&index);
  }
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
  if ( (byte_4CC2F6C & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickFaceCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6C = 1;
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
          sub_1C71610(this);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.iconLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangeFaceResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4CC2F6B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickFaceCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6B = 1;
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
          v8 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&dispLv);
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ServantStatusDialog_o *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  ServantStatusDialog_o *v39; // x25
  void *v40; // x24
  Il2CppClass *v41; // x25
  int32_t v42; // w0
  Il2CppClass *v43; // x8
  int32_t v44; // w23
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  ServantStatusDialog_o *v51; // x23
  int32_t Rarity; // w0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  ServantStatusDialog_o *v59; // x23
  struct ServantStatusListViewItem_o *v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  ServantStatusDialog_o *v67; // x23
  struct ServantStatusListViewItem_o *v68; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  int32_t v70; // w23
  int32_t v71; // w0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  ServantStatusDialog_o *v78; // x20
  System_String_o *v79; // x20
  System_String_o *v80; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v82; // x22
  System_String_o *v83; // x23
  System_String_o *v84; // x24
  CommonConfirmDialog_ClickDelegate_o *v85; // x25
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  v2 = this;
  if ( (byte_4CC2F7F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickFavorite__);
    sub_1C713B0(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_11943/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11941/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11940/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11944/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_11942/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_4CC2F7F = 1;
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
    *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v89.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v88 = v89;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v88, 0) )
    {
      v7 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickFavorite__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    v9 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickFavorite__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
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
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v89;
          v19->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v87, 0);
          ServantStatusDialog__SetMark(v2, v22);
          return;
        }
      }
      goto LABEL_83;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_83;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_83;
    v12 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v90.fields.currentCryptoKey = klass;
    *(_QWORD *)&v90.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v90, 0);
    if ( !v12 )
      goto LABEL_83;
    v15 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
            (int32_t)this,
            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
    v24 = sub_1C71458(object___TypeInfo, 6);
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
    v32 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v24 + 32) = v32;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      if ( !v15 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v15, 0);
      v39 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v24 + 24) <= 1u )
          goto LABEL_84;
        *(_QWORD *)(v24 + 40) = v39;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 40), (int32_t)v39, v33, v34, v35, v36, v37, v38);
        v41 = v15[1].klass;
        v40 = v15[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v41;
        *(_QWORD *)&v91.fields.fakeValue = v40;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v91, 0);
        v43 = Entity[6].klass;
        *(_QWORD *)&v92.fields.fakeValue = Entity[6].monitor;
        v44 = v42;
        *(_QWORD *)&v92.fields.currentCryptoKey = v43;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v92, 0);
        if ( !v17 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v17,
                                          v44,
                                          (int32_t)this,
                                          1,
                                          0);
        v51 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v24 + 24) <= 2u )
            goto LABEL_84;
          *(_QWORD *)(v24 + 48) = v51;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 48), (int32_t)v51, v45, v46, v47, v48, v49, v50);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_83;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
          v59 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v24 + 24) <= 3u )
              goto LABEL_84;
            *(_QWORD *)(v24 + 56) = v59;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 56), (int32_t)v59, v53, v54, v55, v56, v57, v58);
            v60 = v2->fields.mainInfo;
            if ( !v60 )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)v60->fields.svtEntity;
            if ( !this )
              goto LABEL_83;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
            v67 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v24 + 24) <= 4u )
                goto LABEL_84;
              *(_QWORD *)(v24 + 64) = v67;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 64), (int32_t)v67, v61, v62, v63, v64, v65, v66);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_83;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0);
              v68 = v2->fields.mainInfo;
              if ( !v68 )
                goto LABEL_83;
              v69 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v68->fields.userSvtEntity;
              if ( !v69 )
                goto LABEL_83;
              v70 = (int)this;
              v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v69[6], 0);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v17,
                                                v70,
                                                v71,
                                                1,
                                                0);
              v78 = this;
              if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v24 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v24 + 24) > 5u )
                {
                  *(_QWORD *)(v24 + 72) = v78;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 72), (int32_t)v78, v72, v73, v74, v75, v76, v77);
                  this = (ServantStatusDialog_o *)System_String__Format_64073168(v23, (System_Object_array *)v24, 0);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_83;
                  v79 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_83;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                      v79 = System_String__Concat_64031724(v79, v80, 0);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
                  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                  v85 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v85,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31440236(
                      (CommonUI_o *)Instance,
                      v82,
                      v79,
                      v83,
                      v84,
                      v85,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0);
                    return;
                  }
LABEL_83:
                  sub_1C71608(this, method);
                }
LABEL_84:
                sub_1C71610(this);
              }
            }
          }
        }
      }
    }
    v86 = sub_1C7162C();
    sub_1C714D8(v86, 0);
  }
}


void ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC2F7D & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickLock__);
    byte_4CC2F7D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1C71608(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickPortrait(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4CC2F71 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickPortrait__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F71 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = (ServantStatusListViewManager_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    if ( ServantStatusListViewItem__SelectPortraitLimitCountStageList((ServantStatusListViewItem_o *)mainInfo, index, 0) )
    {
      v6 = Method_ServantStatusDialog_OnClickPortrait__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortrait__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickPortrait__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_37768252(mainInfo, 7, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_1C71608(mainInfo, *(_QWORD *)&index);
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
  if ( (byte_4CC2F70 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F70 = 1;
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
          sub_1C71610(this);
        v7 = costumeIds->m_Items[costumeIndex];
        if ( mainInfo->fields.portraitLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          ServantStatusDialog__ChangePortraitResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4CC2F6F & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F6F = 1;
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
          v8 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C71608(this, *(_QWORD *)&dispLv);
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
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  ServantStatusDialog_o *v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  ServantStatusDialog_o *v40; // x25
  void *v41; // x24
  Il2CppClass *v42; // x25
  int32_t v43; // w0
  Il2CppClass *v44; // x8
  int32_t v45; // w23
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  ServantStatusDialog_o *v52; // x23
  int32_t Rarity; // w0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  ServantStatusDialog_o *v60; // x23
  struct ServantStatusListViewItem_o *v61; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  ServantStatusDialog_o *v68; // x23
  struct ServantStatusListViewItem_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  int32_t v71; // w23
  int32_t v72; // w0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  ServantStatusDialog_o *v79; // x20
  System_String_o *v80; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v82; // x22
  System_String_o *v83; // x23
  System_String_o *v84; // x24
  CommonConfirmDialog_ClickDelegate_o *v85; // x25
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  v2 = this;
  if ( (byte_4CC2F81 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickPush__);
    sub_1C713B0(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_11955/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11953/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11954/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_11956/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4CC2F81 = 1;
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
    *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v89.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v88 = v89;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v88, 0) )
    {
      v8 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickPush__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
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
      v11 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickPush__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C71394(v11, v11[4]);
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
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v89;
          v21->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v87, 0);
          goto LABEL_38;
        }
      }
LABEL_78:
      sub_1C71608(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_78;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_78;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_78;
    v14 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v90.fields.currentCryptoKey = klass;
    *(_QWORD *)&v90.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v90, 0);
    if ( !v14 )
      goto LABEL_78;
    v17 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
            (int32_t)this,
            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11955/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v25 = sub_1C71458(object___TypeInfo, 6);
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
    v33 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_79;
      *(_QWORD *)(v25 + 32) = v33;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)v33, v27, v28, v29, v30, v31, v32);
      if ( !v17 )
        goto LABEL_78;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)v17, 0);
      v40 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_79;
        *(_QWORD *)(v25 + 40) = v40;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 40), (int32_t)v40, v34, v35, v36, v37, v38, v39);
        v42 = v17[1].klass;
        v41 = v17[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v42;
        *(_QWORD *)&v91.fields.fakeValue = v41;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v91, 0);
        v44 = Entity[6].klass;
        *(_QWORD *)&v92.fields.fakeValue = Entity[6].monitor;
        v45 = v43;
        *(_QWORD *)&v92.fields.currentCryptoKey = v44;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v92, 0);
        if ( !v19 )
          goto LABEL_78;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v19,
                                          v45,
                                          (int32_t)this,
                                          1,
                                          0);
        v52 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v25 + 24) <= 2u )
            goto LABEL_79;
          *(_QWORD *)(v25 + 48) = v52;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 48), (int32_t)v52, v46, v47, v48, v49, v50, v51);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_78;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
          v60 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v25 + 24) <= 3u )
              goto LABEL_79;
            *(_QWORD *)(v25 + 56) = v60;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 56), (int32_t)v60, v54, v55, v56, v57, v58, v59);
            v61 = v2->fields.mainInfo;
            if ( !v61 )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)v61->fields.svtEntity;
            if ( !this )
              goto LABEL_78;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
            v68 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v25 + 24) <= 4u )
                goto LABEL_79;
              *(_QWORD *)(v25 + 64) = v68;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 64), (int32_t)v68, v62, v63, v64, v65, v66, v67);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_78;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0);
              v69 = v2->fields.mainInfo;
              if ( !v69 )
                goto LABEL_78;
              v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userSvtEntity;
              if ( !v70 )
                goto LABEL_78;
              v71 = (int)this;
              v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v70[6], 0);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v19,
                                                v71,
                                                v72,
                                                1,
                                                0);
              v79 = this;
              if ( !this || (this = (ServantStatusDialog_o *)sub_1C714EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v25 + 24) > 5u )
                {
                  *(_QWORD *)(v25 + 72) = v79;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 72), (int32_t)v79, v73, v74, v75, v76, v77, v78);
                  v80 = System_String__Format_64073168(v24, (System_Object_array *)v25, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11956/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11954/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11953/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  v85 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v85,
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
                    CommonUI__OpenConfirmDialog_31440676(
                      (CommonUI_o *)Instance,
                      v82,
                      v80,
                      v83,
                      v84,
                      v85,
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
                sub_1C71610(this);
              }
            }
          }
        }
      }
    }
    v86 = sub_1C7162C();
    sub_1C714D8(v86, 0);
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

  if ( (byte_4CC2F78 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_4CC2F78 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
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

  if ( (byte_4CC2F75 & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    byte_4CC2F75 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
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

  if ( (byte_4CC2F73 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickServantQuest__);
    sub_1C713B0(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    sub_1C713B0(&StringLiteral_11987/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11989/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11990/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_11983/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11992/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_11986/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_11991/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11988/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_11984/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11985/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_4CC2F73 = 1;
  }
  entity = 0;
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_25;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( !QuestInfo )
  {
LABEL_25:
    v19 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickServantQuest__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C71394(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    v9 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickServantQuest__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
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
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25231/*"{0}"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (void *)QuestEntity__getServantId(v12, 0);
    if ( !MasterData_object )
      goto LABEL_44;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
    v13 = System_String__Format(v13, BattleName, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !Instance )
LABEL_44:
    sub_1C71608(Instance, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         questId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_44;
    if ( QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0) )
    {
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11992/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, 0);
      v18 = &StringLiteral_11991/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/;
      goto LABEL_42;
    }
  }
  if ( QuestType == 3 )
  {
    warId = v8->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
    else
      IsFolder = 1;
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_39:
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0);
        v18 = &StringLiteral_11987/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_42;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_39;
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0);
    v18 = &StringLiteral_11985/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
    goto LABEL_42;
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11990/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0);
  v18 = &StringLiteral_11989/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_42:
  v26 = v17;
  v27 = LocalizationManager__Get((System_String_o *)*v18, 0);
  v28 = System_String__Format(v27, (Il2CppObject *)v13, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0);
  if ( !v16 )
    goto LABEL_44;
  CommonUI__OpenConfirmDialog_31440236((CommonUI_o *)v16, v26, v28, v29, v30, v31, 26, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickSupportLimitCount(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4CC2F77 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickSupportLimitCount__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F77 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_12;
    ServantStatusListViewItem__SelectSupportLimitCountStageList(mainInfo, index, 0);
    v6 = Method_ServantStatusDialog_OnClickSupportLimitCount__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickSupportLimitCount__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickSupportLimitCount__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
    if ( !mainInfo
      || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 9, 0),
          statusTabListViewManager = this->fields.statusTabListViewManager,
          v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
          ServantStatusListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0),
          !statusTabListViewManager) )
    {
LABEL_12:
      sub_1C71608(mainInfo, *(_QWORD *)&index);
    }
    ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
  }
}


void ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F5F & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickTabBattle__);
    byte_4CC2F5F = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F5E & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickTabProfile__);
    byte_4CC2F5E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F5D & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickTabStatus__);
    byte_4CC2F5D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC2F60 & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantStatusDialog_OnClickTabVoice__);
    byte_4CC2F60 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  long double v23; // q0
  __int64 v24; // x8
  __int64 v25; // x0
  CommonUI_o *v26; // x22
  System_String_o *Empty; // x21
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25

  if ( (byte_4CC2F74 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnClickTdSpeed__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass232_0__OnClickTdSpeed_b__0__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass232_0_TypeInfo);
    sub_1C713B0(&StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11995/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11996/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_4CC2F74 = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass232_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass232_0___ctor((ServantStatusDialog___c__DisplayClass232_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0) == *(_DWORD *)(v5 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v15, 0);
        return;
      }
LABEL_24:
      sub_1C71608(mainInfo, v7);
    }
    v16 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnClickTdSpeed__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C71394(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0);
    v20 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0);
    v22 = System_String__Format_64073032(v21, TDSpeedLocalization, v20, 0);
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C47444(v23);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C47444(v23);
    v26 = **(CommonUI_o ***)(v25 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0);
    v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass232_0__OnClickTdSpeed_b__0__,
      0);
    if ( !v26 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v26, Empty, v22, v28, v29, v30, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0);
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
  if ( (byte_4CC2F80 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F80 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1C71608(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v10, 0);
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
  if ( (byte_4CC2F82 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F82 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1C71608(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v10, 0);
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

  if ( (byte_4CC2F7C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_ServantStatusDialog__OnConfirmServantQuest_b__240_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC2F7C = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v11, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  v5 = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC2F91 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC2F91 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__240_0__, 0);
  if ( !v15 )
LABEL_25:
    sub_1C71608(v5, v6);
  CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0);
}


void ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4CC2F53 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2F53 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C71608(0, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0);
  }
}


void ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CC2F88 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3047/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_4CC2F88 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3047/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0);
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
    sub_1C71608(transform, v4);
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

  if ( (byte_4CC2F61 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectBattle__);
    byte_4CC2F61 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      0);
    if ( !battleTabListViewManager
      || (ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v6, 0),
          (mainInfo = this->fields.mainInfo) == 0) )
    {
      sub_1C71608(v7, v8);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v10 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnSelectBattle__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
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

  if ( (byte_4CC2F4E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F4E = 1;
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
    ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)gameObject, 8, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C71608(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectEquipStatus(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CC2F4C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F4C = 1;
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
    ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)gameObject, 8, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C71608(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectFlavor(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC2F50 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_4CC2F50 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0);
  if ( !profileTabListViewManager )
    sub_1C71608(v6, v7);
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
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 *v41; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w1
  struct UICommonButton_o *v49; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v51; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v53; // x21
  struct ServantStatusListViewItem_o *v54; // x8
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  bool v57; // w21
  ServantStatusDialog_o *v58; // x22
  int64_t EquipIdByIndex; // x20
  ServantStatusDialog_EndDelegate_o *v60; // x23
  System_Action_o *v61; // x24
  ServantLeaderInfo_o *voiceTabBase; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int128 v64; // q1
  EquipTargetInfo_o *v65; // x20
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  int32_t v68; // w24
  Il2CppObject *v69; // x21
  ServantStatusListViewManager_o *v70; // x20
  ServantStatusListViewManager_CallbackFunc_o *v71; // x21
  struct ServantStatusListViewItem_o *v72; // x8
  struct ServantLeaderInfo_o *v73; // x8
  CommonUI_o *v74; // x0
  EquipTargetInfo_o *v75; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+40h] [xbp-60h]

  v6 = this;
  if ( (byte_4CC2F4B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_Exit__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&StringLiteral_12748/*"ServantLvExceed"*/);
    sub_1C713B0(&StringLiteral_12752/*"ServantSkillCombine"*/);
    sub_1C713B0(&StringLiteral_12749/*"ServantNpCombine"*/);
    sub_1C713B0(&StringLiteral_4577/*"CommandCardEquip"*/);
    sub_1C713B0(&StringLiteral_12736/*"ServantEQCombine"*/);
    sub_1C713B0(&StringLiteral_12733/*"ServantCombine"*/);
    sub_1C713B0(&StringLiteral_6872/*"FriendshipExceed"*/);
    sub_1C713B0(&StringLiteral_12746/*"ServantLimitCountUp"*/);
    sub_1C713B0(&StringLiteral_2288/*"AppendSkillCombine"*/);
    sub_1C713B0(&StringLiteral_4578/*"CommandCardExceed"*/);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_2289/*"AppendSkillExchange"*/);
    byte_4CC2F4B = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
            v10 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnSelectStatus__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C71394(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = v6->fields.mainInfo;
          if ( !v12 )
            goto LABEL_114;
          equipTargetId1 = v12->fields.equipTargetId1;
          v14 = this;
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v16 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
        *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        *(_OWORD *)&v78.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v77 = v78;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v77, 0) < 1 )
          goto LABEL_99;
        v25 = Method_ServantStatusDialog_OnSelectStatus__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnSelectStatus__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C71394(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
        kind = v6->fields.kind;
        if ( kind == 4 )
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = v6->fields.mainInfo;
          if ( !v28 )
            goto LABEL_114;
          v29 = v28->fields.servantLeaderInfo;
          if ( !v29 )
            goto LABEL_114;
          v30 = v29->fields.equipTarget1;
          v31 = this;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v31 )
            goto LABEL_114;
          v34 = 13;
        }
        else
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v72 = v6->fields.mainInfo;
          if ( !v72 )
            goto LABEL_114;
          v73 = v72->fields.servantLeaderInfo;
          if ( !v73 )
            goto LABEL_114;
          v30 = v73->fields.equipTarget1;
          v31 = this;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v31 )
            goto LABEL_114;
          if ( kind == 5 )
            v34 = 14;
          else
            v34 = 16;
        }
        v74 = (CommonUI_o *)v31;
        v75 = v30;
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_12733/*"ServantCombine"*/;
        goto LABEL_66;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v48 = StringLiteral_12736/*"ServantEQCombine"*/;
        this->fields.profileButton = (struct UICommonButton_o *)StringLiteral_12736/*"ServantEQCombine"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.profileButton, v48, v42, v43, v44, v45, v46, v47);
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        LODWORD(this->fields.battleButton) = id & ~(id >> 31);
        goto LABEL_67;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_12752/*"ServantSkillCombine"*/;
        goto LABEL_66;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_12746/*"ServantLimitCountUp"*/;
        goto LABEL_66;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_6872/*"FriendshipExceed"*/;
        goto LABEL_66;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_4577/*"CommandCardEquip"*/;
        goto LABEL_66;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_4578/*"CommandCardExceed"*/;
        goto LABEL_66;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_2288/*"AppendSkillCombine"*/;
        goto LABEL_66;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_2289/*"AppendSkillExchange"*/;
        goto LABEL_66;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_12749/*"ServantNpCombine"*/;
        goto LABEL_66;
      case 23:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_114;
        v41 = &StringLiteral_12748/*"ServantLvExceed"*/;
LABEL_66:
        v49 = (struct UICommonButton_o *)*v41;
        this->fields.profileButton = (struct UICommonButton_o *)*v41;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.profileButton,
          (int32_t)v49,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
LABEL_67:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v51 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v51 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v51->static_fields->DEFAULT_FADE_TIME;
        v53 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v53, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0);
        if ( !Instance )
          goto LABEL_114;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v53, 0);
        return;
      case 24:
        v54 = v6->fields.mainInfo;
        if ( !v54 )
          goto LABEL_114;
        if ( v54->fields.isEquipChangeMode )
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
            v64 = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.fakeValue;
            v65 = EquipTargetInfoByEquipIdx;
            *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v78.fields.fakeValue = v64;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v76 = v78;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v76, 0) < 1 )
              return;
            v66 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v66 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnSelectStatus__);
            v67 = (System_Reflection_MethodBase_o *)sub_1C71394(v66, v66[4]);
            OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0);
            v68 = v6->fields.kind;
            v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v68 == 4 )
            {
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v69 )
                goto LABEL_114;
              v34 = 13;
            }
            else
            {
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v69 )
                goto LABEL_114;
              if ( v68 == 5 )
                v34 = 14;
              else
                v34 = 16;
            }
            v74 = (CommonUI_o *)v69;
            v75 = v65;
LABEL_113:
            CommonUI__OpenServantEquipStatusDialog_31456076(v74, v34, v75, v32, v33, 0);
            return;
          }
LABEL_99:
          v70 = v6->fields.statusTabListViewManager;
          v71 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v71,
            (Il2CppObject *)v6,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( v70 )
          {
            ServantStatusListViewManager__SetMode(v70, 1, v71, 0);
            return;
          }
        }
        else
        {
          v55 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v55 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnSelectStatus__);
          v56 = (System_Reflection_MethodBase_o *)sub_1C71394(v55, v55[4]);
          OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0);
          v57 = 0;
          if ( id == 1 )
          {
            this = (ServantStatusDialog_o *)v6->fields.mainInfo;
            if ( !this )
              goto LABEL_114;
            v57 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill((ServantStatusListViewItem_o *)this, 0);
          }
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v6->fields.mainInfo )
          {
            v58 = this;
            EquipIdByIndex = ServantStatusListViewItem__GetEquipIdByIndex(v6->fields.mainInfo, id, 0);
            v60 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v60,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0);
            v61 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(v61, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
            if ( v58 )
            {
              v21 = v57;
              v17 = (CommonUI_o *)v58;
              v18 = EquipIdByIndex;
              v19 = v60;
              v20 = v61;
              goto LABEL_84;
            }
          }
        }
LABEL_114:
        sub_1C71608(this, *(_QWORD *)&result);
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

  if ( (byte_4CC2F51 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC2F51 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        v13 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
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
        v19 = System_String__Concat_64069988(v17, (System_String_o *)StringLiteral_16109/*"_"*/, LabelName, 0);
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
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_43105344(
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
                      ServantStatusDialog__PlayChrVoice_34660836(this, v15, v16, HomeVoiceList, result, v21);
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
                  sub_1C71608(Instance, v10);
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
            HomeVoiceList = ServantVoiceMaster__getEntity_43103348(
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

  if ( (byte_4CC2F57 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_1C713B0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__);
    sub_1C713B0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C713B0(&StringLiteral_11961/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_1C713B0(&StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4CC2F57 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v36, 0) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v17 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C71394(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      v20 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1C47444(v19);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1C47444(v19);
      v22 = **(CommonUI_o ***)(v21 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11961/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0);
      v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_0__;
LABEL_44:
      v35 = v24;
      CommonConfirmDialog_ClickDelegate___ctor(v24, (Il2CppObject *)this, *v25, 0);
      if ( !v22 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_31440676(
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
          v30 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v31 = (System_Reflection_MethodBase_o *)sub_1C71394(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1C47444(v32);
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
        if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
          v34 = sub_1C47444(v32);
        v22 = **(CommonUI_o ***)(v34 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0);
        v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__203_1__;
        goto LABEL_44;
      }
      v29 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v29;
      *(_QWORD *)&v37.fields.fakeValue = v28;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v37, 0) )
      {
        v26 = this->fields.mainInfo;
        if ( !v26 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v7 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C713C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      sub_1C71608(v11, v12);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4CC2F03 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F03 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC2F26 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&StringLiteral_13595/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_4CC2F26 = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40699620(106, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0);
    if ( !Instance )
      sub_1C71608(v6, v7);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 106, callback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34625724(
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4CC2F04 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F04 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__Open_34625932(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4CC2F05 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F05 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35616792(v20, partyItem, member, 0, 0);
  this->fields.mainInfo = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_34626128(
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

  if ( (byte_4CC2F06 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F06 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C71608(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)*v13);
  ServantStatusDialog__Open_34626408(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_34626408(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w21
  ServantStatusListViewItem_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4CC2F0A & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F0A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v24 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(v24, userSvtEntity, 0, 0, 0, v23, v23, 0, 0, 0, 0, 0);
  this->fields.mainInfo = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_34626668(
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

  if ( (byte_4CC2F07 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F07 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C71608(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)*v13);
  ServantStatusDialog__Open_34626948(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_34626948(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4CC2F0B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F0B = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v24 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(v24, userSvtEntity, 0, 0, callback != 0, v23, v23, 0, 0, 0, 0, 0);
  this->fields.mainInfo = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_34627212(
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

  if ( (byte_4CC2F08 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F08 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C71608(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)*v13);
  ServantStatusDialog__Open_34627496(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_34627496(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  char v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  char v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4CC2F0C & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F0C = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    canMoveCombine,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v25 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(v25, userSvtEntity, 0, 0, 0, v24, v24, canMoveCombine, 0, 0, 0, 0);
  this->fields.mainInfo = v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_34627768(
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

  if ( (byte_4CC2F09 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F09 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C71608(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)*v13);
  ServantStatusDialog__Open_34628052(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_34628052(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  char v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  char v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4CC2F0D & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F0D = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    canMoveCombine,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v25 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(
    v25,
    userSvtEntity,
    0,
    0,
    callback != 0,
    v24,
    v24,
    canMoveCombine,
    0,
    0,
    0,
    0);
  this->fields.mainInfo = v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_34628424(
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

  if ( (byte_4CC2F0E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C71608(Instance, v13);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_34628628(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0, callback, 0, v15);
}


void ServantStatusDialog__Open_34628628(
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  unsigned int v21; // w8
  bool v22; // cc
  unsigned __int64 v23; // x8
  char v24; // w9
  char v25; // w23
  ServantStatusListViewItem_o *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_4CC2F0F & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F0F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (int32_t)callback,
    (int64_t)openCallback,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v26 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v25,
    v25,
    0,
    0,
    0,
    0,
    0);
  this->fields.mainInfo = v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  ServantStatusDialog__Init(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34628904(
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  unsigned int v25; // w8
  bool v26; // cc
  unsigned __int64 v27; // x8
  char v28; // w9
  char v29; // w24
  ServantStatusListViewItem_o *v30; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x1

  if ( (byte_4CC2F10 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F10 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (int32_t)callback,
    (int64_t)openCallback,
    (System_String_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.kind - 2;
  v26 = v25 > 0x23;
  v27 = 0x677FFFFFEuLL >> v25;
  v28 = v26;
  v29 = v28 | v27 & 1;
  v30 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(
    v30,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v29,
    v29,
    canMoveCombine,
    isGrand,
    isForceNotGrand,
    isChangeFriendShipSkill,
    0);
  this->fields.mainInfo = v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  ServantStatusDialog__Init(this, v37);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_34629216(
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
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  unsigned int v23; // w8
  bool v24; // cc
  unsigned __int64 v25; // x8
  char v26; // w9
  char v27; // w25
  ServantStatusListViewItem_o *v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4CC2F11 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F11 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (int32_t)callback,
    (int64_t)openCallback,
    (System_String_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v28 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35618828(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0,
    v27,
    v27,
    canMoveCombine,
    0,
    0,
    0,
    0);
  this->fields.mainInfo = v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  ServantStatusDialog__Init(this, v35);
}


void ServantStatusDialog__Open_34629508(
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

  if ( (byte_4CC2F12 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F12 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C71608(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_34629728(
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
void ServantStatusDialog__Open_34629728(
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
  char v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  int32_t v22; // w2
  char v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4CC2F13 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F13 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    isUse,
    (System_String_o *)callback,
    (int32_t)openCallback,
    isSkillChange,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35621988(v21, userSvtEntity, isUse, isSkillChange, 0);
  this->fields.mainInfo = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__Open_34629928(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w21
  ServantStatusListViewItem_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4CC2F14 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F14 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v24 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35624244(v24, userSvtCollectionEntity, 0, v23, 0);
  this->fields.mainInfo = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_34630152(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4CC2F15 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F15 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    imageLimitCount,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v25 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35626380(v25, userSvtCollectionEntity, imageLimitCount, 0, v24, 0);
  this->fields.mainInfo = v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_34630392(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4CC2F16 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F16 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
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
  v24 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35624244(v24, userSvtCollectionEntity, callback != 0, v23, 0);
  this->fields.mainInfo = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_34630620(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4CC2F17 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F17 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35628204(v19, servantLeaderInfo, kind != 7, 0);
  this->fields.mainInfo = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_34630804(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  bool v19; // zf
  bool v20; // w21
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4CC2F18 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F18 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = kind == 19;
  v20 = ((unsigned int)(kind - 13) > 6) | (0x34u >> (kind - 13)) & 1;
  v21 = v19;
  v22 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35630328(v22, equipTargetInfo, v21, v20, 0);
  this->fields.mainInfo = v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


void ServantStatusDialog__Open_34631024(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  char v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  char v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4CC2F19 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F19 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    isUse,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35631564(v20, commandCodeEntity, isUse, 0);
  this->fields.mainInfo = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_34631216(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4CC2F1A & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F1A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35632344(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_34631392(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4CC2F1B & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F1B = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35632344(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_34631568(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4CC2F1C & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewItem_TypeInfo);
    byte_4CC2F1C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1C715FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_35633856(v19, userCommandCodeCollectionEntity, 0);
  this->fields.mainInfo = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__PlayBattleEffect(ServantStatusDialog_o *this, bool noupdate, const MethodInfo *method)
{
  UnityEngine_Object_o *battleChrCamera; // x21
  __int64 v6; // x1
  __int64 transform; // x0
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *v25; // x22
  float32x2_t v26; // d8
  float v27; // s9
  float v28; // s2 OVERLAPPED
  unsigned __int64 v29; // d0 OVERLAPPED
  int v30; // s1
  UnityEngine_Transform_o *v31; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v35; // x26
  UnityEngine_Transform_o *v36; // x27
  float Item; // s8
  float v38; // s9
  float v39; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v41; // x24
  Il2CppObject *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v51; // x21
  System_String_o *v52; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC2F35 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3100/*"Battle2D"*/);
    sub_1C713B0(&StringLiteral_16620/*"_y0"*/);
    byte_4CC2F35 = 1;
  }
  v52 = 0;
  entity = 0;
  if ( !this->fields.isBattlePlay )
  {
    battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleChrCamera, 0, 0) )
    {
      transform = (__int64)this->fields.battleChrCamera;
      this->fields.isBattlePlay = 1;
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_73;
      v8 = (UnityEngine_Component_o *)transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v8,
                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (transform & 1) != 0 )
          break;
        transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v8, 0);
        v8 = (UnityEngine_Component_o *)transform;
        if ( !transform )
          goto LABEL_73;
      }
      if ( !Component_object )
        goto LABEL_73;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_73;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      transform = (__int64)this->fields.battleChrCamera;
      if ( !transform )
        goto LABEL_73;
      v11 = *(float *)&localScale;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_73;
      v54.fields.x = 1.0 / v11;
      v54.fields.y = 1.0 / v11;
      v54.fields.z = 1.0 / v11;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v54, 0);
      transform = (__int64)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = ServantStatusListViewItem__GetSvtId((ServantStatusListViewItem_o *)transform, 1, 0);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v12 = transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0);
      ServantStatusDialog__DestroyBattleChr(this, v15);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                    (ServantLimitImageMaster_o *)transform,
                    v12,
                    LimitCountByImageLimitCostumeIn,
                    0);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v16 = transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v18 = ServantAssetLoadManager__loadBattleActor(&v52, gameObject, v12, v16, 0, 0);
      this->fields.battleChr = v18;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleChr, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      if ( !v18 )
        goto LABEL_73;
      v25 = UnityEngine_GameObject__AddComponent_object_(
              v18,
              (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !v25 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v25, (UnityEngine_Transform_o *)transform, 0);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, v12, v16, 0);
      if ( (transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_73;
        v26.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v27 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v26.n64_u64[0] = 0;
        v27 = 0.0;
      }
      transform = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !transform )
        goto LABEL_73;
      v28 = v27 + this->fields.CHARA_BASE_POSITION.fields.z;
      v29 = vadd_f32(v26, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v30 = HIDWORD(v29);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v28 - 2),
        0);
      transform = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
      if ( !transform )
        goto LABEL_73;
      v55.fields.x = 0.0;
      v55.fields.z = 0.0;
      v55.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v55, 0);
      transform = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
      v31 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4CC0D0E )
      {
        transform = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
      }
      if ( !v31 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v35 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v35,
            (const MethodInfo_34802D0 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v35 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v35,
            5,
            0.75,
            (const MethodInfo_3480C9C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v35,
            8,
            0.75,
            (const MethodInfo_3480C9C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v35,
            9,
            0.75,
            (const MethodInfo_3480C9C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v35,
                 battleSize,
                 (const MethodInfo_3480E94 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v36 = UnityEngine_GameObject__get_transform(v18, 0);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v35,
                     battleSize,
                     (const MethodInfo_3480C00 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v38 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v35,
                    battleSize,
                    (const MethodInfo_3480C00 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v39 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v35,
                    battleSize,
                    (const MethodInfo_3480C00 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v36 )
              goto LABEL_73;
            v56.fields.z = v39;
            v56.fields.x = Item;
            v56.fields.y = v38;
            UnityEngine_Transform__set_localScale(v36, v56, 0);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v25, v12, v16, 0);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v25, 0) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v25,
          5000.0,
          (System_String_o *)StringLiteral_16620/*"_y0"*/,
          0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v12, v16, 0, 0);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v25, Manager__loadAnimEvents, v12, v16, 0);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v25, this->fields.defaultAnimationName, 2, 0);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v25, this->fields.defaultAnimationName, 0);
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
      if ( !transform
        || (v41 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0)) == 0) )
      {
LABEL_73:
        sub_1C71608(transform, v6);
      }
      v42 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0, 0);
      if ( (transform & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v41, 0);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0, 0);
        if ( (transform & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v42, 0);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v25;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleActor, (int32_t)v25, v43, v44, v45, v46, v47, v48);
      v49 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3100/*"Battle2D"*/, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v18, v49, 0);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)transform, 3, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_37768252(this->fields.statusTabListViewManager, 2, 0);
            return;
          }
          goto LABEL_73;
        }
        v51 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v51,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v51, 0);
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
  if ( (byte_4CC2F41 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4CC2F41 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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


bool ServantStatusDialog__PlayChrVoice_34660836(
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
  if ( (byte_4CC2F43 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4CC2F43 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_4CC2F42 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4CC2F42 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  int v29; // w19
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC2F3E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4CC2F3E = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !voicePlayList || !voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1C71608(0, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v32 = v31;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v12 = v10;
    if ( !v10 )
    {
      v29 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1C71608(v10, v11);
  }
  while ( !System_String__Equals_64067044(assetName, (System_String_o *)v32.fields._current, 0) );
  ServantStatusDialog__StopVoice(this, v13);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1C71608(0, v14);
    ServantStatusVoiceListViewManager__SetMode_37825736(voiceTabListViewManager, 2, listIndex, 0);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList,
    (int32_t)voicePlayList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.voicePlayAssetName = assetName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName,
    (int32_t)assetName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v28);
  v29 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v12 && v29 == 7;
}


void ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4CC2F49 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC2F49 = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_34600188(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_37768252(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_35598688(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0);
            return;
          }
        }
      }
    }
    sub_1C71608(charaGraphListViewManager, method);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  _BOOL4 v18; // w24
  const MethodInfo *v19; // x2
  int v20; // w8
  long double inited; // q0
  int v22; // w8
  unsigned __int8 v23; // w21
  struct ServantStatusListViewItem_o *v24; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v26; // x22
  __int64 v27; // x23
  int v28; // w22
  BalanceConfig_c *v29; // x8
  struct ServantStatusListViewItem_o *v30; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v32; // x23
  __int64 v33; // x0
  __int64 v34; // x0
  CommonUI_o *v35; // x19
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  CommonConfirmDialog_ClickDelegate_o *v39; // x0
  intptr_t *v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  CommonConfirmDialog_ClickDelegate_o *v43; // x24
  const MethodInfo *v44; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v46; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4CC2F79 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__0__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__1__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__2__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass237_0_TypeInfo);
    sub_1C713B0(&StringLiteral_11972/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11970/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_11971/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4CC2F79 = 1;
  }
  v9 = sub_1C715FC(ServantStatusDialog___c__DisplayClass237_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass237_0___ctor((ServantStatusDialog___c__DisplayClass237_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_53;
  v18 = isRandomOn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = index;
  *(_BYTE *)(v9 + 36) = isOwnSetting;
  *(_BYTE *)(v9 + 37) = isRandomOn;
  mainInfo = this->fields.mainInfo;
  if ( !isOwnSetting )
  {
    if ( !mainInfo )
      goto LABEL_53;
    if ( mainInfo->fields.isEnableSupportRandomSetting == v18 )
    {
      if ( mainInfo->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v20) = *(_BYTE *)(v9 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v11);
    v22 = *(unsigned __int8 *)(v9 + 37);
    v23 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v9 + 16) = 12;
    if ( v22 )
    {
      v24 = this->fields.mainInfo;
      if ( !v24 )
        goto LABEL_53;
      userSvtEntity = v24->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = v27;
      *(_QWORD *)&v47.fields.fakeValue = v26;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                  v47,
                                                  0);
      v28 = (int)mainInfo;
      v29 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      if ( v28 == v29->static_fields->ServantIdMashu1 )
      {
        v30 = this->fields.mainInfo;
        if ( !v30 )
          goto LABEL_53;
        supportRandomLimitCountList = v30->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v32 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v32,
            (Il2CppObject *)v9,
            Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__0__,
            0);
          if ( BasicHelper__Any_int__51593044(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v32,
                 (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760) )
          {
            v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
              v33 = sub_1C47444(inited);
            v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
            if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
              v34 = sub_1C47444(inited);
            v35 = **(CommonUI_o ***)(v34 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0);
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11971/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0);
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11970/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0);
            v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v40 = &Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v23 & *(_BYTE *)(v9 + 37) & 1) != 0 )
    {
      v41 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
        v41 = sub_1C47444(inited);
      v42 = *(_QWORD *)(*(_QWORD *)(v41 + 192) + 16LL);
      if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
        v42 = sub_1C47444(inited);
      v35 = **(CommonUI_o ***)(v42 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11960/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11959/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
      v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v40 = &Method_ServantStatusDialog___c__DisplayClass237_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v43 = v39;
      CommonConfirmDialog_ClickDelegate___ctor(v39, (Il2CppObject *)v9, *v40, 0);
      if ( v35 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v35,
          (System_String_o *)StringLiteral_1/*""*/,
          v36,
          v37,
          v38,
          v43,
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
      sub_1C71608(mainInfo, v11);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v9 + 32), 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v20 = *(unsigned __int8 *)(v9 + 37);
    if ( *(_BYTE *)(v9 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v20 != 0, 0);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v44);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v20;
    goto LABEL_50;
  }
  if ( !mainInfo )
    goto LABEL_53;
  if ( mainInfo->fields.isEnableOwnRandomSetting != v18 )
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
    v19);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v46 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v46,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v46, 0);
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

  if ( (byte_4CC2F76 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC2F76 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 9, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1C71608(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(ServantStatusDialog_o *this, const MethodInfo *method)
{
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x19
  GrandQuestFolderBoardItem_o *p_cashedBattleCharaChangeConfirmAssetData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC2F20 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC2F20 = 1;
  }
  cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
  if ( cashedBattleCharaChangeConfirmAssetData )
  {
    p_cashedBattleCharaChangeConfirmAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.cashedBattleCharaChangeConfirmAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808072(cashedBattleCharaChangeConfirmAssetData, 0);
    p_cashedBattleCharaChangeConfirmAssetData->klass = 0;
    sub_1C71354(p_cashedBattleCharaChangeConfirmAssetData, 0, v5, v6, v7, v8, v9, v10);
  }
}


void ServantStatusDialog__SetActiveInputLockPanel(ServantStatusDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC2F33 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2F33 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0, 0) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1C71608(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x21
  GrandQuestFolderBoardItem_o *p_battleCharaChangeConfirmDialog; // x19
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x21
  UnityEngine_Transform_o *v8; // x20
  Il2CppObject *Object_object__51560868; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC2F21 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Transform___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    byte_4CC2F21 = 1;
  }
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
  {
    battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_battleCharaChangeConfirmDialog = (GrandQuestFolderBoardItem_o *)&this->fields.battleCharaChangeConfirmDialog;
    if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      goto LABEL_15;
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_18;
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               baseObject,
                                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Transform___);
    cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
    v8 = (UnityEngine_Transform_o *)baseObject;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    if ( !cashedBattleCharaChangeConfirmAssetData )
      goto LABEL_18;
    Object_object__51560868 = AssetData__GetObject_object__51560868(
                                cashedBattleCharaChangeConfirmAssetData,
                                ServantStatusDialog_TypeInfo->static_fields->BattleCharaChangeConfirmDialogPrefabName,
                                (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52264420(
                                               Object_object__51560868,
                                               v8,
                                               (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    if ( !baseObject )
      goto LABEL_18;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         baseObject,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    p_battleCharaChangeConfirmDialog->klass = (GrandQuestFolderBoardItem_c *)Component_object;
    sub_1C71354(p_battleCharaChangeConfirmDialog, (int32_t)Component_object, v11, v12, v13, v14, v15, v16);
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
      sub_1C71608(baseObject, v5);
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
  if ( (byte_4CC2F85 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11912/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_11908/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    byte_4CC2F85 = 1;
  }
  costumeName = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
LABEL_13:
    sub_1C71608(this, method);
  if ( !mainInfo->fields.userSvtEntity )
    return;
  battleExplanationLabel = v3->fields.battleExplanationLabel;
  v6 = ServantStatusDialog__EnableSpecialCostume(v3, &costumeName, v2);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v6 )
    {
LABEL_7:
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, 0);
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int v16; // w9
  struct System_Action_o *callbackFunc2; // x8
  int method_ptr; // w23
  int method_ptr_high; // w24
  int invoke_impl; // w22
  struct System_Action_o *v21; // x8
  bool v22; // w8
  int32_t v23; // w21
  int32_t ConvertOverwriteDispImageLimitCount; // w22
  int32_t ServantImageLimitSealAfter; // w22
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v27; // x22
  const MethodInfo *v28; // x1
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x21
  System_Action_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x2
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *v44; // x23
  System_String_o *v45; // x21
  AssetLoader_LoadEndDataHandler_o *v46; // x22
  const MethodInfo *v47; // x1

  if ( (byte_4CC2F37 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
    byte_4CC2F37 = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass165_0___ctor((ServantStatusDialog___c__DisplayClass165_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_42;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_42;
  ServantStatusBattleListViewManager__ChangeSelectIndex(battleTabListViewManager, this->fields.confirmDispLv, 0);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_42;
  leftItem = battleTabListViewManager->fields.leftItem;
  if ( !leftItem )
    goto LABEL_42;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= leftItem->fields.sortIndex )
    sub_1C71610(battleTabListViewManager);
  v16 = *((_DWORD *)&leftItem->fields.sortValue0 + confirmDispLv);
  callbackFunc2 = battleTabListViewManager[1].fields.callbackFunc2;
  LODWORD(battleTabListViewManager->fields.bottomItem) = v16;
  if ( !callbackFunc2 )
    goto LABEL_42;
  method_ptr = callbackFunc2->fields.method_ptr;
  method_ptr_high = HIDWORD(callbackFunc2->fields.method_ptr);
  invoke_impl = callbackFunc2->fields.invoke_impl;
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  }
  else
  {
    if ( BYTE3(battleTabListViewManager[1].fields.leftItem) )
    {
      ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
      battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
      if ( !battleTabListViewManager )
        goto LABEL_42;
    }
    ServantStatusListViewItem__SetCostumeData((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
    battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
    if ( !battleTabListViewManager )
      goto LABEL_42;
    ServantStatusListViewItem__CacheDispLimitCountAfter((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  }
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_42;
  v21 = battleTabListViewManager[1].fields.callbackFunc2;
  if ( !v21 )
    goto LABEL_42;
  v22 = method_ptr_high != HIDWORD(v21->fields.method_ptr)
     || method_ptr != LODWORD(v21->fields.method_ptr)
     || invoke_impl != ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)battleTabListViewManager, 0);
  *(_BYTE *)(v5 + 24) = v22;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_42;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__GetSvtId(
                                                                       (ServantStatusListViewItem_o *)battleTabListViewManager,
                                                                       1,
                                                                       0);
  if ( !this->fields.mainInfo )
    goto LABEL_42;
  v23 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_42;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_42;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v23,
                                 ConvertOverwriteDispImageLimitCount,
                                 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v23,
                                                                       ServantImageLimitSealAfter,
                                                                       0);
  if ( !battleTabListViewManager )
LABEL_42:
    sub_1C71608(battleTabListViewManager, v7);
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v27 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_64067044((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0) )
  {
    if ( !*(_BYTE *)(v5 + 24) )
    {
LABEL_32:
      ServantStatusDialog__EndChangeBattleResource(this, v28);
      return;
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__,
      0);
    if ( charaGraphListViewManager )
    {
      charaGraphListViewManager->fields.callbackFunc2 = v30;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&charaGraphListViewManager->fields.callbackFunc2,
        (int32_t)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      ServantStatusCharaGraphListViewManager__SetMode_34600188(charaGraphListViewManager, 3, v37);
      goto LABEL_32;
    }
    goto LABEL_42;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0) )
  {
    v44 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v44, 0);
  }
  *p_battleLoadAsset = v27;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleLoadAsset, (int32_t)v27, v38, v39, v40, v41, v42, v43);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0);
  v45 = *p_battleLoadAsset;
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v46,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v45, v46, 1, 0) )
    ServantStatusDialog__BattleAssetLoadError(this, v47);
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
  if ( (byte_4CC2F47 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&StringLiteral_17674/*"button_lock_reg"*/);
    sub_1C713B0(&StringLiteral_17678/*"button_push_reg"*/);
    sub_1C713B0(&StringLiteral_17679/*"button_push_unreg"*/);
    sub_1C713B0(&StringLiteral_17675/*"button_lock_unreg"*/);
    sub_1C713B0(&StringLiteral_17669/*"button_choice_unreg"*/);
    sub_1C713B0(&StringLiteral_20265/*"icon_equip"*/);
    sub_1C713B0(&StringLiteral_17668/*"button_choice_reg"*/);
    sub_1C713B0(&StringLiteral_20266/*"icon_equip_cc"*/);
    sub_1C713B0(&StringLiteral_17670/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_17671/*"button_favorite_unreg"*/);
    byte_4CC2F47 = 1;
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
      v13 = (System_String_o **)(v12->fields.isLock ? &StringLiteral_17674/*"button_lock_reg"*/ : &StringLiteral_17675/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v13, 0);
      v14 = v2->fields.mainInfo;
      if ( !v14 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v15 = (System_String_o **)(v14->fields.isChoice ? &StringLiteral_17668/*"button_choice_reg"*/ : &StringLiteral_17669/*"button_choice_unreg"*/);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v33, 0);
      if ( !favoriteSprite )
        goto LABEL_83;
      v21 = (System_String_o **)&StringLiteral_17670/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v21 = (System_String_o **)&StringLiteral_17671/*"button_favorite_unreg"*/;
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
          v24 = &StringLiteral_17679/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v32, 0);
          if ( !pushSprite )
            goto LABEL_83;
          v24 = &StringLiteral_17678/*"button_push_reg"*/;
          v30 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v30 )
            v24 = &StringLiteral_17679/*"button_push_unreg"*/;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20265/*"icon_equip"*/, 0);
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
  v7 = (System_String_o **)(v6->fields.isLock ? &StringLiteral_17674/*"button_lock_reg"*/ : &StringLiteral_17675/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v7, 0), (v8 = v2->fields.mainInfo) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0
    || (v8->fields.isChoice
      ? (v9 = (System_String_o **)&StringLiteral_17668/*"button_choice_reg"*/)
      : (v9 = (System_String_o **)&StringLiteral_17669/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v9, 0),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_83:
    sub_1C71608(this, method);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20266/*"icon_equip_cc"*/, 0);
}


void ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4CC2F32 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2F32 = 1;
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
        ShiningIconComponent__Set_41298532((ShiningIconComponent_o *)v7, 0, 0);
        return;
      }
LABEL_19:
      sub_1C71608(v7, v6);
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

  if ( (byte_4CC2F45 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&RandomLimitCountManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1C713B0(&StringLiteral_17584/*"btn_txt_detail_off"*/);
    sub_1C713B0(&StringLiteral_17567/*"btn_txt_battlecharacter_on"*/);
    sub_1C713B0(&StringLiteral_17632/*"btn_txt_status_on"*/);
    sub_1C713B0(&StringLiteral_17466/*"btn_bg_12"*/);
    sub_1C713B0(&StringLiteral_17631/*"btn_txt_status_off"*/);
    sub_1C713B0(&StringLiteral_17647/*"btn_txt_voice_on"*/);
    sub_1C713B0(&StringLiteral_17612/*"btn_txt_profile_on"*/);
    sub_1C713B0(&StringLiteral_17646/*"btn_txt_voice_off"*/);
    sub_1C713B0(&StringLiteral_17468/*"btn_bg_19"*/);
    sub_1C713B0(&StringLiteral_17585/*"btn_txt_detail_on"*/);
    sub_1C713B0(&StringLiteral_17611/*"btn_txt_profile_off"*/);
    sub_1C713B0(&StringLiteral_17566/*"btn_txt_battlecharacter_off"*/);
    byte_4CC2F45 = 1;
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
                v23 = (System_String_o **)&StringLiteral_17632/*"btn_txt_status_on"*/;
                if ( kind )
                  v23 = (System_String_o **)&StringLiteral_17631/*"btn_txt_status_off"*/;
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
                    v24 = (System_String_o **)(kind ? &StringLiteral_17466/*"btn_bg_12"*/ : &StringLiteral_17468/*"btn_bg_19"*/);
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
                                    (System_String_o *)StringLiteral_17611/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17466/*"btn_bg_12"*/,
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
                                                  v27 = (System_String_o **)&StringLiteral_17567/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v27 = (System_String_o **)&StringLiteral_17566/*"btn_txt_battlecharacter_off"*/;
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
                                                                               ? &StringLiteral_17468/*"btn_bg_19"*/
                                                                               : &StringLiteral_17466/*"btn_bg_12"*/);
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
                                                                      (System_String_o *)StringLiteral_17646/*"btn_txt_voice_off"*/,
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
      v32 = &StringLiteral_17585/*"btn_txt_detail_on"*/;
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
      v9 = (System_String_o **)&StringLiteral_17632/*"btn_txt_status_on"*/;
      if ( kind )
        v9 = (System_String_o **)&StringLiteral_17631/*"btn_txt_status_off"*/;
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
      v10 = (System_String_o **)(kind ? &StringLiteral_17466/*"btn_bg_12"*/ : &StringLiteral_17468/*"btn_bg_19"*/);
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
      v13 = &StringLiteral_17585/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v13 = &StringLiteral_17584/*"btn_txt_detail_off"*/;
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
      v14 = (System_String_o **)(kind == 1 ? &StringLiteral_17468/*"btn_bg_19"*/ : &StringLiteral_17466/*"btn_bg_12"*/);
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
      v19 = (System_String_o **)&StringLiteral_17632/*"btn_txt_status_on"*/;
      if ( kind )
        v19 = (System_String_o **)&StringLiteral_17631/*"btn_txt_status_off"*/;
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
      v20 = &StringLiteral_17468/*"btn_bg_19"*/;
      if ( kind )
        v20 = &StringLiteral_17466/*"btn_bg_12"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17584/*"btn_txt_detail_off"*/, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17466/*"btn_bg_12"*/, 0);
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
      v32 = &StringLiteral_17611/*"btn_txt_profile_off"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17468/*"btn_bg_19"*/, 0);
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
      v33 = (System_String_o **)&StringLiteral_17632/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17631/*"btn_txt_status_off"*/;
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
      v34 = (System_String_o **)(kind ? &StringLiteral_17466/*"btn_bg_12"*/ : &StringLiteral_17468/*"btn_bg_19"*/);
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
      v37 = (System_String_o **)&StringLiteral_17612/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v37 = (System_String_o **)&StringLiteral_17611/*"btn_txt_profile_off"*/;
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
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17468/*"btn_bg_19"*/ : &StringLiteral_17466/*"btn_bg_12"*/);
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
      v41 = (System_String_o **)&StringLiteral_17567/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v41 = (System_String_o **)&StringLiteral_17566/*"btn_txt_battlecharacter_off"*/;
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
      v42 = (System_String_o **)(kind == 2 ? &StringLiteral_17468/*"btn_bg_19"*/ : &StringLiteral_17466/*"btn_bg_12"*/);
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
          v46 = (System_String_o **)&StringLiteral_17647/*"btn_txt_voice_on"*/;
          if ( !v6 )
            v46 = (System_String_o **)&StringLiteral_17646/*"btn_txt_voice_off"*/;
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
              v47 = (System_String_o **)(v6 ? &StringLiteral_17468/*"btn_bg_19"*/ : &StringLiteral_17466/*"btn_bg_12"*/);
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
        sub_1C71608(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17646/*"btn_txt_voice_off"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17466/*"btn_bg_12"*/, 0);
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
        sub_1C71610(statusTabBase);
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
          ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)statusTabBase, 6, 0);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)statusTabBase, 4, 0);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v55 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v57 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v59 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
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
          v61 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
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
          if ( !byte_4CC2F8F )
          {
            sub_1C713B0(&RandomLimitCountManager_TypeInfo);
            byte_4CC2F8F = 1;
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
                                     (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
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
          v75 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4CC2F4A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_24848/*"wait"*/);
    byte_4CC2F4A = 1;
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
            (System_String_o *)StringLiteral_24848/*"wait"*/,
            0);
          return;
        }
LABEL_13:
        sub_1C71608(battleChrCamera, isVisible);
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
  if ( (byte_4CC2F23 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1C713B0(&StringLiteral_11966/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_4CC2F23 = 1;
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11966/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0) )
  {
LABEL_15:
    sub_1C71608(this, item);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *v17; // x22
  const MethodInfo *v18; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_4CC2F2F & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&RandomLimitCountManager_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F2F = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( System_String__Equals_64067044((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_34649392(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4CC2F8F )
    {
      sub_1C713B0(&RandomLimitCountManager_TypeInfo);
      byte_4CC2F8F = 1;
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
    sub_1C71608(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0) )
  {
    v17 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v17, 0);
  }
  *p_battleLoadAsset = v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.battleLoadAsset, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v18);
  battleLoadAsset = this->fields.battleLoadAsset;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v10 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v20, 1, 0) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v21);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_o *v25; // x22
  AssetLoader_LoadEndDataHandler_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4CC2F29 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
    byte_4CC2F29 = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass150_0___ctor((ServantStatusDialog___c__DisplayClass150_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
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
  v17 = (System_String_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_64067044(
                                              (System_String_o *)mainInfo,
                                              *p_cardLoadAsset,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_20:
    sub_1C71608(mainInfo, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0) )
  {
    v18 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v18, 0);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  *p_cardLoadAsset = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_cardLoadAsset, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  v25 = *p_cardLoadAsset;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass150_0__StartCommandCardLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0) )
  {
    *p_cardLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_cardLoadAsset, 0, v27, v28, v29, v30, v31, v32);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *statusLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  AssetData_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4CC2F27 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndStatusLoad__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC2F27 = 1;
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.statusLoadAsset,
    (int32_t)StatusImageFolderName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1C71608(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  statusLoadAsset = this->fields.statusLoadAsset;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v14, 1, 0) )
  {
    this->fields.statusLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.statusLoadAsset, 0, v15, v16, v17, v18, v19, v20);
    ServantStatusDialog__EndStatusLoad(this, v21, v22);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *v26; // x22
  AssetLoader_LoadEndDataHandler_o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CC2F2B & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__);
    sub_1C713B0(&ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
    byte_4CC2F2B = 1;
  }
  v5 = sub_1C715FC(ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass152_0___ctor((ServantStatusDialog___c__DisplayClass152_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
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
  v18 = StatusImageFolderName;
  StatusImageFolderName = (System_String_o *)System_String__Equals_64067044(
                                               StatusImageFolderName,
                                               *p_transformedStatusLoadAsset,
                                               0);
  if ( ((unsigned __int8)StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_21:
    sub_1C71608(StatusImageFolderName, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0) )
  {
    v19 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0);
  *p_transformedStatusLoadAsset = v18;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_transformedStatusLoadAsset, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  v26 = *p_transformedStatusLoadAsset;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass152_0__StartTransformedStatusLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v26, v27, 1, 0) )
  {
    *p_transformedStatusLoadAsset = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_transformedStatusLoadAsset, 0, v28, v29, v30, v31, v32, v33);
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
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v9; // x9
  int32_t v10; // w22
  BalanceConfig_c *v11; // x8
  ServantLimitAddMaster_o *v12; // x23
  struct ServantStatusListViewItem_o *v13; // x9
  int32_t v14; // w4
  const MethodInfo *v15; // x5
  struct PartyListViewItem_o *v16; // x8
  ServantStatusListViewItem_o *v17; // x23
  unsigned __int64 v18; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  ServantStatusListViewItem_o *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v32; // w4
  const MethodInfo *v33; // x5
  System_Collections_Generic_List_object__o *v34; // x24
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  ServantStatusListViewItem_o *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w4
  const MethodInfo *v47; // x5
  System_Collections_Generic_List_object__o *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  ServantStatusListViewItem_o *v58; // x1
  Il2CppClass **v59; // x0
  int32_t v60; // w4
  const MethodInfo *v61; // x5
  BalanceConfig_c *v62; // x8
  int v63; // w24
  System_Collections_Generic_List_object__o *v64; // x24
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  ServantStatusListViewItem_o *v74; // x1
  Il2CppClass **v75; // x0
  int32_t v76; // w4
  const MethodInfo *v77; // x5
  BalanceConfig_c *v78; // x8
  int v79; // w24
  System_Collections_Generic_List_object__o *v80; // x24
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  ServantStatusListViewItem_o *v90; // x1
  Il2CppClass **v91; // x0
  int32_t v92; // w4
  const MethodInfo *v93; // x5
  System_Collections_Generic_List_object__o *v94; // x24
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  ServantStatusListViewItem_o *v104; // x1
  Il2CppClass **v105; // x0
  int32_t v106; // w4
  const MethodInfo *v107; // x5
  System_Collections_Generic_List_object__o *v108; // x24
  int32_t ServantIdMashu3; // w2
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  ServantStatusListViewItem_o *v119; // x1
  Il2CppClass **v120; // x0
  System_Collections_Generic_List_object__o *v121; // x24
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  ServantStatusListViewItem_o *v131; // x1
  Il2CppClass **v132; // x0
  int32_t v133; // w4
  const MethodInfo *v134; // x5
  System_Collections_Generic_List_object__o *v135; // x24
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  ServantStatusListViewItem_o *v145; // x1
  Il2CppClass **v146; // x0
  NetworkManager_c *v147; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t userIdNumber; // x24
  int32_t MashuTdGradeUpQuestId; // w26
  int32_t MashuTdGradeUpQuestPhase; // w25
  System_Collections_Generic_List_object__o *v152; // x24
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  ServantStatusListViewItem_o *v162; // x1
  Il2CppClass **v163; // x0
  int32_t v164; // w4
  const MethodInfo *v165; // x5
  System_Collections_Generic_List_object__o *v166; // x24
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  ServantStatusListViewItem_o *v176; // x1
  Il2CppClass **v177; // x0
  ServantVoiceRelationEntity_array *v178; // x20
  int max_length; // w8
  unsigned int v180; // w25
  ServantVoiceRelationEntity_o *v181; // x26
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x22
  __int64 v183; // x23
  __int64 v184; // x24
  ServantStatusDialog_o *v185; // x0
  int32_t v186; // w4
  const MethodInfo *v187; // x5
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  struct System_Object_array *items; // x8
  _QWORD *v195; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v197; // x1
  Il2CppClass **v198; // x0
  System_Collections_Generic_List_object__o *v199; // x22
  ServantStatusDialog_o *v200; // x0
  int32_t v201; // w4
  const MethodInfo *v202; // x5
  int32_t v203; // w2
  int32_t v204; // w3
  System_String_o *v205; // x4
  int32_t v206; // w5
  int64_t v207; // x6
  System_String_o *v208; // x7
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  ServantStatusListViewItem_o *v212; // x1
  Il2CppClass **v213; // x0
  System_Collections_Generic_List_object__o *v214; // x22
  ServantStatusDialog_o *v215; // x0
  int32_t v216; // w4
  const MethodInfo *v217; // x5
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  ServantStatusListViewItem_o *v227; // x1
  Il2CppClass **v228; // x0
  struct System_Collections_Generic_List_string__o *v229; // x8
  const MethodInfo *v230; // x2
  NetworkManager_c *v231; // x0
  Il2CppObject *Item; // x0
  int32_t v233; // w2
  int32_t v234; // w3
  System_String_o *v235; // x4
  int32_t v236; // w5
  int64_t v237; // x6
  System_String_o *v238; // x7
  System_String_o *loadVoiceData; // x20
  System_Action_o *v240; // x21
  ServantStatusListViewItem_o *v242; // [xsp+8h] [xbp-78h]
  unsigned __int64 v243; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16

  if ( (byte_4CC2F3B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC2F3B = 1;
  }
  relationList = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC27E9 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC27E9 = 1;
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
         (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
    (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v7 )
    goto LABEL_166;
  partyItem = v7->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v9 = 0;
    v242 = v7;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)partyItem )
        goto LABEL_167;
      v10 = *((_DWORD *)&v7->fields.memberItem + v9);
      v243 = v9;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v11 = BalanceConfig_TypeInfo;
      v12 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      v13 = this->fields.mainInfo;
      if ( !v13 )
        goto LABEL_166;
      if ( !v12 )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v12,
                                                  v10,
                                                  v11->static_fields->ServantLimitMax,
                                                  v13->fields.costumeIds,
                                                  0);
      if ( !mainInfo )
        goto LABEL_166;
      v16 = mainInfo->fields.partyItem;
      v17 = mainInfo;
      if ( (int)v16 >= 1 )
        break;
LABEL_123:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_166;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v10, 0);
      v178 = relationList;
      if ( !relationList )
        goto LABEL_166;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v180 = 0;
        while ( v180 < max_length )
        {
          v181 = v178->m_Items[v180];
          if ( !v181 )
            goto LABEL_166;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v184 = *(_QWORD *)&v181->fields.relationSvtId.fields.currentCryptoKey;
          v183 = *(_QWORD *)&v181->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v245.fields.currentCryptoKey = v184;
          *(_QWORD *)&v245.fields.fakeValue = v183;
          v185 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v245, 0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v185,
                                                      0,
                                                      (int32_t)v185,
                                                      0,
                                                      v186,
                                                      v187);
          if ( !requestVoiceDataList )
            goto LABEL_166;
          items = requestVoiceDataList->fields._items;
          v195 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_166;
          size = requestVoiceDataList->fields._size;
          v197 = mainInfo;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
          }
          else
          {
            v198 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v198[4] = (Il2CppClass *)v197;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v198 + 4), (int32_t)v197, v188, v189, v190, v191, v192, v193);
          }
          v199 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v200 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                            v181->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v200,
                                                      2,
                                                      (int32_t)v200,
                                                      0,
                                                      v201,
                                                      v202);
          if ( !v199 )
            goto LABEL_166;
          v209 = v199->fields._items;
          v210 = Method_System_Collections_Generic_List_string__Add__;
          ++v199->fields._version;
          if ( !v209 )
            goto LABEL_166;
          v211 = v199->fields._size;
          v212 = mainInfo;
          if ( (unsigned int)v211 >= LODWORD(v209->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v199,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
          }
          else
          {
            v213 = &v209->obj.klass + v211;
            v199->fields._size = v211 + 1;
            v213[4] = (Il2CppClass *)v212;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v213 + 4), (int32_t)v212, v203, v204, v205, v206, v207, v208);
          }
          v214 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v215 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                            v181->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v215,
                                                      1,
                                                      (int32_t)v215,
                                                      0,
                                                      v216,
                                                      v217);
          if ( !v214 )
            goto LABEL_166;
          v224 = v214->fields._items;
          v225 = Method_System_Collections_Generic_List_string__Add__;
          ++v214->fields._version;
          if ( !v224 )
            goto LABEL_166;
          v226 = v214->fields._size;
          v227 = mainInfo;
          if ( (unsigned int)v226 >= LODWORD(v224->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v214,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
          }
          else
          {
            v228 = &v224->obj.klass + v226;
            v214->fields._size = v226 + 1;
            v228[4] = (Il2CppClass *)v227;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v228 + 4), (int32_t)v227, v218, v219, v220, v221, v222, v223);
          }
          max_length = v178->max_length;
          if ( (int)++v180 >= max_length )
            goto LABEL_148;
        }
LABEL_167:
        sub_1C71610(mainInfo);
      }
LABEL_148:
      v7 = v242;
      LODWORD(partyItem) = v242->fields.partyItem;
      v9 = v243 + 1;
      if ( (__int64)(v243 + 1) >= (int)partyItem )
        goto LABEL_149;
    }
    v18 = 0;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_167;
      v20 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v14,
                                                  v15);
      if ( !v20 )
        goto LABEL_166;
      v27 = v20->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( !v27 )
        goto LABEL_166;
      v29 = v20->fields._size;
      v30 = mainInfo;
      if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &v27->obj.klass + v29;
        v20->fields._size = v29 + 1;
        v31[4] = (Il2CppClass *)v30;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
      }
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_167;
      v34 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v32,
                                                  v33);
      if ( !v34 )
        goto LABEL_166;
      v41 = v34->fields._items;
      v42 = Method_System_Collections_Generic_List_string__Add__;
      ++v34->fields._version;
      if ( !v41 )
        goto LABEL_166;
      v43 = v34->fields._size;
      v44 = mainInfo;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v41->obj.klass + v43;
        v34->fields._size = v43 + 1;
        v45[4] = (Il2CppClass *)v44;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
      }
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_167;
      v48 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v46,
                                                  v47);
      if ( !v48 )
        goto LABEL_166;
      v55 = v48->fields._items;
      v56 = Method_System_Collections_Generic_List_string__Add__;
      ++v48->fields._version;
      if ( !v55 )
        goto LABEL_166;
      v57 = v48->fields._size;
      v58 = mainInfo;
      if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &v55->obj.klass + v57;
        v48->fields._size = v57 + 1;
        v59[4] = (Il2CppClass *)v58;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v59 + 4), (int32_t)v58, v49, v50, v51, v52, v53, v54);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v62 = BalanceConfig_TypeInfo;
      v63 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 == v62->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_166;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v78 = BalanceConfig_TypeInfo;
      v79 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v78 = BalanceConfig_TypeInfo;
      }
      if ( v79 == v78->static_fields->ServantIdMashu1 )
      {
        v80 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v78->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v78);
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_167;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v14,
                                                    v15);
        if ( !v80 )
          goto LABEL_166;
        v87 = v80->fields._items;
        v88 = Method_System_Collections_Generic_List_string__Add__;
        ++v80->fields._version;
        if ( !v87 )
          goto LABEL_166;
        v89 = v80->fields._size;
        v90 = mainInfo;
        if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v80,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v87->obj.klass + v89;
          v80->fields._size = v89 + 1;
          v91[4] = (Il2CppClass *)v90;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v91 + 4), (int32_t)v90, v81, v82, v83, v84, v85, v86);
        }
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_167;
        v121 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v92,
                                                    v93);
        if ( !v121 )
          goto LABEL_166;
        v128 = v121->fields._items;
        v129 = Method_System_Collections_Generic_List_string__Add__;
        ++v121->fields._version;
        if ( !v128 )
          goto LABEL_166;
        v130 = v121->fields._size;
        v131 = mainInfo;
        if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v121,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = &v128->obj.klass + v130;
          v121->fields._size = v130 + 1;
          v132[4] = (Il2CppClass *)v131;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v132 + 4), (int32_t)v131, v122, v123, v124, v125, v126, v127);
        }
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_167;
        v135 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v133,
                                                    v134);
        if ( !v135 )
          goto LABEL_166;
        v142 = v135->fields._items;
        v143 = Method_System_Collections_Generic_List_string__Add__;
        ++v135->fields._version;
        if ( !v142 )
          goto LABEL_166;
        v144 = v135->fields._size;
        v145 = mainInfo;
        if ( (unsigned int)v144 >= LODWORD(v142->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v135,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
        }
        else
        {
          v146 = &v142->obj.klass + v144;
          v135->fields._size = v144 + 1;
          v146[4] = (Il2CppClass *)v145;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v146 + 4), (int32_t)v145, v136, v137, v138, v139, v140, v141);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          byte_4CC112A = 1;
        }
        v147 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v147 = NetworkManager_TypeInfo;
        }
        static_fields = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v147->static_fields->userIdNumber;
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
          v152 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_167;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v18),
                                                      v14,
                                                      v15);
          if ( !v152 )
            goto LABEL_166;
          v159 = v152->fields._items;
          v160 = Method_System_Collections_Generic_List_string__Add__;
          ++v152->fields._version;
          if ( !v159 )
            goto LABEL_166;
          v161 = v152->fields._size;
          v162 = mainInfo;
          if ( (unsigned int)v161 >= LODWORD(v159->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v152,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
          }
          else
          {
            v163 = &v159->obj.klass + v161;
            v152->fields._size = v161 + 1;
            v163[4] = (Il2CppClass *)v162;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v163 + 4), (int32_t)v162, v153, v154, v155, v156, v157, v158);
          }
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_167;
          v166 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v18),
                                                      v164,
                                                      v165);
          if ( !v166 )
            goto LABEL_166;
          v173 = v166->fields._items;
          v174 = Method_System_Collections_Generic_List_string__Add__;
          ++v166->fields._version;
          if ( !v173 )
            goto LABEL_166;
          v175 = v166->fields._size;
          v176 = mainInfo;
          if ( (unsigned int)v175 >= LODWORD(v173->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v166,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
          }
          else
          {
            v177 = &v173->obj.klass + v175;
            v166->fields._size = v175 + 1;
            v177[4] = (Il2CppClass *)v176;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v177 + 4), (int32_t)v176, v167, v168, v169, v170, v171, v172);
          }
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_167;
          v108 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_112:
      LODWORD(v16) = v17->fields.partyItem;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_123;
    }
    v64 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v62->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v62);
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_167;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v18),
                                                v60,
                                                v61);
    if ( !v64 )
      goto LABEL_166;
    v71 = v64->fields._items;
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++v64->fields._version;
    if ( !v71 )
      goto LABEL_166;
    v73 = v64->fields._size;
    v74 = mainInfo;
    if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v64,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v71->obj.klass + v73;
      v64->fields._size = v73 + 1;
      v75[4] = (Il2CppClass *)v74;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)v74, v65, v66, v67, v68, v69, v70);
    }
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_167;
    v94 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v18),
                                                v76,
                                                v77);
    if ( !v94 )
      goto LABEL_166;
    v101 = v94->fields._items;
    v102 = Method_System_Collections_Generic_List_string__Add__;
    ++v94->fields._version;
    if ( !v101 )
      goto LABEL_166;
    v103 = v94->fields._size;
    v104 = mainInfo;
    if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v94,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
    }
    else
    {
      v105 = &v101->obj.klass + v103;
      v94->fields._size = v103 + 1;
      v105[4] = (Il2CppClass *)v104;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v105 + 4), (int32_t)v104, v95, v96, v97, v98, v99, v100);
    }
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_167;
    v108 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v18),
                                                v106,
                                                v107);
    if ( !v108 )
      goto LABEL_166;
    v116 = v108->fields._items;
    v117 = Method_System_Collections_Generic_List_string__Add__;
    ++v108->fields._version;
    if ( !v116 )
      goto LABEL_166;
    v118 = v108->fields._size;
    v119 = mainInfo;
    if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v108,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
    }
    else
    {
      v120 = &v116->obj.klass + v118;
      v108->fields._size = v118 + 1;
      v120[4] = (Il2CppClass *)v119;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v120 + 4), (int32_t)v119, v110, v111, v112, v113, v114, v115);
    }
    goto LABEL_112;
  }
LABEL_149:
  v229 = this->fields.requestVoiceDataList;
  if ( !v229 )
LABEL_166:
    sub_1C71608(mainInfo, method);
  if ( v229->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_166;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  ServantStatusDialog__SetTabKind(this, 3, v230);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC27E9 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC27E9 = 1;
  }
  v231 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v231 = NetworkManager_TypeInfo;
  }
  if ( v231->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData,
    (int32_t)Item,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_166;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v240 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v240, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v4 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v240, 1, 0);
  return v4;
}


void ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v17; // x21
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CC2F3D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_1C713B0(&StringLiteral_6029/*"EndWaitVoice"*/);
    byte_4CC2F3D = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_37825736(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_71709108(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6029/*"EndWaitVoice"*/,
      0);
    this->fields.voicePlayList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList, 0, v4, v5, v6, v7, v8, v9);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName, 0, v10, v11, v12, v13, v14, v15);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0);
    SePlayer__RemoveCallback(voicePlayer, v17, 0);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0);
      p_voicePlayer->klass = 0;
      sub_1C71354(p_voicePlayer, 0, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_13:
    sub_1C71608(voiceTabListViewManager, method);
  }
}


void ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_4CC2F84 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1C713B0(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2F84 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CvMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_3408E80 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0 )
    {
      sub_1C71608(Instance, v6);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ServantStatusFlavorTextListViewManager_o *v14; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v15; // x21
  struct ServantStatusFlavorTextListViewManager_o *v16; // x8

  v4 = this;
  if ( (byte_4CC2F83 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_1C713B0(&Method_ServantStatusDialog__UpdateProfileList_b__250_0__);
    byte_4CC2F83 = 1;
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
    v7 = (System_Action_object__o *)sub_1C715FC(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__250_0__, 0);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v7;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int32_t)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( !setMode )
        return;
      v14 = v4->fields.profileTabListViewManager;
      v15 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0);
      if ( v14 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v14, 1, v15, 0);
        v16 = v4->fields.profileTabListViewManager;
        if ( v16 )
        {
          v16->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1C71608(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( LODWORD(tabInitList->max_length) <= 1 )
    sub_1C71610(this);
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
    sub_1C71608(this, *(_QWORD *)&imageLimitCount);
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
    sub_1C71608(this, imageLimitCount);
  }
}


void ServantStatusDialog___EndLoadInit_b__146_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1C71608(this, method);
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

  if ( (byte_4CC2F8B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_AssetData__TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog__LoadTransformedResource_b__206_1__);
    byte_4CC2F8B = 1;
  }
  v4 = (System_Action_object__o *)sub_1C715FC(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4CC2F8C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_4CC2F8C = 1;
  }
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void ServantStatusDialog___OnConfirmServantQuest_b__240_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  PartyOrganizationUtility_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CC2F8D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC2F8D = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v5, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v6, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
    sub_1C71608(v6, v7);
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


void ServantStatusDialog___UpdateProfileList_b__250_0(
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
  System_Int32_array *v14; // x23
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CC2F8E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2F8E = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
          *(_QWORD *)&v16.fields.currentCryptoKey = v12;
          *(_QWORD *)&v16.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1C71458(int___TypeInfo, 1);
          if ( entity )
          {
            v14 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1C71458(int___TypeInfo, 1);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1C71610(Master_object);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v10 )
              {
                ServantCommentMaster__SetOpen_42923620(v10, v13, v14, (System_Int32_array *)Master_object, 0);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C71608(Master_object, v6);
  }
}


bool ServantStatusDialog__get_IsViewCharaGraph(const MethodInfo *method)
{
  ServantStatusDialog_c *v1; // x0

  if ( (byte_4CC2F01 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    byte_4CC2F01 = 1;
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

  if ( (byte_4CC2F02 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog_TypeInfo);
    byte_4CC2F02 = 1;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA24AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA2464;
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
  if ( (byte_4CC36E9 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC36E9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA2628;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA25D0;
}


System_IAsyncResult_o *ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  bool v11[4]; // [xsp+18h] [xbp-38h] BYREF
  bool v12[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_4CC36EC & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC36EC = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA2520;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA24C8;
}


System_IAsyncResult_o *ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = isModify;
  v11 = questId;
  if ( (byte_4CC36EA & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    byte_4CC36EA = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA25A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA2544;
}


System_IAsyncResult_o *ServantStatusDialog_ResultDelegate__BeginInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  bool v14[4]; // [xsp+38h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  v13 = questId;
  if ( (byte_4CC36EB & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    byte_4CC36EB = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4CC36F8 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__207_o *)sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CC36F8 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C71608(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__207_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusDialog__LoadAsset_d__139_o *v8; // x19
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct ServantStatusDialog___c__DisplayClass139_0_o *_8__1; // x21
  System_Action_o *v17; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v18; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v19; // x21
  System_Action_o *v20; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v21; // x21
  System_Action_o *v22; // x20
  struct ServantStatusDialog___c__DisplayClass139_0_o *v23; // x8
  struct System_Action_o *callback; // x8
  bool result; // w0
  GrandQuestFolderBoardItem_o *v26; // x19
  int v27; // w8
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_4CC36F9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__);
    this = (ServantStatusDialog__LoadAsset_d__139_o *)sub_1C713B0(&ServantStatusDialog___c__DisplayClass139_0_TypeInfo);
    byte_4CC36F9 = 1;
  }
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v9 = (Il2CppObject *)sub_1C715FC(ServantStatusDialog___c__DisplayClass139_0_TypeInfo);
      System_Object___ctor(v9, 0);
      v8->fields.__8__1 = (struct ServantStatusDialog___c__DisplayClass139_0_o *)v9;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v9, v10, v11, v12, v13, v14, v15);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_33;
      _8__1->fields.isUISkinLoaded = 0;
      v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)_8__1,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v17, 2, 1, 0);
LABEL_9:
      v18 = v8->fields.__8__1;
      if ( !v18 )
        goto LABEL_33;
      if ( !v18->fields.isUISkinLoaded )
      {
        v8->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      this = (ServantStatusDialog__LoadAsset_d__139_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_33;
      this = (ServantStatusDialog__LoadAsset_d__139_o *)AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 1, 0);
      v18->fields.isTerminalUISkinLoaded = (unsigned __int8)this & 1;
      v19 = v8->fields.__8__1;
      if ( !v19 )
        goto LABEL_33;
      if ( !v19->fields.isTerminalUISkinLoaded )
      {
        v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          v20,
          (Il2CppObject *)v19,
          Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__1__,
          0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadUISkin(v20, 1, 1, 0);
      }
LABEL_18:
      v21 = v8->fields.__8__1;
      if ( !v21 )
        goto LABEL_33;
      if ( !v21->fields.isTerminalUISkinLoaded )
      {
        v8->fields.__2__current = 0;
        v26 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(v26, 0, v2, v3, v4, v5, v6, v7);
        v27 = 2;
        goto LABEL_31;
      }
      v21->fields.isEventUIAtlasLoaded = 0;
      v22 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v21,
        Method_ServantStatusDialog___c__DisplayClass139_0__LoadAsset_b__2__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v22, 1, 0);
LABEL_24:
      v23 = v8->fields.__8__1;
      if ( !v23 )
LABEL_33:
        sub_1C71608(this, method);
      if ( !v23->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v26 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(v26, 0, v2, v3, v4, v5, v6, v7);
        v27 = 3;
LABEL_31:
        LODWORD(v26[-1].fields._ClosedMessage_k__BackingField) = v27;
        return 1;
      }
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_33;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_9;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 3:
      v8->fields.__1__state = -1;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ServantStatusDialog__LoadAsset_d__139_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC36ED & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusDialog___c_TypeInfo);
    byte_4CC36ED = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantStatusDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusDialog___c_TypeInfo->static_fields->__9 = (struct ServantStatusDialog___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantStatusDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusDialog___c___ctor(ServantStatusDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c___EnableSpecialCostume_b__255_0(
        ServantStatusDialog___c_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4CC36EE & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC36EE = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusDialog___c__DisplayClass140_0_o *v9; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  struct System_Action_o *callback; // x8

  v9 = this;
  if ( (byte_4CC36EF & 1) == 0 )
  {
    this = (ServantStatusDialog___c__DisplayClass140_0_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC36EF = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.cashedBattleCharaChangeConfirmAssetData = assetData,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.cashedBattleCharaChangeConfirmAssetData,
          (int32_t)assetData,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = v9->fields.callback) == 0)
    || (((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (ServantStatusDialog___c__DisplayClass140_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C71608(this, assetData);
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
    sub_1C71608(this, data);
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
    sub_1C71608(this, data);
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

  if ( (byte_4CC36F2 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC36F2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(_4__this, 0), (v4 = this->fields.__4__this) == 0) )
  {
    sub_1C71608(_4__this, method);
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
    sub_1C71608(this, isDecide);
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
    sub_1C71608(this, isDecide);
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

  if ( (byte_4CC36F1 & 1) == 0 )
  {
    sub_1C713B0(&BattleCharaChangeConfirmListViewItem_TypeInfo);
    sub_1C713B0(&BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__);
    byte_4CC36F1 = 1;
  }
  nowDispLimitCount = this->fields.nowDispLimitCount;
  nowTdInfo = this->fields.nowTdInfo;
  nowSkillInfoList = this->fields.nowSkillInfoList;
  nowStatus = this->fields.nowStatus;
  nowClassSkill = this->fields.nowClassSkill;
  v8 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1C715FC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
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
  v14 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1C715FC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
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
  v15 = (BattleCharaChangeConfirmListViewItem_o *)sub_1C715FC(BattleCharaChangeConfirmListViewItem_TypeInfo);
  BattleCharaChangeConfirmListViewItem___ctor(v15, (int32_t)nextTdInfo, (int32_t)nextSkillInfoList, v8, v14, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (battleCharaChangeConfirmDialog = _4__this->fields.battleCharaChangeConfirmDialog,
        v20 = (BattleCharaChangeConfirmDialog_ClickDelegate_o *)sub_1C715FC(BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo),
        BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__,
          0),
        !battleCharaChangeConfirmDialog) )
  {
    sub_1C71608(v16, v17);
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
  if ( (byte_4CC36F0 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass163_0_o *)sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__);
    byte_4CC36F0 = 1;
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
  v11 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1C715FC(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__,
    0);
  if ( !servantStatusBattleConfirmDialog )
LABEL_6:
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_34600188((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CC36F3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass165_0_o *)sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__);
    byte_4CC36F3 = 1;
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
      _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__,
        0);
      v4->fields.__9__2 = _9__2;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
    }
    if ( !charaGraphListViewManager )
LABEL_11:
      sub_1C71608(this, data);
    ServantStatusCharaGraphListViewManager__SetMode_34600292(charaGraphListViewManager, 3, _9__2, 0);
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
    sub_1C71608(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_34600188((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass232_0___ctor(
        ServantStatusDialog___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass232_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass232_0_o *this,
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC36F4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C713B0(&Method_ServantStatusDialog___c__DisplayClass232_0__OnClickTdSpeed_b__1__);
    byte_4CC36F4 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0);
      v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
        v8 = sub_1C47444(v7);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1C47444(v7);
      _4__this = **(struct ServantStatusDialog_o ***)(v9 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
        return;
      }
    }
LABEL_19:
    sub_1C71608(_4__this, isDecide);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C47444(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1C47444(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass232_0__OnClickTdSpeed_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_31440904(klass, _9__1, 0);
}


void ServantStatusDialog___c__DisplayClass232_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass232_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_4CC36F5 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass232_0_o *)sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4CC36F5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !monitor) )
  {
    sub_1C71608(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v5, 0);
}


void ServantStatusDialog___c__DisplayClass237_0___ctor(
        ServantStatusDialog___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c__DisplayClass237_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass237_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass237_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass237_0_o *this,
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

  if ( (byte_4CC36F6 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4CC36F6 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(v3);
  mainInfo = **(CommonUI_o ***)(v7 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_31440904(mainInfo, 0, 0);
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
          LODWORD(mainInfo->fields.servantStatusDialogPath) = index;
        else
          HIDWORD(mainInfo->fields.servantStatusDialogPath) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.servantBonusFilterSelectMenuPrefab) = isRandomOn;
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
    sub_1C71608(mainInfo, isDecide);
  }
LABEL_21:
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v15->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  v16 = (Il2CppObject *)this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v16[12].monitor;
  v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v18, v16, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass237_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass237_0_o *this,
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

  if ( (byte_4CC36F7 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4CC36F7 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C47444(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C47444(v3);
  mainInfo = **(CommonUI_o ***)(v7 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_31440904(mainInfo, 0, 0);
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
          LODWORD(mainInfo->fields.servantStatusDialogPath) = index;
        else
          HIDWORD(mainInfo->fields.servantStatusDialogPath) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.servantBonusFilterSelectMenuPrefab) = isRandomOn;
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
    sub_1C71608(mainInfo, isDecide);
  }
LABEL_21:
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v15->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_37768252((ServantStatusListViewManager_o *)mainInfo, 10, 0);
  v16 = (Il2CppObject *)this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v16[12].monitor;
  v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C715FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v18, v16, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v18, 0);
}


void ServantStatusDialog___c__DisplayClass255_0___ctor(
        ServantStatusDialog___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantStatusDialog___c__DisplayClass255_0___EnableSpecialCostume_b__1(
        ServantStatusDialog___c__DisplayClass255_0_o *this,
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
    sub_1C71608(servantCostumeMaster, *(_QWORD *)&dispLimitCount);
  }
  return (System_String_o *)*((_QWORD *)servantCostumeMaster + 4);
}