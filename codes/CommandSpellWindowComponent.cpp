void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6543 & 1) == 0 )
  {
    sub_B16FFC(&CommandSpellWindowComponent_TypeInfo, v1);
    byte_40F6543 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void __fastcall CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F6542 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F6542 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objlist,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.temporarySpell = -1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall CommandSpellWindowComponent__Close(
        CommandSpellWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v8; // x0
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_40F6538 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, call);
    byte_40F6538 = 1;
  }
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(tree_root, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    v8 = this->fields.classBoardWindowButton;
    if ( !v8 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  }
  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
LABEL_13:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._9_setClose.method)(
    checkWindow,
    checkWindow->klass->vtable._10_Open.methodPtr);
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

  if ( (byte_40F6541 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6541 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0
  BattleWindowComponent_o *v37; // x0
  struct BattleWindowOuterClickManagerComponent_o *v38; // x0
  UILabel_o *checkuselabel; // x22
  System_String_o *v40; // x0
  UILabel_o *classBoardCautionLabel; // x22
  System_String_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *tree_root; // x0
  UnityEngine_GameObject_o *prefab; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x0
  CommandSpellWindowComponent___c_c *v56; // x0
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v59; // x23
  struct CommandSpellWindowComponent___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  srcLineSprite_o *isUseBattle; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  int max_length; // w8
  unsigned int v71; // w25
  int v72; // w26
  Il2CppClass **v73; // x28
  CommandSpellEntity_o **v74; // x28
  srcLineSprite_o *v75; // t1
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v77; // x22
  UnityEngine_Transform_o *transform; // x23
  srcLineSprite_o *v79; // x23
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_Collections_Generic_List_GameObject__o *v86; // x0
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v89; // x8
  System_String_o *v90; // x0
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F6539 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_CommandSpellEntity___, bp);
    sub_B16FFC(&CommandSpellWindowComponent_TypeInfo, v9);
    sub_B16FFC(&Method_System_Comparison_CommandSpellEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_CommandSpellEntity__TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__, v24);
    sub_B16FFC(&CommandSpellWindowComponent___c_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_15311/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/, v26);
    sub_B16FFC(&StringLiteral_15310/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/, v27);
    sub_B16FFC(&StringLiteral_2373/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, v28);
    sub_B16FFC(&StringLiteral_3242/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, v29);
    byte_40F6539 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.battlePerf,
      (System_Int32_array **)bp,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_81;
  ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._7_setInitialPos.method)(
    checkWindow,
    checkWindow->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  v37 = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !v37 )
    goto LABEL_81;
  BattleWindowComponent__setInitData(v37, 1, 0.15, 0, 0LL);
  v38 = this->fields.checkWindow;
  if ( !v38 )
    goto LABEL_81;
  ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, Il2CppMethodPointer))v38->klass->vtable._9_setClose.method)(
    v38,
    v38->klass->vtable._10_Open.methodPtr);
  checkuselabel = this->fields.checkuselabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2373/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_81;
  UILabel__set_text(checkuselabel, v40, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3242/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
  if ( !classBoardCautionLabel )
    goto LABEL_81;
  UILabel__set_text(classBoardCautionLabel, v42, 0LL);
  v43 = (UnityEngine_Component_o *)this->fields.classBoardCautionLabel;
  if ( !v43 )
    goto LABEL_81;
  gameObject = UnityEngine_Component__get_gameObject(v43, 0LL);
  if ( !gameObject )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  tree_root = this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_81;
  UnityEngine_Transform__DetachChildren(tree_root, 0LL);
  prefab = this->fields.prefab;
  if ( !prefab )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(prefab, 0, 0LL);
  if ( (temporary & 0x80000000) == 0 )
    this->fields.commandCount = temporary;
  this->fields.mode = inMode;
  if ( !inMode )
    this->fields.commandCount = 10;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       MasterData_WarQuestSelectionMaster,
                                                                       (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v91,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objlist,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v92 = v91;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v92,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v92.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v92,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_81;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)objlist,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  v56 = CommandSpellWindowComponent___c_TypeInfo;
  if ( (BYTE3(CommandSpellWindowComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v56 = CommandSpellWindowComponent___c_TypeInfo;
  }
  static_fields = v56->static_fields;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_CommandSpellEntity__TypeInfo,
                                                                           v49,
                                                                           v50,
                                                                           v51,
                                                                           v52);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v59,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_CommandSpellEntity___ctor__);
    v60 = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    v60->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v60->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    Entitys_WarQuestSelectionEntity,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_81;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v71 = 0;
    v72 = 0;
    do
    {
      if ( v71 >= max_length )
      {
LABEL_82:
        sub_B17100(isUseBattle, v68, v69);
        sub_B170A0();
      }
      v73 = &Entitys_WarQuestSelectionEntity->obj.klass + (int)v71;
      v75 = (srcLineSprite_o *)v73[4];
      v74 = (CommandSpellEntity_o **)(v73 + 4);
      isUseBattle = v75;
      if ( !v75 )
        goto LABEL_81;
      if ( !LODWORD(isUseBattle->fields.mFSM) )
        goto LABEL_67;
      if ( inMode == 1 )
      {
        isUseBattle = (srcLineSprite_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)isUseBattle, 0LL);
        if ( ((unsigned __int8)isUseBattle & 1) == 0 )
          goto LABEL_67;
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
      if ( v71 >= max_length )
        goto LABEL_82;
      if ( !*v74 )
        goto LABEL_81;
      isUseBattle = (srcLineSprite_o *)CommandSpellEntity__checkHideInDetailWindow(*v74, 0LL);
      if ( ((unsigned __int8)isUseBattle & 1) == 0 )
      {
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)this,
                   this->fields.prefab,
                   this->fields.tree_root,
                   0LL,
                   0LL);
        if ( !Object )
          goto LABEL_81;
        v77 = Object;
        UnityEngine_GameObject__SetActive(Object, 1, 0LL);
        transform = UnityEngine_GameObject__get_transform(v77, 0LL);
        if ( (BYTE3(CommandSpellWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
        }
        if ( !transform )
          goto LABEL_81;
        v93.fields.x = 0.0;
        v93.fields.z = 0.0;
        v93.fields.y = (float)-(v72 * CommandSpellWindowComponent_TypeInfo->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(transform, v93, 0LL);
        isUseBattle = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v77,
                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( v71 >= Entitys_WarQuestSelectionEntity->max_length )
          goto LABEL_82;
        if ( !*v74 )
          goto LABEL_81;
        v79 = isUseBattle;
        if ( !isUseBattle )
          goto LABEL_81;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)isUseBattle,
          this->fields.mode,
          (*v74)->fields.id,
          this->fields.commandCount,
          0LL);
        v79->fields.mFSM = (struct CStateManager_srcLineSprite__o *)this;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v79->fields.mFSM,
          (System_Int32_array **)this,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        if ( !this->fields.mode )
          LOBYTE(v79->fields.mcFrom.fields.y) = 0;
        UnityEngine_GameObject__SetActive(v77, 1, 0LL);
        v86 = this->fields.objlist;
        if ( !v86 )
          goto LABEL_81;
        ++v72;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
LABEL_67:
      max_length = Entitys_WarQuestSelectionEntity->max_length;
      ++v71;
    }
    while ( (int)v71 < max_length );
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
    v89 = &StringLiteral_15310/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v89 = &StringLiteral_15311/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  v90 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
  if ( !titleLabel )
LABEL_81:
    sub_B170D4();
  UILabel__set_text(titleLabel, v90, 0LL);
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
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Component_o *Component_WebViewObject; // x20
  WebViewObject_o *v14; // x0
  UnityEngine_Component_o *monitor; // x0
  WebViewObject_o *v16; // x0

  if ( (byte_40F653A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&inMode);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F653A = 1;
  }
  CommandSpellWindowComponent__InitializeCommandSpell(this, 0LL, inMode, -1, v4);
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(tree_root, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Parent )
    goto LABEL_15;
  Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         Parent,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      v14 = UnityEngine_Component__GetComponent_WebViewObject_(
              Component_WebViewObject,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( v14 )
      {
        UIPanel__set_depth((UIPanel_o *)v14, scrollViewDepth, 0LL);
        monitor = (UnityEngine_Component_o *)Component_WebViewObject[2].monitor;
        if ( monitor )
        {
          v16 = UnityEngine_Component__GetComponent_WebViewObject_(
                  monitor,
                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( v16 )
          {
            UIPanel__set_depth((UIPanel_o *)v16, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x7

  if ( (byte_40F6540 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__, v3);
    sub_B16FFC(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F6540 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenClassBoardEffectListDialog(Instance, 1, 0, 0, v14, 2, 0LL, v15);
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
  UILabel_o *label_count; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  struct System_Collections_Generic_List_GameObject__o *objlist; // x0
  CommandSpellObjectComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v22; // x21
  BalanceConfig_c *v23; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  bool IsQuestClear_25438860; // w0
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F653B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, call);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F653B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  this->fields.isOpenFlg = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_37;
  this->fields.commandCount = UserGameEntity__getCommandSpell(SelfUserGame, 0LL);
  if ( this->fields.isUseTemporarySpell )
    this->fields.commandCount = this->fields.temporarySpell;
  label_count = this->fields.label_count;
  v15 = System_Int32__ToString((int)this + 184, 0LL);
  if ( !label_count )
    goto LABEL_37;
  if ( v15 )
    v16 = v15;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v16, 0LL);
  if ( this->fields.mode == 1 )
  {
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_37;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objlist,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v28.fields.current )
        sub_B170D4();
      Component_srcLineSprite = (CommandSpellObjectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)v28.fields.current,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_srcLineSprite )
        sub_B170D4();
      CommandSpellObjectComponent__updateIsUse(
        Component_srcLineSprite,
        this->fields.mode,
        this->fields.commandCount,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root || (gameObject = UnityEngine_Component__get_gameObject(tree_root, 0LL)) == 0LL )
LABEL_37:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    v22 = this->fields.classBoardWindowButton;
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v23->static_fields->ClassBoardReleaseQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25438860 = CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( v22 )
    {
      UnityEngine_GameObject__SetActive(v22, IsQuestClear_25438860, 0LL);
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


void __fastcall CommandSpellWindowComponent__SetCheckUseLabel(
        CommandSpellWindowComponent_o *this,
        bool isAddFunction,
        const MethodInfo *method)
{
  UnityEngine_Component_o *spellnamelabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v7; // s0
  float v8; // s8
  UnityEngine_Component_o *checkuselabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  float v11; // s0
  UnityEngine_Component_o *classBoardCautionLabel; // x0
  UnityEngine_GameObject_o *v13; // x0

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
  checkuselabel = (UnityEngine_Component_o *)this->fields.checkuselabel;
  if ( !checkuselabel )
    goto LABEL_13;
  v10 = UnityEngine_Component__get_gameObject(checkuselabel, 0LL);
  v11 = -5.0;
  if ( isAddFunction )
    v11 = 25.0;
  GameObjectExtensions__SetLocalPositionY(v10, v11, 0LL);
  classBoardCautionLabel = (UnityEngine_Component_o *)this->fields.classBoardCautionLabel;
  if ( !classBoardCautionLabel || (v13 = UnityEngine_Component__get_gameObject(classBoardCautionLabel, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v13, isAddFunction, 0LL);
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
  BattlePerformance_o *battlePerf; // x0
  BattlePerformance_o *v16; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v21; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v23; // x2
  bool IsQuestClear_25438860; // w8
  bool IsAddFunctionCommandSpell; // w0
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleWindowComponent_EndCall_o *v31; // x21
  BattleWindowOuterClickManagerComponent_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v37; // x21

  if ( (byte_40F653C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&Id);
    sub_B16FFC(&Method_CommandSpellWindowComponent_cancelSpell__, v5);
    sub_B16FFC(&Method_CommandSpellWindowComponent_endSpellOpened__, v6);
    sub_B16FFC(&CondType_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v11);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v12);
    sub_B16FFC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F653C = 1;
  }
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_26;
  BattlePerformance__SetCloseSelectMainSubSvtWindow(battlePerf, 0LL);
  v16 = this->fields.battlePerf;
  if ( !v16 )
    goto LABEL_26;
  BattlePerformance__SetCloseCommandTypeWindow(v16, 0LL);
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    this->fields.tmp_Id = Id;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Id,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, Entity->fields.name, 0LL);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v21 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v21 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v21->static_fields->ClassBoardReleaseQuestId;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsQuestClear_25438860 = CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL);
            IsAddFunctionCommandSpell = 0;
            if ( IsQuestClear_25438860 )
            {
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_26;
              IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                            Master_WarQuestSelectionMaster,
                                            Id,
                                            0LL);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, IsAddFunctionCommandSpell, v23);
            checkWindow = this->fields.checkWindow;
            v31 = (BattleWindowComponent_EndCall_o *)sub_B170CC(
                                                       BattleWindowComponent_EndCall_TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29,
                                                       v30);
            BattleWindowComponent_EndCall___ctor(
              v31,
              (Il2CppObject *)this,
              Method_CommandSpellWindowComponent_endSpellOpened__,
              0LL);
            if ( checkWindow )
            {
              ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))checkWindow->klass->vtable._10_Open.method)(
                checkWindow,
                v31,
                checkWindow->klass->vtable._11_CompOpen.methodPtr);
              v32 = this->fields.checkWindow;
              v37 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                                          BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                                          v33,
                                                                          v34,
                                                                          v35,
                                                                          v36);
              BattleWindowOuterClickComponent_OuterClickCall___ctor(
                v37,
                (Il2CppObject *)this,
                Method_CommandSpellWindowComponent_cancelSpell__,
                0LL);
              if ( v32 )
              {
                BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v32, v37, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_40F653E & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40F653E = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_B170D4();
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
  UnityEngine_Component_o *transform; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v9; // x20
  unsigned int v10; // w22
  Il2CppClass **v11; // x8
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_40F653F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___, method);
    sub_B16FFC(&StringLiteral_12944/*"Sprite"*/, v3);
    byte_40F653F = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    transform,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v9 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length < 1 )
    return 0LL;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6, v7);
      sub_B170A0();
    }
    v11 = &v9->obj.klass + (int)v10;
    v12 = (UnityEngine_Component_o *)v11[4];
    if ( !v12 )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11[4], 0LL);
    if ( !gameObject )
      goto LABEL_14;
    name = UnityEngine_Object__get_name(gameObject, 0LL);
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_String__op_Equality(name, (System_String_o *)StringLiteral_12944/*"Sprite"*/, 0LL);
    if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      break;
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0LL;
  }
  v16 = UnityEngine_Component__get_gameObject(v12, 0LL);
  ((void (__fastcall *)(CommandSpellWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    v16,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  return UnityEngine_Component__get_gameObject(v12, 0LL);
}


void __fastcall CommandSpellWindowComponent__okSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x0

  if ( (byte_40F653D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F653D = 1;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callback_close = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callback_close,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callback_use = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callback_use,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._closeBtnObject = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._closeBtnObject,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__Invoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  CommandSpellWindowComponent_CloseButtonCallBack_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  CommandSpellWindowComponent_CloseButtonCallBack_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  CommandSpellWindowComponent_CloseButtonCallBack_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (CommandSpellWindowComponent_CloseButtonCallBack_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F713E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&commandSpellId);
    byte_40F713E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&commandSpellId, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F713D & 1) == 0 )
  {
    sub_B16FFC(&CommandSpellWindowComponent___c_TypeInfo, v1);
    byte_40F713D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CommandSpellWindowComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}