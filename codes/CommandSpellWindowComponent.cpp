void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_43874F1 & 1) == 0 )
  {
    sub_B775C4(&CommandSpellWindowComponent_TypeInfo);
    byte_43874F1 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void __fastcall CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_43874F0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43874F0 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B77560(&this->fields.objlist);
  this->fields.temporarySpell = -1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall CommandSpellWindowComponent__Close(
        CommandSpellWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_43874E6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43874E6 = 1;
  }
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_13;
  tree_root = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(tree_root, 0LL);
  if ( !tree_root )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    tree_root = (UnityEngine_Component_o *)this->fields.classBoardWindowButton;
    if ( !tree_root )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0LL);
  }
  tree_root = (UnityEngine_Component_o *)this->fields.checkWindow;
  if ( !tree_root )
LABEL_13:
    sub_B7769C(tree_root, call);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))tree_root->klass[1]._1.parent)(
    tree_root,
    tree_root->klass[1]._1.generic_class);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall CommandSpellWindowComponent__CompOpen(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall CommandSpellWindowComponent__EndCloseClassBoardEffectListDialog(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_43874EF & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43874EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog(Instance, v4, v5);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  this->fields.isOpenClassBoardEffectListDialog = 0;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
}


void __fastcall CommandSpellWindowComponent__InitializeCommandSpell(
        CommandSpellWindowComponent_o *this,
        BattlePerformance_o *bp,
        int32_t inMode,
        int32_t temporary,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  __int64 checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x21
  Il2CppObject *current; // x22
  CommandSpellWindowComponent___c_c *v15; // x0
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v18; // x23
  struct CommandSpellWindowComponent___c_StaticFields *v19; // x0
  int max_length; // w8
  unsigned int v21; // w25
  int v22; // w26
  Il2CppClass **v23; // x28
  char *v24; // x28
  __int64 v25; // t1
  int v26; // w8
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Transform_o *v28; // x23
  const MethodInfo *v29; // x4
  __int64 v30; // x23
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v33; // x8
  __int64 v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43874E7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Sort_CommandSpellEntity___);
    sub_B775C4(&CommandSpellWindowComponent_TypeInfo);
    sub_B775C4(&Method_System_Comparison_CommandSpellEntity___ctor__);
    sub_B775C4(&System_Comparison_CommandSpellEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B775C4(&Method_DataMasterBase_getEntitys_CommandSpellEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__);
    sub_B775C4(&CommandSpellWindowComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_15664/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/);
    sub_B775C4(&StringLiteral_15663/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/);
    sub_B775C4(&StringLiteral_2475/*"BATTLE_CHECKUSE_COMMANDSPELL"*/);
    sub_B775C4(&StringLiteral_3376/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/);
    byte_43874E7 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    sub_B77560(&this->fields.battlePerf);
  }
  checkWindow = (__int64)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_78;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)checkWindow + 424LL))(
    checkWindow,
    *(_QWORD *)(*(_QWORD *)checkWindow + 432LL));
  checkWindow = (__int64)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_78;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)checkWindow, 1, 0.15, 0, 0LL);
  checkWindow = (__int64)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_78;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)checkWindow + 456LL))(
    checkWindow,
    *(_QWORD *)(*(_QWORD *)checkWindow + 464LL));
  checkuselabel = this->fields.checkuselabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  checkWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2475/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_78;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3376/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
  if ( !classBoardCautionLabel )
    goto LABEL_78;
  UILabel__set_text(classBoardCautionLabel, (System_String_o *)checkWindow, 0LL);
  checkWindow = (__int64)this->fields.classBoardCautionLabel;
  if ( !checkWindow )
    goto LABEL_78;
  checkWindow = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)checkWindow, 0LL);
  if ( !checkWindow )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  checkWindow = (__int64)this->fields.tree_root;
  if ( !checkWindow )
    goto LABEL_78;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)checkWindow, 0LL);
  checkWindow = (__int64)this->fields.prefab;
  if ( !checkWindow )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  if ( (temporary & 0x80000000) == 0 )
    this->fields.commandCount = temporary;
  this->fields.mode = inMode;
  if ( !inMode )
    this->fields.commandCount = 10;
  checkWindow = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_78;
  checkWindow = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)checkWindow,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_78;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)checkWindow,
                                                                       (const MethodInfo_1D18CC4 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objlist,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v36.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    checkWindow = (__int64)this->fields.objlist;
    if ( !checkWindow )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkWindow,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  v15 = CommandSpellWindowComponent___c_TypeInfo;
  if ( (BYTE3(CommandSpellWindowComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v15 = CommandSpellWindowComponent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v18,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_CommandSpellEntity___ctor__);
    v19 = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    v19->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_B77560(&v19->__9__39_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    Entitys_WarQuestSelectionEntity,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_1C56B58 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_78;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      if ( v21 >= max_length )
      {
LABEL_79:
        v34 = sub_B776C8(checkWindow);
        sub_B77668(v34, 0LL);
      }
      v23 = &Entitys_WarQuestSelectionEntity->obj.klass + (int)v21;
      v25 = (__int64)v23[4];
      v24 = (char *)(v23 + 4);
      checkWindow = v25;
      if ( !v25 )
        goto LABEL_78;
      v26 = *(_DWORD *)(checkWindow + 24);
      if ( v26 && (inMode != 1 || (unsigned int)(v26 - 1) <= 1) )
      {
        checkWindow = CommandSpellEntity__checkHideInDetailWindow((CommandSpellEntity_o *)checkWindow, v9);
        if ( (checkWindow & 1) == 0 )
        {
          checkWindow = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.prefab,
                                   this->fields.tree_root,
                                   0LL,
                                   0LL);
          if ( !checkWindow )
            goto LABEL_78;
          v27 = (UnityEngine_GameObject_o *)checkWindow;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0LL);
          checkWindow = (__int64)UnityEngine_GameObject__get_transform(v27, 0LL);
          v28 = (UnityEngine_Transform_o *)checkWindow;
          if ( (BYTE3(CommandSpellWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
          {
            checkWindow = j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          }
          if ( !v28 )
            goto LABEL_78;
          v37.fields.x = 0.0;
          v37.fields.z = 0.0;
          v37.fields.y = (float)-(v22 * CommandSpellWindowComponent_TypeInfo->static_fields->objheight);
          UnityEngine_Transform__set_localPosition(v28, v37, 0LL);
          checkWindow = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v27,
                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
          if ( v21 >= Entitys_WarQuestSelectionEntity->max_length )
            goto LABEL_79;
          if ( !*(_QWORD *)v24 )
            goto LABEL_78;
          v30 = checkWindow;
          if ( !checkWindow )
            goto LABEL_78;
          CommandSpellObjectComponent__setData(
            (CommandSpellObjectComponent_o *)checkWindow,
            this->fields.mode,
            *(_DWORD *)(*(_QWORD *)v24 + 16LL),
            this->fields.commandCount,
            v29);
          *(_QWORD *)(v30 + 24) = this;
          sub_B77560(v30 + 24);
          if ( !this->fields.mode )
            *(_BYTE *)(v30 + 88) = 0;
          UnityEngine_GameObject__SetActive(v27, 1, 0LL);
          checkWindow = (__int64)this->fields.objlist;
          if ( !checkWindow )
            goto LABEL_78;
          ++v22;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkWindow,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
      }
      max_length = Entitys_WarQuestSelectionEntity->max_length;
      ++v21;
    }
    while ( (int)v21 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_15663/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_15664/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (__int64)LocalizationManager__Get((System_String_o *)*v33, 0LL);
  if ( !titleLabel )
LABEL_78:
    sub_B7769C(checkWindow, v9);
  UILabel__set_text(titleLabel, (System_String_o *)checkWindow, 0LL);
}


void __fastcall CommandSpellWindowComponent__InitializeCommandSpellDepth(
        CommandSpellWindowComponent_o *this,
        int32_t inMode,
        int32_t scrollViewDepth,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_43874E8 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43874E8 = 1;
  }
  CommandSpellWindowComponent__InitializeCommandSpell(this, 0LL, inMode, -1, v4);
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(tree_root, 0LL);
  tree_root = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !tree_root )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      tree_root,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  tree_root = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)tree_root & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)Component_WebViewObject,
                                               (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
        tree_root = (UnityEngine_Component_o *)Component_WebViewObject[2].monitor;
        if ( tree_root )
        {
          tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   tree_root,
                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B7769C(tree_root, v8);
  }
}


void __fastcall CommandSpellWindowComponent__OnClick(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x0

  callback_close = this->fields.callback_close;
  if ( callback_close )
    CommandSpellWindowComponent_CloseButtonCallBack__Invoke(callback_close, 0LL);
}


void __fastcall CommandSpellWindowComponent__OnClickClassBoardWindowOpen(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x7

  if ( (byte_43874EE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__);
    sub_B775C4(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43874EE = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v4 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B775CC();
    v5 = (System_Reflection_MethodBase_o *)sub_B775A8(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B7769C(v8, v9);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v7, 2, 0LL, v10);
  }
}


void __fastcall CommandSpellWindowComponent__Open(
        CommandSpellWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *label_count; // x21
  System_String_o *v8; // x1
  __int64 v9; // x1
  CommandSpellObjectComponent_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v14; // x21
  BalanceConfig_c *v15; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_43874E9 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43874E9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.isOpenFlg = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_37;
  this->fields.commandCount = UserGameEntity__getCommandSpell(SelfUserGame, 0LL);
  if ( this->fields.isUseTemporarySpell )
    this->fields.commandCount = this->fields.temporarySpell;
  label_count = this->fields.label_count;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int)this + 184, 0LL);
  if ( !label_count )
    goto LABEL_37;
  if ( SelfUserGame )
    v8 = (System_String_o *)SelfUserGame;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v8, 0LL);
  if ( this->fields.mode == 1 )
  {
    SelfUserGame = (UserGameEntity_o *)this->fields.objlist;
    if ( !SelfUserGame )
      goto LABEL_37;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SelfUserGame,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v19.fields.current )
        sub_B7769C(0LL, v9);
      Component_srcLineSprite = (CommandSpellObjectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v19.fields.current,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v11);
      CommandSpellObjectComponent__updateIsUse(
        Component_srcLineSprite,
        this->fields.mode,
        this->fields.commandCount,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0LL)) == 0LL )
  {
LABEL_37:
    sub_B7769C(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    v14 = this->fields.classBoardWindowButton;
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v15->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_24699280(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, (unsigned __int8)SelfUserGame & 1, 0LL);
      goto LABEL_32;
    }
    goto LABEL_37;
  }
LABEL_32:
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent__SetCheckUseLabel(
        CommandSpellWindowComponent_o *this,
        bool isAddFunction,
        const MethodInfo *method)
{
  UnityEngine_Component_o *spellnamelabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v7; // s0
  float v8; // s8
  UnityEngine_GameObject_o *v9; // x0
  float v10; // s0

  spellnamelabel = (UnityEngine_Component_o *)this->fields.spellnamelabel;
  if ( !spellnamelabel )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(spellnamelabel, 0LL);
  v7 = 49.0;
  if ( isAddFunction )
    v7 = 70.0;
  v8 = isAddFunction ? 52.5 : 32.4;
  GameObjectExtensions__SetLocalPositionY(gameObject, v7, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.spellNameLineSprite, v8, 0LL);
  spellnamelabel = (UnityEngine_Component_o *)this->fields.checkuselabel;
  if ( !spellnamelabel )
    goto LABEL_13;
  v9 = UnityEngine_Component__get_gameObject(spellnamelabel, 0LL);
  v10 = -5.0;
  if ( isAddFunction )
    v10 = 25.0;
  GameObjectExtensions__SetLocalPositionY(v9, v10, 0LL);
  spellnamelabel = (UnityEngine_Component_o *)this->fields.classBoardCautionLabel;
  if ( !spellnamelabel
    || (spellnamelabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(spellnamelabel, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(spellnamelabel, isAddFunction);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spellnamelabel, isAddFunction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent__UseSpell(
        CommandSpellWindowComponent_o *this,
        int32_t Id,
        const MethodInfo *method)
{
  void *battlePerf; // x0
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v7; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v9; // x2
  bool IsQuestClear_24699280; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  BattleWindowOuterClickManagerComponent_o *v13; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v14; // x21

  if ( (byte_43874EA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_CommandSpellWindowComponent_cancelSpell__);
    sub_B775C4(&Method_CommandSpellWindowComponent_endSpellOpened__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43874EA = 1;
  }
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_26;
  BattlePerformance__SetCloseSelectMainSubSvtWindow((BattlePerformance_o *)battlePerf, 0LL);
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_26;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)battlePerf, 0LL);
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    this->fields.tmp_Id = Id;
    battlePerf = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)battlePerf,
                       Id,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0LL);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v7 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v7 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v7->static_fields->ClassBoardReleaseQuestId;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_24699280 = CondType__IsQuestClear_24699280(ClassBoardReleaseQuestId, -1, 0, 0LL);
            battlePerf = 0LL;
            if ( IsQuestClear_24699280 )
            {
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_26;
              LOBYTE(battlePerf) = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                     Master_WarQuestSelectionMaster,
                                     Id,
                                     0LL);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, (unsigned __int8)battlePerf & 1, v9);
            checkWindow = this->fields.checkWindow;
            v12 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
            BattleWindowComponent_EndCall___ctor(
              v12,
              (Il2CppObject *)this,
              Method_CommandSpellWindowComponent_endSpellOpened__,
              0LL);
            if ( checkWindow )
            {
              ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkWindow->klass->vtable._10_Open.method)(
                checkWindow,
                v12,
                checkWindow->klass->vtable._11_CompOpen.methodPtr);
              v13 = this->fields.checkWindow;
              v14 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B77694(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
              BattleWindowOuterClickComponent_OuterClickCall___ctor(
                v14,
                (Il2CppObject *)this,
                Method_CommandSpellWindowComponent_cancelSpell__,
                0LL);
              if ( v13 )
              {
                BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v13, v14, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B7769C(battlePerf, *(_QWORD *)&Id);
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_43874EC & 1) == 0 )
  {
    sub_B775C4(&SeManager_TypeInfo);
    byte_43874EC = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_B7769C(0LL, v3);
    ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, _QWORD, Il2CppMethodPointer))checkWindow->klass->vtable._12_Close.method)(
      checkWindow,
      0LL,
      checkWindow->klass->vtable._13_CompClose.methodPtr);
    this->fields.isOpenFlg = 0;
  }
}


void __fastcall CommandSpellWindowComponent__endSpellOpened(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isOpenFlg = 1;
}


UnityEngine_GameObject_o *__fastcall CommandSpellWindowComponent__get_closeBtnObject(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  int v5; // w8
  _DWORD *v6; // x20
  unsigned int v7; // w22
  char *v8; // x8
  UnityEngine_Component_o *v9; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x0

  if ( (byte_43874ED & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___);
    sub_B775C4(&StringLiteral_13243/*"Sprite"*/);
    byte_43874ED = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_B7769C(transform, v4);
  }
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v5 )
    {
      v13 = sub_B776C8(transform);
      sub_B77668(v13, 0LL);
    }
    v8 = (char *)&v6[2 * v7];
    v9 = (UnityEngine_Component_o *)*((_QWORD *)v8 + 4);
    if ( !v9 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + 4), 0LL);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13243/*"Sprite"*/, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
      break;
    v5 = v6[6];
    if ( (int)++v7 >= v5 )
      return 0LL;
  }
  gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
  ((void (__fastcall *)(CommandSpellWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    gameObject,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  return UnityEngine_Component__get_gameObject(v9, 0LL);
}


void __fastcall CommandSpellWindowComponent__okSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x0

  if ( (byte_43874EB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43874EB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  callback_use = this->fields.callback_use;
  if ( callback_use )
    CommandSpellWindowComponent_UseCommandSpellCallBack__Invoke(callback_use, this->fields.tmp_Id, 0LL);
}


void __fastcall CommandSpellWindowComponent__onCloseButton(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x0

  callback_close = this->fields.callback_close;
  if ( callback_close )
    CommandSpellWindowComponent_CloseButtonCallBack__Invoke(callback_close, 0LL);
}


void __fastcall CommandSpellWindowComponent__setCallBackPushClose(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.callback_close = callback;
  sub_B77560(&this->fields.callback_close);
}


void __fastcall CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.callback_use = callback;
  sub_B77560(&this->fields.callback_use);
}


void __fastcall CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._9_setClose.method)(
    checkWindow,
    checkWindow->klass->vtable._10_Open.methodPtr);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall CommandSpellWindowComponent__setMode(
        CommandSpellWindowComponent_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.mode = mode;
}


void __fastcall CommandSpellWindowComponent__set_closeBtnObject(
        CommandSpellWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._closeBtnObject = value;
  sub_B77560(&this->fields._closeBtnObject);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_CloseButtonCallBack___ctor(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__Invoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  CommandSpellWindowComponent_CloseButtonCallBack_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  CommandSpellWindowComponent_CloseButtonCallBack_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  CommandSpellWindowComponent_CloseButtonCallBack_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (CommandSpellWindowComponent_CloseButtonCallBack_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__BeginInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = commandSpellId;
  if ( (byte_43890A2 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    byte_43890A2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__Invoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CommandSpellWindowComponent_UseCommandSpellCallBack_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&commandSpellId);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)commandSpellId, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, (unsigned int)commandSpellId, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(
            v19,
            (unsigned int)commandSpellId,
            *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)commandSpellId,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)commandSpellId, v20);
    goto LABEL_37;
  }
}


void __fastcall CommandSpellWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43890A1 & 1) == 0 )
  {
    sub_B775C4(&CommandSpellWindowComponent___c_TypeInfo);
    byte_43890A1 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall CommandSpellWindowComponent___c___ctor(
        CommandSpellWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommandSpellWindowComponent___c___InitializeCommandSpell_b__39_0(
        CommandSpellWindowComponent___c_o *this,
        CommandSpellEntity_o *a,
        CommandSpellEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}