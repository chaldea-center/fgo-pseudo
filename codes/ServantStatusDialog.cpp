void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4AB1EE9 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusDialog_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_436/*"#4C4C4C"*/, v4);
    byte_4AB1EE9 = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_436/*"#4C4C4C"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_436/*"#4C4C4C"*/,
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
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4AB1EE8 & 1) == 0 )
  {
    sub_1BAB41C(&bool___TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_24642/*"wait"*/, v7);
    byte_4AB1EE8 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v8 = (struct System_Boolean_array *)sub_1BAB4C4(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.tabInitList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.dictChangeSvtVoiceIdList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.requestVoiceDataList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voiceDataList, (int32_t)v17, v18, v19);
  v20 = StringLiteral_24642/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24642/*"wait"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.defaultAnimationName, v20, v21, v22);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4AB1E93 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB1E93 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, v6, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v8);
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
  int32_t v40; // w3
  struct UICamera_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct UICamera_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  char v47[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v48[4]; // [xsp+8h] [xbp-58h] BYREF
  char v49[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v50[4]; // [xsp+18h] [xbp-48h] BYREF
  char v51[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AB1E8A & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v2);
    sub_1BAB41C(&TouchEffectManager_TypeInfo, v3);
    sub_1BAB41C(&UICamera_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_9892/*"OnDragEnd"*/, v5);
    sub_1BAB41C(&StringLiteral_9914/*"OnHover"*/, v6);
    sub_1BAB41C(&StringLiteral_9945/*"OnPress"*/, v7);
    sub_1BAB41C(&StringLiteral_9955/*"OnScrollStop"*/, v8);
    byte_4AB1E8A = 1;
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
      UICamera__Notify(v12, (System_String_o *)StringLiteral_9892/*"OnDragEnd"*/, 0LL, 0LL);
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
      UICamera__Notify(v17, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v18, 0LL);
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
      UICamera__Notify(v23, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v24, 0LL);
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
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v29, 0LL);
    v48[0] = 1;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v48, v30, v31, v32);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v33, 0LL);
    v47[0] = 0;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v47, v34, v35, v36);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9955/*"OnScrollStop"*/, v37, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->current, 0, v39, v40);
  v41 = UICamera_TypeInfo->static_fields;
  v41->currentCamera = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v41->currentCamera, 0, v42, v43);
  v44 = UICamera_TypeInfo->static_fields;
  v44->currentTouch = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v44->currentTouch, 0, v45, v46);
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

  if ( (byte_4AB1EAC & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_4AB1EAC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             0LL)) == 0LL )
  {
    sub_1BAB678(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1BAB678(v7, v8);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v20.fields._current, 0LL);
    if ( !Item )
      sub_1BAB678(0LL, v11);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BAB678(DispLimitCount, v13);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, 0LL);
      if ( !v15 )
        sub_1BAB678(0LL, v16);
      index = (unsigned int)v15->fields.index;
      v18 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v18 )
        sub_1BAB678(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v18, index, 0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
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
  if ( (byte_4AB1E9C & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BAB41C(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v6);
    sub_1BAB41C(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_4AB1E9C = 1;
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
    sub_1BAB680(svtId, *(_QWORD *)&dispLv);
  v11 = (int)svtId;
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  v12 = dispSelectList->m_Items[confirmDispLv + 1];
  ServantStatusListViewItem__GetNpInfo_33674824(svtId, &tdInfo, v11, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetNpInfo_33674824(svtId, &info, v12, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_33673916(svtId, &skillInfoList, v11, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_33673916(svtId, &v29, v12, 0LL);
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
  v27 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1BAB668(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
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
    sub_1BAB678(svtId, *(_QWORD *)&dispLv);
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
  if ( (byte_4AB1ECB & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4AB1ECB = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(this, *(_QWORD *)&type);
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
  if ( (byte_4AB1EC8 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_AssetData__TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, v5);
    byte_4AB1EC8 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1BAB678(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v7 = (System_Action_object__o *)sub_1BAB668(System_Action_AssetData__TypeInfo);
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
  if ( (byte_4AB1ECF & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4AB1ECF = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4AB1ED2 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4AB1ED2 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(this, *(_QWORD *)&dispLv);
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

  if ( (byte_4AB1ECA & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4AB1ECA = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(mainInfo, *(_QWORD *)&type);
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
  int32_t v15; // w3
  System_String_o *statusLoadAsset; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *cardLoadAsset; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *battleLoadAsset; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v31; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v37; // w2
  int v38; // w9
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AB1EAA & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, callback);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_1BAB41C(&SoundManager_TypeInfo, v12);
    byte_4AB1EAA = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
    0LL);
  this->fields.mainInfo = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, 0, v14, v15);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v17, v18);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.cardLoadAsset, 0, v20, v21);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, 0, v23, v24);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.transformedStatusLoadAsset, 0, v27, v28);
  }
  ServantStatusDialog__StopVoice(this, v25);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v31 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v31;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0LL);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v33, v34);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v39.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1BAB678(statusTabListViewManager, callback);
  v37 = voiceDataList->fields._size;
  v38 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v38;
  if ( v37 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v37, 0LL);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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
  int32_t v8; // w3

  if ( (byte_4AB1EC1 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo, callback);
    byte_4AB1EC1 = 1;
  }
  v4 = sub_1BAB668(ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1BAB678(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4AB1E9A & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1E9A = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BAB678(0LL, v4);
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
    UnityEngine_Object__Destroy_69800620(v7, 0LL);
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
        sub_1BAB680(servantStatusBattleConfirmDialog, isDecide);
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
    sub_1BAB678(servantStatusBattleConfirmDialog, isDecide);
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

  if ( (byte_4AB1ECC & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB1ECC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1BAB678(Instance, v7);
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

  if ( (byte_4AB1E9F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB1E9F = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v8,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1BAB678(mainInfo, v6);
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

  if ( (byte_4AB1EB5 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4AB1EB5 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BAB678(v6, v7);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v5, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4AB1EB3 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4AB1EB3 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1BAB678(v6, v7);
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

  if ( (byte_4AB1E90 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_AssetData__TypeInfo, data);
    sub_1BAB41C(&Method_ServantStatusDialog_EndTransformedStatusLoad__, v4);
    byte_4AB1E90 = 1;
  }
  v5 = (System_Action_object__o *)sub_1BAB668(System_Action_AssetData__TypeInfo);
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
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v66; // x1
  struct ServantStatusListViewItem_o *v67; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v69; // x21
  UnityEngine_Object_o *v70; // x21
  UILabel_o *v71; // x21
  ServantLimitAddMaster_o *v72; // x21
  int32_t v73; // w8
  char v74; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v76; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v78; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v81; // x22
  struct ServantStatusListViewItem_o *v82; // x8
  int32_t v83; // w2
  int32_t limitCount; // w1
  int32_t v85; // w8
  struct ServantStatusListViewItem_o *v86; // x9
  struct UserServantEntity_o *v87; // x0
  int32_t v88; // w21
  int32_t v89; // w21
  ServantLimitImageMaster_o *v90; // x22
  struct ServantStatusListViewItem_o *v91; // x8
  int32_t v92; // w2
  int32_t v93; // w8
  struct ServantStatusListViewItem_o *v94; // x8
  struct UIRangeLabel_o *servantNameRangeLabel; // x22
  int32_t v96; // w1
  int32_t v97; // w2
  struct ServantLeaderInfo_o *v98; // x9
  System_String_o *v99; // x1
  ServantLimitImageMaster_o *v100; // x21
  struct ServantStatusListViewItem_o *v101; // x8
  struct UserServantCollectionEntity_o *v102; // x8
  struct UIRangeLabel_o *v103; // x21
  struct ServantEntity_o *v104; // x22
  __int64 v105; // x23
  __int64 v106; // x24
  int32_t v107; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v109; // x8
  UILabel_o *v110; // x21
  struct ServantStatusListViewItem_o *v111; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v113; // x8
  ServantLimitImageMaster_o *v114; // x21
  UILabel_o *v115; // x22
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

  if ( (byte_4AB1E88 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BAB41C(&OptionManager_TypeInfo, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v14);
    sub_1BAB41C(&StringLiteral_11861/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_1BAB41C(&StringLiteral_11860/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v16);
    sub_1BAB41C(&StringLiteral_11862/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v17);
    sub_1BAB41C(&StringLiteral_11863/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v18);
    sub_1BAB41C(&StringLiteral_11868/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v19);
    sub_1BAB41C(&StringLiteral_11867/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v20);
    sub_1BAB41C(&StringLiteral_4054/*"CancelInput"*/, v21);
    sub_1BAB41C(&StringLiteral_1/*""*/, v22);
    sub_1BAB41C(&StringLiteral_5978/*"EndLoadInit"*/, v23);
    byte_4AB1E88 = 1;
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
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_38072332(106, 0LL);
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
        v85 = this->fields.kind;
        switch ( v85 )
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
            v140 = v85 == 33;
            v46 = 11;
            v45 = v140;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v93 = this->fields.kind, v93 == 36) )
        {
          v45 = 0;
          goto LABEL_64;
        }
        v45 = 0;
        if ( v93 == 29 )
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
      sub_1BAB680(baseObject, method);
    v59[v58++] = 0;
  }
  while ( v58 != 4 );
  v60 = this->fields.mainInfo;
  if ( !v60 )
    goto LABEL_241;
  if ( v60->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v61 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v61 )
      goto LABEL_241;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v61, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1BAB3C0(
      (ServantStatusBattleListViewItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v63,
      v64);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Set_38614928((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v66);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v67 = this->fields.mainInfo;
  if ( !v67 )
    goto LABEL_241;
  commandCodeEntity = v67->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v72 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v72 )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v72,
                                               (int32_t)baseObject,
                                               0LL);
    v73 = this->fields.kind;
    v74 = (char)baseObject;
    if ( (v73 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v76 = this->fields.mainInfo;
        if ( !v76 )
          goto LABEL_241;
        servantLeaderInfo = v76->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_241;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v78 = this->fields.mainInfo;
        if ( !v78 )
          goto LABEL_241;
        if ( (v74 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v78->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_241;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_241;
          v81 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v81 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v81,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v82 = this->fields.mainInfo;
          if ( !v82 )
            goto LABEL_241;
          v83 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v82->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = -1;
        }
        else
        {
          v98 = v78->fields.servantLeaderInfo;
          if ( !v98 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v78->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = v98->fields.limitCount;
          v83 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v83, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_241;
      v99 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v99, 0LL, 1, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v109 = this->fields.mainInfo;
        if ( !v109 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)v109->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v110 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v111 = this->fields.mainInfo;
          if ( !v111 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v111->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        method = (const MethodInfo *)baseObject;
        if ( !v110 )
          goto LABEL_241;
        UILabel__set_text(v110, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_221;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v113 = this->fields.mainInfo;
      if ( !v113 )
        goto LABEL_241;
      if ( v113->fields.userSvtEntity )
      {
        v114 = (ServantLimitImageMaster_o *)baseObject;
        v115 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
        if ( !v115 )
          goto LABEL_241;
        UILabel__set_text(v115, (System_String_o *)baseObject, 0LL);
        v116 = this->fields.mainInfo;
        if ( !v116 )
          goto LABEL_241;
        userSvtEntity = v116->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_241;
        v119 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v118 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v142.fields.currentCryptoKey = v119;
        *(_QWORD *)&v142.fields.fakeValue = v118;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                   v142,
                                                   0LL);
        if ( !v114 )
          goto LABEL_241;
        v120 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v114,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_214;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v114,
                                                   (System_String_o *)StringLiteral_11863/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v120,
                                                   0LL);
        v121 = this->fields.battleExplanationLabel;
        if ( !v121 )
          goto LABEL_241;
        mText = v121->fields.mText;
        v123 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v114,
                                                        v120,
                                                        3,
                                                        0LL);
        v125 = System_String__Format(v123, LimitCountSealedServantName, 0LL);
        v126 = System_String__Concat_62048128(mText, v125, 0LL);
        v127 = v121;
      }
      else
      {
        userSvtCollectionEntity = v113->fields.userSvtCollectionEntity;
        v129 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v130 = &StringLiteral_11861/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v130 = &StringLiteral_11862/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v130, 0LL);
        if ( !v129 )
          goto LABEL_241;
        v126 = (System_String_o *)baseObject;
        v127 = v129;
      }
      UILabel__set_text(v127, v126, 0LL);
LABEL_214:
      v131 = this->fields.mainInfo;
      if ( !v131 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_241;
      IsTransformServant_k__BackingField = v131->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_241;
        v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v133, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_221;
    }
    if ( (unsigned int)(v73 - 6) <= 2 )
    {
      v94 = this->fields.mainInfo;
      if ( !v94 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)v94->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v74 & 1) != 0 )
      {
        v96 = -1;
        v97 = 0;
      }
      else
      {
        v97 = -1;
        v96 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v96, v97, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_241;
      v99 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v86 = this->fields.mainInfo;
    if ( !v86 )
      goto LABEL_241;
    v87 = v86->fields.userSvtEntity;
    if ( v87 )
    {
      if ( (v74 & 1) == 0 )
      {
        v103 = this->fields.servantNameRangeLabel;
        v104 = v86->fields.svtEntity;
        v106 = *(_QWORD *)&v87->fields.limitCount.fields.currentCryptoKey;
        v105 = *(_QWORD *)&v87->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v141.fields.currentCryptoKey = v106;
        *(_QWORD *)&v141.fields.fakeValue = v105;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                   v141,
                                                   0LL);
        if ( !v104 )
          goto LABEL_241;
        v107 = (int)baseObject;
        v92 = -1;
        baseObject = (UnityEngine_GameObject_o *)v104;
        goto LABEL_172;
      }
      v88 = UserServantEntity__getCardImageLimitCount(v87, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v89 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v88, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_241;
      v90 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v90 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v90,
                                                 (int32_t)baseObject,
                                                 v89,
                                                 0LL);
      v91 = this->fields.mainInfo;
      if ( !v91 )
        goto LABEL_241;
      v92 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v91->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    else
    {
      if ( (v74 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v86->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v103 = this->fields.servantNameRangeLabel;
        v107 = -1;
        v92 = -1;
        goto LABEL_172;
      }
      if ( v86->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_241;
        v100 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v101 = this->fields.mainInfo;
        if ( !v101 )
          goto LABEL_241;
        v102 = v101->fields.userSvtCollectionEntity;
        if ( !v102 )
          goto LABEL_241;
        if ( !v100 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v100,
                                                   (int32_t)baseObject,
                                                   v102->fields.maxLimitCount,
                                                   0LL);
        v86 = this->fields.mainInfo;
        if ( !v86 )
          goto LABEL_241;
        v92 = (int)baseObject;
      }
      else
      {
        v92 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v86->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    v103 = this->fields.servantNameRangeLabel;
    v107 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v107, v92, 0LL);
    if ( !v103 )
      goto LABEL_241;
    v99 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v103;
    goto LABEL_174;
  }
  v69 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v69 )
    goto LABEL_241;
  UIRangeLabel__Set(v69, (System_String_o *)baseObject, 0LL, 1, 0, 0LL);
  v70 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    v71 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11867/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v71 )
    {
      UILabel__set_text(v71, (System_String_o *)baseObject, 0LL);
      goto LABEL_221;
    }
LABEL_241:
    sub_1BAB678(baseObject, method);
  }
LABEL_221:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_241;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    0LL);
  ServantStatusDialog__SetMark(this, v134);
  v136 = this->fields.kind;
  if ( v136 > 28 )
  {
    v137 = v136 - 30;
    if ( v137 < 7 )
    {
      v45 = dword_BFC890[v137];
      goto LABEL_230;
    }
LABEL_228:
    v45 = 0;
    goto LABEL_230;
  }
  if ( v136 == 10 )
  {
    v45 = 1;
    goto LABEL_230;
  }
  if ( v136 != 11 )
  {
    v45 = 1;
    if ( v136 != 28 )
      goto LABEL_228;
  }
LABEL_230:
  ServantStatusDialog__SetTabKind(this, v45, v135);
  v139 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v139 - 10 < 0x13 || v139 <= 0x24 && ((1LL << v139) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5978/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v138);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4054/*"CancelInput"*/,
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

  if ( (byte_4AB1E96 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4AB1E96 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_32739948(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_32739948(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4AB1E97 & 1) == 0 )
  {
    sub_1BAB41C(&RandomLimitCountManager_TypeInfo, method);
    byte_4AB1E97 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4AB16DA )
  {
    sub_1BAB41C(&RandomLimitCountManager_TypeInfo, method);
    byte_4AB16DA = 1;
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
      sub_1BAB678(v4, method);
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

  if ( (byte_4AB1E9E & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4AB1E9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4AB1E8B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog__EndLoadInit_b__134_0__, v3);
    byte_4AB1E8B = 1;
  }
  v4 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1EC2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB1EC2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BAB678(Instance, v4);
  }
  if ( v8->max_length <= 3 )
LABEL_13:
    sub_1BAB680(Instance, v4);
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
  System_Action_o *v24; // x21

  if ( (byte_4AB1EA2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BAB41C(&Method_ServantStatusDialog_EndLoadVoice__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BAB41C(&SoundManager_TypeInfo, v11);
    byte_4AB1EA2 = 1;
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
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)loadVoiceData;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)loadVoiceData, v2, v3);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v18, v19);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v21, v22);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v23 = this->fields.loadVoiceData;
              v24 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
    sub_1BAB678(voiceDataList, loadVoiceData);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v3);
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

  if ( (byte_4AB1EA6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6005/*"EndWaitVoice"*/, method);
    byte_4AB1EA6 = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v10 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v10;
    max_length = voicePlayList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= max_length )
        sub_1BAB680(voiceTabListViewManager, v6);
      v12 = voicePlayList->m_Items[v10];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6005/*"EndWaitVoice"*/,
          v12->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1BAB678(voiceTabListViewManager, v6);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_35729648(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v13, v14);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_35729648(voiceTabListViewManager, 2, -1, 0LL);
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

  if ( (byte_4AB1EBE & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4AB1EBE = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v3);
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
  v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v12 )
LABEL_13:
    sub_1BAB678(statusTabListViewManager, isDecide);
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

  if ( (byte_4AB1E8E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_AssetData__TypeInfo, data);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCommandCardLoad__, v4);
    byte_4AB1E8E = 1;
  }
  v5 = (System_Action_object__o *)sub_1BAB668(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4AB1E92 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&StringLiteral_5978/*"EndLoadInit"*/, v6);
    byte_4AB1E92 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(Instance, v8);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5978/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
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
  if ( (byte_4AB1EA5 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog_EndPlayVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&SoundManager_TypeInfo, v6);
    byte_4AB1EA5 = 1;
  }
  voicePlayList = v4->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v4->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1BAB680(this, method);
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
        v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v16 = SoundManager__playVoice_39087920(voicePlayAssetName, id, DEFAULT_VOLUME, v15, 0LL);
        p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayer;
        v4->fields.voicePlayer = v16;
        goto LABEL_16;
      }
LABEL_17:
      sub_1BAB678(this, method);
    }
    if ( v4->fields.tabKind == 3 && (v4->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_35729648((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v4->fields.voiceListIndex = -1;
    }
    v4->fields.voicePlayList = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayList, 0, v2, v3);
    p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayAssetName;
    LODWORD(v16) = 0;
    v4->fields.voicePlayNum = 0;
    v4->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1BAB3C0(p_voicePlayer, (int32_t)v16, v17, v18);
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

  if ( (byte_4AB1EC9 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB1EC9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(Instance, v7);
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
  if ( (byte_4AB1EBB & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BAB41C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BAB41C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AB1EBB = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v43 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_59;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v41, 0LL);
  if ( !v17 )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_3163F90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v40, 0LL);
    if ( !v21 )
      goto LABEL_59;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_3163F90 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v46, 0LL);
  if ( !v24 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1BAB678(this, result);
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
        sub_1BAB680(this, result);
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
                                    (const MethodInfo_2EF7B10 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
  int32_t v5; // w2
  int32_t v6; // w3
  BattleFBXComponent_o *v7; // x0
  void *individualityCallbackFunc; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  if ( (byte_4AB1EBC & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1EBC = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v7 = this->fields.battleActor;
    if ( !v7 )
      sub_1BAB678(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc, 0, v5, v6);
    this->fields.resultCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v9, v10);
    this->fields.callbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v11, v12);
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
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v5, v6);
    this->fields.callbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v16, v17);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc, 0, v5, v6);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
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
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  struct UserCommandCodeEntity_o *v37; // x8
  __int128 v38; // q0
  CommandCodeSetStatusRequest_o *v39; // x19
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x20
  __int64 v42; // x21
  int32_t v43; // w24
  int v44; // w26
  BalanceConfig_c *v45; // x0
  char v46; // w20
  int32_t ManualSetDispLimitCount; // w0
  int32_t v48; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  char v50; // w22
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v52; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  char v54; // w29
  int32_t ManualSetIconLimitCount; // w0
  int32_t v56; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  char v58; // w29
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v60; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v61; // x8
  ServantStatusListViewItem_o *v62; // x8
  ServantStatusListViewItem_o *v63; // x8
  char v64; // w21
  char v65; // w22
  int v66; // w20
  char v67; // w26
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  __int64 v70; // x23
  bool isPush; // w27
  char v72; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  NetworkManager_ResultCallbackFunc_o *v74; // x20
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  CardFavoriteRequest_o *v77; // x19
  int32_t v78; // [xsp+58h] [xbp-118h]
  int32_t v79; // [xsp+5Ch] [xbp-114h]
  int32_t v80; // [xsp+60h] [xbp-110h]
  int32_t limitCountSupport; // [xsp+64h] [xbp-10Ch]
  int32_t randomSettingSupport; // [xsp+68h] [xbp-108h]
  int32_t randomSettingOwn; // [xsp+6Ch] [xbp-104h]
  int32_t battleVoice; // [xsp+70h] [xbp-100h]
  int32_t commonFlag; // [xsp+74h] [xbp-FCh]
  int32_t iconLimitCount; // [xsp+78h] [xbp-F8h]
  int32_t portraitLimitCount; // [xsp+7Ch] [xbp-F4h]
  char v88; // [xsp+80h] [xbp-F0h]
  char v89; // [xsp+84h] [xbp-ECh]
  char v90; // [xsp+88h] [xbp-E8h]
  char v91; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4AB1EBA & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_1BAB41C(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BAB41C(&OtherUserNewManager_TypeInfo, v8);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BAB41C(&ServantCommentManager_TypeInfo, v10);
    sub_1BAB41C(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_1BAB41C(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_1BAB41C(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_1BAB41C(&UserServantCollectionManager_TypeInfo, v14);
    sub_1BAB41C(&UserServantNewManager_TypeInfo, v15);
    byte_4AB1EBA = 1;
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
        v36 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v36,
                                  (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *p_mainInfo )
        {
          v37 = (*p_mainInfo)->fields.userCommandCodeEntity;
          if ( v37 )
          {
            v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
            v39 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v95.fields.fakeValue = v38;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v92 = v95;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v92, 0LL);
            if ( *p_mainInfo )
            {
              if ( v39 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v39,
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
                            0LL);
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
    v45 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    v44 = 1;
    v43 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v45->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_134:
    if ( !*p_mainInfo )
      goto LABEL_131;
    v40 = (*p_mainInfo)->fields.userSvtEntity;
    if ( !v40 )
      goto LABEL_131;
    v42 = *(_QWORD *)&v40->fields.imageLimitCount.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v40->fields.imageLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v96.fields.currentCryptoKey = v42;
    *(_QWORD *)&v96.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v96, 0LL);
    v44 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v46 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0LL);
    v48 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_131;
    v48 = BasicHelper__DecryptValue_41499840(v49[8], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v50 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0LL);
    v52 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v53 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v53 )
      goto LABEL_131;
    v52 = BasicHelper__DecryptValue_41499840(v53[9], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v54 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0LL);
    v56 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v57 )
      goto LABEL_131;
    v56 = BasicHelper__DecryptValue_41499840(v57[10], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v91 = v54;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v58 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0LL);
    v60 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v60;
  }
  else
  {
    v61 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v61 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_41499840(v61[11], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v62 = *p_mainInfo;
  v90 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v89 = v50;
  commonFlag = v62->fields.svtCommonFlag;
  iconLimitCount = v56;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v62, 0LL);
  v63 = *p_mainInfo;
  v88 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v64 = v46;
  battleVoice = v63->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v63, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v65 = IsModifyLock;
  v66 = v44;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v67 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v68 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v68 )
    goto LABEL_131;
  v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
  v70 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v69;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v79 = v48;
  v80 = v52;
  v94 = v95;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v94, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v70 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0LL);
  v72 = IsModifyLock;
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
  v78 = v43;
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
    sub_1BAB678(IsModifyLock, v17);
  }
  if ( v66 | v64 & 1 | v89 & 1 | v91 & 1 | v58 & 1 | v90 & 1 | v88 & 1 | v65 & 1 | v67 & 1 | v72 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v74 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v74,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v74,
                              (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *p_mainInfo )
    {
      v75 = (*p_mainInfo)->fields.userSvtEntity;
      if ( v75 )
      {
        v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
        v77 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v95.fields.fakeValue = v76;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v93 = v95;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v93, 0LL);
        if ( *p_mainInfo )
        {
          if ( v77 )
          {
            CardFavoriteRequest__beginRequest(
              v77,
              IsModifyLock,
              v78,
              v79,
              v80,
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

  if ( (byte_4AB1EA0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BAB41C(&StringLiteral_9510/*"NoblePhantasm_"*/, v10);
    sub_1BAB41C(&StringLiteral_4463/*"ChrVoice_"*/, v11);
    sub_1BAB41C(&StringLiteral_12687/*"Servants_"*/, v12);
    byte_4AB1EA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v14);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v19 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v17 = (System_String_o **)off_4502330[assetType];
    v18 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_62048128(*v17, v18, 0LL);
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

  if ( (byte_4AB1E87 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AtlasManager_TypeInfo, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&Method_ServantStatusDialog__Init_b__130_0__, v5);
    sub_1BAB41C(&ServantStatusDialog_TypeInfo, v6);
    byte_4AB1E87 = 1;
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
      sub_1BAB678(baseObject, v8);
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
  v14 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  ServantStatusBattleListViewItem_o *p_battleChr; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB1E94 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1E94 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BAB678(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
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
    UnityEngine_Object__Destroy_69800620(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1BAB3C0(p_battleChr, 0, v9, v10);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_o *openCallbackFunc; // x20
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v15; // x21

  if ( (byte_4AB1EAE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectCharaGraph__, v6);
    sub_1BAB41C(&Method_ServantStatusDialog__InitList_b__172_0__, v7);
    byte_4AB1EAE = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v10 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v11);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  ServantStatusCharaGraphListViewManager__SetMode(charaGraphListViewManager, 2, v10, 0LL);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__172_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v15, 0LL);
      return;
    }
LABEL_10:
    sub_1BAB678(v12, v13);
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

  if ( (byte_4AB1EDC & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BAB41C(&ServantCostumeEntity_TypeInfo, v7);
    sub_1BAB41C(&ServantLimitAddEntity_TypeInfo, v8);
    byte_4AB1EDC = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1BAB678(RandomGroupIndex, v11);
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
          sub_1BAB680(RandomGroupIndex, v11);
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
        v24 = (ServantLimitAddEntity_o *)sub_1BAB668(ServantLimitAddEntity_TypeInfo);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
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
        v19 = (ServantCostumeEntity_o *)sub_1BAB668(ServantCostumeEntity_TypeInfo);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
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

  if ( (byte_4AB1EC0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_AssetData__TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog__LoadTransformedResource_b__194_0__, v3);
    byte_4AB1EC0 = 1;
  }
  v4 = (System_Action_object__o *)sub_1BAB668(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4AB1EB8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickCancel__, method);
    byte_4AB1EB8 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
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
  if ( (byte_4AB1EBF & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnClickChangeTransform__, method);
    byte_4AB1EBF = 1;
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
        v4 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1BAB678(this, method);
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
  if ( (byte_4AB1EDD & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickChangeVoice__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1EDD = 1;
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
          v10 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickChangeVoice__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BAB400(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4AB1EE0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickChoice__, method);
    byte_4AB1EE0 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BAB678(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
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
  if ( (byte_4AB1ECE & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickCommandCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ECE = 1;
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
          sub_1BAB680(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4AB1ECD & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickCommandCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ECD = 1;
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
          v10 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BAB400(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&dispLv);
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
  if ( (byte_4AB1ED5 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BAB41C(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_1BAB41C(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickCommandCodeShow__, v9);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v10);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectEquipStatus__, v11);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_4AB1ED5 = 1;
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
        v18 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BAB400(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v21,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v22 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30652492((CommonUI_o *)Instance, 20, v17, v21, v22, 0LL);
        return;
      }
LABEL_27:
      sub_1BAB678(this, *(_QWORD *)&index);
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
        v26 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BAB400(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      kind = v4->fields.kind;
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v29 )
          goto LABEL_27;
        v32 = 22;
      }
      else
      {
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v31 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
      CommonUI__OpenServantEquipStatusDialog_30653244(v38, v32, v39, v37, v30, v31, 0LL);
      return;
    }
  }
LABEL_17:
  v33 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BAB400(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v36 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4AB1ED1 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickFaceCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ED1 = 1;
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
          sub_1BAB680(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4AB1ED0 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickFaceCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ED0 = 1;
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
          v10 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BAB400(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&dispLv);
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
  int32_t v48; // w2
  int32_t v49; // w3
  ServantStatusDialog_o *v50; // x24
  int32_t v51; // w2
  int32_t v52; // w3
  ServantStatusDialog_o *v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  ServantStatusDialog_o *v56; // x23
  struct ServantStatusListViewItem_o *v57; // x8
  int32_t v58; // w0
  int32_t v59; // w2
  int32_t v60; // w3
  ServantStatusDialog_o *v61; // x23
  struct ServantStatusListViewItem_o *v62; // x8
  int32_t v63; // w2
  int32_t v64; // w3
  ServantStatusDialog_o *v65; // x23
  struct ServantStatusListViewItem_o *v66; // x8
  int32_t v67; // w2
  int32_t v68; // w3
  ServantStatusDialog_o *v69; // x22
  System_String_o *v70; // x20
  System_String_o *v71; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  System_String_o *v75; // x24
  CommonConfirmDialog_ClickDelegate_o *v76; // x25
  struct ServantStatusListViewItem_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  const MethodInfo *v80; // x1
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v2 = this;
  if ( (byte_4AB1EE1 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&object___TypeInfo, v11);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BAB41C(&Rarity_TypeInfo, v14);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickFavorite__, v15);
    sub_1BAB41C(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BAB41C(&StringLiteral_11892/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_1BAB41C(&StringLiteral_11890/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_1BAB41C(&StringLiteral_11889/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_1BAB41C(&StringLiteral_11893/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&StringLiteral_11891/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_4AB1EE1 = 1;
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
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v83 = v84;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v83, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickFavorite__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
      return;
    }
    v30 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickFavorite__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BAB400(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v77 = v2->fields.mainInfo;
      if ( v77 )
      {
        v78 = v77->fields.userSvtEntity;
        if ( v78 )
        {
          v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v84.fields.fakeValue = v79;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v82 = v84;
          v77->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(
                                            &v82,
                                            0LL);
          ServantStatusDialog__SetMark(v2, v80);
          return;
        }
      }
      goto LABEL_79;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_79;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_79;
    v33 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v85.fields.currentCryptoKey = klass;
    *(_QWORD *)&v85.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v85, 0LL);
    if ( !v33 )
      goto LABEL_79;
    v36 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                               (int32_t)this,
                               (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v36 )
      goto LABEL_79;
    v37 = this;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v36->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
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
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v41[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v37,
                                   v42,
                                   v43,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v46 = sub_1BAB4C4(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v46 )
      goto LABEL_79;
    v50 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v46 + 24) )
        goto LABEL_80;
      *(_QWORD *)(v46 + 32) = v50;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v50, v48, v49);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v36, 0LL);
      v53 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v46 + 24) <= 1u )
          goto LABEL_80;
        *(_QWORD *)(v46 + 40) = v53;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 40), (int32_t)v53, v51, v52);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v36, v39, -1, 0LL);
        v56 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v46 + 24) <= 2u )
            goto LABEL_80;
          *(_QWORD *)(v46 + 48) = v56;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 48), (int32_t)v56, v54, v55);
          v57 = v2->fields.mainInfo;
          if ( !v57 )
            goto LABEL_79;
          this = (ServantStatusDialog_o *)v57->fields.userSvtEntity;
          if ( !this )
            goto LABEL_79;
          v58 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v58, 0LL);
          v61 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v46 + 24) <= 3u )
              goto LABEL_80;
            *(_QWORD *)(v46 + 56) = v61;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 56), (int32_t)v61, v59, v60);
            v62 = v2->fields.mainInfo;
            if ( !v62 )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)v62->fields.svtEntity;
            if ( !this )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v65 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v46 + 24) <= 4u )
                goto LABEL_80;
              *(_QWORD *)(v46 + 64) = v65;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 64), (int32_t)v65, v63, v64);
              v66 = v2->fields.mainInfo;
              if ( !v66 )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)v66->fields.svtEntity;
              if ( !this )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v69 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v46 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v46 + 24) > 5u )
                {
                  *(_QWORD *)(v46 + 72) = v69;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 72), (int32_t)v69, v67, v68);
                  this = (ServantStatusDialog_o *)System_String__Format_62062636(v45, (System_Object_array *)v46, 0LL);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_79;
                  v70 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_79;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v70 = System_String__Concat_62048128(v70, v71, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v76,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30636632(
                      (CommonUI_o *)Instance,
                      v73,
                      v70,
                      v74,
                      v75,
                      v76,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_79:
                  sub_1BAB678(this, method);
                }
LABEL_80:
                sub_1BAB680(this, method);
              }
            }
          }
        }
      }
    }
    v81 = sub_1BAB69C();
    sub_1BAB544(v81, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4AB1EDF & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickLock__, method);
    byte_4AB1EDF = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BAB678(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
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
  if ( (byte_4AB1ED4 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ED4 = 1;
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
          sub_1BAB680(this, *(_QWORD *)&costumeIndex);
        v9 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v9 )
        {
          v12 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v13 = (System_Reflection_MethodBase_o *)sub_1BAB400(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v9, v14);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4AB1ED3 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__, v5);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_4AB1ED3 = 1;
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
          v10 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BAB400(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v12);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, *(_QWORD *)&dispLv);
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
  Il2CppObject *Entity; // x24
  ServantStatusDialog_o *v34; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v37; // x23
  ServantStatusDialog_o *v38; // x20
  int32_t v39; // w21
  int32_t v40; // w25
  struct ServantStatusListViewItem_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  int32_t v43; // w21
  int32_t v44; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v46; // x20
  __int64 v47; // x21
  int32_t Rarity; // w24
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
  Il2CppObject *Instance; // x21
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  System_String_o *v75; // x24
  CommonConfirmDialog_ClickDelegate_o *v76; // x25
  struct ServantStatusListViewItem_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  __int64 v80; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  v2 = this;
  if ( (byte_4AB1EE3 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&object___TypeInfo, v11);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BAB41C(&Rarity_TypeInfo, v14);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickPush__, v15);
    sub_1BAB41C(&Method_ServantStatusDialog_OnConfirmSelectPush__, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BAB41C(&StringLiteral_11903/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_1BAB41C(&StringLiteral_11901/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_1BAB41C(&StringLiteral_11902/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&StringLiteral_11904/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_4AB1EE3 = 1;
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
    *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v83.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v82 = v83;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v82, 0LL) )
    {
      v28 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickPush__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
      v30 = v2->fields.mainInfo;
      if ( v30 )
      {
        v30->fields.pushUserSvtId = 0LL;
LABEL_73:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_74;
    }
    v31 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickPush__);
    v32 = (System_Reflection_MethodBase_o *)sub_1BAB400(v31, v31[4]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v77 = v2->fields.mainInfo;
      if ( v77 )
      {
        v78 = v77->fields.userSvtEntity;
        if ( v78 )
        {
          v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v79;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v81 = v83;
          v77->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v81, 0LL);
          goto LABEL_73;
        }
      }
LABEL_74:
      sub_1BAB678(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_74;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_74;
    v34 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v84.fields.currentCryptoKey = klass;
    *(_QWORD *)&v84.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v84, 0LL);
    if ( !v34 )
      goto LABEL_74;
    v37 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                               (int32_t)this,
                               (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v37 )
      goto LABEL_74;
    v38 = this;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v37->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                      0LL);
    if ( !v38 )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v38,
                                      v39,
                                      (int32_t)this,
                                      0LL);
    if ( !v2->fields.mainInfo )
      goto LABEL_74;
    v40 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v2->fields.mainInfo, 0LL);
    v41 = v2->fields.mainInfo;
    if ( !v41 )
      goto LABEL_74;
    v42 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v41->fields.userSvtEntity;
    if ( !v42 )
      goto LABEL_74;
    v43 = (int)this;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v42[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v38,
                                   v43,
                                   v44,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v47 = sub_1BAB4C4(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v47 )
      goto LABEL_74;
    v51 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v47 + 24) )
        goto LABEL_75;
      *(_QWORD *)(v47 + 32) = v51;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v51, v49, v50);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v37, 0LL);
      v54 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v47 + 24) <= 1u )
          goto LABEL_75;
        *(_QWORD *)(v47 + 40) = v54;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 40), (int32_t)v54, v52, v53);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v37, v40, -1, 0LL);
        v57 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v47 + 24) <= 2u )
            goto LABEL_75;
          *(_QWORD *)(v47 + 48) = v57;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 48), (int32_t)v57, v55, v56);
          v58 = v2->fields.mainInfo;
          if ( !v58 )
            goto LABEL_74;
          this = (ServantStatusDialog_o *)v58->fields.userSvtEntity;
          if ( !this )
            goto LABEL_74;
          v59 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v59, 0LL);
          v62 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v47 + 24) <= 3u )
              goto LABEL_75;
            *(_QWORD *)(v47 + 56) = v62;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 56), (int32_t)v62, v60, v61);
            v63 = v2->fields.mainInfo;
            if ( !v63 )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)v63->fields.svtEntity;
            if ( !this )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v66 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v47 + 24) <= 4u )
                goto LABEL_75;
              *(_QWORD *)(v47 + 64) = v66;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 64), (int32_t)v66, v64, v65);
              v67 = v2->fields.mainInfo;
              if ( !v67 )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)v67->fields.svtEntity;
              if ( !this )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v70 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1BAB558(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v47 + 24) > 5u )
                {
                  *(_QWORD *)(v47 + 72) = v70;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v47 + 72), (int32_t)v70, v68, v69);
                  v71 = System_String__Format_62062636(v46, (System_Object_array *)v47, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v76,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30636632(
                      (CommonUI_o *)Instance,
                      v73,
                      v71,
                      v74,
                      v75,
                      v76,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_74;
                }
LABEL_75:
                sub_1BAB680(this, method);
              }
            }
          }
        }
      }
    }
    v80 = sub_1BAB69C();
    sub_1BAB544(v80, 0LL);
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

  if ( (byte_4AB1EDA & 1) == 0 )
  {
    sub_1BAB41C(&OptionManager_TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__, v5);
    byte_4AB1EDA = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v6 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
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

  if ( (byte_4AB1ED8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__, *(_QWORD *)&index);
    byte_4AB1ED8 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
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

  if ( (byte_4AB1ED6 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v8);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickServantQuest__, v9);
    sub_1BAB41C(&Method_ServantStatusDialog_OnConfirmServantQuest__, v10);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    sub_1BAB41C(&StringLiteral_25026/*"{0}"*/, v15);
    sub_1BAB41C(&StringLiteral_11935/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v16);
    sub_1BAB41C(&StringLiteral_11937/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v17);
    sub_1BAB41C(&StringLiteral_11938/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v18);
    sub_1BAB41C(&StringLiteral_11931/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v19);
    sub_1BAB41C(&StringLiteral_11934/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v20);
    sub_1BAB41C(&StringLiteral_11936/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v21);
    sub_1BAB41C(&StringLiteral_11932/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v22);
    sub_1BAB41C(&StringLiteral_11933/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v23);
    byte_4AB1ED6 = 1;
  }
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_20;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_20:
    v38 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickServantQuest__);
    v39 = (System_Reflection_MethodBase_o *)sub_1BAB400(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v41 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    v28 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickServantQuest__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
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
  if ( !System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25026/*"{0}"*/, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (void *)QuestEntity__getServantId(v31, 0LL),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_35:
    sub_1BAB678(Instance, v25);
  }
  BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
  v32 = System_String__Format(v32, BattleName, 0LL);
LABEL_16:
  if ( QuestType == 3 )
  {
    warId = v27->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_30:
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11936/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v44 = &StringLiteral_11935/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_33;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_30;
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v44 = &StringLiteral_11933/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  }
  else
  {
    v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
    v44 = &StringLiteral_11937/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  }
LABEL_33:
  v45 = v43;
  v46 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
  v47 = System_String__Format(v46, (Il2CppObject *)v32, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11931/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v50,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v42 )
    goto LABEL_35;
  CommonUI__OpenConfirmDialog_30636632((CommonUI_o *)v42, v45, v47, v48, v49, v50, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB1EC5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickTabBattle__, method);
    byte_4AB1EC5 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB1EC4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickTabProfile__, method);
    byte_4AB1EC4 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB1EC3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickTabStatus__, method);
    byte_4AB1EC3 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AB1EC6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickTabVoice__, method);
    byte_4AB1EC6 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
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
  int32_t v20; // w2
  int32_t v21; // w3
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

  if ( (byte_4AB1ED7 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&Method_ServantStatusDialog_OnClickTdSpeed__, v7);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BAB41C(&ServantStatusListViewItemDrawButton_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_1BAB41C(&string_TypeInfo, v11);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__, v12);
    sub_1BAB41C(&ServantStatusDialog___c__DisplayClass217_0_TypeInfo, v13);
    sub_1BAB41C(&StringLiteral_11940/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_1BAB41C(&StringLiteral_11941/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_1BAB41C(&StringLiteral_11942/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_4AB1ED7 = 1;
  }
  v17 = sub_1BAB668(ServantStatusDialog___c__DisplayClass217_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass217_0___ctor((ServantStatusDialog___c__DisplayClass217_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_24;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v23 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      sub_1BAB678(mainInfo, v19);
    }
    v24 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnClickTdSpeed__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BAB400(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
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
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v30 = System_String__Format_62062500(v29, TDSpeedLocalization, v28, 0LL);
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1BFD2F8(v31);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1BFD2F8(v31);
    v34 = **(CommonUI_o ***)(v33 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v38,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__,
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
  if ( (byte_4AB1EE2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4AB1EE2 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BAB678(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30637300((CommonUI_o *)Instance, v13, 0LL);
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
  if ( (byte_4AB1EE4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4AB1EE4 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1BAB678(this, isDecide);
    v10 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30637300((CommonUI_o *)Instance, v13, 0LL);
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

  if ( (byte_4AB1EDE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v5);
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BAB41C(&Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    byte_4AB1EDE = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30637300((CommonUI_o *)Instance, v19, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  v13 = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v13 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v13, (int32_t)v16, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB1EEF )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v22);
    byte_4AB1EEF = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, 0LL);
  if ( !v24 )
LABEL_25:
    sub_1BAB678(v13, v14);
  CommonUI__maskFadeout((CommonUI_o *)v24, 1, DEFAULT_FADE_TIME, v27, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4AB1EB9 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1EB9 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BAB678(0LL, v4);
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

  if ( (byte_4AB1EE7 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_3172/*"Base/TitlePrefab/BackObj/BtnBg"*/, v3);
    byte_4AB1EE7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3172/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
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
    sub_1BAB678(transform, v5);
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

  if ( (byte_4AB1EC7 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    byte_4AB1EC7 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v7 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !battleTabListViewManager
      || (ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v7, 0LL),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1BAB678(v8, v9);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v11 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnSelectBattle__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BAB400(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
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

  if ( (byte_4AB1EB4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB1EB4 = 1;
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
    ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BAB678(gameObject, v8);
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

  if ( (byte_4AB1EB2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB1EB2 = 1;
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
    ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BAB678(gameObject, v8);
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

  if ( (byte_4AB1EB6 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_4AB1EB6 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1BAB678(v7, v8);
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
  struct ServantStatusListViewItem_o *v32; // x8
  int64_t equipTargetId1; // x21
  CommonUI_o *v34; // x20
  ServantStatusDialog_EndDelegate_o *v35; // x22
  System_Action_o *v36; // x23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v39; // q1
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v43; // x8
  struct ServantLeaderInfo_o *v44; // x8
  EquipTargetInfo_o *v45; // x21
  CommonUI_o *v46; // x20
  ServantStatusDialog_EndDelegate_o *v47; // x22
  System_Action_o *v48; // x23
  int32_t v49; // w1
  ServantStatusListViewManager_o *v50; // x20
  ServantStatusListViewManager_CallbackFunc_o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 *v54; // x8
  struct UISprite_o *v55; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v57; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v59; // x21
  struct ServantStatusListViewItem_o *v60; // x8
  struct ServantLeaderInfo_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4AB1EB1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v7);
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BAB41C(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BAB41C(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_1BAB41C(&Method_ServantStatusDialog_Exit__, v12);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectEquipStatus__, v13);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1BAB41C(&StringLiteral_12665/*"ServantLvExceed"*/, v17);
    sub_1BAB41C(&StringLiteral_12669/*"ServantSkillCombine"*/, v18);
    sub_1BAB41C(&StringLiteral_12666/*"ServantNpCombine"*/, v19);
    sub_1BAB41C(&StringLiteral_4612/*"CommandCardEquip"*/, v20);
    sub_1BAB41C(&StringLiteral_12653/*"ServantEQCombine"*/, v21);
    sub_1BAB41C(&StringLiteral_12650/*"ServantCombine"*/, v22);
    sub_1BAB41C(&StringLiteral_6851/*"FriendshipExceed"*/, v23);
    sub_1BAB41C(&StringLiteral_12663/*"ServantLimitCountUp"*/, v24);
    sub_1BAB41C(&StringLiteral_2391/*"AppendSkillCombine"*/, v25);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&StringLiteral_4613/*"CommandCardExceed"*/, v26);
    byte_4AB1EB1 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v28 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      sub_1BAB678(this, *(_QWORD *)&result);
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
            v30 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnSelectStatus__);
          v31 = (System_Reflection_MethodBase_o *)sub_1BAB400(v30, v30[4]);
          OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v32 = v6->fields.mainInfo;
          if ( !v32 )
            goto LABEL_78;
          equipTargetId1 = v32->fields.equipTargetId1;
          v34 = (CommonUI_o *)this;
          v35 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v35,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v36 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v36, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v34 )
            goto LABEL_78;
          CommonUI__OpenServantEquipStatusDialog(v34, 11, equipTargetId1, 1, v35, v36, 0LL);
        }
        else
        {
          servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
          if ( !servantLeaderInfo )
            goto LABEL_29;
          equipTarget1 = servantLeaderInfo->fields.equipTarget1;
          if ( !equipTarget1 )
            goto LABEL_29;
          v39 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
          *(_OWORD *)&v63.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v62 = v63;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v62, 0LL) >= 1 )
          {
            v40 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v40 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnSelectStatus__);
            v41 = (System_Reflection_MethodBase_o *)sub_1BAB400(v40, v40[4]);
            OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
            kind = v6->fields.kind;
            if ( kind == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v43 = v6->fields.mainInfo;
              if ( !v43 )
                goto LABEL_78;
              v44 = v43->fields.servantLeaderInfo;
              if ( !v44 )
                goto LABEL_78;
              v45 = v44->fields.equipTarget1;
              v46 = (CommonUI_o *)this;
              v47 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v47,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v48 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
              System_Action___ctor(v48, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v46 )
                goto LABEL_78;
              v49 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v60 = v6->fields.mainInfo;
              if ( !v60 )
                goto LABEL_78;
              v61 = v60->fields.servantLeaderInfo;
              if ( !v61 )
                goto LABEL_78;
              v45 = v61->fields.equipTarget1;
              v46 = (CommonUI_o *)this;
              v47 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v47,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v48 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
              System_Action___ctor(v48, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v46 )
                goto LABEL_78;
              if ( kind == 5 )
                v49 = 14;
              else
                v49 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_30652260(v46, v49, v45, v47, v48, 0LL);
          }
          else
          {
LABEL_29:
            v50 = v6->fields.statusTabListViewManager;
            v51 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v51,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v50 )
              goto LABEL_78;
            ServantStatusListViewManager__SetMode(v50, 1, v51, 0LL);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12650/*"ServantCombine"*/;
        goto LABEL_64;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12653/*"ServantEQCombine"*/;
        goto LABEL_64;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12669/*"ServantSkillCombine"*/;
        goto LABEL_64;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12663/*"ServantLimitCountUp"*/;
        goto LABEL_64;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_6851/*"FriendshipExceed"*/;
        goto LABEL_64;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_4612/*"CommandCardEquip"*/;
        goto LABEL_64;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_4613/*"CommandCardExceed"*/;
        goto LABEL_64;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_2391/*"AppendSkillCombine"*/;
        goto LABEL_64;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12666/*"ServantNpCombine"*/;
        goto LABEL_64;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v54 = &StringLiteral_12665/*"ServantLvExceed"*/;
LABEL_64:
        v55 = (struct UISprite_o *)*v54;
        this->fields.statusSprite = (struct UISprite_o *)*v54;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.statusSprite, (int32_t)v55, v52, v53);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v57 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v57 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
        v59 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(v59, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_78;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v59, 0LL);
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

  if ( (byte_4AB1EB7 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&StringLiteral_16153/*"_"*/, v12);
    byte_4AB1EB7 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v19 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        v25 = System_String__Concat_62059388(v23, (System_String_o *)StringLiteral_16153/*"_"*/, LabelName, 0LL);
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
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_40268452(
                                      (ServantVoiceMaster_o *)v19,
                                      v21,
                                      v22,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_1BAB678(Instance, v16);
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
                    ServantStatusDialog__PlayChrVoice_32750524(this, v21, v22, HomeVoiceList, result, v27);
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
            HomeVoiceList = ServantVoiceMaster__getEntity_40266412(
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

  if ( (byte_4AB1EBD & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_1BAB41C(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__, v9);
    sub_1BAB41C(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__, v10);
    sub_1BAB41C(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v12);
    sub_1BAB41C(&StringLiteral_11909/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v13);
    sub_1BAB41C(&StringLiteral_11910/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, v14);
    sub_1BAB41C(&StringLiteral_11907/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v15);
    sub_1BAB41C(&StringLiteral_1/*""*/, v16);
    sub_1BAB41C(&StringLiteral_11906/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v17);
    byte_4AB1EBD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v49, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v30 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BAB400(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
      v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1BFD2F8(v32);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1BFD2F8(v32);
      v35 = **(CommonUI_o ***)(v34 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__;
LABEL_44:
      v48 = v37;
      CommonConfirmDialog_ClickDelegate___ctor(v37, (Il2CppObject *)this, *v38, 0LL);
      if ( !v35 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30637072(
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
          v43 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v44 = (System_Reflection_MethodBase_o *)sub_1BAB400(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
        v46 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
          v46 = sub_1BFD2F8(v45);
        v47 = *(_QWORD *)(*(_QWORD *)(v46 + 192) + 16LL);
        if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
          v47 = sub_1BFD2F8(v45);
        v35 = **(CommonUI_o ***)(v47 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v38 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__;
        goto LABEL_44;
      }
      v42 = *(_QWORD *)&v40->fields.limitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v40->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v42;
      *(_QWORD *)&v50.fields.fakeValue = v41;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v50, 0LL) )
      {
        v39 = this->fields.mainInfo;
        if ( !v39 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v20 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BAB434(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BAB400(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v23 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
      sub_1BAB678(v24, v25);
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
  ServantStatusListViewItem_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_4AB1E6D & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E6D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
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

  if ( (byte_4AB1E8C & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, callback);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&TutorialFlag_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_13523/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v7);
    byte_4AB1E8C = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38072332(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13523/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1BAB678(v9, v10);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v9, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32718136(
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
  ServantStatusListViewItem_o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_4AB1E6E & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E6E = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32718344(
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
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_4AB1E6F & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E6F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33653692(v15, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32718540(
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

  if ( (byte_4AB1E70 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BAB41C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4AB1E70 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BAB678(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)*v17);
  ServantStatusDialog__Open_32718820(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32718820(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w21
  ServantStatusListViewItem_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1

  if ( (byte_4AB1E74 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E74 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(v18, userSvtEntity, 0LL, 0LL, 0, v17, v17, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32719068(
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

  if ( (byte_4AB1E71 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BAB41C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4AB1E71 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BAB678(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)*v17);
  ServantStatusDialog__Open_32719348(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32719348(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w22
  ServantStatusListViewItem_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1

  if ( (byte_4AB1E75 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E75 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(v18, userSvtEntity, 0LL, 0LL, callback != 0LL, v17, v17, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32719600(
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

  if ( (byte_4AB1E72 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BAB41C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4AB1E72 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BAB678(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)*v17);
  ServantStatusDialog__Open_32719884(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32719884(
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
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_4AB1E76 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E76 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(v20, userSvtEntity, 0LL, 0LL, 0, v19, v19, canMoveCombine, 0LL);
  this->fields.mainInfo = v20;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32720144(
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

  if ( (byte_4AB1E73 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1BAB41C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4AB1E73 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BAB678(Instance, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)*v17);
  ServantStatusDialog__Open_32720428(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32720428(
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
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w23
  ServantStatusListViewItem_o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_4AB1E77 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E77 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(
    v20,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v19,
    v19,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v20;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32720788(
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

  if ( (byte_4AB1E78 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AB1E78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v15);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_32720992(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32720992(
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
  unsigned int v17; // w8
  bool v18; // cc
  unsigned __int64 v19; // x8
  char v20; // w9
  char v21; // w23
  ServantStatusListViewItem_o *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1

  if ( (byte_4AB1E79 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E79 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(v22, userSvtEntity, equipIdList, questRestrictionInfo, 0, v21, v21, 0, 0LL);
  this->fields.mainInfo = v22;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32721256(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w24
  ServantStatusListViewItem_o *v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1

  if ( (byte_4AB1E7A & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E7A = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(
    v24,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v23,
    v23,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32721532(
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
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w25
  ServantStatusListViewItem_o *v24; // x26
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1

  if ( (byte_4AB1E7B & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E7B = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33655332(
    v24,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v23,
    v23,
    canMoveCombine,
    0LL);
  this->fields.mainInfo = v24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32721812(
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

  if ( (byte_4AB1E7C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4AB1E7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_32722024(this, kind, (UserServantEntity_o *)Entity, isUse, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32722024(
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
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  char v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_4AB1E7D & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E7D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33657668(v15, userSvtEntity, isUse, 0LL);
  this->fields.mainInfo = v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32722216(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w21
  ServantStatusListViewItem_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1

  if ( (byte_4AB1E7E & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E7E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33659464(v18, userSvtCollectionEntity, 0, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32722440(
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
  unsigned int v15; // w8
  bool v16; // cc
  unsigned __int64 v17; // x8
  char v18; // w9
  char v19; // w22
  ServantStatusListViewItem_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_4AB1E7F & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E7F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    imageLimitCount);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33661104(v20, userSvtCollectionEntity, imageLimitCount, 0, v19, 0LL);
  this->fields.mainInfo = v20;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32722680(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int v13; // w8
  bool v14; // cc
  unsigned __int64 v15; // x8
  char v16; // w9
  char v17; // w22
  ServantStatusListViewItem_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1

  if ( (byte_4AB1E80 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E80 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33659464(v18, userSvtCollectionEntity, callback != 0LL, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32722908(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusListViewItem_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  if ( (byte_4AB1E81 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E81 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33662528(v13, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32723092(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusListViewItem_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  if ( (byte_4AB1E82 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E82 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33664216(v13, equipTargetInfo, kind == 19, 0LL);
  this->fields.mainInfo = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32723276(
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
  ServantStatusListViewItem_o *v15; // x22
  int32_t v16; // w2
  char v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_4AB1E83 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E83 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33665044(v15, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32723468(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  if ( (byte_4AB1E84 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E84 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33665420(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32723644(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  if ( (byte_4AB1E85 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E85 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33665420(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_32723820(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusListViewItem_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  if ( (byte_4AB1E86 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4AB1E86 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1BAB668(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_33666496(v13, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
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
  int32_t v39; // w3
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
  int32_t v59; // w3
  int32_t v60; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v62; // x21
  System_String_o *v63; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB1E9B & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_1BAB41C(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v16);
    sub_1BAB41C(&NGUITools_TypeInfo, v17);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v18);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BAB41C(&StringLiteral_3222/*"Battle2D"*/, v22);
    sub_1BAB41C(&StringLiteral_16639/*"_y0"*/, v23);
    byte_4AB1E9B = 1;
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
                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
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
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleChr, (int32_t)v37, v38, v39);
      if ( !v37 )
        goto LABEL_73;
      v40 = UnityEngine_GameObject__AddComponent_object_(
              v37,
              (const MethodInfo_2F13888 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (__int64)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !v40 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v40, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)transform,
                             (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
      if ( !byte_4AB0696 )
      {
        transform = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v25);
        byte_4AB0696 = 1;
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
          v50 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v50,
            (const MethodInfo_31BC2C8 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v50 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            5,
            0.75,
            (const MethodInfo_31BCC94 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            8,
            0.75,
            (const MethodInfo_31BCC94 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v50,
            9,
            0.75,
            (const MethodInfo_31BCC94 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v50,
                 battleSize,
                 (const MethodInfo_31BCE8C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v51 = UnityEngine_GameObject__get_transform(v37, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v50,
                     battleSize,
                     (const MethodInfo_31BCBF8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v53 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v50,
                    battleSize,
                    (const MethodInfo_31BCBF8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v54 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v50,
                    battleSize,
                    (const MethodInfo_31BCBF8 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
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
          (System_String_o *)StringLiteral_16639/*"_y0"*/,
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
                    (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL)) == 0) )
      {
LABEL_73:
        sub_1BAB678(transform, v25);
      }
      v57 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleActor, (int32_t)v40, v58, v59);
      v60 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3222/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v37, v60, 0LL);
      if ( !noupdate )
      {
        transform = (__int64)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_34711652(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v62 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4AB1EA7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BAB41C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4AB1EA7 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_32750524(
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
  if ( (byte_4AB1EA9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BAB41C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4AB1EA9 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_4AB1EA8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_1BAB41C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4AB1EA8 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  int32_t v19; // w3
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB1EA4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4AB1EA4 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1BAB678(0LL, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v27 = v26;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v15 = v13;
    if ( !v13 )
    {
      v24 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1BAB678(v13, v14);
  }
  while ( !System_String__Equals_62056444(assetName, (System_String_o *)v27.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v16);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1BAB678(0LL, v17);
    ServantStatusVoiceListViewManager__SetMode_35729648(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, (int32_t)voicePlayList, v18, v19);
  this->fields.voicePlayAssetName = assetName;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, (int32_t)assetName, v21, v22);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v23);
  v24 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v15 && v24 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4AB1EAF & 1) == 0 )
  {
    sub_1BAB41C(&OptionManager_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4AB1EAF = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_31833180(charaGraphListViewManager, 1, 0LL);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_34711652(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_33640420(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1BAB678(charaGraphListViewManager, method);
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
  int32_t v32; // w3
  _BOOL4 v33; // w24
  int v34; // w8
  long double v35; // q0
  int v36; // w8
  unsigned __int8 v37; // w21
  struct ServantStatusListViewItem_o *v38; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  int v42; // w22
  BalanceConfig_c *v43; // x8
  struct ServantStatusListViewItem_o *v44; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v46; // x23
  __int64 v47; // x0
  __int64 v48; // x0
  CommonUI_o *v49; // x19
  System_String_o *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x23
  CommonConfirmDialog_ClickDelegate_o *v53; // x0
  __int64 *v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  CommonConfirmDialog_ClickDelegate_o *v57; // x24
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v59; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4AB1EDB & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_1BAB41C(&Method_BasicHelper_Any_int____76454352, v9);
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v10);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v12);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v13);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v16);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__, v17);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__, v18);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__, v19);
    sub_1BAB41C(&ServantStatusDialog___c__DisplayClass221_0_TypeInfo, v20);
    sub_1BAB41C(&StringLiteral_11920/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v21);
    sub_1BAB41C(&StringLiteral_11918/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v22);
    sub_1BAB41C(&StringLiteral_11907/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v23);
    sub_1BAB41C(&StringLiteral_1/*""*/, v24);
    sub_1BAB41C(&StringLiteral_11908/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v25);
    sub_1BAB41C(&StringLiteral_11919/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v26);
    sub_1BAB41C(&StringLiteral_11906/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v27);
    byte_4AB1EDB = 1;
  }
  v28 = sub_1BAB668(ServantStatusDialog___c__DisplayClass221_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass221_0___ctor((ServantStatusDialog___c__DisplayClass221_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_53;
  v33 = isRandomOn;
  *(_QWORD *)(v28 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)this, v31, v32);
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
      LOBYTE(v34) = *(_BYTE *)(v28 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v30);
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
      *(_QWORD *)&v60.fields.currentCryptoKey = v41;
      *(_QWORD *)&v60.fields.fakeValue = v40;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                  v60,
                                                  0LL);
      v42 = (int)mainInfo;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        *(__n128 *)&v35 = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      if ( v42 == v43->static_fields->ServantIdMashu1 )
      {
        v44 = this->fields.mainInfo;
        if ( !v44 )
          goto LABEL_53;
        supportRandomLimitCountList = v44->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v46 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v46,
            (Il2CppObject *)v28,
            Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__48952508(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v46,
                 (const MethodInfo_2EAF4BC *)Method_BasicHelper_Any_int____76454352) )
          {
            v47 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
              v47 = sub_1BFD2F8(v35);
            v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
            if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
              v48 = sub_1BFD2F8(v35);
            v49 = **(CommonUI_o ***)(v48 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11920/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v54 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v37 & *(_BYTE *)(v28 + 37) & 1) != 0 )
    {
      v55 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1BFD2F8(v35);
      v56 = *(_QWORD *)(*(_QWORD *)(v55 + 192) + 16LL);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1BFD2F8(v35);
      v49 = **(CommonUI_o ***)(v56 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v54 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v57 = v53;
      CommonConfirmDialog_ClickDelegate___ctor(v53, (Il2CppObject *)v28, *v54, 0LL);
      if ( v49 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v49,
          (System_String_o *)StringLiteral_1/*""*/,
          v50,
          v51,
          v52,
          v57,
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
      sub_1BAB678(mainInfo, v30);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v28 + 32), 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v34 = *(unsigned __int8 *)(v28 + 37);
    if ( *(_BYTE *)(v28 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v34 != 0, 0LL);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        0LL);
      goto LABEL_47;
    }
LABEL_49:
    mainInfo->fields.isEnableSupportRandomSetting = v34;
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
    0LL);
LABEL_50:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v59 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v59,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v59, 0LL);
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

  if ( (byte_4AB1ED9 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4AB1ED9 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1BAB678(mainInfo, *(_QWORD *)&index);
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

  if ( (byte_4AB1E99 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, flag);
    byte_4AB1E99 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1BAB678(0LL, v6);
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
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int32_t v14; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v18; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x22
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  const MethodInfo *v25; // x1

  if ( (byte_4AB1E9D & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, isModifyInfo);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1BAB41C(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AB1E9D = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantStatusBattleListViewManager__ChangeSelectIndex(battleTabListViewManager, this->fields.confirmDispLv, 0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.mainInfo;
  if ( !battleTabListViewManager )
    goto LABEL_29;
  leftItem = battleTabListViewManager->fields.leftItem;
  if ( !leftItem )
    goto LABEL_29;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= leftItem->fields.sortIndex )
    sub_1BAB680(battleTabListViewManager, isModifyInfo);
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
  v14 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v14,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v14,
                                                                       ServantImageLimitSealAfter,
                                                                       0LL);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v18 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_62056444((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v19);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v22 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v22, 0LL);
  }
  *p_battleLoadAsset = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v18, v20, v21);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
LABEL_29:
    sub_1BAB678(battleTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  battleLoadAsset = this->fields.battleLoadAsset;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v24, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v25);
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
  if ( (byte_4AB1EAD & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_17688/*"button_lock_reg"*/, v4);
    sub_1BAB41C(&StringLiteral_17692/*"button_push_reg"*/, v5);
    sub_1BAB41C(&StringLiteral_17693/*"button_push_unreg"*/, v6);
    sub_1BAB41C(&StringLiteral_17689/*"button_lock_unreg"*/, v7);
    sub_1BAB41C(&StringLiteral_17683/*"button_choice_unreg"*/, v8);
    sub_1BAB41C(&StringLiteral_20170/*"icon_equip"*/, v9);
    sub_1BAB41C(&StringLiteral_17682/*"button_choice_reg"*/, v10);
    sub_1BAB41C(&StringLiteral_20171/*"icon_equip_cc"*/, v11);
    sub_1BAB41C(&StringLiteral_17684/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&StringLiteral_17685/*"button_favorite_unreg"*/, v13);
    byte_4AB1EAD = 1;
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
      v24 = (System_String_o **)(v23->fields.isLock ? &StringLiteral_17688/*"button_lock_reg"*/ : &StringLiteral_17689/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = v2->fields.mainInfo;
      if ( !v25 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v26 = (System_String_o **)(v25->fields.isChoice ? &StringLiteral_17682/*"button_choice_reg"*/ : &StringLiteral_17683/*"button_choice_unreg"*/);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v44, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v32 = (System_String_o **)&StringLiteral_17684/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v32 = (System_String_o **)&StringLiteral_17685/*"button_favorite_unreg"*/;
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
          v35 = &StringLiteral_17693/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(
                                            &v43,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v35 = &StringLiteral_17692/*"button_push_reg"*/;
          v41 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v41 )
            v35 = &StringLiteral_17693/*"button_push_unreg"*/;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20170/*"icon_equip"*/, 0LL);
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
  v18 = (System_String_o **)(v17->fields.isLock ? &StringLiteral_17688/*"button_lock_reg"*/ : &StringLiteral_17689/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = v2->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0LL
    || (v19->fields.isChoice
      ? (v20 = (System_String_o **)&StringLiteral_17682/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17683/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1BAB678(this, method);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20171/*"icon_equip_cc"*/, 0LL);
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

  if ( (byte_4AB1E98 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB1E98 = 1;
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
        ShiningIconComponent__Set_38614928((ShiningIconComponent_o *)v8, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1BAB678(v8, v7);
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

  if ( (byte_4AB1EAB & 1) == 0 )
  {
    sub_1BAB41C(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_1BAB41C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&OptionManager_TypeInfo, v11);
    sub_1BAB41C(&RandomLimitCountManager_TypeInfo, v12);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectBattle__, v13);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectFlavor__, v14);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v15);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectVoice__, v16);
    sub_1BAB41C(&StringLiteral_17602/*"btn_txt_detail_off"*/, v17);
    sub_1BAB41C(&StringLiteral_17585/*"btn_txt_battlecharacter_on"*/, v18);
    sub_1BAB41C(&StringLiteral_17650/*"btn_txt_status_on"*/, v19);
    sub_1BAB41C(&StringLiteral_17506/*"btn_bg_12"*/, v20);
    sub_1BAB41C(&StringLiteral_17649/*"btn_txt_status_off"*/, v21);
    sub_1BAB41C(&StringLiteral_17661/*"btn_txt_voice_on"*/, v22);
    sub_1BAB41C(&StringLiteral_17630/*"btn_txt_profile_on"*/, v23);
    sub_1BAB41C(&StringLiteral_17660/*"btn_txt_voice_off"*/, v24);
    sub_1BAB41C(&StringLiteral_17508/*"btn_bg_19"*/, v25);
    sub_1BAB41C(&StringLiteral_17603/*"btn_txt_detail_on"*/, v26);
    sub_1BAB41C(&StringLiteral_17629/*"btn_txt_profile_off"*/, v27);
    sub_1BAB41C(&StringLiteral_17584/*"btn_txt_battlecharacter_off"*/, v28);
    byte_4AB1EAB = 1;
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
                v47 = (System_String_o **)&StringLiteral_17650/*"btn_txt_status_on"*/;
                if ( kind )
                  v47 = (System_String_o **)&StringLiteral_17649/*"btn_txt_status_off"*/;
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
                    v48 = (System_String_o **)(kind ? &StringLiteral_17506/*"btn_bg_12"*/ : &StringLiteral_17508/*"btn_bg_19"*/);
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
                                    (System_String_o *)StringLiteral_17629/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17506/*"btn_bg_12"*/,
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
                                                  v51 = (System_String_o **)&StringLiteral_17585/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17584/*"btn_txt_battlecharacter_off"*/;
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
                                                                               ? &StringLiteral_17508/*"btn_bg_19"*/
                                                                               : &StringLiteral_17506/*"btn_bg_12"*/);
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
                                                                      (System_String_o *)StringLiteral_17660/*"btn_txt_voice_off"*/,
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
      v56 = &StringLiteral_17603/*"btn_txt_detail_on"*/;
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
      v33 = (System_String_o **)&StringLiteral_17650/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17649/*"btn_txt_status_off"*/;
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
      v34 = (System_String_o **)(kind ? &StringLiteral_17506/*"btn_bg_12"*/ : &StringLiteral_17508/*"btn_bg_19"*/);
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
      v37 = &StringLiteral_17603/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v37 = &StringLiteral_17602/*"btn_txt_detail_off"*/;
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
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17508/*"btn_bg_19"*/ : &StringLiteral_17506/*"btn_bg_12"*/);
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
      v43 = (System_String_o **)&StringLiteral_17650/*"btn_txt_status_on"*/;
      if ( kind )
        v43 = (System_String_o **)&StringLiteral_17649/*"btn_txt_status_off"*/;
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
      v44 = &StringLiteral_17508/*"btn_bg_19"*/;
      if ( kind )
        v44 = &StringLiteral_17506/*"btn_bg_12"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17602/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17506/*"btn_bg_12"*/, 0LL);
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
      v56 = &StringLiteral_17629/*"btn_txt_profile_off"*/;
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17508/*"btn_bg_19"*/, 0LL);
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
      v57 = (System_String_o **)&StringLiteral_17650/*"btn_txt_status_on"*/;
      if ( kind )
        v57 = (System_String_o **)&StringLiteral_17649/*"btn_txt_status_off"*/;
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
      v58 = (System_String_o **)(kind ? &StringLiteral_17506/*"btn_bg_12"*/ : &StringLiteral_17508/*"btn_bg_19"*/);
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
      v61 = (System_String_o **)&StringLiteral_17630/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v61 = (System_String_o **)&StringLiteral_17629/*"btn_txt_profile_off"*/;
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
      v62 = (System_String_o **)(kind == 1 ? &StringLiteral_17508/*"btn_bg_19"*/ : &StringLiteral_17506/*"btn_bg_12"*/);
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
      v65 = (System_String_o **)&StringLiteral_17585/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v65 = (System_String_o **)&StringLiteral_17584/*"btn_txt_battlecharacter_off"*/;
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
      v66 = (System_String_o **)(kind == 2 ? &StringLiteral_17508/*"btn_bg_19"*/ : &StringLiteral_17506/*"btn_bg_12"*/);
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
          v70 = (System_String_o **)&StringLiteral_17661/*"btn_txt_voice_on"*/;
          if ( !v30 )
            v70 = (System_String_o **)&StringLiteral_17660/*"btn_txt_voice_off"*/;
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
              v71 = (System_String_o **)(v30 ? &StringLiteral_17508/*"btn_bg_19"*/ : &StringLiteral_17506/*"btn_bg_12"*/);
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
        sub_1BAB678(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17660/*"btn_txt_voice_off"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17506/*"btn_bg_12"*/, 0LL);
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
        sub_1BAB680(statusTabBase, *(_QWORD *)&kind);
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
          ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v79 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
          v83 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
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
          v85 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
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
          if ( !byte_4AB16DA )
          {
            sub_1BAB41C(&RandomLimitCountManager_TypeInfo, *(_QWORD *)&kind);
            byte_4AB16DA = 1;
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
                                     (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
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
          v99 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4AB1EB0 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, isVisible);
    sub_1BAB41C(&StringLiteral_24642/*"wait"*/, v5);
    byte_4AB1EB0 = 1;
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
            (System_String_o *)StringLiteral_24642/*"wait"*/,
            0LL);
          return;
        }
LABEL_13:
        sub_1BAB678(battleChrCamera, isVisible);
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
  if ( (byte_4AB1E89 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, item);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&StringLiteral_11914/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v5);
    byte_4AB1E89 = 1;
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1BAB678(this, item);
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
  int32_t v19; // w3
  System_String_o *v20; // x22
  const MethodInfo *v21; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  const MethodInfo *v24; // x1

  if ( (byte_4AB1E95 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BAB41C(&RandomLimitCountManager_TypeInfo, v5);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BAB41C(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB1E95 = 1;
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
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( System_String__Equals_62056444((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_32739948(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4AB16DA )
    {
      sub_1BAB41C(&RandomLimitCountManager_TypeInfo, method);
      byte_4AB16DA = 1;
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
    sub_1BAB678(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v20 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
  *p_battleLoadAsset = v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v15, v18, v19);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v21);
  battleLoadAsset = this->fields.battleLoadAsset;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  int32_t v14; // w3
  __int64 v15; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x22
  AssetLoader_LoadEndDataHandler_o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4AB1E8F & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, onComplete);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__, v8);
    sub_1BAB41C(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo, v9);
    byte_4AB1E8F = 1;
  }
  v10 = sub_1BAB668(ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = onComplete;
  v15 = v10 + 16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)onComplete, v13, v14);
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
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_62056444(
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
    sub_1BAB678(mainInfo, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v19 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v19, 0LL);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, (int32_t)v18, v20, v21);
  v22 = *p_cardLoadAsset;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, 0, v24, v25);
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
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  AssetData_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4AB1E8D & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, method);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1BAB41C(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB1E8D = 1;
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset,
    (int32_t)StatusImageFolderName,
    v11,
    v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1BAB678(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v14, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v15, v16);
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
  int32_t v14; // w3
  __int64 v15; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x22
  AssetLoader_LoadEndDataHandler_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4AB1E91 & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, onComplete);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BAB41C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__, v8);
    sub_1BAB41C(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo, v9);
    byte_4AB1E91 = 1;
  }
  v10 = sub_1BAB668(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = onComplete;
  v15 = v10 + 16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)onComplete, v13, v14);
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
  StatusImageFolderName = (System_String_o *)System_String__Equals_62056444(
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
    sub_1BAB678(StatusImageFolderName, v12);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v20 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, (int32_t)v19, v21, v22);
  v23 = *p_transformedStatusLoadAsset;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v10,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v23, v24, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, 0, v25, v26);
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
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v26; // x9
  int32_t v27; // w21
  BalanceConfig_c *v28; // x8
  ServantLimitAddMaster_o *v29; // x22
  struct ServantStatusListViewItem_o *v30; // x9
  int32_t v31; // w4
  const MethodInfo *v32; // x5
  struct PartyListViewItem_o *v33; // x8
  ServantStatusListViewItem_o *v34; // x22
  unsigned __int64 v35; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  ServantStatusListViewItem_o *v43; // x1
  Il2CppClass **v44; // x0
  int32_t v45; // w4
  const MethodInfo *v46; // x5
  System_Collections_Generic_List_object__o *v47; // x23
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  ServantStatusListViewItem_o *v53; // x1
  Il2CppClass **v54; // x0
  int32_t v55; // w4
  const MethodInfo *v56; // x5
  System_Collections_Generic_List_object__o *v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  ServantStatusListViewItem_o *v63; // x1
  Il2CppClass **v64; // x0
  int32_t v65; // w4
  const MethodInfo *v66; // x5
  BalanceConfig_c *v67; // x8
  int v68; // w23
  System_Collections_Generic_List_object__o *v69; // x23
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  ServantStatusListViewItem_o *v75; // x1
  Il2CppClass **v76; // x0
  int32_t v77; // w4
  const MethodInfo *v78; // x5
  BalanceConfig_c *v79; // x8
  int v80; // w23
  System_Collections_Generic_List_object__o *v81; // x23
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  ServantStatusListViewItem_o *v87; // x1
  Il2CppClass **v88; // x0
  int32_t v89; // w4
  const MethodInfo *v90; // x5
  System_Collections_Generic_List_object__o *v91; // x23
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  ServantStatusListViewItem_o *v97; // x1
  Il2CppClass **v98; // x0
  int32_t v99; // w4
  const MethodInfo *v100; // x5
  System_Collections_Generic_List_object__o *v101; // x23
  int32_t ServantIdMashu3; // w2
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  ServantStatusListViewItem_o *v108; // x1
  Il2CppClass **v109; // x0
  System_Collections_Generic_List_object__o *v110; // x23
  int32_t v111; // w2
  int32_t v112; // w3
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  ServantStatusListViewItem_o *v116; // x1
  Il2CppClass **v117; // x0
  int32_t v118; // w4
  const MethodInfo *v119; // x5
  System_Collections_Generic_List_object__o *v120; // x23
  int32_t v121; // w2
  int32_t v122; // w3
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  ServantStatusListViewItem_o *v126; // x1
  Il2CppClass **v127; // x0
  int64_t UserId; // x25
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w24
  System_Collections_Generic_List_object__o *v132; // x23
  int32_t v133; // w2
  int32_t v134; // w3
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  ServantStatusListViewItem_o *v138; // x1
  Il2CppClass **v139; // x0
  int32_t v140; // w4
  const MethodInfo *v141; // x5
  System_Collections_Generic_List_object__o *v142; // x23
  int32_t v143; // w2
  int32_t v144; // w3
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  ServantStatusListViewItem_o *v148; // x1
  Il2CppClass **v149; // x0
  ServantVoiceRelationEntity_array *v150; // x20
  signed int max_length; // w8
  unsigned int v152; // w24
  ServantVoiceRelationEntity_o *v153; // x25
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x21
  __int64 v155; // x22
  __int64 v156; // x23
  ServantStatusDialog_o *v157; // x0
  int32_t v158; // w4
  const MethodInfo *v159; // x5
  int32_t v160; // w2
  int32_t v161; // w3
  struct System_Object_array *items; // x8
  _QWORD *v163; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v165; // x1
  Il2CppClass **v166; // x0
  System_Collections_Generic_List_object__o *v167; // x21
  ServantStatusDialog_o *v168; // x0
  int32_t v169; // w4
  const MethodInfo *v170; // x5
  int32_t v171; // w2
  int32_t v172; // w3
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  ServantStatusListViewItem_o *v176; // x1
  Il2CppClass **v177; // x0
  System_Collections_Generic_List_object__o *v178; // x21
  ServantStatusDialog_o *v179; // x0
  int32_t v180; // w4
  const MethodInfo *v181; // x5
  int32_t v182; // w2
  int32_t v183; // w3
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  ServantStatusListViewItem_o *v187; // x1
  Il2CppClass **v188; // x0
  struct System_Collections_Generic_List_string__o *v189; // x8
  const MethodInfo *v190; // x2
  NetworkManager_c *v191; // x0
  Il2CppObject *Item; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *loadVoiceData; // x20
  System_Action_o *v196; // x21
  ServantStatusListViewItem_o *v198; // [xsp+8h] [xbp-78h]
  unsigned __int64 v199; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16

  if ( (byte_4AB1EA1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v3);
    sub_1BAB41C(&CondType_TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__RemoveAt__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1BAB41C(&NetworkManager_TypeInfo, v14);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BAB41C(&Method_ServantStatusDialog_EndLoadVoice__, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BAB41C(&SoundManager_TypeInfo, v19);
    byte_4AB1EA1 = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AB1562 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB1562 = 1;
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
         (const MethodInfo_31B7028 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
    (const MethodInfo_31B6E20 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v24 )
    goto LABEL_162;
  partyItem = v24->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v26 = 0LL;
    v198 = v24;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)partyItem )
        goto LABEL_163;
      v27 = *((_DWORD *)&v24->fields.memberItem + v26);
      v199 = v26;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v28 = BalanceConfig_TypeInfo;
      v29 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      v30 = this->fields.mainInfo;
      if ( !v30 )
        goto LABEL_162;
      if ( !v29 )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v29,
                                                  v27,
                                                  v28->static_fields->ServantLimitMax,
                                                  v30->fields.costumeIds,
                                                  0LL);
      if ( !mainInfo )
        goto LABEL_162;
      v33 = mainInfo->fields.partyItem;
      v34 = mainInfo;
      if ( (int)v33 >= 1 )
        break;
LABEL_119:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_162;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v27, 0LL);
      v150 = relationList;
      if ( !relationList )
        goto LABEL_162;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v152 = 0;
        while ( v152 < max_length )
        {
          v153 = v150->m_Items[v152];
          if ( !v153 )
            goto LABEL_162;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v156 = *(_QWORD *)&v153->fields.relationSvtId.fields.currentCryptoKey;
          v155 = *(_QWORD *)&v153->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v201.fields.currentCryptoKey = v156;
          *(_QWORD *)&v201.fields.fakeValue = v155;
          v157 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v201, 0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v157,
                                                      0,
                                                      (int32_t)v157,
                                                      0,
                                                      v158,
                                                      v159);
          if ( !requestVoiceDataList )
            goto LABEL_162;
          items = requestVoiceDataList->fields._items;
          v163 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_162;
          size = requestVoiceDataList->fields._size;
          v165 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
          }
          else
          {
            v166 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v166[4] = (Il2CppClass *)v165;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v166 + 4), (int32_t)v165, v160, v161);
          }
          v167 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v168 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                            v153->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v168,
                                                      2,
                                                      (int32_t)v168,
                                                      0,
                                                      v169,
                                                      v170);
          if ( !v167 )
            goto LABEL_162;
          v173 = v167->fields._items;
          v174 = Method_System_Collections_Generic_List_string__Add__;
          ++v167->fields._version;
          if ( !v173 )
            goto LABEL_162;
          v175 = v167->fields._size;
          v176 = mainInfo;
          if ( (unsigned int)v175 >= v173->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v167,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
          }
          else
          {
            v177 = &v173->obj.klass + v175;
            v167->fields._size = v175 + 1;
            v177[4] = (Il2CppClass *)v176;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v177 + 4), (int32_t)v176, v171, v172);
          }
          v178 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v179 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                            v153->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v179,
                                                      1,
                                                      (int32_t)v179,
                                                      0,
                                                      v180,
                                                      v181);
          if ( !v178 )
            goto LABEL_162;
          v184 = v178->fields._items;
          v185 = Method_System_Collections_Generic_List_string__Add__;
          ++v178->fields._version;
          if ( !v184 )
            goto LABEL_162;
          v186 = v178->fields._size;
          v187 = mainInfo;
          if ( (unsigned int)v186 >= v184->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v178,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
          }
          else
          {
            v188 = &v184->obj.klass + v186;
            v178->fields._size = v186 + 1;
            v188[4] = (Il2CppClass *)v187;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v188 + 4), (int32_t)v187, v182, v183);
          }
          max_length = v150->max_length;
          if ( (int)++v152 >= max_length )
            goto LABEL_144;
        }
LABEL_163:
        sub_1BAB680(mainInfo, method);
      }
LABEL_144:
      v24 = v198;
      LODWORD(partyItem) = v198->fields.partyItem;
      v26 = v199 + 1;
      if ( (__int64)(v199 + 1) >= (int)partyItem )
        goto LABEL_145;
    }
    v35 = 0LL;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
        goto LABEL_163;
      v37 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v27,
                                                  *((_DWORD *)p_memberItem + v35),
                                                  v31,
                                                  v32);
      if ( !v37 )
        goto LABEL_162;
      v40 = v37->fields._items;
      v41 = Method_System_Collections_Generic_List_string__Add__;
      ++v37->fields._version;
      if ( !v40 )
        goto LABEL_162;
      v42 = v37->fields._size;
      v43 = mainInfo;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &v40->obj.klass + v42;
        v37->fields._size = v42 + 1;
        v44[4] = (Il2CppClass *)v43;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
      }
      if ( v35 >= LODWORD(v34->fields.partyItem) )
        goto LABEL_163;
      v47 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v27,
                                                  *((_DWORD *)p_memberItem + v35),
                                                  v45,
                                                  v46);
      if ( !v47 )
        goto LABEL_162;
      v50 = v47->fields._items;
      v51 = Method_System_Collections_Generic_List_string__Add__;
      ++v47->fields._version;
      if ( !v50 )
        goto LABEL_162;
      v52 = v47->fields._size;
      v53 = mainInfo;
      if ( (unsigned int)v52 >= v50->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v47,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v50->obj.klass + v52;
        v47->fields._size = v52 + 1;
        v54[4] = (Il2CppClass *)v53;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v53, v48, v49);
      }
      if ( v35 >= LODWORD(v34->fields.partyItem) )
        goto LABEL_163;
      v57 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v27,
                                                  *((_DWORD *)p_memberItem + v35),
                                                  v55,
                                                  v56);
      if ( !v57 )
        goto LABEL_162;
      v60 = v57->fields._items;
      v61 = Method_System_Collections_Generic_List_string__Add__;
      ++v57->fields._version;
      if ( !v60 )
        goto LABEL_162;
      v62 = v57->fields._size;
      v63 = mainInfo;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v57,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v60->obj.klass + v62;
        v57->fields._size = v62 + 1;
        v64[4] = (Il2CppClass *)v63;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v63, v58, v59);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v67 = BalanceConfig_TypeInfo;
      v68 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v67 = BalanceConfig_TypeInfo;
      }
      if ( v68 == v67->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v79 = BalanceConfig_TypeInfo;
      v80 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v79 = BalanceConfig_TypeInfo;
      }
      if ( v80 == v79->static_fields->ServantIdMashu1 )
      {
        v81 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v79->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v79);
        if ( v35 >= LODWORD(v34->fields.partyItem) )
          goto LABEL_163;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v35),
                                                    v31,
                                                    v32);
        if ( !v81 )
          goto LABEL_162;
        v84 = v81->fields._items;
        v85 = Method_System_Collections_Generic_List_string__Add__;
        ++v81->fields._version;
        if ( !v84 )
          goto LABEL_162;
        v86 = v81->fields._size;
        v87 = mainInfo;
        if ( (unsigned int)v86 >= v84->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &v84->obj.klass + v86;
          v81->fields._size = v86 + 1;
          v88[4] = (Il2CppClass *)v87;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v87, v82, v83);
        }
        if ( v35 >= LODWORD(v34->fields.partyItem) )
          goto LABEL_163;
        v110 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v35),
                                                    v89,
                                                    v90);
        if ( !v110 )
          goto LABEL_162;
        v113 = v110->fields._items;
        v114 = Method_System_Collections_Generic_List_string__Add__;
        ++v110->fields._version;
        if ( !v113 )
          goto LABEL_162;
        v115 = v110->fields._size;
        v116 = mainInfo;
        if ( (unsigned int)v115 >= v113->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v110,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &v113->obj.klass + v115;
          v110->fields._size = v115 + 1;
          v117[4] = (Il2CppClass *)v116;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v116, v111, v112);
        }
        if ( v35 >= LODWORD(v34->fields.partyItem) )
          goto LABEL_163;
        v120 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v35),
                                                    v118,
                                                    v119);
        if ( !v120 )
          goto LABEL_162;
        v123 = v120->fields._items;
        v124 = Method_System_Collections_Generic_List_string__Add__;
        ++v120->fields._version;
        if ( !v123 )
          goto LABEL_162;
        v125 = v120->fields._size;
        v126 = mainInfo;
        if ( (unsigned int)v125 >= v123->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v120,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
        }
        else
        {
          v127 = &v123->obj.klass + v125;
          v120->fields._size = v125 + 1;
          v127[4] = (Il2CppClass *)v126;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v127 + 4), (int32_t)v126, v121, v122);
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
          v132 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v35 >= LODWORD(v34->fields.partyItem) )
            goto LABEL_163;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v35),
                                                      v31,
                                                      v32);
          if ( !v132 )
            goto LABEL_162;
          v135 = v132->fields._items;
          v136 = Method_System_Collections_Generic_List_string__Add__;
          ++v132->fields._version;
          if ( !v135 )
            goto LABEL_162;
          v137 = v132->fields._size;
          v138 = mainInfo;
          if ( (unsigned int)v137 >= v135->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v132,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &v135->obj.klass + v137;
            v132->fields._size = v137 + 1;
            v139[4] = (Il2CppClass *)v138;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v139 + 4), (int32_t)v138, v133, v134);
          }
          if ( v35 >= LODWORD(v34->fields.partyItem) )
            goto LABEL_163;
          v142 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v35),
                                                      v140,
                                                      v141);
          if ( !v142 )
            goto LABEL_162;
          v145 = v142->fields._items;
          v146 = Method_System_Collections_Generic_List_string__Add__;
          ++v142->fields._version;
          if ( !v145 )
            goto LABEL_162;
          v147 = v142->fields._size;
          v148 = mainInfo;
          if ( (unsigned int)v147 >= v145->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v142,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v149 = &v145->obj.klass + v147;
            v142->fields._size = v147 + 1;
            v149[4] = (Il2CppClass *)v148;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v149 + 4), (int32_t)v148, v143, v144);
          }
          if ( v35 >= LODWORD(v34->fields.partyItem) )
            goto LABEL_163;
          v101 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_108:
      LODWORD(v33) = v34->fields.partyItem;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_119;
    }
    v69 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v67->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v67);
    if ( v35 >= LODWORD(v34->fields.partyItem) )
      goto LABEL_163;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v35),
                                                v65,
                                                v66);
    if ( !v69 )
      goto LABEL_162;
    v72 = v69->fields._items;
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++v69->fields._version;
    if ( !v72 )
      goto LABEL_162;
    v74 = v69->fields._size;
    v75 = mainInfo;
    if ( (unsigned int)v74 >= v72->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v69,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &v72->obj.klass + v74;
      v69->fields._size = v74 + 1;
      v76[4] = (Il2CppClass *)v75;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v75, v70, v71);
    }
    if ( v35 >= LODWORD(v34->fields.partyItem) )
      goto LABEL_163;
    v91 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v35),
                                                v77,
                                                v78);
    if ( !v91 )
      goto LABEL_162;
    v94 = v91->fields._items;
    v95 = Method_System_Collections_Generic_List_string__Add__;
    ++v91->fields._version;
    if ( !v94 )
      goto LABEL_162;
    v96 = v91->fields._size;
    v97 = mainInfo;
    if ( (unsigned int)v96 >= v94->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v94->obj.klass + v96;
      v91->fields._size = v96 + 1;
      v98[4] = (Il2CppClass *)v97;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v97, v92, v93);
    }
    if ( v35 >= LODWORD(v34->fields.partyItem) )
      goto LABEL_163;
    v101 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v35),
                                                v99,
                                                v100);
    if ( !v101 )
      goto LABEL_162;
    v105 = v101->fields._items;
    v106 = Method_System_Collections_Generic_List_string__Add__;
    ++v101->fields._version;
    if ( !v105 )
      goto LABEL_162;
    v107 = v101->fields._size;
    v108 = mainInfo;
    if ( (unsigned int)v107 >= v105->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v101,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    }
    else
    {
      v109 = &v105->obj.klass + v107;
      v101->fields._size = v107 + 1;
      v109[4] = (Il2CppClass *)v108;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v109 + 4), (int32_t)v108, v103, v104);
    }
    goto LABEL_108;
  }
LABEL_145:
  v189 = this->fields.requestVoiceDataList;
  if ( !v189 )
LABEL_162:
    sub_1BAB678(mainInfo, method);
  if ( v189->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v190);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AB1562 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB1562 = 1;
  }
  v191 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v191 = NetworkManager_TypeInfo;
  }
  if ( v191->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v193, v194);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v196 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v196, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v21 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v196, 1, 0LL);
  return v21;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v11; // x21
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4AB1EA3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog_EndPlayVoice__, v3);
    sub_1BAB41C(&StringLiteral_6005/*"EndWaitVoice"*/, v4);
    byte_4AB1EA3 = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_35729648(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69785200(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6005/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v6, v7);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v8, v9);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v11 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v11, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1BAB3C0(p_voicePlayer, 0, v13, v14);
      return;
    }
LABEL_13:
    sub_1BAB678(voiceTabListViewManager, method);
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

  if ( (byte_4AB1EE6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_1BAB41C(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AB1EE6 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_3163D90 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1BAB678(Instance, v8);
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
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusFlavorTextListViewManager_o *v13; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v14; // x21
  struct ServantStatusFlavorTextListViewManager_o *v15; // x8

  v4 = this;
  if ( (byte_4AB1EE5 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_ServantCommentEntity__TypeInfo, setMode);
    sub_1BAB41C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectFlavor__, v6);
    this = (ServantStatusDialog_o *)sub_1BAB41C(&Method_ServantStatusDialog__UpdateProfileList_b__234_0__, v7);
    byte_4AB1EE5 = 1;
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
    v10 = (System_Action_object__o *)sub_1BAB668(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__234_0__, 0LL);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v10;
      sub_1BAB3C0(
        (ServantStatusBattleListViewItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int32_t)v10,
        v11,
        v12);
      if ( !setMode )
        return;
      v13 = v4->fields.profileTabListViewManager;
      v14 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
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
    sub_1BAB678(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( tabInitList->max_length <= 1 )
    sub_1BAB680(this, setMode);
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
    sub_1BAB678(this, *(_QWORD *)&imageLimitCount);
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
    sub_1BAB678(this, imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1BAB678(this, method);
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

  if ( (byte_4AB1EEA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AtlasManager_TypeInfo, v3);
    sub_1BAB41C(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_4AB1EEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v7);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB1EEB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_AssetData__TypeInfo, _);
    sub_1BAB41C(&Method_ServantStatusDialog__LoadTransformedResource_b__194_1__, v4);
    byte_4AB1EEB = 1;
  }
  v5 = (System_Action_object__o *)sub_1BAB668(System_Action_AssetData__TypeInfo);
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

  if ( (byte_4AB1EEC & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, _);
    sub_1BAB41C(&Method_ServantStatusDialog_EndLoadTransformedResource__, v4);
    byte_4AB1EEC = 1;
  }
  v5 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v8 = ServantStatusDialog__CoWaitForEndOfFrame(v6, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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

  if ( (byte_4AB1EED & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BAB41C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v6);
    byte_4AB1EED = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30637300((CommonUI_o *)Instance, v9, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v10, 0LL),
        (v10 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(v10, v11);
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

  if ( (byte_4AB1EEE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&int___TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4AB1EEE = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_354DC4C *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_354EDE4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v21, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1BAB4C4(int___TypeInfo, 1LL);
          if ( entity )
          {
            v19 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1BAB4C4(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1BAB680(Master_object, v11);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v15 )
              {
                ServantCommentMaster__SetOpen_40020760(v15, v18, v19, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BAB678(Master_object, v11);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EB6BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EB674;
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
  if ( (byte_4AB26AC & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isModify);
    byte_4AB26AC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EB838;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EB7E0;
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
  if ( (byte_4AB26AF & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isModify);
    byte_4AB26AF = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isNeedSort, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EB730;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EB6D8;
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
  if ( (byte_4AB26AD & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isModify);
    sub_1BAB41C(&int_TypeInfo, v9);
    byte_4AB26AD = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&questId, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EB7B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EB754;
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
  if ( (byte_4AB26AE & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isModify);
    sub_1BAB41C(&int_TypeInfo, v10);
    byte_4AB26AE = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(bool_TypeInfo, v22, isNeedSort, *(_QWORD *)&questId, callback);
  v18[1] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v18, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4AB26B4 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)sub_1BAB41C(
                                                                  &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                  method);
    byte_4AB26B4 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1BAB678(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BAB668(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__195_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
    sub_1BAB678(this, data);
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
    sub_1BAB678(this, data);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4AB26B0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    sub_1BAB41C(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__, v7);
    byte_4AB26B0 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BFD2F8(v9);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BFD2F8(v9);
      _4__this = **(struct ServantStatusDialog_o ***)(v11 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BAB678(_4__this, isDecide);
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BFD2F8(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1BFD2F8(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30637300(klass, _9__1, 0LL);
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
  if ( (byte_4AB26B1 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass217_0_o *)sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4AB26B1 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v6,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1BAB678(this, method);
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

  if ( (byte_4AB26B2 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4AB26B2 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30637300(mainInfo, 0LL, 0LL);
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
          LODWORD(mainInfo->fields.servantEquipFramePurchaseMenuPrefab) = index;
        else
          HIDWORD(mainInfo->fields.servantEquipFramePurchaseMenuPrefab) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.questResetConfirmDialog) = isRandomOn;
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
    sub_1BAB678(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4AB26B3 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BAB41C(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    byte_4AB26B3 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BFD2F8(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BFD2F8(v3);
  mainInfo = **(CommonUI_o ***)(v9 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30637300(mainInfo, 0LL, 0LL);
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
          LODWORD(mainInfo->fields.servantEquipFramePurchaseMenuPrefab) = index;
        else
          HIDWORD(mainInfo->fields.servantEquipFramePurchaseMenuPrefab) = index;
        isRandomOn = this->fields.isRandomOn;
        if ( !this->fields.isOwnSetting )
        {
          BYTE2(mainInfo->fields.questResetConfirmDialog) = isRandomOn;
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
    sub_1BAB678(mainInfo, isDecide);
  }
LABEL_21:
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v17->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_34711652((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v18 = (Il2CppObject *)this->fields.__4__this;
  if ( !v18 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v18[12].monitor;
  v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BAB668(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v20, v18, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v20, 0LL);
}