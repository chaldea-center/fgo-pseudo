void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4183E05 & 1) == 0 )
  {
    sub_B2C35C(&CommandSpellWindowComponent_TypeInfo, v1);
    byte_4183E05 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void __fastcall CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_4183E04 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4183E04 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(&this->fields.objlist, v4);
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

  if ( (byte_4183DFA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, call);
    byte_4183DFA = 1;
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
    sub_B2C434(tree_root, call);
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

  if ( (byte_4183E03 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4183E03 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v29; // x1
  __int64 v30; // x1
  long double v31; // q0
  BattleWindowComponent_o *checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x21
  Il2CppObject *current; // x22
  CommandSpellWindowComponent___c_c *v37; // x0
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v40; // x23
  struct CommandSpellWindowComponent___c_StaticFields *v41; // x0
  int max_length; // w8
  unsigned int v43; // w25
  int v44; // w26
  Il2CppClass **v45; // x28
  char *v46; // x28
  BattleWindowComponent_o *v47; // t1
  UnityEngine_GameObject_o *v48; // x22
  UnityEngine_Transform_o *v49; // x23
  BattleWindowComponent_o *v50; // x23
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v53; // x8
  __int64 v54; // x0
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4183DFB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_CommandSpellEntity___, bp);
    sub_B2C35C(&CommandSpellWindowComponent_TypeInfo, v9);
    sub_B2C35C(&Method_System_Comparison_CommandSpellEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_CommandSpellEntity__TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__, v24);
    sub_B2C35C(&CommandSpellWindowComponent___c_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_15373/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/, v26);
    sub_B2C35C(&StringLiteral_15372/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/, v27);
    sub_B2C35C(&StringLiteral_2383/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, v28);
    sub_B2C35C(&StringLiteral_3251/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, v29);
    byte_4183DFB = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    *(__n128 *)&v31 = sub_B2C2F8(&this->fields.battlePerf, bp);
  }
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_81;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer, long double))checkWindow->klass->vtable._7_setInitialPos.method)(
    checkWindow,
    checkWindow->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr,
    v31);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_81;
  BattleWindowComponent__setInitData(checkWindow, 1, 0.15, 0, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_81;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._9_setClose.method)(
    checkWindow,
    checkWindow->klass->vtable._10_Open.methodPtr);
  checkuselabel = this->fields.checkuselabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2383/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_81;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
  if ( !classBoardCautionLabel )
    goto LABEL_81;
  UILabel__set_text(classBoardCautionLabel, (System_String_o *)checkWindow, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.classBoardCautionLabel;
  if ( !checkWindow )
    goto LABEL_81;
  checkWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)checkWindow,
                                             0LL);
  if ( !checkWindow )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.tree_root;
  if ( !checkWindow )
    goto LABEL_81;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)checkWindow, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.prefab;
  if ( !checkWindow )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  if ( (temporary & 0x80000000) == 0 )
    this->fields.commandCount = temporary;
  this->fields.mode = inMode;
  if ( !inMode )
    this->fields.commandCount = 10;
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_81;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_81;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)checkWindow,
                                                                       (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v55,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objlist,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v56 = v55;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v56,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v56.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v56,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
    if ( !checkWindow )
      goto LABEL_81;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkWindow,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  v37 = CommandSpellWindowComponent___c_TypeInfo;
  if ( (BYTE3(CommandSpellWindowComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v37 = CommandSpellWindowComponent___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v40,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_CommandSpellEntity___ctor__);
    v41 = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    v41->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_B2C2F8(&v41->__9__39_0, _9__39_0);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    Entitys_WarQuestSelectionEntity,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_81;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    v44 = 0;
    do
    {
      if ( v43 >= max_length )
      {
LABEL_82:
        v54 = sub_B2C460(checkWindow);
        sub_B2C400(v54, 0LL);
      }
      v45 = &Entitys_WarQuestSelectionEntity->obj.klass + (int)v43;
      v47 = (BattleWindowComponent_o *)v45[4];
      v46 = (char *)(v45 + 4);
      checkWindow = v47;
      if ( !v47 )
        goto LABEL_81;
      if ( !LODWORD(checkWindow->fields._closeBtnObject) )
        goto LABEL_67;
      if ( inMode == 1 )
      {
        checkWindow = (BattleWindowComponent_o *)CommandSpellEntity__isUseBattle(
                                                   (CommandSpellEntity_o *)checkWindow,
                                                   0LL);
        if ( ((unsigned __int8)checkWindow & 1) == 0 )
          goto LABEL_67;
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
      if ( v43 >= max_length )
        goto LABEL_82;
      checkWindow = *(BattleWindowComponent_o **)v46;
      if ( !*(_QWORD *)v46 )
        goto LABEL_81;
      checkWindow = (BattleWindowComponent_o *)CommandSpellEntity__checkHideInDetailWindow(
                                                 (CommandSpellEntity_o *)checkWindow,
                                                 0LL);
      if ( ((unsigned __int8)checkWindow & 1) == 0 )
      {
        checkWindow = (BattleWindowComponent_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   this->fields.prefab,
                                                   this->fields.tree_root,
                                                   0LL,
                                                   0LL);
        if ( !checkWindow )
          goto LABEL_81;
        v48 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v48, 0LL);
        v49 = (UnityEngine_Transform_o *)checkWindow;
        if ( (BYTE3(CommandSpellWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
        }
        if ( !v49 )
          goto LABEL_81;
        v57.fields.x = 0.0;
        v57.fields.z = 0.0;
        v57.fields.y = (float)-(v44 * CommandSpellWindowComponent_TypeInfo->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v49, v57, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v48,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( v43 >= Entitys_WarQuestSelectionEntity->max_length )
          goto LABEL_82;
        if ( !*(_QWORD *)v46 )
          goto LABEL_81;
        v50 = checkWindow;
        if ( !checkWindow )
          goto LABEL_81;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          *(_DWORD *)(*(_QWORD *)v46 + 16LL),
          this->fields.commandCount,
          0LL);
        v50->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_B2C2F8(&v50->fields._closeBtnObject, this);
        if ( !this->fields.mode )
          LOBYTE(v50[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_81;
        ++v44;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkWindow,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
LABEL_67:
      max_length = Entitys_WarQuestSelectionEntity->max_length;
      ++v43;
    }
    while ( (int)v43 < max_length );
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
    v53 = &StringLiteral_15372/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_15373/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
  if ( !titleLabel )
LABEL_81:
    sub_B2C434(checkWindow, v30);
  UILabel__set_text(titleLabel, (System_String_o *)checkWindow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent__InitializeCommandSpellDepth(
        CommandSpellWindowComponent_o *this,
        int32_t inMode,
        int32_t scrollViewDepth,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_4183DFC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&inMode);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4183DFC = 1;
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
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
        tree_root = (UnityEngine_Component_o *)Component_WebViewObject[2].monitor;
        if ( tree_root )
        {
          tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   tree_root,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B2C434(tree_root, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x7

  if ( (byte_4183E02 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__, v3);
    sub_B2C35C(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4183E02 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B2C364();
    v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B2C434(v11, v12);
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v10, 2, 0LL, v13);
  }
}


void __fastcall CommandSpellWindowComponent__Open(
        CommandSpellWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
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
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v14; // x1
  UILabel_o *label_count; // x21
  System_String_o *v16; // x1
  __int64 v17; // x1
  CommandSpellObjectComponent_o *Component_srcLineSprite; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v21; // x21
  BalanceConfig_c *v22; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4183DFD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, call);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4183DFD = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
    v16 = (System_String_o *)SelfUserGame;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v16, 0LL);
  if ( this->fields.mode == 1 )
  {
    SelfUserGame = (UserGameEntity_o *)this->fields.objlist;
    if ( !SelfUserGame )
      goto LABEL_37;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SelfUserGame,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v26.fields.current )
        sub_B2C434(0LL, v17);
      Component_srcLineSprite = (CommandSpellObjectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v26.fields.current,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v19);
      CommandSpellObjectComponent__updateIsUse(
        Component_srcLineSprite,
        this->fields.mode,
        this->fields.commandCount,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0LL)) == 0LL )
  {
LABEL_37:
    sub_B2C434(SelfUserGame, v14);
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
    v21 = this->fields.classBoardWindowButton;
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v22->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( v21 )
    {
      UnityEngine_GameObject__SetActive(v21, (unsigned __int8)SelfUserGame & 1, 0LL);
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
    sub_B2C434(spellnamelabel, isAddFunction);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spellnamelabel, isAddFunction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent__UseSpell(
        CommandSpellWindowComponent_o *this,
        int32_t Id,
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
  void *battlePerf; // x0
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v17; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v19; // x2
  bool IsQuestClear_25746984; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v22; // x21
  BattleWindowOuterClickManagerComponent_o *v23; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v24; // x21

  if ( (byte_4183DFE & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&Id);
    sub_B2C35C(&Method_CommandSpellWindowComponent_cancelSpell__, v5);
    sub_B2C35C(&Method_CommandSpellWindowComponent_endSpellOpened__, v6);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v11);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v12);
    sub_B2C35C(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4183DFE = 1;
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
    battlePerf = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)battlePerf,
                       Id,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
            Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v17 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v17 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_25746984 = CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
            battlePerf = 0LL;
            if ( IsQuestClear_25746984 )
            {
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_26;
              LOBYTE(battlePerf) = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                     Master_WarQuestSelectionMaster,
                                     Id,
                                     0LL);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, (unsigned __int8)battlePerf & 1, v19);
            checkWindow = this->fields.checkWindow;
            v22 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
            BattleWindowComponent_EndCall___ctor(
              v22,
              (Il2CppObject *)this,
              Method_CommandSpellWindowComponent_endSpellOpened__,
              0LL);
            if ( checkWindow )
            {
              ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkWindow->klass->vtable._10_Open.method)(
                checkWindow,
                v22,
                checkWindow->klass->vtable._11_CompOpen.methodPtr);
              v23 = this->fields.checkWindow;
              v24 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B2C42C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
              BattleWindowOuterClickComponent_OuterClickCall___ctor(
                v24,
                (Il2CppObject *)this,
                Method_CommandSpellWindowComponent_cancelSpell__,
                0LL);
              if ( v23 )
              {
                BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v23, v24, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(battlePerf, *(_QWORD *)&Id);
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4183E00 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    byte_4183E00 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_B2C434(0LL, v3);
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
  __int64 v3; // x1
  void *transform; // x0
  __int64 v5; // x1
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w22
  char *v9; // x8
  UnityEngine_Component_o *v10; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x0

  if ( (byte_4183E01 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___, method);
    sub_B2C35C(&StringLiteral_13000/*"Sprite"*/, v3);
    byte_4183E01 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_B2C434(transform, v5);
  }
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
    {
      v14 = sub_B2C460(transform);
      sub_B2C400(v14, 0LL);
    }
    v9 = (char *)&v7[2 * v8];
    v10 = (UnityEngine_Component_o *)*((_QWORD *)v9 + 4);
    if ( !v10 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v9 + 4), 0LL);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13000/*"Sprite"*/, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
      break;
    v6 = v7[6];
    if ( (int)++v8 >= v6 )
      return 0LL;
  }
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  ((void (__fastcall *)(CommandSpellWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    gameObject,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  return UnityEngine_Component__get_gameObject(v10, 0LL);
}


void __fastcall CommandSpellWindowComponent__okSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x0

  if ( (byte_4183DFF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4183DFF = 1;
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
  sub_B2C2F8(&this->fields.callback_close, callback);
}


void __fastcall CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.callback_use = callback;
  sub_B2C2F8(&this->fields.callback_use, callback);
}


void __fastcall CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(&this->fields._closeBtnObject, value);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_CloseButtonCallBack___ctor(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__Invoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  CommandSpellWindowComponent_CloseButtonCallBack_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  CommandSpellWindowComponent_CloseButtonCallBack_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CommandSpellWindowComponent_CloseButtonCallBack_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (CommandSpellWindowComponent_CloseButtonCallBack_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
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
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
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
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184F47 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&commandSpellId);
    byte_4184F47 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__Invoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CommandSpellWindowComponent_UseCommandSpellCallBack_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&commandSpellId, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)commandSpellId, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)commandSpellId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(
            v21,
            (unsigned int)commandSpellId,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)commandSpellId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)commandSpellId, v22);
    goto LABEL_37;
  }
}


void __fastcall CommandSpellWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184F46 & 1) == 0 )
  {
    sub_B2C35C(&CommandSpellWindowComponent___c_TypeInfo, v1);
    byte_4184F46 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}