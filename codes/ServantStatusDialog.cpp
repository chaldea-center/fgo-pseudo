void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A56D9A & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_441/*"#4C4C4C"*/);
    byte_4A56D9A = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_441/*"#4C4C4C"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_441/*"#4C4C4C"*/,
    v1,
    v2);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A56D99 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A56D99 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v3 = (struct System_Boolean_array *)sub_1B88658(bool___TypeInfo, 4LL);
  this->fields.tabInitList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tabInitList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dictChangeSvtVoiceIdList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestVoiceDataList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceDataList, (int32_t)v12, v13, v14);
  v15 = StringLiteral_24600/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_24600/*"wait"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultAnimationName, v15, v16, v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A56D44 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56D44 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.battleLoadAsset = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, v5, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v8);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
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
  int32_t v33; // w3
  struct UICamera_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct UICamera_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  char v40[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v41[4]; // [xsp+8h] [xbp-58h] BYREF
  char v42[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v43[4]; // [xsp+18h] [xbp-48h] BYREF
  char v44[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A56D3B & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TouchEffectManager_TypeInfo);
    sub_1B885B0(&UICamera_TypeInfo);
    sub_1B885B0(&StringLiteral_9886/*"OnDragEnd"*/);
    sub_1B885B0(&StringLiteral_9907/*"OnHover"*/);
    sub_1B885B0(&StringLiteral_9939/*"OnPress"*/);
    sub_1B885B0(&StringLiteral_9949/*"OnScrollStop"*/);
    byte_4A56D3B = 1;
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
    TouchEffectManager__UnPress(0LL);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(last, 0LL, 0LL) )
    {
      v5 = currentTouch->fields.last;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v5, (System_String_o *)StringLiteral_9886/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v10 = currentTouch->fields.dragged;
      v44[0] = 0;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44, v7, v8, v9);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v10, (System_String_o *)StringLiteral_9939/*"OnPress"*/, v11, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v16 = currentTouch->fields.current;
      v43[0] = 1;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v13, v14, v15);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v16, (System_String_o *)StringLiteral_9907/*"OnHover"*/, v17, 0LL);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v42[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v42, v19, v20, v21);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9939/*"OnPress"*/, v22, 0LL);
    v41[0] = 1;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v41, v23, v24, v25);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9907/*"OnHover"*/, v26, 0LL);
    v40[0] = 0;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v40, v27, v28, v29);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9949/*"OnScrollStop"*/, v30, 0LL);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->current, 0, v32, v33);
  v34 = UICamera_TypeInfo->static_fields;
  v34->currentCamera = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->currentCamera, 0, v35, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->currentTouch = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->currentTouch, 0, v38, v39);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v10; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusBattleListViewItem_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A56D5D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    byte_4A56D5D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager
    || (battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                             battleTabListViewManager,
                                                                             method)) == 0LL )
  {
    sub_1B8880C(battleTabListViewManager, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)battleTabListViewManager,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B8880C(v4, v5);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v18.fields._current, v5);
    if ( !Item )
      sub_1B8880C(0LL, v8);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v8);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B8880C(DispLimitCount, v10);
    if ( (_DWORD)DispLimitCount == mainInfo->fields.dispLimitCount )
    {
      v12 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v10);
      if ( !v12 )
        sub_1B8880C(0LL, v13);
      index = (unsigned int)v12->fields.index;
      v16 = this->fields.battleTabListViewManager;
      this->fields.confirmDispLv = index;
      if ( !v16 )
        sub_1B8880C(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v16, index, v14);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  int32_t v3; // w20
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 confirmDispLv; // x8
  int32_t v8; // w20
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  bool v11; // w22
  __int64 i; // x24
  unsigned __int64 v13; // x29
  __int64 illustratorId; // x28
  SkillInfo_o *v15; // x0
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x23
  TreasureDvcInfo_o *v19; // x24
  TreasureDvcInfo_o *v20; // x25
  SkillInfo_array *v21; // x21
  SkillInfo_array *v22; // x22
  int32_t nextLimitCount; // w27
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v24; // x26
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // [xsp+18h] [xbp-98h]
  bool v27; // [xsp+2Ch] [xbp-84h]
  SkillInfo_array *v28; // [xsp+30h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-78h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-68h] BYREF

  v3 = dispLv;
  if ( (byte_4A56D4D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndBattleConfirm__);
    byte_4A56D4D = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v28 = 0LL;
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
    sub_1B88814(svtId, *(_QWORD *)&dispLv);
  v8 = (int)svtId;
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  v9 = dispSelectList->m_Items[confirmDispLv + 1];
  ServantStatusListViewItem__GetNpInfo_32670972(svtId, &tdInfo, v8, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetNpInfo_32670972(svtId, &info, v9, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_32670064(svtId, &skillInfoList, v8, 0LL);
  svtId = this->fields.mainInfo;
  if ( !svtId )
    goto LABEL_34;
  ServantStatusListViewItem__GetSkillInfo_32670064(svtId, &v28, v9, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_34;
  v11 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v13 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    illustratorId = svtId->fields.commandCodeCommentEntity->fields.illustratorId;
    if ( (__int64)v13 >= illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_34;
    if ( v13 >= skillInfoList->max_length )
      goto LABEL_35;
    if ( !v28 )
      goto LABEL_34;
    if ( v13 >= v28->max_length )
      goto LABEL_35;
    v15 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v28->obj.klass + i);
    if ( !v15 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v15 = (SkillInfo_o *)*((_QWORD *)&v28->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v15, *(SkillInfo_o **)&dispLv, 0LL) )
      goto LABEL_28;
  }
  if ( v11 )
  {
    ServantStatusDialog__SetChangeBattleResource(this, 0, v10);
    return;
  }
LABEL_28:
  v27 = !v11;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v8, 0LL);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0LL);
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v20 = info;
  v19 = tdInfo;
  v22 = v28;
  v21 = skillInfoList;
  nextLimitCount = LimitCountByImageLimitCostumeIn;
  v24 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1B887FC(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndBattleConfirm__,
    v25);
  svtId = this->fields.mainInfo;
  if ( !svtId
    || (svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL),
        !servantStatusBattleConfirmDialog) )
  {
LABEL_34:
    sub_1B8880C(svtId, *(_QWORD *)&dispLv);
  }
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    v19,
    v20,
    v27,
    v21,
    v22,
    (__int64)v13 < illustratorId,
    v24,
    (int32_t)svtId,
    nowLimitCount,
    nextLimitCount,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4A56D7C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D7C = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)this, 4, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  _DWORD *monitor; // x8
  System_Action_object__o *v6; // x20
  const MethodInfo *v7; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4A56D79 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssetData__TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__);
    byte_4A56D79 = 1;
  }
  monitor = v4[32].monitor;
  if ( !monitor )
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  monitor[64] = dispLv;
  v6 = (System_Action_object__o *)sub_1B887FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_ServantStatusDialog_EnddChangeCommandResourceLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad((ServantStatusDialog_o *)v4, (System_Action_AssetData__o *)v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4A56D80 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D80 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.iconLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)this, 5, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_4A56D83 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D83 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.portraitLimitCount = dispLv,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)this, 7, 0LL),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4A56D7B & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D7B = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)mainInfo, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *statusLoadAsset; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *cardLoadAsset; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *battleLoadAsset; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  System_String_o *transformedStatusLoadAsset; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v23; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v29; // w2
  int v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A56D5B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56D5B = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, 0, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.statusLoadAsset, 0LL) )
  {
    statusLoadAsset = this->fields.statusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(statusLoadAsset, 0LL);
    this->fields.statusLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v9, v10);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardLoadAsset, 0, v12, v13);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.battleLoadAsset, 0LL) )
  {
    battleLoadAsset = this->fields.battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(battleLoadAsset, 0LL);
    this->fields.battleLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, 0, v15, v16);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.transformedStatusLoadAsset, 0, v19, v20);
  }
  ServantStatusDialog__StopVoice(this, v17);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_44;
  size = requestVoiceDataList->fields._size;
  v23 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0LL);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v25, v26);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) < 1 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
LABEL_44:
    sub_1B8880C(statusTabListViewManager, callback);
  v29 = voiceDataList->fields._size;
  v30 = voiceDataList->fields._version + 1;
  voiceDataList->fields._size = 0;
  voiceDataList->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v29, 0LL);
LABEL_39:
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0LL);
  statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
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

  if ( (byte_4A56D72 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo);
    byte_4A56D72 = 1;
  }
  v4 = sub_1B887FC(ServantStatusDialog__CoWaitForEndOfFrame_d__195_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__195___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *battleChr; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4A56D4B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D4B = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
    UnityEngine_Object__Destroy_69459380(v7, 0LL);
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
  ServantStatusBattleConfirmDialog__Close_31635476(servantStatusBattleConfirmDialog, 0LL, method);
  if ( isDecide )
  {
    tabInitList = this->fields.tabInitList;
    if ( tabInitList )
    {
      if ( !tabInitList->max_length )
        sub_1B88814(servantStatusBattleConfirmDialog, isDecide);
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
    sub_1B8880C(servantStatusBattleConfirmDialog, isDecide);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4A56D7D & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
LABEL_8:
    sub_1B8880C(Instance, v5);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *battleActor; // x8

  if ( (byte_4A56D50 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D50 = 1;
  }
  this->fields.isBattlePlay = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_11;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_11;
  v6 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)mainInfo,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    (ServantLimitImageMaster_o *)mainInfo,
                                                    v6,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (battleActor = this->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(mainInfo, v4);
  }
  BattleFBXComponent__SetEvolutionLevel(battleActor, v6, (int32_t)mainInfo, 0LL);
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
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56D66 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D66 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1B8880C(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56D64 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D64 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    sub_1B8880C(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0LL);
}


void __fastcall ServantStatusDialog__EndCommandCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A56D41 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssetData__TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndTransformedStatusLoad__);
    byte_4A56D41 = 1;
  }
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndTransformedStatusLoad__, 0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
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
  int32_t v24; // w20
  int32_t v25; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v28; // x22
  struct ServantStatusListViewItem_o *v29; // x8
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v31; // x21
  int32_t kind; // w8
  bool v33; // w8
  bool v34; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v37; // x8
  bool *v38; // x10
  struct ServantStatusListViewItem_o *v39; // x8
  ServantCommentMaster_o *v40; // x21
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v45; // x1
  struct ServantStatusListViewItem_o *v46; // x8
  CommandCodeEntity_o *commandCodeEntity; // x0
  UIRangeLabel_o *v48; // x21
  UnityEngine_Object_o *v49; // x21
  const MethodInfo *v50; // x2
  UILabel_o *v51; // x21
  ServantLimitAddMaster_o *v52; // x21
  int32_t v53; // w8
  char v54; // w21
  System_String_o *overwriteServantDetailName; // x22
  struct ServantStatusListViewItem_o *v56; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct ServantStatusListViewItem_o *v58; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v61; // x22
  struct ServantStatusListViewItem_o *v62; // x8
  int32_t v63; // w2
  int32_t limitCount; // w1
  int32_t v65; // w8
  struct ServantStatusListViewItem_o *v66; // x9
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
  struct ServantStatusListViewItem_o *v81; // x8
  struct UserServantCollectionEntity_o *v82; // x8
  struct UIRangeLabel_o *v83; // x21
  struct ServantEntity_o *v84; // x22
  __int64 v85; // x23
  __int64 v86; // x24
  int32_t v87; // w1
  UnityEngine_Object_o *servantClassNameLabel; // x21
  struct ServantStatusListViewItem_o *v89; // x8
  UILabel_o *v90; // x21
  struct ServantStatusListViewItem_o *v91; // x8
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v93; // x8
  ServantLimitImageMaster_o *v94; // x21
  UILabel_o *v95; // x22
  struct ServantStatusListViewItem_o *v96; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v98; // x22
  __int64 v99; // x23
  int32_t v100; // w22
  struct UILabel_o *v101; // x23
  System_String_o *mText; // x25
  System_String_o *v103; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v105; // x0
  System_String_o *v106; // x1
  UILabel_o *v107; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v109; // x21
  __int64 *v110; // x8
  struct ServantStatusListViewItem_o *v111; // x8
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UnityEngine_GameObject_o *v113; // x0
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x2
  int32_t v116; // w8
  unsigned int v117; // w8
  const MethodInfo *v118; // x1
  unsigned int v119; // w8
  bool v120; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4A56D39 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_11852/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_1B885B0(&StringLiteral_11851/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_11853/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_1B885B0(&StringLiteral_11854/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1B885B0(&StringLiteral_11859/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_11858/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_1B885B0(&StringLiteral_4056/*"CancelInput"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5974/*"EndLoadInit"*/);
    byte_4A56D39 = 1;
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
      v6 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v6, LocalPositionX + 0.0, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_241;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_241;
      v10 = baseObject;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      v12 = GameObjectExtensions__GetLocalPositionX(v11, 0LL);
      GameObjectExtensions__SetLocalPositionX(v10, v12 + (float)changeTransformAddTabMargin, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_241;
      v13 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_241;
      v14 = baseObject;
      v15 = v13 + changeTransformAddTabMargin;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v17 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      GameObjectExtensions__SetLocalPositionX(v14, v17 + (float)v15, 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_241;
      v18 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_241;
      v19 = baseObject;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v21 = GameObjectExtensions__GetLocalPositionX(v20, 0LL);
      GameObjectExtensions__SetLocalPositionX(v19, v21 + (float)(v18 + v15), 0LL);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v22 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_241;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      v22 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v22, 0LL);
  }
  v23 = this->fields.mainInfo;
  if ( !v23 )
    goto LABEL_241;
  if ( v23->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v24 = 0;
        v25 = 21;
        break;
      case 4:
      case 0x16:
        v24 = 0;
        v25 = 22;
        break;
      case 5:
      case 0x17:
        v24 = 0;
        v25 = 23;
        break;
      case 6:
      case 0x18:
        v24 = 0;
        v25 = 24;
        break;
      case 7:
      case 0x19:
        v24 = 0;
        v25 = 25;
        break;
      case 8:
      case 0x1A:
        v24 = 0;
        v25 = 26;
        break;
      case 9:
      case 0x1B:
        v24 = 0;
        v25 = 27;
        break;
      case 0x1D:
      case 0x20:
        v24 = 0;
        v25 = 32;
        break;
      default:
        v24 = 0;
        v25 = 20;
        break;
    }
  }
  else
  {
    svtEntity = v23->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_241;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_37688364(106, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v28 = this;
    else
      v28 = 0LL;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v29 = this->fields.mainInfo;
      if ( !v29 )
        goto LABEL_241;
      favoriteUserSvtId = v29->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v31 = v28;
      else
        v31 = 0LL;
      if ( favoriteUserSvtId < 1 )
      {
        v33 = 0;
        v31 = this;
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
            v33 = 0;
            if ( !v31 )
              goto LABEL_241;
          }
          else
          {
            v33 = kind != 12;
            if ( !v31 )
              goto LABEL_241;
          }
        }
        else
        {
          v33 = 0;
          v31 = v28;
          if ( !v28 )
            goto LABEL_241;
        }
      }
    }
    else
    {
      v33 = 0;
      v31 = this;
    }
    v31->fields.isUseFavorite = v33;
    v34 = SvtType__IsOrganization(type, 0LL) && this->fields.kind != 12;
    this->fields.isUsePush = v34;
    baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0LL);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v24 = 0;
      v25 = 28;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v65 = this->fields.kind;
        switch ( v65 )
        {
          case 3:
          case 12:
            v24 = 0;
            v25 = 12;
            break;
          case 4:
          case 13:
            v24 = 0;
            v25 = 13;
            break;
          case 5:
          case 14:
            v24 = 0;
            v25 = 14;
            break;
          case 6:
          case 15:
            v24 = 0;
            v25 = 15;
            break;
          case 7:
          case 16:
            v24 = 0;
            v25 = 16;
            break;
          case 8:
          case 17:
            v24 = 0;
            v25 = 17;
            break;
          case 9:
          case 18:
            v24 = 0;
            v25 = 18;
            break;
          case 19:
            v24 = 0;
            v25 = 19;
            break;
          case 29:
          case 31:
            v24 = 0;
            v25 = 31;
            break;
          default:
            v120 = v65 == 33;
            v25 = 11;
            v24 = v120;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v73 = this->fields.kind, v73 == 36) )
        {
          v24 = 0;
          goto LABEL_64;
        }
        v24 = 0;
        if ( v73 == 29 )
          v25 = 30;
        else
          v25 = 10;
      }
    }
  }
  this->fields.kind = v25;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_241;
  max_length = tabInitList->max_length;
  v37 = 0LL;
  v38 = &tabInitList->m_Items[4];
  do
  {
    if ( v37 >= max_length )
      sub_1B88814(baseObject, method);
    v38[v37++] = 0;
  }
  while ( v37 != 4 );
  v39 = this->fields.mainInfo;
  if ( !v39 )
    goto LABEL_241;
  if ( v39->fields.userSvtCollectionEntity )
  {
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v40 = (ServantCommentMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v40 )
      goto LABEL_241;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v40, (int32_t)baseObject, 0LL);
    this->fields.newProfileList = NewProfileEntities;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v42,
      v43);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0LL);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_241;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v45);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_241;
  TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)baseObject, 1, 0, 0, 0LL);
  v46 = this->fields.mainInfo;
  if ( !v46 )
    goto LABEL_241;
  commandCodeEntity = v46->fields.commandCodeEntity;
  if ( !commandCodeEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !this->fields.mainInfo )
      goto LABEL_241;
    v52 = (ServantLimitAddMaster_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
    if ( !v52 )
      goto LABEL_241;
    baseObject = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                               v52,
                                               (int32_t)baseObject,
                                               0LL);
    v53 = this->fields.kind;
    v54 = (char)baseObject;
    if ( (v53 & 0xFFFFFFFE) == 4 )
    {
      overwriteServantDetailName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)baseObject & 1) == 0 )
      {
        v56 = this->fields.mainInfo;
        if ( !v56 )
          goto LABEL_241;
        servantLeaderInfo = v56->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_241;
        overwriteServantDetailName = servantLeaderInfo->fields.overwriteServantDetailName;
      }
      baseObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteServantDetailName, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v58 = this->fields.mainInfo;
        if ( !v58 )
          goto LABEL_241;
        if ( (v54 & 1) != 0 )
        {
          baseObject = (UnityEngine_GameObject_o *)v58->fields.servantLeaderInfo;
          if ( !baseObject )
            goto LABEL_241;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)baseObject, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)baseObject,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !this->fields.mainInfo )
            goto LABEL_241;
          v61 = (ServantLimitImageMaster_o *)baseObject;
          baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
          if ( !v61 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v61,
                                                     (int32_t)baseObject,
                                                     LimitCountByImageLimitCostumeIn,
                                                     0LL);
          v62 = this->fields.mainInfo;
          if ( !v62 )
            goto LABEL_241;
          v63 = (int)baseObject;
          baseObject = (UnityEngine_GameObject_o *)v62->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = -1;
        }
        else
        {
          v78 = v58->fields.servantLeaderInfo;
          if ( !v78 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v58->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          limitCount = v78->fields.limitCount;
          v63 = -1;
        }
        overwriteServantDetailName = ServantEntity__getName((ServantEntity_o *)baseObject, limitCount, v63, 0LL);
      }
      baseObject = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
      if ( !baseObject )
        goto LABEL_241;
      v79 = overwriteServantDetailName;
LABEL_174:
      UIRangeLabel__Set((UIRangeLabel_o *)baseObject, v79, 0LL, 1, 0, 0LL);
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(servantClassNameLabel, 0LL, 0LL);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v89 = this->fields.mainInfo;
        if ( !v89 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)v89->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v90 = this->fields.servantClassNameLabel;
        baseObject = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)baseObject, 0LL);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, 0LL);
        }
        else
        {
          v91 = this->fields.mainInfo;
          if ( !v91 )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)v91->fields.svtEntity;
          if ( !baseObject )
            goto LABEL_241;
          baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0LL);
        }
        method = (const MethodInfo *)baseObject;
        if ( !v90 )
          goto LABEL_241;
        UILabel__set_text(v90, (System_String_o *)baseObject, 0LL);
      }
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
        goto LABEL_221;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v93 = this->fields.mainInfo;
      if ( !v93 )
        goto LABEL_241;
      if ( v93->fields.userSvtEntity )
      {
        v94 = (ServantLimitImageMaster_o *)baseObject;
        v95 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
        if ( !v95 )
          goto LABEL_241;
        UILabel__set_text(v95, (System_String_o *)baseObject, 0LL);
        v96 = this->fields.mainInfo;
        if ( !v96 )
          goto LABEL_241;
        userSvtEntity = v96->fields.userSvtEntity;
        if ( !userSvtEntity )
          goto LABEL_241;
        v99 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v98 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v99;
        *(_QWORD *)&v122.fields.fakeValue = v98;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v122,
                                                   0LL);
        if ( !v94 )
          goto LABEL_241;
        v100 = (int)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v94,
                                                   (int32_t)baseObject,
                                                   3,
                                                   0LL);
        if ( ((unsigned __int8)baseObject & 1) == 0 )
          goto LABEL_214;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v94,
                                                   (System_String_o *)StringLiteral_11854/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v100,
                                                   0LL);
        v101 = this->fields.battleExplanationLabel;
        if ( !v101 )
          goto LABEL_241;
        mText = v101->fields.mText;
        v103 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v94,
                                                        v100,
                                                        3,
                                                        0LL);
        v105 = System_String__Format(v103, LimitCountSealedServantName, 0LL);
        v106 = System_String__Concat_61707032(mText, v105, 0LL);
        v107 = v101;
      }
      else
      {
        userSvtCollectionEntity = v93->fields.userSvtCollectionEntity;
        v109 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v110 = &StringLiteral_11852/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v110 = &StringLiteral_11853/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v110, 0LL);
        if ( !v109 )
          goto LABEL_241;
        v106 = (System_String_o *)baseObject;
        v107 = v109;
      }
      UILabel__set_text(v107, v106, 0LL);
LABEL_214:
      v111 = this->fields.mainInfo;
      if ( !v111 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
      if ( !baseObject )
        goto LABEL_241;
      IsTransformServant_k__BackingField = v111->fields._IsTransformServant_k__BackingField;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
      if ( !baseObject )
        goto LABEL_241;
      if ( IsTransformServant_k__BackingField )
      {
        UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
        baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
        if ( !baseObject )
          goto LABEL_241;
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v113, 177.0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
      }
      goto LABEL_221;
    }
    if ( (unsigned int)(v53 - 6) <= 2 )
    {
      v74 = this->fields.mainInfo;
      if ( !v74 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)v74->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
      servantNameRangeLabel = this->fields.servantNameRangeLabel;
      if ( (v54 & 1) != 0 )
      {
        v76 = -1;
        v77 = 0;
      }
      else
      {
        v77 = -1;
        v76 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v76, v77, 0LL);
      if ( !servantNameRangeLabel )
        goto LABEL_241;
      v79 = (System_String_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)servantNameRangeLabel;
      goto LABEL_174;
    }
    v66 = this->fields.mainInfo;
    if ( !v66 )
      goto LABEL_241;
    v67 = v66->fields.userSvtEntity;
    if ( v67 )
    {
      if ( (v54 & 1) == 0 )
      {
        v83 = this->fields.servantNameRangeLabel;
        v84 = v66->fields.svtEntity;
        v86 = *(_QWORD *)&v67->fields.limitCount.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v67->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v121.fields.currentCryptoKey = v86;
        *(_QWORD *)&v121.fields.fakeValue = v85;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v121,
                                                   0LL);
        if ( !v84 )
          goto LABEL_241;
        v87 = (int)baseObject;
        v72 = -1;
        baseObject = (UnityEngine_GameObject_o *)v84;
        goto LABEL_172;
      }
      v68 = UserServantEntity__getCardImageLimitCount(v67, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v69 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v68, 0LL);
      baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseObject )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)baseObject,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this->fields.mainInfo )
        goto LABEL_241;
      v70 = (ServantLimitImageMaster_o *)baseObject;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
      if ( !v70 )
        goto LABEL_241;
      baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 v70,
                                                 (int32_t)baseObject,
                                                 v69,
                                                 0LL);
      v71 = this->fields.mainInfo;
      if ( !v71 )
        goto LABEL_241;
      v72 = (int)baseObject;
      baseObject = (UnityEngine_GameObject_o *)v71->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    else
    {
      if ( (v54 & 1) == 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)v66->fields.svtEntity;
        if ( !baseObject )
          goto LABEL_241;
        v83 = this->fields.servantNameRangeLabel;
        v87 = -1;
        v72 = -1;
        goto LABEL_172;
      }
      if ( v66->fields.userSvtCollectionEntity )
      {
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !baseObject )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)baseObject,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !this->fields.mainInfo )
          goto LABEL_241;
        v80 = (ServantLimitImageMaster_o *)baseObject;
        baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(this->fields.mainInfo, 0LL);
        v81 = this->fields.mainInfo;
        if ( !v81 )
          goto LABEL_241;
        v82 = v81->fields.userSvtCollectionEntity;
        if ( !v82 )
          goto LABEL_241;
        if ( !v80 )
          goto LABEL_241;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   v80,
                                                   (int32_t)baseObject,
                                                   v82->fields.maxLimitCount,
                                                   0LL);
        v66 = this->fields.mainInfo;
        if ( !v66 )
          goto LABEL_241;
        v72 = (int)baseObject;
      }
      else
      {
        v72 = 0;
      }
      baseObject = (UnityEngine_GameObject_o *)v66->fields.svtEntity;
      if ( !baseObject )
        goto LABEL_241;
    }
    v83 = this->fields.servantNameRangeLabel;
    v87 = -1;
LABEL_172:
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)baseObject, v87, v72, 0LL);
    if ( !v83 )
      goto LABEL_241;
    v79 = (System_String_o *)baseObject;
    baseObject = (UnityEngine_GameObject_o *)v83;
    goto LABEL_174;
  }
  v48 = this->fields.servantNameRangeLabel;
  baseObject = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(commandCodeEntity, 0LL);
  if ( !v48 )
    goto LABEL_241;
  UIRangeLabel__Set(v48, (System_String_o *)baseObject, 0LL, 1, 0, 0LL);
  v49 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    v51 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11858/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, 0LL);
    if ( v51 )
    {
      UILabel__set_text(v51, (System_String_o *)baseObject, 0LL);
      goto LABEL_221;
    }
LABEL_241:
    sub_1B8880C(baseObject, method);
  }
LABEL_221:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_241;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v50);
  ServantStatusDialog__SetMark(this, v114);
  v116 = this->fields.kind;
  if ( v116 > 28 )
  {
    v117 = v116 - 30;
    if ( v117 < 7 )
    {
      v24 = dword_BED56C[v117];
      goto LABEL_230;
    }
LABEL_228:
    v24 = 0;
    goto LABEL_230;
  }
  if ( v116 == 10 )
  {
    v24 = 1;
    goto LABEL_230;
  }
  if ( v116 != 11 )
  {
    v24 = 1;
    if ( v116 != 28 )
      goto LABEL_228;
  }
LABEL_230:
  ServantStatusDialog__SetTabKind(this, v24, v115);
  v119 = this->fields.kind;
  this->fields.isBattlePlay = 0;
  if ( v119 - 10 < 0x13 || v119 <= 0x24 && ((1LL << v119) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5974/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v118);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_4056/*"CancelInput"*/,
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

  if ( (byte_4A56D47 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D47 = 1;
  }
  this->fields.isBattleResourceLoading = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  if ( this->fields.battleLoadAsset )
    ServantStatusDialog__EndLoadBattle_31703952(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_31703952(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8

  if ( (byte_4A56D48 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56D48 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v4, method);
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

  if ( (byte_4A56D4F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4A56D3C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog__EndLoadInit_b__134_0__);
    byte_4A56D3C = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__134_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v3, v4);
  ServantStatusDialog__InitList(this, v5);
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

  if ( (byte_4A56D73 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  }
  if ( v8->max_length <= 3 )
LABEL_13:
    sub_1B88814(Instance, v4);
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
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Item; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4A56D53 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56D53 = 1;
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v10 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v10[4] = (Il2CppClass *)loadVoiceData;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)loadVoiceData, v2, v3);
        }
        this->fields.loadVoiceData = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, 0, v11, v12);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v14, v15);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v16 = this->fields.loadVoiceData;
              v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v16, v17, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1B8880C(voiceDataList, loadVoiceData);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A56D57 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6001/*"EndWaitVoice"*/);
    byte_4A56D57 = 1;
  }
  this->fields.voicePlayer = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer, 0, v2, v3);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v10 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v10;
    max_length = voicePlayList->max_length;
    if ( v10 < (int)max_length )
    {
      if ( v10 >= max_length )
        sub_1B88814(voiceTabListViewManager, v6);
      v12 = voicePlayList->m_Items[v10];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6001/*"EndWaitVoice"*/,
          v12->fields.delay,
          0LL);
        return;
      }
LABEL_18:
      sub_1B8880C(voiceTabListViewManager, v6);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_34667044(voiceTabListViewManager, 2, -1, 0LL);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v7, v8);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v13, v14);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_34667044(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  CommonUI_o *statusTabListViewManager; // x0
  const MethodInfo *v8; // x2
  ServantStatusListViewManager_o *v9; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4A56D6F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4A56D6F = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  statusTabListViewManager = **(CommonUI_o ***)(v6 + 184);
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
    ServantStatusDialog__SetTabKind(this, 0, v8);
  }
  v9 = this->fields.statusTabListViewManager;
  v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v9 )
LABEL_13:
    sub_1B8880C(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v9, 1, v10, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A56D3F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssetData__TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCommandCardLoad__);
    byte_4A56D3F = 1;
  }
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndCommandCardLoad__, 0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__EndTransformedStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4A56D43 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_5974/*"EndLoadInit"*/);
    byte_4A56D43 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1B8880C(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5974/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v16; // w3
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x0

  v4 = this;
  if ( (byte_4A56D56 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56D56 = 1;
  }
  voicePlayList = v4->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v4->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1B88814(this, method);
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
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v14 = SoundManager__playVoice_38702940(voicePlayAssetName, id, DEFAULT_VOLUME, v13, 0LL);
        p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayer;
        v4->fields.voicePlayer = v14;
        goto LABEL_16;
      }
LABEL_17:
      sub_1B8880C(this, method);
    }
    if ( v4->fields.tabKind == 3 && (v4->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v4->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_34667044((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      v4->fields.voiceListIndex = -1;
    }
    v4->fields.voicePlayList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayList, 0, v2, v3);
    p_voicePlayer = (ServantStatusBattleListViewItem_o *)&v4->fields.voicePlayAssetName;
    LODWORD(v14) = 0;
    v4->fields.voicePlayNum = 0;
    v4->fields.voicePlayAssetName = 0LL;
LABEL_16:
    sub_1B88554(p_voicePlayer, (int32_t)v14, v15, v16);
  }
}


void __fastcall ServantStatusDialog__EnddChangeCommandResourceLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4A56D7A & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D7A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(Instance, v5);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v34; // [xsp+68h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v3 = this;
  if ( (byte_4A56D6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D6C = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v34 = 0LL;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_59;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = v3->fields.mainInfo;
  if ( !v5 )
    goto LABEL_59;
  userSvtEntity = v5->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_59;
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v8 = this;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
  if ( !v8 )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
          &entity,
          (int64_t)this,
          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v9 = v3->fields.mainInfo;
    if ( !v9 )
      goto LABEL_59;
    v10 = v9->fields.userSvtEntity;
    if ( !v10 )
      goto LABEL_59;
    v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
    v12 = this;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v33;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
    if ( !v12 )
      goto LABEL_59;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
      &entity,
      (int64_t)this,
      (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_58;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = v3->fields.mainInfo;
  if ( !v13 )
    goto LABEL_59;
  v14 = v13->fields.userSvtEntity;
  if ( !v14 )
    goto LABEL_59;
  v15 = this;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v17;
  *(_QWORD *)&v37.fields.fakeValue = v16;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  if ( !v15 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                    (int32_t)this,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = v3->fields.mainInfo;
  if ( !v18 )
    goto LABEL_59;
  v19 = this;
  this = (ServantStatusDialog_o *)v18->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_59;
  v20 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( v20 == DispLimitCount )
    goto LABEL_58;
  v22 = DispLimitCount;
  this = (ServantStatusDialog_o *)v3->fields.mainInfo;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v19)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, (int32_t)this, v20, 0LL),
        !v3->fields.mainInfo)
    || (v23 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, LimitCount, v22, 0LL),
        !v23)
    || !this )
  {
LABEL_59:
    sub_1B8880C(this, result);
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
        sub_1B88814(this, result);
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
    goto LABEL_58;
  v27 = v3->fields.mainInfo;
  if ( !v27 )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)v27->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v20, -1, 1, -1, 0LL);
  if ( !entity )
    goto LABEL_59;
  v28 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v22, -1, 1, -1, 0LL);
  v29 = v3->fields.mainInfo;
  if ( !v29 )
    goto LABEL_59;
  v30 = this;
  this = (ServantStatusDialog_o *)v29->fields.userSvtEntity;
  if ( !this )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v20, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_59;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v34, -1, v22, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                    (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v34 )
    goto LABEL_59;
  if ( tdInfo->fields.id != v34->fields.id )
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

  if ( (byte_4A56D6D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D6D = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v7 = this->fields.battleActor;
    if ( !v7 )
      sub_1B8880C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v7, 0LL);
  }
  individualityCallbackFunc = this->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    this->fields.individualityCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc, 0, v5, v6);
    this->fields.resultCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v9, v10);
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v11, v12);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc, 0, v5, v6);
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v16, v17);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc, 0, v5, v6);
      isModify = this->fields.isModify;
      isNeedSort = (unsigned int)this->fields.questId;
      goto LABEL_10;
    }
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        this->fields.isModify,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
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
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
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

  if ( (byte_4A56D6B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    byte_4A56D6B = 1;
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
  v15 = UserServantNewManager__WriteData(0LL) || isModify;
  this->fields.isModify = v15;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  v16 = UserServantCollectionManager__WriteData(0LL);
  v17 = v15 | v16;
  this->fields.isModify = v15 | v16;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  v18 = v17 | ServantCommentManager__WriteData(0LL);
  this->fields.isModify = v18;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  v19 = OtherUserNewManager__WriteData(0LL);
  v20 = v18 | v19;
  this->fields.isModify = v18 | v19;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  v21 = v20 | UserCommandCodeNewManager__WriteData(0LL);
  this->fields.isModify = v21 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v4 = this->fields.mainInfo;
  this->fields.isModify = (v21 != 0) | IsModifyLock & 1;
  if ( !v4 )
    goto LABEL_131;
  if ( !v4->fields.userSvtEntity )
  {
    if ( v4->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v4, 0LL);
      if ( !*p_mainInfo )
        goto LABEL_131;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1) != 0 )
      {
        this->fields.isModify = 1;
        v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                                  v24,
                                  (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
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
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v80, 0LL);
            if ( *p_mainInfo )
            {
              if ( v27 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v27,
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
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v4, 0LL);
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
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v84, 0LL);
    v32 = 0;
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v34 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(*p_mainInfo, 0LL);
    v36 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v37 )
      goto LABEL_131;
    v36 = BasicHelper__DecryptValue_41109412(v37[8], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v38 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(*p_mainInfo, 0LL);
    v40 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v41 )
      goto LABEL_131;
    v40 = BasicHelper__DecryptValue_41109412(v41[9], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v42 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(*p_mainInfo, 0LL);
    v44 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v45 )
      goto LABEL_131;
    v44 = BasicHelper__DecryptValue_41109412(v45[10], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  v79 = v42;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v46 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(*p_mainInfo, 0LL);
    v48 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
    portraitLimitCount = v48;
  }
  else
  {
    v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*p_mainInfo)->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_131;
    portraitLimitCount = BasicHelper__DecryptValue_41109412(v49[11], 0LL);
  }
  IsModifyLock = (int64_t)*p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v50 = *p_mainInfo;
  v78 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v77 = v38;
  commonFlag = v50->fields.svtCommonFlag;
  iconLimitCount = v44;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v50, 0LL);
  v51 = *p_mainInfo;
  v76 = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v52 = v34;
  battleVoice = v51->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v51, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v53 = IsModifyLock;
  v54 = v32;
  randomSettingOwn = (*p_mainInfo)->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(*p_mainInfo, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*p_mainInfo )
    goto LABEL_131;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(*p_mainInfo, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  v55 = IsModifyLock;
  limitCountSupport = (*p_mainInfo)->fields.supportRandomLimitCount;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_131;
  if ( !*p_mainInfo )
    goto LABEL_131;
  v56 = (*p_mainInfo)->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_131;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  v58 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v67 = v36;
  v68 = v40;
  v82 = v83;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v82, 0LL);
  if ( !*p_mainInfo )
    goto LABEL_131;
  isPush = v58 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*p_mainInfo, 0LL);
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
    sub_1B8880C(IsModifyLock, v4);
  }
  if ( v54 | v52 & 1 | v77 & 1 | v79 & 1 | v46 & 1 | v78 & 1 | v76 & 1 | v53 & 1 | v55 & 1 | v60 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*p_mainInfo, 0LL)) & 1 )
  {
    this->fields.isModify = 1;
    v62 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v62,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v62,
                              (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
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
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v81, 0LL);
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
              0LL);
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


System_String_o *__fastcall ServantStatusDialog__GetVoiceAssetName(
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

  if ( (byte_4A56D51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9505/*"NoblePhantasm_"*/);
    sub_1B885B0(&StringLiteral_4464/*"ChrVoice_"*/);
    sub_1B885B0(&StringLiteral_12660/*"Servants_"*/);
    byte_4A56D51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_44AE970[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0LL);
    return System_String__Concat_61707032(*v13, v14, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pushButton; // x20
  __int64 v4; // x1
  ServantStatusDialog_c *v5; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v7; // x8
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v10; // x20
  unsigned __int128 v11; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4A56D38 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog__Init_b__130_0__);
    sub_1B885B0(&ServantStatusDialog_TypeInfo);
    byte_4A56D38 = 1;
  }
  v11 = 0uLL;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0LL, 0LL) )
  {
    v5 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v5 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v5->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v11,
                                               0LL);
    v7 = this->fields.pushButton;
    if ( !v7 )
LABEL_18:
      sub_1B8880C(baseObject, v4);
    v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v11;
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
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v8);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0LL);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__130_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v10, 2, 1, 0LL);
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

  if ( (byte_4A56D45 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D45 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_battleChr->klass = 0LL;
    sub_1B88554(p_battleChr, 0, v9, v10);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *openCallbackFunc; // x20
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v15; // x21

  if ( (byte_4A56D5F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_1B885B0(&Method_ServantStatusDialog__InitList_b__172_0__);
    byte_4A56D5F = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v7 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v8);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v7;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int32_t)v7,
    v11,
    v12);
  ServantStatusCharaGraphListViewManager__SetMode_31657200(charaGraphListViewManager, 2, v13);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__172_0__, 0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v15, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(v9, v10);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4A56D8D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCostumeEntity_TypeInfo);
    sub_1B885B0(&ServantLimitAddEntity_TypeInfo);
    byte_4A56D8D = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_35:
    sub_1B8880C(RandomGroupIndex, v5);
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
          sub_1B88814(RandomGroupIndex, v5);
        v11 = supportRandomLimitCountList->m_Items[v9];
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
        v18 = (ServantLimitAddEntity_o *)sub_1B887FC(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v18, 0LL);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v28,
                                                       0LL);
        if ( !Master_object )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       (ServantLimitAddMaster_o *)Master_object,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
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
        v13 = (ServantCostumeEntity_o *)sub_1B887FC(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v13, 0LL);
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
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v27,
                                                       0LL);
        if ( !v8 )
          goto LABEL_35;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v8,
                                                       &v25,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
                                                       0LL);
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


void __fastcall ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56D71 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssetData__TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog__LoadTransformedResource_b__194_0__);
    byte_4A56D71 = 1;
  }
  v3 = (System_Action_object__o *)sub_1B887FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_0__,
    0LL);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v3, v4);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56D69 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickCancel__);
    byte_4A56D69 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  if ( (byte_4A56D70 & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_4A56D70 = 1;
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
        v4 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      v6 = v2->fields.mainInfo;
      if ( v6 )
      {
        v6->fields._IsTransformed_k__BackingField ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_1B8880C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickChangeVoice(
        ServantStatusDialog_o *this,
        int32_t type,
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
  if ( (byte_4A56D8E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickChangeVoice__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D8E = 1;
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
          v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickChangeVoice__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_1B8880C(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A56D91 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickChoice__);
    byte_4A56D91 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B8880C(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4A56D7F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickCommandCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D7F = 1;
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
          sub_1B88814(this, *(_QWORD *)&costumeIndex);
        v7 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.commandCardLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickCommandCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCommandCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    }
    sub_1B8880C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
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
  if ( (byte_4A56D7E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickCommandCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D7E = 1;
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
          v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCommandCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
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
  if ( (byte_4A56D86 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickCommandCodeShow__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D86 = 1;
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
      v8 = UserCommandCodeEntity;
      v9 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_30509760((CommonUI_o *)Instance, 20, v8, v12, v13, 0LL);
        return;
      }
LABEL_27:
      sub_1B8880C(this, *(_QWORD *)&index);
    }
    goto LABEL_17;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0LL);
    if ( CommandCodeEntity )
    {
      v16 = CommandCodeEntity;
      v17 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      kind = v4->fields.kind;
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v20 )
          goto LABEL_27;
        v23 = 22;
      }
      else
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
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
      CommonUI__OpenServantEquipStatusDialog_30510512(v29, v23, v30, v28, v21, v22, 0LL);
      return;
    }
  }
LABEL_17:
  v24 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v25 = (System_Reflection_MethodBase_o *)sub_1B88594(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
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
  if ( (byte_4A56D82 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickFaceCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D82 = 1;
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
          sub_1B88814(this, *(_QWORD *)&costumeIndex);
        v7 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.iconLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickFaceCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFaceCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickFaceCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    }
    sub_1B8880C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
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
  if ( (byte_4A56D81 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickFaceCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D81 = 1;
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
          v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickFaceCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
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
  Il2CppObject *Entity; // x24
  ServantStatusDialog_o *v12; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v15; // x23
  ServantStatusDialog_o *v16; // x20
  int32_t v17; // w21
  int32_t v18; // w25
  struct ServantStatusListViewItem_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w21
  int32_t v22; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v24; // x20
  __int64 v25; // x21
  int32_t Rarity; // w24
  int32_t v27; // w2
  int32_t v28; // w3
  ServantStatusDialog_o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  ServantStatusDialog_o *v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  ServantStatusDialog_o *v35; // x23
  struct ServantStatusListViewItem_o *v36; // x8
  int32_t v37; // w0
  int32_t v38; // w2
  int32_t v39; // w3
  ServantStatusDialog_o *v40; // x23
  struct ServantStatusListViewItem_o *v41; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  ServantStatusDialog_o *v44; // x23
  struct ServantStatusListViewItem_o *v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  ServantStatusDialog_o *v48; // x22
  System_String_o *v49; // x20
  System_String_o *v50; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  System_String_o *v54; // x24
  CommonConfirmDialog_ClickDelegate_o *v55; // x25
  struct ServantStatusListViewItem_o *v56; // x20
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  const MethodInfo *v59; // x1
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v2 = this;
  if ( (byte_4A56D92 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickFavorite__);
    sub_1B885B0(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11883/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11881/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11880/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11884/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_1B885B0(&StringLiteral_11882/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_4A56D92 = 1;
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
    v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v63.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v62 = v63;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v62, 0LL) )
    {
      v7 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickFavorite__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
      return;
    }
    v9 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickFavorite__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( favoriteUserSvtId <= 0 )
    {
      v56 = v2->fields.mainInfo;
      if ( v56 )
      {
        v57 = v56->fields.userSvtEntity;
        if ( v57 )
        {
          v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v63.fields.fakeValue = v58;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v61 = v63;
          v56->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                            &v61,
                                            0LL);
          ServantStatusDialog__SetMark(v2, v59);
          return;
        }
      }
      goto LABEL_79;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_79;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               favoriteUserSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_79;
    v12 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = klass;
    *(_QWORD *)&v64.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
    if ( !v12 )
      goto LABEL_79;
    v15 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                               (int32_t)this,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v15 )
      goto LABEL_79;
    v16 = this;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                      0LL);
    if ( !v16 )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v16,
                                      v17,
                                      (int32_t)this,
                                      0LL);
    if ( !v2->fields.mainInfo )
      goto LABEL_79;
    v18 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v2->fields.mainInfo, 0LL);
    v19 = v2->fields.mainInfo;
    if ( !v19 )
      goto LABEL_79;
    v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v19->fields.userSvtEntity;
    if ( !v20 )
      goto LABEL_79;
    v21 = (int)this;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v16,
                                   v21,
                                   v22,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v25 = sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v25 )
      goto LABEL_79;
    v29 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_80;
      *(_QWORD *)(v25 + 32) = v29;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v29, v27, v28);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v15, 0LL);
      v32 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_80;
        *(_QWORD *)(v25 + 40) = v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)v32, v30, v31);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v15, v18, -1, 0LL);
        v35 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v25 + 24) <= 2u )
            goto LABEL_80;
          *(_QWORD *)(v25 + 48) = v35;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v35, v33, v34);
          v36 = v2->fields.mainInfo;
          if ( !v36 )
            goto LABEL_79;
          this = (ServantStatusDialog_o *)v36->fields.userSvtEntity;
          if ( !this )
            goto LABEL_79;
          v37 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v37, 0LL);
          v40 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v25 + 24) <= 3u )
              goto LABEL_80;
            *(_QWORD *)(v25 + 56) = v40;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 56), (int32_t)v40, v38, v39);
            v41 = v2->fields.mainInfo;
            if ( !v41 )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)v41->fields.svtEntity;
            if ( !this )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v44 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v25 + 24) <= 4u )
                goto LABEL_80;
              *(_QWORD *)(v25 + 64) = v44;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 64), (int32_t)v44, v42, v43);
              v45 = v2->fields.mainInfo;
              if ( !v45 )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)v45->fields.svtEntity;
              if ( !this )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v48 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v25 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v25 + 24) > 5u )
                {
                  *(_QWORD *)(v25 + 72) = v48;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 72), (int32_t)v48, v46, v47);
                  this = (ServantStatusDialog_o *)System_String__Format_61721540(v24, (System_Object_array *)v25, 0LL);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_79;
                  v49 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0LL) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_79;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v49 = System_String__Concat_61707032(v49, v50, 0LL);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11884/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11881/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v55,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30493912(
                      (CommonUI_o *)Instance,
                      v52,
                      v49,
                      v53,
                      v54,
                      v55,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_79:
                  sub_1B8880C(this, method);
                }
LABEL_80:
                sub_1B88814(this, method);
              }
            }
          }
        }
      }
    }
    v60 = sub_1B88830();
    sub_1B886D8(v60, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A56D90 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickLock__);
    byte_4A56D90 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B8880C(0LL, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0LL);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
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
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct System_Int32_array *costumeIds; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4A56D85 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D85 = 1;
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
          sub_1B88814(this, *(_QWORD *)&costumeIndex);
        v7 = costumeIds->m_Items[costumeIndex + 1];
        if ( mainInfo->fields.portraitLimitCount != v7 )
        {
          v10 = Method_ServantStatusDialog_OnClickPortraitCharaCostume__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortraitCharaCostume__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickPortraitCharaCostume__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v7, v12);
          return;
        }
        statusTabListViewManager = v4->fields.statusTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    }
    sub_1B8880C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
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
  if ( (byte_4A56D84 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D84 = 1;
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
          v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickPortraitCharaLevel__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_1B8880C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
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
  Il2CppObject *Entity; // x24
  ServantStatusDialog_o *v14; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantEntity_o *v17; // x23
  ServantStatusDialog_o *v18; // x20
  int32_t v19; // w21
  int32_t v20; // w25
  struct ServantStatusListViewItem_o *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  int32_t v23; // w21
  int32_t v24; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v26; // x20
  __int64 v27; // x21
  int32_t Rarity; // w24
  int32_t v29; // w2
  int32_t v30; // w3
  ServantStatusDialog_o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  ServantStatusDialog_o *v34; // x24
  int32_t v35; // w2
  int32_t v36; // w3
  ServantStatusDialog_o *v37; // x23
  struct ServantStatusListViewItem_o *v38; // x8
  int32_t v39; // w0
  int32_t v40; // w2
  int32_t v41; // w3
  ServantStatusDialog_o *v42; // x23
  struct ServantStatusListViewItem_o *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  ServantStatusDialog_o *v46; // x23
  struct ServantStatusListViewItem_o *v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  ServantStatusDialog_o *v50; // x22
  System_String_o *v51; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  CommonConfirmDialog_ClickDelegate_o *v56; // x25
  struct ServantStatusListViewItem_o *v57; // x20
  struct UserServantEntity_o *v58; // x8
  __int128 v59; // q0
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v2 = this;
  if ( (byte_4A56D94 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickPush__);
    sub_1B885B0(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A56D94 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_74;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v4 = v2->fields.mainInfo;
    if ( !v4 )
      goto LABEL_74;
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_74;
    v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v4->fields.pushUserSvtId;
    *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v63.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v62 = v63;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v62, 0LL) )
    {
      v8 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickPush__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v10 = v2->fields.mainInfo;
      if ( v10 )
      {
        v10->fields.pushUserSvtId = 0LL;
LABEL_73:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_74;
    }
    v11 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickPush__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    if ( pushUserSvtId <= 0 )
    {
      v57 = v2->fields.mainInfo;
      if ( v57 )
      {
        v58 = v57->fields.userSvtEntity;
        if ( v58 )
        {
          v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v63.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v61 = v63;
          v57->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v61, 0LL);
          goto LABEL_73;
        }
      }
LABEL_74:
      sub_1B8880C(this, method);
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_74;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               pushUserSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_74;
    v14 = this;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = klass;
    *(_QWORD *)&v64.fields.fakeValue = monitor;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
    if ( !v14 )
      goto LABEL_74;
    v17 = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                               (int32_t)this,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v17 )
      goto LABEL_74;
    v18 = this;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                      0LL);
    if ( !v18 )
      goto LABEL_74;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v18,
                                      v19,
                                      (int32_t)this,
                                      0LL);
    if ( !v2->fields.mainInfo )
      goto LABEL_74;
    v20 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v2->fields.mainInfo, 0LL);
    v21 = v2->fields.mainInfo;
    if ( !v21 )
      goto LABEL_74;
    v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v21->fields.userSvtEntity;
    if ( !v22 )
      goto LABEL_74;
    v23 = (int)this;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v18,
                                   v23,
                                   v24,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v27 = sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v27 )
      goto LABEL_74;
    v31 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_75;
      *(_QWORD *)(v27 + 32) = v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v31, v29, v30);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v17, 0LL);
      v34 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v27 + 24) <= 1u )
          goto LABEL_75;
        *(_QWORD *)(v27 + 40) = v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 40), (int32_t)v34, v32, v33);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v17, v20, -1, 0LL);
        v37 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v27 + 24) <= 2u )
            goto LABEL_75;
          *(_QWORD *)(v27 + 48) = v37;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 48), (int32_t)v37, v35, v36);
          v38 = v2->fields.mainInfo;
          if ( !v38 )
            goto LABEL_74;
          this = (ServantStatusDialog_o *)v38->fields.userSvtEntity;
          if ( !this )
            goto LABEL_74;
          v39 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v39, 0LL);
          v42 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v27 + 24) <= 3u )
              goto LABEL_75;
            *(_QWORD *)(v27 + 56) = v42;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 56), (int32_t)v42, v40, v41);
            v43 = v2->fields.mainInfo;
            if ( !v43 )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)v43->fields.svtEntity;
            if ( !this )
              goto LABEL_74;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v46 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v27 + 24) <= 4u )
                goto LABEL_75;
              *(_QWORD *)(v27 + 64) = v46;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 64), (int32_t)v46, v44, v45);
              v47 = v2->fields.mainInfo;
              if ( !v47 )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)v47->fields.svtEntity;
              if ( !this )
                goto LABEL_74;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v50 = this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v27 + 24) > 5u )
                {
                  *(_QWORD *)(v27 + 72) = v50;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 72), (int32_t)v50, v48, v49);
                  v51 = System_String__Format_61721540(v26, (System_Object_array *)v27, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v56,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30493912(
                      (CommonUI_o *)Instance,
                      v53,
                      v51,
                      v54,
                      v55,
                      v56,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_74;
                }
LABEL_75:
                sub_1B88814(this, method);
              }
            }
          }
        }
      }
    }
    v60 = sub_1B88830();
    sub_1B886D8(v60, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_4A56D8B & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_4A56D8B = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v7);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4A56D89 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    byte_4A56D89 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSupport__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSupport__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickRandomLimitCountSupport__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ServantStatusDialog__RandomLimitCountSupportResource(this, index, v7);
  }
}


void __fastcall ServantStatusDialog__OnClickServantQuest(
        ServantStatusDialog_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t QuestType; // w22
  QuestEntity_o *v12; // x23
  System_String_o *v13; // x20
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v22; // x21
  Il2CppObject *v23; // x21
  System_String_o *v24; // x0
  __int64 *v25; // x8
  System_String_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25

  if ( (byte_4A56D87 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickServantQuest__);
    sub_1B885B0(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_11926/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11928/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11929/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_11922/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11925/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_11927/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_11923/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11924/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_4A56D87 = 1;
  }
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_20;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_20:
    v19 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickServantQuest__);
    v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v22, 0LL);
      return;
    }
    goto LABEL_35;
  }
  v8 = QuestInfo;
  v9 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickServantQuest__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v8, 0LL);
  Instance = MapControl_QuestInfo__GetMine(v8, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v12 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_35;
  v13 = (System_String_o *)Instance;
  if ( !System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        Instance = (void *)QuestEntity__getServantId(v12, 0LL),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_35:
    sub_1B8880C(Instance, v6);
  }
  BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
  v13 = System_String__Format(v13, BattleName, 0LL);
LABEL_16:
  if ( QuestType == 3 )
  {
    warId = v8->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0LL);
    else
      IsFolder = 1;
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_30:
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v25 = &StringLiteral_11926/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_33;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_30;
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11925/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
    v25 = &StringLiteral_11924/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
  }
  else
  {
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
    v25 = &StringLiteral_11928/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
  }
LABEL_33:
  v26 = v24;
  v27 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
  v28 = System_String__Format(v27, (Il2CppObject *)v13, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11923/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11922/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v23 )
    goto LABEL_35;
  CommonUI__OpenConfirmDialog_30493912((CommonUI_o *)v23, v26, v28, v29, v30, v31, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A56D76 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickTabBattle__);
    byte_4A56D76 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A56D75 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickTabProfile__);
    byte_4A56D75 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A56D74 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickTabStatus__);
    byte_4A56D74 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A56D77 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantStatusDialog_OnClickTabVoice__);
    byte_4A56D77 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x0
  CommonUI_o *v21; // x22
  System_String_o *Empty; // x21
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  CommonConfirmDialog_ClickDelegate_o *v25; // x25

  if ( (byte_4A56D88 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnClickTdSpeed__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__);
    sub_1B885B0(&ServantStatusDialog___c__DisplayClass217_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11931/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11932/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11933/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_4A56D88 = 1;
  }
  v5 = sub_1B887FC(ServantStatusDialog___c__DisplayClass217_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass217_0___ctor((ServantStatusDialog___c__DisplayClass217_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL) == *(_DWORD *)(v5 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v11, 0LL);
        return;
      }
LABEL_24:
      sub_1B8880C(mainInfo, v7);
    }
    v12 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnClickTdSpeed__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0LL);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v16 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v18 = System_String__Format_61721404(v17, TDSpeedLocalization, v16, 0LL);
    v19 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4));
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1BDA48C(v20);
    v21 = **(CommonUI_o ***)(v20 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11931/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v21 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v21, Empty, v18, v23, v24, v25, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
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
  if ( (byte_4A56D93 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D93 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1B8880C(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
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
  if ( (byte_4A56D95 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D95 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0LL )
LABEL_11:
      sub_1B8880C(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v10, 0LL);
}


void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
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

  if ( (byte_4A56D8F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A56D8F = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v13, 0LL);
        return;
      }
    }
    goto LABEL_25;
  }
  v5 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v5, this->fields.questId, 0LL);
  v8 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v5 = (Il2CppObject *)v8->fields._WarInfo_k__BackingField;
      if ( !v5 )
        goto LABEL_25;
      LODWORD(v8) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v5, 0LL);
    }
    else
    {
      LODWORD(v8) = 0;
    }
  }
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A56DA1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A56DA1 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__224_0__, 0LL);
  if ( !v15 )
LABEL_25:
    sub_1B8880C(v5, v6);
  CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4A56D6A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D6A = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A56D98 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3176/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_4A56D98 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3176/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
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
    sub_1B8880C(transform, v4);
  }
}


void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4A56D78 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectBattle__);
    byte_4A56D78 = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      v7);
    if ( !battleTabListViewManager
      || (battleTabListViewManager->fields.callbackFunc = v6,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&battleTabListViewManager->fields.callbackFunc,
            (int32_t)v6,
            v10,
            v11),
          ServantStatusBattleListViewManager__SetMode_31643180(battleTabListViewManager, 1, v12, v13),
          (mainInfo = this->fields.mainInfo) == 0LL) )
    {
      sub_1B8880C(v8, v9);
    }
    if ( mainInfo->fields.dispLimitCount != result )
    {
      v15 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnSelectBattle__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
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


void __fastcall ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A56D65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D65 = 1;
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
    ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B8880C(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A56D63 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D63 = 1;
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
    ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B8880C(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A56D67 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_4A56D67 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !profileTabListViewManager )
    sub_1B8880C(v6, v7);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectStatus(
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
  CommonUI_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  System_Action_o *v16; // x23
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v19; // q1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v23; // x8
  struct ServantLeaderInfo_o *v24; // x8
  EquipTargetInfo_o *v25; // x21
  CommonUI_o *v26; // x20
  ServantStatusDialog_EndDelegate_o *v27; // x22
  System_Action_o *v28; // x23
  int32_t v29; // w1
  ServantStatusListViewManager_o *v30; // x20
  ServantStatusListViewManager_CallbackFunc_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 *v34; // x8
  struct UISprite_o *v35; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21
  struct ServantStatusListViewItem_o *v40; // x8
  struct ServantLeaderInfo_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4A56D62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_Exit__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_12638/*"ServantLvExceed"*/);
    sub_1B885B0(&StringLiteral_12642/*"ServantSkillCombine"*/);
    sub_1B885B0(&StringLiteral_12639/*"ServantNpCombine"*/);
    sub_1B885B0(&StringLiteral_4614/*"CommandCardEquip"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    sub_1B885B0(&StringLiteral_6848/*"FriendshipExceed"*/);
    sub_1B885B0(&StringLiteral_12636/*"ServantLimitCountUp"*/);
    sub_1B885B0(&StringLiteral_2395/*"AppendSkillCombine"*/);
    this = (ServantStatusDialog_o *)sub_1B885B0(&StringLiteral_4615/*"CommandCardExceed"*/);
    byte_4A56D62 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0LL);
        return;
      }
LABEL_78:
      sub_1B8880C(this, *(_QWORD *)&result);
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
          v10 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnSelectStatus__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = v6->fields.mainInfo;
          if ( !v12 )
            goto LABEL_78;
          equipTargetId1 = v12->fields.equipTargetId1;
          v14 = (CommonUI_o *)this;
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v14 )
            goto LABEL_78;
          CommonUI__OpenServantEquipStatusDialog(v14, 11, equipTargetId1, 1, v15, v16, 0LL);
        }
        else
        {
          servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
          if ( !servantLeaderInfo )
            goto LABEL_29;
          equipTarget1 = servantLeaderInfo->fields.equipTarget1;
          if ( !equipTarget1 )
            goto LABEL_29;
          v19 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
          *(_OWORD *)&v43.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v42 = v43;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL) >= 1 )
          {
            v20 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v20 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnSelectStatus__);
            v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
            OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
            kind = v6->fields.kind;
            if ( kind == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v23 = v6->fields.mainInfo;
              if ( !v23 )
                goto LABEL_78;
              v24 = v23->fields.servantLeaderInfo;
              if ( !v24 )
                goto LABEL_78;
              v25 = v24->fields.equipTarget1;
              v26 = (CommonUI_o *)this;
              v27 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v27,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(v28, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v26 )
                goto LABEL_78;
              v29 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v40 = v6->fields.mainInfo;
              if ( !v40 )
                goto LABEL_78;
              v41 = v40->fields.servantLeaderInfo;
              if ( !v41 )
                goto LABEL_78;
              v25 = v41->fields.equipTarget1;
              v26 = (CommonUI_o *)this;
              v27 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v27,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(v28, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v26 )
                goto LABEL_78;
              if ( kind == 5 )
                v29 = 14;
              else
                v29 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_30509528(v26, v29, v25, v27, v28, 0LL);
          }
          else
          {
LABEL_29:
            v30 = v6->fields.statusTabListViewManager;
            v31 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v31,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v30 )
              goto LABEL_78;
            ServantStatusListViewManager__SetMode(v30, 1, v31, 0LL);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12623/*"ServantCombine"*/;
        goto LABEL_64;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12626/*"ServantEQCombine"*/;
        goto LABEL_64;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12642/*"ServantSkillCombine"*/;
        goto LABEL_64;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12636/*"ServantLimitCountUp"*/;
        goto LABEL_64;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_6848/*"FriendshipExceed"*/;
        goto LABEL_64;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_4614/*"CommandCardEquip"*/;
        goto LABEL_64;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_4615/*"CommandCardExceed"*/;
        goto LABEL_64;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_2395/*"AppendSkillCombine"*/;
        goto LABEL_64;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12639/*"ServantNpCombine"*/;
        goto LABEL_64;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_78;
        v34 = &StringLiteral_12638/*"ServantLvExceed"*/;
LABEL_64:
        v35 = (struct UISprite_o *)*v34;
        this->fields.statusSprite = (struct UISprite_o *)*v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusSprite, (int32_t)v35, v32, v33);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v37 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v37 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
        v39 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v39, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_78;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
        return;
      default:
        goto LABEL_29;
    }
  }
}


void __fastcall ServantStatusDialog__OnSelectVoice(
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
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v23; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v25; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A56D68 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A56D68 = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !voiceTabListViewManager )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v8, 0LL);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v11);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v13 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v14 = (ServantStatusVoiceListViewItem_o *)Instance;
        v15 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0LL);
        if ( !MasterData_object )
          goto LABEL_58;
        v16 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v15,
                        (int32_t)Instance,
                        0LL);
        v17 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v14, 0LL);
        v19 = System_String__Concat_61718292(v17, (System_String_o *)StringLiteral_16123/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v14, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v14->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_39790328(
                                      (ServantVoiceMaster_o *)v13,
                                      v15,
                                      v16,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_1B8880C(Instance, v10);
                }
                if ( !v13 )
                  goto LABEL_58;
                if ( !v14->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v13,
                                  v15,
                                  v16,
                                  v19,
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
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0LL);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(
                                      (ServantVoiceMaster_o *)v13,
                                      v15,
                                      (int32_t)Instance,
                                      0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_31714516(this, v15, v16, HomeVoiceList, result, v21);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                    (ServantVoiceMaster_o *)v13,
                                    v15,
                                    v16,
                                    v19,
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
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
                                    0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v13 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v13 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v15, v16, BattleVoiceList, result, v23);
            return;
          case 7:
            if ( !v13 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v15, v16, NpVoiceList, result, v25);
            return;
          case 8:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                              (ServantVoiceMaster_o *)v13,
                              v15,
                              v16,
                              v19,
                              0LL);
            goto LABEL_52;
          case 9:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0LL);
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_39788288(
                              (ServantVoiceMaster_o *)v13,
                              (int32_t)Instance,
                              v15,
                              v16,
                              v19,
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


void __fastcall ServantStatusDialog__OnclickRandomLimitCountMask(
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
  __int64 v19; // x0
  __int64 v20; // x0
  CommonUI_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x0
  __int64 *v24; // x8
  struct ServantStatusListViewItem_o *v25; // x8
  struct UserServantEntity_o *v26; // x9
  __int64 v27; // x22
  __int64 v28; // x23
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A56D6E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_1B885B0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__);
    sub_1B885B0(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&StringLiteral_11900/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_1B885B0(&StringLiteral_11901/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_11898/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11897/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4A56D6E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
        *(_QWORD *)&v34.fields.currentCryptoKey = v16;
        *(_QWORD *)&v34.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !mainInfo->fields.isEnableOwnRandomSetting )
        return;
      v17 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1BDA48C(v19);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1BDA48C(v20);
      v21 = **(CommonUI_o ***)(v20 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v24 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_0__;
LABEL_44:
      v33 = v23;
      CommonConfirmDialog_ClickDelegate___ctor(v23, (Il2CppObject *)this, *v24, 0LL);
      if ( !v21 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_30494344(
        v21,
        (System_String_o *)StringLiteral_1/*""*/,
        v22,
        v5,
        v6,
        v33,
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
      v25 = this->fields.mainInfo;
      if ( !v25 )
        return;
      v26 = v25->fields.userSvtEntity;
      if ( !v26 )
      {
LABEL_34:
        if ( !v25->fields.isEnableSupportRandomSetting )
          return;
        v29 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v29 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
        OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
        v31 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
          v31 = sub_1BDA48C(v31);
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1BDA48C(v32);
        v21 = **(CommonUI_o ***)(v32 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v24 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__191_1__;
        goto LABEL_44;
      }
      v28 = *(_QWORD *)&v26->fields.limitCount.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v26->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = v28;
      *(_QWORD *)&v35.fields.fakeValue = v27;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL) )
      {
        v25 = this->fields.mainInfo;
        if ( !v25 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v7 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0LL);
        return;
      }
LABEL_47:
      sub_1B8880C(v11, v12);
    case 1:
      goto LABEL_8;
  }
}


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

  if ( (byte_4A56D1E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D1E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, 0, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


void __fastcall ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4A56D3D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_13493/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_4A56D3D = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37688364(106, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13493/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_1B8880C(v6, v7);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 106, callback, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall ServantStatusDialog__Open_31682136(
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

  if ( (byte_4A56D1F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D1F = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v17, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  this->fields.mainInfo = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v17, v18, v19);
  ServantStatusDialog__Init(this, v20);
}


void __fastcall ServantStatusDialog__Open_31682344(
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

  if ( (byte_4A56D20 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D20 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32649840(v15, partyItem, member, 0, 0LL);
  this->fields.mainInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


void __fastcall ServantStatusDialog__Open_31682540(
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

  if ( (byte_4A56D21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D21 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B8880C(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)*v13);
  ServantStatusDialog__Open_31682820(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void __fastcall ServantStatusDialog__Open_31682820(
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

  if ( (byte_4A56D25 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D25 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(v18, userSvtEntity, 0LL, 0LL, 0, v17, v17, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void __fastcall ServantStatusDialog__Open_31683068(
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

  if ( (byte_4A56D22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D22 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B8880C(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)*v13);
  ServantStatusDialog__Open_31683348(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void __fastcall ServantStatusDialog__Open_31683348(
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

  if ( (byte_4A56D26 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D26 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(v18, userSvtEntity, 0LL, 0LL, callback != 0LL, v17, v17, 0, 0LL);
  this->fields.mainInfo = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void __fastcall ServantStatusDialog__Open_31683600(
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

  if ( (byte_4A56D23 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D23 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B8880C(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)*v13);
  ServantStatusDialog__Open_31683884(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void __fastcall ServantStatusDialog__Open_31683884(
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

  if ( (byte_4A56D27 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D27 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(v20, userSvtEntity, 0LL, 0LL, 0, v19, v19, canMoveCombine, 0LL);
  this->fields.mainInfo = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void __fastcall ServantStatusDialog__Open_31684144(
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

  if ( (byte_4A56D24 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D24 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B8880C(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)*v13);
  ServantStatusDialog__Open_31684428(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void __fastcall ServantStatusDialog__Open_31684428(
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

  if ( (byte_4A56D28 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D28 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void __fastcall ServantStatusDialog__Open_31684788(
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

  if ( (byte_4A56D29 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v13);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_31684992(this, kind, (UserServantEntity_o *)Entity, equipIdList, 0LL, callback, 0LL, v15);
}


void __fastcall ServantStatusDialog__Open_31684992(
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

  if ( (byte_4A56D2A & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D2A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v15, v16);
  v17 = this->fields.kind - 2;
  v18 = v17 > 0x23;
  v19 = 0x677FFFFFEuLL >> v17;
  v20 = v18;
  v21 = v20 | v19 & 1;
  v22 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(v22, userSvtEntity, equipIdList, questRestrictionInfo, 0, v21, v21, 0, 0LL);
  this->fields.mainInfo = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24);
  ServantStatusDialog__Init(this, v25);
}


void __fastcall ServantStatusDialog__Open_31685256(
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

  if ( (byte_4A56D2B & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D2B = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_31685532(
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

  if ( (byte_4A56D2C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D2C = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32651480(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_31685812(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v16; // x6

  if ( (byte_4A56D2D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v14);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_31686024(this, kind, (UserServantEntity_o *)Entity, isUse, callback, openCallback, v16);
}


void __fastcall ServantStatusDialog__Open_31686024(
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

  if ( (byte_4A56D2E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D2E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32653816(v15, userSvtEntity, isUse, 0LL);
  this->fields.mainInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


void __fastcall ServantStatusDialog__Open_31686216(
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

  if ( (byte_4A56D2F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D2F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32655612(v18, userSvtCollectionEntity, 0, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void __fastcall ServantStatusDialog__Open_31686440(
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

  if ( (byte_4A56D30 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D30 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    imageLimitCount);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = this->fields.kind - 2;
  v16 = v15 > 0x23;
  v17 = 0x677FFFFFEuLL >> v15;
  v18 = v16;
  v19 = v18 | v17 & 1;
  v20 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32657252(v20, userSvtCollectionEntity, imageLimitCount, 0, v19, 0LL);
  this->fields.mainInfo = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22);
  ServantStatusDialog__Init(this, v23);
}


void __fastcall ServantStatusDialog__Open_31686680(
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

  if ( (byte_4A56D31 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D31 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = this->fields.kind - 2;
  v14 = v13 > 0x23;
  v15 = 0x677FFFFFEuLL >> v13;
  v16 = v14;
  v17 = v16 | v15 & 1;
  v18 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32655612(v18, userSvtCollectionEntity, callback != 0LL, v17, 0LL);
  this->fields.mainInfo = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v18, v19, v20);
  ServantStatusDialog__Init(this, v21);
}


void __fastcall ServantStatusDialog__Open_31686908(
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

  if ( (byte_4A56D32 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D32 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32658676(v13, servantLeaderInfo, kind != 7, 0LL);
  this->fields.mainInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void __fastcall ServantStatusDialog__Open_31687092(
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

  if ( (byte_4A56D33 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D33 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32660364(v13, equipTargetInfo, kind == 19, 0LL);
  this->fields.mainInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void __fastcall ServantStatusDialog__Open_31687276(
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

  if ( (byte_4A56D34 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D34 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    isUse);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v13, v14);
  v15 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32661192(v15, commandCodeEntity, isUse, 0LL);
  this->fields.mainInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v15, v16, v17);
  ServantStatusDialog__Init(this, v18);
}


void __fastcall ServantStatusDialog__Open_31687468(
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

  if ( (byte_4A56D35 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D35 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32661568(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void __fastcall ServantStatusDialog__Open_31687644(
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

  if ( (byte_4A56D36 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D36 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32661568(v13, userCommandCodeEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


void __fastcall ServantStatusDialog__Open_31687820(
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

  if ( (byte_4A56D37 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_TypeInfo);
    byte_4A56D37 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (int32_t)callback);
  this->fields.openCallbackFunc = openCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v11, v12);
  v13 = (ServantStatusListViewItem_o *)sub_1B887FC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32662644(v13, userCommandCodeCollectionEntity, 0LL);
  this->fields.mainInfo = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v14, v15);
  ServantStatusDialog__Init(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
        const MethodInfo *method)
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
  int32_t v20; // w3
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
  int32_t v40; // w3
  int32_t v41; // w22
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v43; // x21
  System_String_o *v44; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A56D4C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3226/*"Battle2D"*/);
    sub_1B885B0(&StringLiteral_16608/*"_y0"*/);
    byte_4A56D4C = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  if ( !this->fields.isBattlePlay )
  {
    battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleChrCamera, 0LL, 0LL) )
    {
      transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
      this->fields.isBattlePlay = 1;
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v8 = transform;
      while ( 1 )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v8,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v8, 0LL);
        v8 = transform;
        if ( !transform )
          goto LABEL_73;
      }
      if ( !Component_object )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Component_object,
                                               0LL);
      if ( !transform )
        goto LABEL_73;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
      if ( !transform )
        goto LABEL_73;
      v11 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_73;
      v46.fields.x = 1.0 / v11;
      v46.fields.y = 1.0 / v11;
      v46.fields.z = 1.0 / v11;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v46, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.mainInfo;
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__GetSvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               1,
                                               0LL);
      if ( !this->fields.mainInfo )
        goto LABEL_73;
      v12 = (int)transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              this->fields.mainInfo,
                                              0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      ServantStatusDialog__DestroyBattleChr(this, v15);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v12,
                                               LimitCountByImageLimitCostumeIn,
                                               0LL);
      if ( !this->fields.battleChrCamera )
        goto LABEL_73;
      v16 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleChrCamera, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      v18 = ServantAssetLoadManager__loadBattleActor(&v44, gameObject, v12, v16, 0, 0LL);
      this->fields.battleChr = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleChr, (int32_t)v18, v19, v20);
      if ( !v18 )
        goto LABEL_73;
      v21 = UnityEngine_GameObject__AddComponent_object_(
              v18,
              (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !v21 )
        goto LABEL_73;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v21, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_73;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v12,
                                               v16,
                                               0LL);
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
        v22.n64_u64[0] = 0LL;
        v23 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_73;
      v24 = v23 + this->fields.CHARA_BASE_POSITION.fields.z;
      v25 = vadd_f32(v22, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
      v26 = HIDWORD(v25);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v24 - 2),
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_73;
      v47.fields.x = 0.0;
      v47.fields.z = 0.0;
      v47.fields.y = 270.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v47, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      v27 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4A55CE6 )
      {
        transform = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v27 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        svtEntity = mainInfo->fields.svtEntity;
        if ( svtEntity )
        {
          battleSize = svtEntity->fields.battleSize;
          v31 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v31,
            (const MethodInfo_3172EBC *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v31 )
            goto LABEL_73;
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            5,
            0.75,
            (const MethodInfo_3173888 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            8,
            0.75,
            (const MethodInfo_3173888 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v31,
            9,
            0.75,
            (const MethodInfo_3173888 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v31,
                 battleSize,
                 (const MethodInfo_3173A80 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v32 = UnityEngine_GameObject__get_transform(v18, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v31,
                     battleSize,
                     (const MethodInfo_31737EC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v34 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v31,
                    battleSize,
                    (const MethodInfo_31737EC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v35 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v31,
                    battleSize,
                    (const MethodInfo_31737EC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v32 )
              goto LABEL_73;
            v48.fields.z = v35;
            v48.fields.x = Item;
            v48.fields.y = v34;
            UnityEngine_Transform__set_localScale(v32, v48, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v21, v12, v16, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v21, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v21,
          5000.0,
          (System_String_o *)StringLiteral_16608/*"_y0"*/,
          0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v12, v16, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v21, Manager__loadAnimEvents, v12, v16, 0LL);
      BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v21, this->fields.defaultAnimationName, 2, 0LL);
      BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v21, this->fields.defaultAnimationName, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
      if ( !transform
        || (v37 = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v21,
                                                      0LL)) == 0LL) )
      {
LABEL_73:
        sub_1B8880C(transform, v6);
      }
      v38 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_73;
        SimpleAnimation__Sample((SimpleAnimation_o *)v37, 0LL);
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_73;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v38, 0LL);
        }
      }
      this->fields.battleActor = (struct BattleFBXComponent_o *)v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleActor, (int32_t)v21, v39, v40);
      v41 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v18, v41, 0LL);
      if ( !noupdate )
      {
        transform = (UnityEngine_Component_o *)this->fields.statusTabListViewManager;
        if ( !transform )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)transform, 3, 0LL);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        if ( this->fields.isExit )
        {
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_33624140(this->fields.statusTabListViewManager, 2, 0LL);
            return;
          }
          goto LABEL_73;
        }
        v43 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v43,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !statusTabListViewManager )
          goto LABEL_73;
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v43, 0LL);
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
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_4A56D58 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4A56D58 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
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


bool __fastcall ServantStatusDialog__PlayChrVoice_31714516(
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
  if ( (byte_4A56D5A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4A56D5A = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool __fastcall ServantStatusDialog__PlayNpVoice(
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
  if ( (byte_4A56D59 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4A56D59 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool __fastcall ServantStatusDialog__PlayVoice(
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
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  int v21; // w19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56D55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4A56D55 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !voicePlayList || !*(_QWORD *)&voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1B8880C(0LL, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v12 = v10;
    if ( !v10 )
    {
      v21 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1B8880C(v10, v11);
  }
  while ( !System_String__Equals_61715348(assetName, (System_String_o *)v24.fields._current, 0LL) );
  ServantStatusDialog__StopVoice(this, v13);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1B8880C(0LL, v14);
    ServantStatusVoiceListViewManager__SetMode_34667044(voiceTabListViewManager, 2, listIndex, 0LL);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, (int32_t)voicePlayList, v15, v16);
  this->fields.voicePlayAssetName = assetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, (int32_t)assetName, v18, v19);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v20);
  v21 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v12 && v21 == 7;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4A56D60 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56D60 = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_31657200(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_33624140(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0LL);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_32636568(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0LL);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(charaGraphListViewManager, method);
  }
}


void __fastcall ServantStatusDialog__RandomLimitCountSettingResource(
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
  _BOOL4 v14; // w24
  const MethodInfo *v15; // x2
  int v16; // w8
  int v17; // w8
  unsigned __int8 v18; // w21
  struct ServantStatusListViewItem_o *v19; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  int v23; // w22
  BalanceConfig_c *v24; // x8
  struct ServantStatusListViewItem_o *v25; // x8
  System_Int32_array *supportRandomLimitCountList; // x22
  System_Func_int__bool__o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x0
  CommonUI_o *v30; // x19
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  CommonConfirmDialog_ClickDelegate_o *v34; // x0
  __int64 *v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  CommonConfirmDialog_ClickDelegate_o *v38; // x24
  const MethodInfo *v39; // x2
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v41; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4A56D8C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__);
    sub_1B885B0(&ServantStatusDialog___c__DisplayClass221_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11911/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11909/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11898/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11899/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11910/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11897/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4A56D8C = 1;
  }
  v9 = sub_1B887FC(ServantStatusDialog___c__DisplayClass221_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass221_0___ctor((ServantStatusDialog___c__DisplayClass221_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_53;
  v14 = isRandomOn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
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
        ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_53;
      }
      LOBYTE(v16) = *(_BYTE *)(v9 + 37);
      goto LABEL_49;
    }
LABEL_14:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v11);
    v17 = *(unsigned __int8 *)(v9 + 37);
    v18 = (unsigned __int8)mainInfo;
    *(_DWORD *)(v9 + 16) = 12;
    if ( v17 )
    {
      v19 = this->fields.mainInfo;
      if ( !v19 )
        goto LABEL_53;
      userSvtEntity = v19->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_53;
      v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v22;
      *(_QWORD *)&v42.fields.fakeValue = v21;
      mainInfo = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v42,
                                                  0LL);
      v23 = (int)mainInfo;
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      if ( v23 == v24->static_fields->ServantIdMashu1 )
      {
        v25 = this->fields.mainInfo;
        if ( !v25 )
          goto LABEL_53;
        supportRandomLimitCountList = v25->fields.supportRandomLimitCountList;
        if ( supportRandomLimitCountList )
        {
          v27 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v27,
            (Il2CppObject *)v9,
            Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__0__,
            0LL);
          if ( BasicHelper__Any_int__48671312(
                 supportRandomLimitCountList,
                 (System_Func_T__bool__o *)v27,
                 (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
          {
            v28 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
            if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
              v28 = sub_1BDA48C(v28);
            v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
            if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
              v29 = sub_1BDA48C(v29);
            v30 = **(CommonUI_o ***)(v29 + 184);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v35 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (v18 & *(_BYTE *)(v9 + 37) & 1) != 0 )
    {
      v36 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BDA48C(v36);
      v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1BDA48C(v37);
      v30 = **(CommonUI_o ***)(v37 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11899/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v35 = &Method_ServantStatusDialog___c__DisplayClass221_0__RandomLimitCountSettingResource_b__2__;
LABEL_40:
      v38 = v34;
      CommonConfirmDialog_ClickDelegate___ctor(v34, (Il2CppObject *)v9, *v35, 0LL);
      if ( v30 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v30,
          (System_String_o *)StringLiteral_1/*""*/,
          v31,
          v32,
          v33,
          v38,
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
      sub_1B8880C(mainInfo, v11);
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, *(_DWORD *)(v9 + 32), 0LL);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_53;
    v16 = *(unsigned __int8 *)(v9 + 37);
    if ( *(_BYTE *)(v9 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(mainInfo, v16 != 0, 0LL);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_53;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        this->fields.mainInfo,
        v39);
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
    ServantStatusListViewItem__SetRandomSettingByIndex(mainInfo, index, 0LL);
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
  ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v41 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v41,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !statusTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4A56D8A & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A56D8A = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(mainInfo, index, 0LL),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)mainInfo, 9, 0LL),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !statusTabListViewManager) )
  {
    sub_1B8880C(mainInfo, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A56D4A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D4A = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  struct ListViewItem_o *leftItem; // x8
  __int64 confirmDispLv; // x9
  int32_t v8; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_battleLoadAsset; // x21
  System_String_o *v12; // x20
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x22
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_4A56D4E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndLoadChangeBattleResource__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D4E = 1;
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
    sub_1B88814(battleTabListViewManager, isModifyInfo);
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
  v8 = (int)battleTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)battleTabListViewManager,
                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)battleTabListViewManager,
                                 v8,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                       v8,
                                                                       ServantImageLimitSealAfter,
                                                                       0LL);
  if ( !battleTabListViewManager )
    goto LABEL_29;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v12 = (System_String_o *)battleTabListViewManager;
  if ( System_String__Equals_61715348((System_String_o *)battleTabListViewManager, this->fields.battleLoadAsset, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v13);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v16 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v16, 0LL);
  }
  *p_battleLoadAsset = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v12, v14, v15);
  battleTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleTabListViewManager )
LABEL_29:
    sub_1B8880C(battleTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)battleTabListViewManager, 1, 0LL);
  battleLoadAsset = this->fields.battleLoadAsset;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v18, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v19);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
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
  if ( (byte_4A56D5E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&StringLiteral_17657/*"button_lock_reg"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17658/*"button_lock_unreg"*/);
    sub_1B885B0(&StringLiteral_17652/*"button_choice_unreg"*/);
    sub_1B885B0(&StringLiteral_20140/*"icon_equip"*/);
    sub_1B885B0(&StringLiteral_17651/*"button_choice_reg"*/);
    sub_1B885B0(&StringLiteral_20141/*"icon_equip_cc"*/);
    sub_1B885B0(&StringLiteral_17653/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_1B885B0(&StringLiteral_17654/*"button_favorite_unreg"*/);
    byte_4A56D5E = 1;
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
      v12 = v2->fields.mainInfo;
      if ( !v12 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_83;
      v13 = (System_String_o **)(v12->fields.isLock ? &StringLiteral_17657/*"button_lock_reg"*/ : &StringLiteral_17658/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v13, 0LL);
      v14 = v2->fields.mainInfo;
      if ( !v14 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v15 = (System_String_o **)(v14->fields.isChoice ? &StringLiteral_17651/*"button_choice_reg"*/ : &StringLiteral_17652/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v15, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUseFavorite, 0LL);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
      if ( !favoriteSprite )
        goto LABEL_83;
      v21 = (System_String_o **)&StringLiteral_17653/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v21 = (System_String_o **)&StringLiteral_17654/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v21, 0LL);
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
        v23 = v2->fields.mainInfo;
        if ( !v23 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)v23->fields.userSvtEntity;
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
          v24 = &StringLiteral_17662/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                            &v32,
                                            0LL);
          if ( !pushSprite )
            goto LABEL_83;
          v24 = &StringLiteral_17661/*"button_push_reg"*/;
          v30 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v30 )
            v24 = &StringLiteral_17662/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0LL);
      }
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v31 = v2->fields.mainInfo;
      if ( !v31 )
        goto LABEL_83;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31->fields.isUse, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20140/*"icon_equip"*/, 0LL);
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
  v6 = v2->fields.mainInfo;
  if ( !v6 )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_83;
  v7 = (System_String_o **)(v6->fields.isLock ? &StringLiteral_17657/*"button_lock_reg"*/ : &StringLiteral_17658/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v7, 0LL), (v8 = v2->fields.mainInfo) == 0LL)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0LL
    || (v8->fields.isChoice
      ? (v9 = (System_String_o **)&StringLiteral_17651/*"button_choice_reg"*/)
      : (v9 = (System_String_o **)&StringLiteral_17652/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v9, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_83:
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10 = (UnityEngine_Object_o *)v2->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
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
  v11 = v2->fields.mainInfo;
  if ( !v11 )
    goto LABEL_83;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11->fields.isUse, 0LL);
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20141/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4A56D49 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D49 = 1;
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
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v7, size > 0, 0LL);
    v7 = this->fields.noticeNumber;
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v7, size, 0LL);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0LL, 0LL) )
    {
      v7 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v7 )
      {
        ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)v7, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1B8880C(v7, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
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
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v61; // x21
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v68; // x2
  struct ServantStatusListViewItem_o *v69; // x8
  struct ServantStatusListViewItem_o *v70; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v72; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v76; // x0
  BgmManager_c *v77; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v79; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v80; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A56D5C & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1B885B0(&StringLiteral_17572/*"btn_txt_detail_off"*/);
    sub_1B885B0(&StringLiteral_17555/*"btn_txt_battlecharacter_on"*/);
    sub_1B885B0(&StringLiteral_17620/*"btn_txt_status_on"*/);
    sub_1B885B0(&StringLiteral_17476/*"btn_bg_12"*/);
    sub_1B885B0(&StringLiteral_17619/*"btn_txt_status_off"*/);
    sub_1B885B0(&StringLiteral_17630/*"btn_txt_voice_on"*/);
    sub_1B885B0(&StringLiteral_17600/*"btn_txt_profile_on"*/);
    sub_1B885B0(&StringLiteral_17629/*"btn_txt_voice_off"*/);
    sub_1B885B0(&StringLiteral_17478/*"btn_bg_19"*/);
    sub_1B885B0(&StringLiteral_17573/*"btn_txt_detail_on"*/);
    sub_1B885B0(&StringLiteral_17599/*"btn_txt_profile_off"*/);
    sub_1B885B0(&StringLiteral_17554/*"btn_txt_battlecharacter_off"*/);
    byte_4A56D5C = 1;
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
    v6 = 1;
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
      v7 = 1;
      goto LABEL_33;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0LL);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_287;
      v7 = 0;
LABEL_33:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v7, 0LL);
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
                v23 = (System_String_o **)&StringLiteral_17620/*"btn_txt_status_on"*/;
                if ( kind )
                  v23 = (System_String_o **)&StringLiteral_17619/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v23, 0LL);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v24 = (System_String_o **)(kind ? &StringLiteral_17476/*"btn_bg_12"*/ : &StringLiteral_17478/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v24, 0LL);
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
                                    (System_String_o *)StringLiteral_17599/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17476/*"btn_bg_12"*/,
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
                                                  v27 = (System_String_o **)&StringLiteral_17555/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v27 = (System_String_o **)&StringLiteral_17554/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v27, 0LL);
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
                                                                               ? &StringLiteral_17478/*"btn_bg_19"*/
                                                                               : &StringLiteral_17476/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v28, 0LL);
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
                                                          v30 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v30,
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
                                                                      (System_String_o *)StringLiteral_17629/*"btn_txt_voice_off"*/,
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
      v32 = &StringLiteral_17573/*"btn_txt_detail_on"*/;
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
      v9 = (System_String_o **)&StringLiteral_17620/*"btn_txt_status_on"*/;
      if ( kind )
        v9 = (System_String_o **)&StringLiteral_17619/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v9, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v10 = (System_String_o **)(kind ? &StringLiteral_17476/*"btn_bg_12"*/ : &StringLiteral_17478/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v10, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v11 = this->fields.statusButton;
      if ( !v11 )
        goto LABEL_287;
      v12 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v11, v12, this->fields.isInitTab, 0LL);
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
      v13 = &StringLiteral_17573/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v13 = &StringLiteral_17572/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v13, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v14 = (System_String_o **)(kind == 1 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v14, 0LL);
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
      v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
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
      v19 = (System_String_o **)&StringLiteral_17620/*"btn_txt_status_on"*/;
      if ( kind )
        v19 = (System_String_o **)&StringLiteral_17619/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v19, 0LL);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v20 = &StringLiteral_17478/*"btn_bg_19"*/;
      if ( kind )
        v20 = &StringLiteral_17476/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v20, 0LL);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v21 = this->fields.statusButton;
      if ( !v21 )
        goto LABEL_287;
      v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0LL);
      UICommonButton__SetColliderEnable(v21, v22, this->fields.isInitTab, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17572/*"btn_txt_detail_off"*/, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17476/*"btn_bg_12"*/, 0LL);
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
      v32 = &StringLiteral_17599/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v32, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17478/*"btn_bg_19"*/, 0LL);
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
      v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      isInitTab = 1;
LABEL_214:
      UICommonButton__SetColliderEnable(profileButton, v18, isInitTab, 0LL);
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
      v33 = (System_String_o **)&StringLiteral_17620/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17619/*"btn_txt_status_off"*/;
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
      v34 = (System_String_o **)(kind ? &StringLiteral_17476/*"btn_bg_12"*/ : &StringLiteral_17478/*"btn_bg_19"*/);
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
      v37 = (System_String_o **)&StringLiteral_17600/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v37 = (System_String_o **)&StringLiteral_17599/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v37, 0LL);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v38, 0LL);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v39 = this->fields.profileButton;
      if ( !v39 )
        goto LABEL_287;
      v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v39, v40, this->fields.isInitTab, 0LL);
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
      v41 = (System_String_o **)&StringLiteral_17555/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v41 = (System_String_o **)&StringLiteral_17554/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v41, 0LL);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      v42 = (System_String_o **)(kind == 2 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v42, 0LL);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_287;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0LL,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v43 = this->fields.battleButton;
      if ( !v43 )
        goto LABEL_287;
      v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v43, v44, this->fields.isInitTab, 0LL);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_287;
      v45 = isPlayVoice;
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
      if ( v45 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v6 != 1, 0LL);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v46 = (System_String_o **)&StringLiteral_17630/*"btn_txt_voice_on"*/;
          if ( !v6 )
            v46 = (System_String_o **)&StringLiteral_17629/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v46, 0LL);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v47 = (System_String_o **)(v6 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v47, 0LL);
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
                  v49 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
                  UICommonButton__SetColliderEnable(voiceButton, v49, this->fields.isInitTab, 0LL);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_287:
        sub_1B8880C(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0LL);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_287;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17629/*"btn_txt_voice_off"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17476/*"btn_bg_12"*/, 0LL);
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
        sub_1B88814(statusTabBase, *(_QWORD *)&kind);
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
            0LL);
          if ( this->fields.isInit )
            goto LABEL_231;
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)statusTabBase, 6, 0LL);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)statusTabBase, 4, 0LL);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v55 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !statusTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v55, 0LL);
LABEL_231:
          v56 = this->fields.statusTabListViewManager;
          v57 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v56 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(v56, 1, v57, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v31);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v59 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v59,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v59, 0LL);
          break;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            v31);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v61 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v61,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            v62);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          battleTabListViewManager->fields.callbackFunc = v61;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&battleTabListViewManager->fields.callbackFunc,
            (int32_t)v61,
            v63,
            v64);
          ServantStatusBattleListViewManager__SetMode_31643180(battleTabListViewManager, 1, v65, v66);
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
          if ( !byte_4A56DA0 )
          {
            sub_1B885B0(&RandomLimitCountManager_TypeInfo);
            byte_4A56DA0 = 1;
          }
          statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            statusTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(statusTabBase + 184) + 8LL) )
            goto LABEL_252;
          v69 = this->fields.mainInfo;
          if ( !v69 )
            goto LABEL_287;
          if ( !v69->fields.isConvertOverwriteImage )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, *(const MethodInfo **)&kind);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v68);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_287;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
          v70 = this->fields.mainInfo;
          if ( !v70 )
            goto LABEL_287;
          if ( !statusTabBase )
            goto LABEL_287;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v70->fields._IsTransformed_k__BackingField,
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
          v72 = this->fields.mainInfo;
          if ( !v72 )
            goto LABEL_287;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0LL);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_287;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v72,
            (System_Int32_array *)statusTabBase,
            0LL);
LABEL_262:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v76 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v76 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v76->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v77 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v77 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v77->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v79 = this->fields.voiceTabListViewManager;
          v80 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v80,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v79 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v79, 1, v80, 0LL);
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
  UnityEngine_Component_o *battleChrCamera; // x0
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_4A56D61 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A56D61 = 1;
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
            (System_String_o *)StringLiteral_24600/*"wait"*/,
            0LL);
          return;
        }
LABEL_13:
        sub_1B8880C(battleChrCamera, isVisible);
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
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_4A56D3A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1B885B0(&StringLiteral_11905/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_4A56D3A = 1;
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
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
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
  System_String_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *battleLoadAsset; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_4A56D46 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D46 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_34;
  v4 = (int)mainInfo;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          this->fields.mainInfo,
                                          0LL);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !mainInfo )
    goto LABEL_34;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)mainInfo,
                                 v4,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                              v4,
                                              ServantImageLimitSealAfter,
                                              0LL);
  if ( !mainInfo )
    goto LABEL_34;
  p_battleLoadAsset = &this->fields.battleLoadAsset;
  v8 = (System_String_o *)mainInfo;
  if ( System_String__Equals_61715348((System_String_o *)mainInfo, this->fields.battleLoadAsset, 0LL) )
  {
    if ( this->fields.isBattleResourceLoading )
      return 0;
    if ( !this->fields.isBattlePlay )
    {
LABEL_22:
      ServantStatusDialog__EndLoadBattle_31703952(this, method);
      return 0;
    }
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4A56DA0 )
    {
      sub_1B885B0(&RandomLimitCountManager_TypeInfo);
      byte_4A56DA0 = 1;
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
    sub_1B8880C(mainInfo, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_battleLoadAsset, 0LL) )
  {
    v13 = *p_battleLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v13, 0LL);
  }
  *p_battleLoadAsset = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleLoadAsset, (int32_t)v8, v11, v12);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_34;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  this->fields.isBattleResourceLoading = 1;
  ServantStatusDialog__SetTabKind(this, 2, v14);
  battleLoadAsset = this->fields.battleLoadAsset;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v10 = 1;
  if ( !AssetManager__loadAssetStorage(battleLoadAsset, v16, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v17);
    return 1;
  }
  return v10;
}


void __fastcall ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  int32_t SvtId; // w22
  System_String_o **p_cardLoadAsset; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x22
  AssetLoader_LoadEndDataHandler_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A56D40 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__);
    sub_1B885B0(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
    byte_4A56D40 = 1;
  }
  v5 = sub_1B887FC(ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = onComplete;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9);
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
  v13 = (System_String_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_String__Equals_61715348(
                                              (System_String_o *)mainInfo,
                                              *p_cardLoadAsset,
                                              0LL);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
LABEL_18:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_20:
    sub_1B8880C(mainInfo, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_cardLoadAsset, 0LL) )
  {
    v14 = *p_cardLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v14, 0LL);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  *p_cardLoadAsset = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, (int32_t)v13, v15, v16);
  v17 = *p_cardLoadAsset;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v17, v18, 1, 0LL) )
  {
    *p_cardLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_cardLoadAsset, 0, v19, v20);
    goto LABEL_18;
  }
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v4; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *statusLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  AssetData_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4A56D3E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndStatusLoad__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56D3E = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_12;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
  if ( !this->fields.mainInfo )
    goto LABEL_12;
  v4 = (int)mainInfo;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v4, LimitCount, 0LL);
  this->fields.statusLoadAsset = StatusImageFolderName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset,
    (int32_t)StatusImageFolderName,
    v7,
    v8);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
LABEL_12:
    sub_1B8880C(mainInfo, method);
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  statusLoadAsset = this->fields.statusLoadAsset;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(statusLoadAsset, v10, 1, 0LL) )
  {
    this->fields.statusLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusLoadAsset, 0, v11, v12);
    ServantStatusDialog__EndStatusLoad(this, v13, v14);
  }
}


void __fastcall ServantStatusDialog__StartTransformedStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *StatusImageFolderName; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t TransformedSvtId_k__BackingField; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x22
  AssetLoader_LoadEndDataHandler_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A56D42 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__);
    sub_1B885B0(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
    byte_4A56D42 = 1;
  }
  v5 = sub_1B887FC(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = onComplete;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9);
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
  v14 = StatusImageFolderName;
  StatusImageFolderName = (System_String_o *)System_String__Equals_61715348(
                                               StatusImageFolderName,
                                               *p_transformedStatusLoadAsset,
                                               0LL);
  if ( ((unsigned __int8)StatusImageFolderName & 1) != 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        0LL,
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_21:
    sub_1B8880C(StatusImageFolderName, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v15 = *p_transformedStatusLoadAsset;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v15, 0LL);
  }
  StatusImageFolderName = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_transformedStatusLoadAsset = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, (int32_t)v14, v16, v17);
  v18 = *p_transformedStatusLoadAsset;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v18, v19, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_transformedStatusLoadAsset, 0, v20, v21);
    goto LABEL_19;
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  bool v4; // w19
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w21
  ServantStatusListViewItem_o *v7; // x20
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v9; // x9
  int32_t v10; // w21
  BalanceConfig_c *v11; // x8
  ServantLimitAddMaster_o *v12; // x22
  struct ServantStatusListViewItem_o *v13; // x9
  int32_t v14; // w4
  const MethodInfo *v15; // x5
  struct PartyListViewItem_o *v16; // x8
  ServantStatusListViewItem_o *v17; // x22
  unsigned __int64 v18; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x29
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  ServantStatusListViewItem_o *v26; // x1
  Il2CppClass **v27; // x0
  int32_t v28; // w4
  const MethodInfo *v29; // x5
  System_Collections_Generic_List_object__o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  ServantStatusListViewItem_o *v36; // x1
  Il2CppClass **v37; // x0
  int32_t v38; // w4
  const MethodInfo *v39; // x5
  System_Collections_Generic_List_object__o *v40; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  ServantStatusListViewItem_o *v46; // x1
  Il2CppClass **v47; // x0
  int32_t v48; // w4
  const MethodInfo *v49; // x5
  BalanceConfig_c *v50; // x8
  int v51; // w23
  System_Collections_Generic_List_object__o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  ServantStatusListViewItem_o *v58; // x1
  Il2CppClass **v59; // x0
  int32_t v60; // w4
  const MethodInfo *v61; // x5
  BalanceConfig_c *v62; // x8
  int v63; // w23
  System_Collections_Generic_List_object__o *v64; // x23
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  ServantStatusListViewItem_o *v70; // x1
  Il2CppClass **v71; // x0
  int32_t v72; // w4
  const MethodInfo *v73; // x5
  System_Collections_Generic_List_object__o *v74; // x23
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  ServantStatusListViewItem_o *v80; // x1
  Il2CppClass **v81; // x0
  int32_t v82; // w4
  const MethodInfo *v83; // x5
  System_Collections_Generic_List_object__o *v84; // x23
  int32_t ServantIdMashu3; // w2
  int32_t v86; // w2
  int32_t v87; // w3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  ServantStatusListViewItem_o *v91; // x1
  Il2CppClass **v92; // x0
  System_Collections_Generic_List_object__o *v93; // x23
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  ServantStatusListViewItem_o *v99; // x1
  Il2CppClass **v100; // x0
  int32_t v101; // w4
  const MethodInfo *v102; // x5
  System_Collections_Generic_List_object__o *v103; // x23
  int32_t v104; // w2
  int32_t v105; // w3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  ServantStatusListViewItem_o *v109; // x1
  Il2CppClass **v110; // x0
  int64_t UserId; // x25
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w24
  System_Collections_Generic_List_object__o *v115; // x23
  int32_t v116; // w2
  int32_t v117; // w3
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  ServantStatusListViewItem_o *v121; // x1
  Il2CppClass **v122; // x0
  int32_t v123; // w4
  const MethodInfo *v124; // x5
  System_Collections_Generic_List_object__o *v125; // x23
  int32_t v126; // w2
  int32_t v127; // w3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  ServantStatusListViewItem_o *v131; // x1
  Il2CppClass **v132; // x0
  ServantVoiceRelationEntity_array *v133; // x20
  signed int max_length; // w8
  unsigned int v135; // w24
  ServantVoiceRelationEntity_o *v136; // x25
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x21
  __int64 v138; // x22
  __int64 v139; // x23
  ServantStatusDialog_o *v140; // x0
  int32_t v141; // w4
  const MethodInfo *v142; // x5
  int32_t v143; // w2
  int32_t v144; // w3
  struct System_Object_array *items; // x8
  _QWORD *v146; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v148; // x1
  Il2CppClass **v149; // x0
  System_Collections_Generic_List_object__o *v150; // x21
  ServantStatusDialog_o *v151; // x0
  int32_t v152; // w4
  const MethodInfo *v153; // x5
  int32_t v154; // w2
  int32_t v155; // w3
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  ServantStatusListViewItem_o *v159; // x1
  Il2CppClass **v160; // x0
  System_Collections_Generic_List_object__o *v161; // x21
  ServantStatusDialog_o *v162; // x0
  int32_t v163; // w4
  const MethodInfo *v164; // x5
  int32_t v165; // w2
  int32_t v166; // w3
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  ServantStatusListViewItem_o *v170; // x1
  Il2CppClass **v171; // x0
  struct System_Collections_Generic_List_string__o *v172; // x8
  const MethodInfo *v173; // x2
  NetworkManager_c *v174; // x0
  Il2CppObject *Item; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *loadVoiceData; // x20
  System_Action_o *v179; // x21
  ServantStatusListViewItem_o *v181; // [xsp+8h] [xbp-78h]
  unsigned __int64 v182; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_4A56D52 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56D52 = 1;
  }
  relationList = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A56A2F )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A56A2F = 1;
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
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v6 = (int)mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         (int32_t)mainInfo,
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_162;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v6,
                                              0LL);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_162;
  v7 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v6,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v7 )
    goto LABEL_162;
  partyItem = v7->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v9 = 0LL;
    v181 = v7;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)partyItem )
        goto LABEL_163;
      v10 = *((_DWORD *)&v7->fields.memberItem + v9);
      v182 = v9;
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v11 = BalanceConfig_TypeInfo;
      v12 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      v13 = this->fields.mainInfo;
      if ( !v13 )
        goto LABEL_162;
      if ( !v12 )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v12,
                                                  v10,
                                                  v11->static_fields->ServantLimitMax,
                                                  v13->fields.costumeIds,
                                                  0LL);
      if ( !mainInfo )
        goto LABEL_162;
      v16 = mainInfo->fields.partyItem;
      v17 = mainInfo;
      if ( (int)v16 >= 1 )
        break;
LABEL_119:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_162;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v10, 0LL);
      v133 = relationList;
      if ( !relationList )
        goto LABEL_162;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v135 = 0;
        while ( v135 < max_length )
        {
          v136 = v133->m_Items[v135];
          if ( !v136 )
            goto LABEL_162;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v139 = *(_QWORD *)&v136->fields.relationSvtId.fields.currentCryptoKey;
          v138 = *(_QWORD *)&v136->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v184.fields.currentCryptoKey = v139;
          *(_QWORD *)&v184.fields.fakeValue = v138;
          v140 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v184, 0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v140,
                                                      0,
                                                      (int32_t)v140,
                                                      0,
                                                      v141,
                                                      v142);
          if ( !requestVoiceDataList )
            goto LABEL_162;
          items = requestVoiceDataList->fields._items;
          v146 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_162;
          size = requestVoiceDataList->fields._size;
          v148 = mainInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v149 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v149[4] = (Il2CppClass *)v148;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v149 + 4), (int32_t)v148, v143, v144);
          }
          v150 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v151 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                            v136->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v151,
                                                      2,
                                                      (int32_t)v151,
                                                      0,
                                                      v152,
                                                      v153);
          if ( !v150 )
            goto LABEL_162;
          v156 = v150->fields._items;
          v157 = Method_System_Collections_Generic_List_string__Add__;
          ++v150->fields._version;
          if ( !v156 )
            goto LABEL_162;
          v158 = v150->fields._size;
          v159 = mainInfo;
          if ( (unsigned int)v158 >= v156->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v150,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = &v156->obj.klass + v158;
            v150->fields._size = v158 + 1;
            v160[4] = (Il2CppClass *)v159;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v160 + 4), (int32_t)v159, v154, v155);
          }
          v161 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v162 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                            v136->fields.relationSvtId,
                                            0LL);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v162,
                                                      1,
                                                      (int32_t)v162,
                                                      0,
                                                      v163,
                                                      v164);
          if ( !v161 )
            goto LABEL_162;
          v167 = v161->fields._items;
          v168 = Method_System_Collections_Generic_List_string__Add__;
          ++v161->fields._version;
          if ( !v167 )
            goto LABEL_162;
          v169 = v161->fields._size;
          v170 = mainInfo;
          if ( (unsigned int)v169 >= v167->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v161,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
          }
          else
          {
            v171 = &v167->obj.klass + v169;
            v161->fields._size = v169 + 1;
            v171[4] = (Il2CppClass *)v170;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 4), (int32_t)v170, v165, v166);
          }
          max_length = v133->max_length;
          if ( (int)++v135 >= max_length )
            goto LABEL_144;
        }
LABEL_163:
        sub_1B88814(mainInfo, method);
      }
LABEL_144:
      v7 = v181;
      LODWORD(partyItem) = v181->fields.partyItem;
      v9 = v182 + 1;
      if ( (__int64)(v182 + 1) >= (int)partyItem )
        goto LABEL_145;
    }
    v18 = 0LL;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_163;
      v20 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v14,
                                                  v15);
      if ( !v20 )
        goto LABEL_162;
      v23 = v20->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v20->fields._version;
      if ( !v23 )
        goto LABEL_162;
      v25 = v20->fields._size;
      v26 = mainInfo;
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &v23->obj.klass + v25;
        v20->fields._size = v25 + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
      }
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_163;
      v30 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v28,
                                                  v29);
      if ( !v30 )
        goto LABEL_162;
      v33 = v30->fields._items;
      v34 = Method_System_Collections_Generic_List_string__Add__;
      ++v30->fields._version;
      if ( !v33 )
        goto LABEL_162;
      v35 = v30->fields._size;
      v36 = mainInfo;
      if ( (unsigned int)v35 >= v33->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &v33->obj.klass + v35;
        v30->fields._size = v35 + 1;
        v37[4] = (Il2CppClass *)v36;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
      }
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_163;
      v40 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v10,
                                                  *((_DWORD *)p_memberItem + v18),
                                                  v38,
                                                  v39);
      if ( !v40 )
        goto LABEL_162;
      v43 = v40->fields._items;
      v44 = Method_System_Collections_Generic_List_string__Add__;
      ++v40->fields._version;
      if ( !v43 )
        goto LABEL_162;
      v45 = v40->fields._size;
      v46 = mainInfo;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &v43->obj.klass + v45;
        v40->fields._size = v45 + 1;
        v47[4] = (Il2CppClass *)v46;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v50 = BalanceConfig_TypeInfo;
      v51 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v50 = BalanceConfig_TypeInfo;
      }
      if ( v51 == v50->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_162;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
      v62 = BalanceConfig_TypeInfo;
      v63 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 == v62->static_fields->ServantIdMashu1 )
      {
        v64 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v62->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v62);
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_163;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v14,
                                                    v15);
        if ( !v64 )
          goto LABEL_162;
        v67 = v64->fields._items;
        v68 = Method_System_Collections_Generic_List_string__Add__;
        ++v64->fields._version;
        if ( !v67 )
          goto LABEL_162;
        v69 = v64->fields._size;
        v70 = mainInfo;
        if ( (unsigned int)v69 >= v67->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &v67->obj.klass + v69;
          v64->fields._size = v69 + 1;
          v71[4] = (Il2CppClass *)v70;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v70, v65, v66);
        }
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_163;
        v93 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v72,
                                                    v73);
        if ( !v93 )
          goto LABEL_162;
        v96 = v93->fields._items;
        v97 = Method_System_Collections_Generic_List_string__Add__;
        ++v93->fields._version;
        if ( !v96 )
          goto LABEL_162;
        v98 = v93->fields._size;
        v99 = mainInfo;
        if ( (unsigned int)v98 >= v96->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v93,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &v96->obj.klass + v98;
          v93->fields._size = v98 + 1;
          v100[4] = (Il2CppClass *)v99;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v99, v94, v95);
        }
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_163;
        v103 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v18),
                                                    v101,
                                                    v102);
        if ( !v103 )
          goto LABEL_162;
        v106 = v103->fields._items;
        v107 = Method_System_Collections_Generic_List_string__Add__;
        ++v103->fields._version;
        if ( !v106 )
          goto LABEL_162;
        v108 = v103->fields._size;
        v109 = mainInfo;
        if ( (unsigned int)v108 >= v106->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v103,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &v106->obj.klass + v108;
          v103->fields._size = v108 + 1;
          v110[4] = (Il2CppClass *)v109;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v109, v104, v105);
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
          v115 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_163;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v18),
                                                      v14,
                                                      v15);
          if ( !v115 )
            goto LABEL_162;
          v118 = v115->fields._items;
          v119 = Method_System_Collections_Generic_List_string__Add__;
          ++v115->fields._version;
          if ( !v118 )
            goto LABEL_162;
          v120 = v115->fields._size;
          v121 = mainInfo;
          if ( (unsigned int)v120 >= v118->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v115,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
          }
          else
          {
            v122 = &v118->obj.klass + v120;
            v115->fields._size = v120 + 1;
            v122[4] = (Il2CppClass *)v121;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v121, v116, v117);
          }
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_163;
          v125 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v18),
                                                      v123,
                                                      v124);
          if ( !v125 )
            goto LABEL_162;
          v128 = v125->fields._items;
          v129 = Method_System_Collections_Generic_List_string__Add__;
          ++v125->fields._version;
          if ( !v128 )
            goto LABEL_162;
          v130 = v125->fields._size;
          v131 = mainInfo;
          if ( (unsigned int)v130 >= v128->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v125,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v132 = &v128->obj.klass + v130;
            v125->fields._size = v130 + 1;
            v132[4] = (Il2CppClass *)v131;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v132 + 4), (int32_t)v131, v126, v127);
          }
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_163;
          v84 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_78;
        }
      }
LABEL_108:
      LODWORD(v16) = v17->fields.partyItem;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_119;
    }
    v52 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_163;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v18),
                                                v48,
                                                v49);
    if ( !v52 )
      goto LABEL_162;
    v55 = v52->fields._items;
    v56 = Method_System_Collections_Generic_List_string__Add__;
    ++v52->fields._version;
    if ( !v55 )
      goto LABEL_162;
    v57 = v52->fields._size;
    v58 = mainInfo;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v55->obj.klass + v57;
      v52->fields._size = v57 + 1;
      v59[4] = (Il2CppClass *)v58;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v58, v53, v54);
    }
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_163;
    v74 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v18),
                                                v60,
                                                v61);
    if ( !v74 )
      goto LABEL_162;
    v77 = v74->fields._items;
    v78 = Method_System_Collections_Generic_List_string__Add__;
    ++v74->fields._version;
    if ( !v77 )
      goto LABEL_162;
    v79 = v74->fields._size;
    v80 = mainInfo;
    if ( (unsigned int)v79 >= v77->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v74,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v77->obj.klass + v79;
      v74->fields._size = v79 + 1;
      v81[4] = (Il2CppClass *)v80;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v80, v75, v76);
    }
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_163;
    v84 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_78:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v18),
                                                v82,
                                                v83);
    if ( !v84 )
      goto LABEL_162;
    v88 = v84->fields._items;
    v89 = Method_System_Collections_Generic_List_string__Add__;
    ++v84->fields._version;
    if ( !v88 )
      goto LABEL_162;
    v90 = v84->fields._size;
    v91 = mainInfo;
    if ( (unsigned int)v90 >= v88->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v84,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v88->obj.klass + v90;
      v84->fields._size = v90 + 1;
      v92[4] = (Il2CppClass *)v91;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v91, v86, v87);
    }
    goto LABEL_108;
  }
LABEL_145:
  v172 = this->fields.requestVoiceDataList;
  if ( !v172 )
LABEL_162:
    sub_1B8880C(mainInfo, method);
  if ( v172->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_162;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v173);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A56A2F )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A56A2F = 1;
  }
  v174 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v174 = NetworkManager_TypeInfo;
  }
  if ( v174->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceData, (int32_t)Item, v176, v177);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_162;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v179 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v179, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v4 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v179, 1, 0LL);
  return v4;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v9; // x21
  ServantStatusBattleListViewItem_o *p_voicePlayer; // x19
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A56D54 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_1B885B0(&StringLiteral_6001/*"EndWaitVoice"*/);
    byte_4A56D54 = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_34667044(voiceTabListViewManager, 2, -1, 0LL);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_69443960(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6001/*"EndWaitVoice"*/,
      0LL);
    this->fields.voicePlayList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayList, 0, v4, v5);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayAssetName, 0, v6, v7);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayer, v9, 0LL);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (ServantStatusBattleListViewItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0LL);
      p_voicePlayer->klass = 0LL;
      sub_1B88554(p_voicePlayer, 0, v11, v12);
      return;
    }
LABEL_13:
    sub_1B8880C(voiceTabListViewManager, method);
  }
}


void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x8

  if ( (byte_4A56D97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1B885B0(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D97 = 1;
  }
  if ( this->fields.tabKind == 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       cvId,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL )
    {
      sub_1B8880C(Instance, v6);
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
  struct System_Boolean_array *tabInitList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  System_Action_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusFlavorTextListViewManager_o *v10; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v11; // x21
  struct ServantStatusFlavorTextListViewManager_o *v12; // x8

  v4 = this;
  if ( (byte_4A56D96 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_1B885B0(&Method_ServantStatusDialog__UpdateProfileList_b__234_0__);
    byte_4A56D96 = 1;
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
    v7 = (System_Action_object__o *)sub_1B887FC(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__234_0__, 0LL);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v7;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int32_t)v7,
        v8,
        v9);
      if ( !setMode )
        return;
      v10 = v4->fields.profileTabListViewManager;
      v11 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v10 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v10, 1, v11, 0LL);
        v12 = v4->fields.profileTabListViewManager;
        if ( v12 )
        {
          v12->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_1B8880C(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( tabInitList->max_length <= 1 )
    sub_1B88814(this, setMode);
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
    sub_1B8880C(this, *(_QWORD *)&imageLimitCount);
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
    sub_1B8880C(this, imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1B8880C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A56D9B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndInitLoad__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A56D9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v6, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A56D9C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssetData__TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog__LoadTransformedResource_b__194_1__);
    byte_4A56D9C = 1;
  }
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__194_1__,
    0LL);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__194_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  ServantStatusDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4A56D9D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_4A56D9D = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__224_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  PartyOrganizationUtility_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56D9E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A56D9E = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v5, 0LL),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v6, 0LL),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(v6, v7);
  }
  v6->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v7);
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

  if ( (byte_4A56D9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56D9F = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1B88658(int___TypeInfo, 1LL);
          if ( entity )
          {
            v14 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1B88658(int___TypeInfo, 1LL);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1B88814(Master_object, v6);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v10 )
              {
                ServantCommentMaster__SetOpen_39629696(v10, v13, v14, (System_Int32_array *)Master_object, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B8880C(Master_object, v6);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9EEC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9EA4;
}


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
  if ( (byte_4A57527 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57527 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CA068;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CA010;
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
  if ( (byte_4A5752A & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5752A = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, isNeedSort, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9F60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9F08;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14 = questId;
  if ( (byte_4A57528 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A57528 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, *(_QWORD *)&questId, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9FE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9F84;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  char v20[4]; // [xsp+38h] [xbp-38h] BYREF
  char v21[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v21[0] = isModify;
  v20[0] = isNeedSort;
  v19 = questId;
  if ( (byte_4A57529 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A57529 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(bool_TypeInfo, v21, isNeedSort, *(_QWORD *)&questId, callback);
  v17[1] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  if ( (byte_4A5752F & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__195_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5752F = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1B8880C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__195_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(this, data);
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
    sub_1B8880C(this, data);
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
  struct ServantStatusDialog_o *_4__this; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5752B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__);
    byte_4A5752B = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
        v6 = sub_1BDA48C(v6);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
      if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
        v7 = sub_1BDA48C(v7);
      _4__this = **(struct ServantStatusDialog_o ***)(v7 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B8880C(_4__this, isDecide);
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.pushButton) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1BDA48C(_4__this);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass217_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_30494572(klass, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass217_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass217_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_4A5752C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass217_0_o *)sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4A5752C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v5, 0LL);
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
  __int64 v5; // x0
  __int64 v6; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v8; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v12; // x8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  Il2CppObject *v15; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_4A5752D & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4A5752D = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  mainInfo = **(CommonUI_o ***)(v6 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30494572(mainInfo, 0LL, 0LL);
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
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting((ServantStatusListViewItem_o *)mainInfo, isRandomOn, v8);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          mainInfo = (CommonUI_o *)v12->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v12->fields.mainInfo,
              0LL);
            v13 = this->fields.__4__this;
            if ( v13 )
            {
              mainInfo = (CommonUI_o *)v13->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v13->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(mainInfo, isDecide);
  }
LABEL_21:
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v14->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v15 = (Il2CppObject *)this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v15[12].monitor;
  v17 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v17, v15, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass221_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass221_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  CommonUI_o *mainInfo; // x0
  const MethodInfo *v8; // x2
  struct ServantStatusDialog_o *_4__this; // x8
  int32_t index; // w8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v12; // x8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  Il2CppObject *v15; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_4A5752E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4A5752E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  mainInfo = **(CommonUI_o ***)(v6 + 184);
  if ( !mainInfo )
    goto LABEL_26;
  CommonUI__CloseConfirmDialog_30494572(mainInfo, 0LL, 0LL);
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
        ServantStatusListViewItem__set_IsEnableOwnRandomSetting((ServantStatusListViewItem_o *)mainInfo, isRandomOn, v8);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          mainInfo = (CommonUI_o *)v12->fields.charaGraphListViewManager;
          if ( mainInfo )
          {
            ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
              (ServantStatusCharaGraphListViewManager_o *)mainInfo,
              v12->fields.mainInfo,
              0LL);
            v13 = this->fields.__4__this;
            if ( v13 )
            {
              mainInfo = (CommonUI_o *)v13->fields.charaGraphListViewManager;
              if ( mainInfo )
              {
                ServantStatusCharaGraphListViewManager__SetEnableScroll(
                  (ServantStatusCharaGraphListViewManager_o *)mainInfo,
                  v13->fields.mainInfo,
                  0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(mainInfo, isDecide);
  }
LABEL_21:
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_26;
  mainInfo = (CommonUI_o *)v14->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode_33624140((ServantStatusListViewManager_o *)mainInfo, 10, 0LL);
  v15 = (Il2CppObject *)this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  monitor = (ServantStatusListViewManager_o *)v15[12].monitor;
  v17 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B887FC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(v17, v15, (intptr_t)Method_ServantStatusDialog_OnSelectStatus__, 0LL);
  if ( !monitor )
    goto LABEL_26;
  ServantStatusListViewManager__SetMode(monitor, 1, v17, 0LL);
}