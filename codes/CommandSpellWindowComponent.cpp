void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCADD6 & 1) == 0 )
  {
    sub_1C1ABD4(&CommandSpellWindowComponent_TypeInfo, v1);
    byte_4BCADD6 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void __fastcall CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCADD5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BCADD5 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.objlist, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BCADCB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, call);
    byte_4BCADCB = 1;
  }
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_12;
  tree_root = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(tree_root, 0LL);
  if ( !tree_root )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    tree_root = (UnityEngine_Component_o *)this->fields.classBoardWindowButton;
    if ( !tree_root )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0LL);
  }
  tree_root = (UnityEngine_Component_o *)this->fields.checkWindow;
  if ( !tree_root )
LABEL_12:
    sub_1C1AE30(tree_root, call);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4BCADD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BCADD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  BattleWindowComponent_o *checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  BattleWindowComponent_o *v39; // x21
  __int64 v40; // x0
  System_Object_array *v41; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x8
  int32_t size; // w2
  int v45; // w9
  CommandSpellWindowComponent___c_c *v46; // x0
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v48; // x23
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int max_length; // w8
  __int64 v57; // x25
  int v58; // w26
  Il2CppObject **m_Items; // x24
  UnityEngine_GameObject_o *v60; // x22
  CommandSpellWindowComponent_c *v61; // x8
  UnityEngine_Transform_o *v62; // x23
  const MethodInfo *v63; // x4
  Il2CppObject *v64; // x8
  BattleWindowComponent_o *v65; // x23
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v81; // x8
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v84; // x8
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCADCC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Sort_CommandSpellEntity___, bp);
    sub_1C1ABD4(&CommandSpellWindowComponent_TypeInfo, v9);
    sub_1C1ABD4(&System_Comparison_CommandSpellEntity__TypeInfo, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1C1ABD4(
      &Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___,
      v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v15);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v20);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C1ABD4(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__, v23);
    sub_1C1ABD4(&CommandSpellWindowComponent___c_TypeInfo, v24);
    sub_1C1ABD4(&StringLiteral_15815/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/, v25);
    sub_1C1ABD4(&StringLiteral_15814/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/, v26);
    sub_1C1ABD4(&StringLiteral_2855/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, v27);
    sub_1C1ABD4(&StringLiteral_3790/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, v28);
    byte_4BCADCC = 1;
  }
  memset(&v86, 0, sizeof(v86));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.battlePerf, (int64_t)bp, v30, v31, v32, v33, v34, v35);
  }
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._7_setInitialPos.method)(
    checkWindow,
    checkWindow->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  BattleWindowComponent__setInitData(checkWindow, 1, 0.15, 0, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))checkWindow->klass->vtable._9_setClose.method)(
    checkWindow,
    checkWindow->klass->vtable._10_Open.methodPtr);
  checkuselabel = this->fields.checkuselabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_77;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
  if ( !classBoardCautionLabel )
    goto LABEL_77;
  UILabel__set_text(classBoardCautionLabel, (System_String_o *)checkWindow, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.classBoardCautionLabel;
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)checkWindow,
                                             0LL);
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.tree_root;
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)checkWindow, 0LL);
  checkWindow = (BattleWindowComponent_o *)this->fields.prefab;
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0LL);
  if ( (temporary & 0x80000000) == 0 )
    this->fields.commandCount = temporary;
  this->fields.mode = inMode;
  if ( !inMode )
    this->fields.commandCount = 10;
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_77;
  v39 = checkWindow;
  v40 = sub_1C1AD08(*((_QWORD *)&checkWindow->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys_CommandSpellEntity___
                      + 40)));
  v41 = (System_Object_array *)(*(__int64 (__fastcall **)(BattleWindowComponent_o *, __int64))(v40 + 8))(v39, v40);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      (System_Collections_Generic_List_object__o *)this->fields.objlist,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v86 = v85;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v86.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_77;
    size = objlist->fields._size;
    v45 = objlist->fields._version + 1;
    objlist->fields._size = 0;
    objlist->fields._version = v45;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)objlist->fields._items, 0, size, 0LL);
  }
  v46 = CommandSpellWindowComponent___c_TypeInfo;
  if ( !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v46 = CommandSpellWindowComponent___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v46->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = CommandSpellWindowComponent___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v48,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      0LL);
    static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
      (int64_t)_9__39_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  System_Array__Sort_object__49729232(
    v41,
    _9__39_0,
    (const MethodInfo_2F6CED0 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !v41 )
    goto LABEL_77;
  max_length = v41->max_length;
  if ( max_length >= 1 )
  {
    v57 = 0LL;
    v58 = 0;
    m_Items = v41->m_Items;
    do
    {
      if ( (unsigned int)v57 >= max_length )
LABEL_78:
        sub_1C1AE38(checkWindow, v29);
      checkWindow = (BattleWindowComponent_o *)m_Items[v57];
      if ( !checkWindow )
        goto LABEL_77;
      if ( !LODWORD(checkWindow->fields.m_CancellationTokenSource) )
        goto LABEL_65;
      if ( inMode == 1 )
      {
        checkWindow = (BattleWindowComponent_o *)CommandSpellEntity__isUseBattle(
                                                   (CommandSpellEntity_o *)checkWindow,
                                                   0LL);
        if ( ((unsigned __int8)checkWindow & 1) == 0 )
          goto LABEL_65;
        max_length = v41->max_length;
      }
      if ( (unsigned int)v57 >= max_length )
        goto LABEL_78;
      checkWindow = (BattleWindowComponent_o *)m_Items[v57];
      if ( !checkWindow )
        goto LABEL_77;
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
          goto LABEL_77;
        v60 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v60, 0LL);
        v61 = CommandSpellWindowComponent_TypeInfo;
        v62 = (UnityEngine_Transform_o *)checkWindow;
        if ( !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          v61 = CommandSpellWindowComponent_TypeInfo;
        }
        if ( !v62 )
          goto LABEL_77;
        v87.fields.x = 0.0;
        v87.fields.z = 0.0;
        v87.fields.y = (float)-(v58 * v61->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v62, v87, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v60,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( (unsigned int)v57 >= v41->max_length )
          goto LABEL_78;
        v64 = m_Items[v57];
        if ( !v64 )
          goto LABEL_77;
        v65 = checkWindow;
        if ( !checkWindow )
          goto LABEL_77;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          (int32_t)v64[1].klass,
          this->fields.commandCount,
          v63);
        v65->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&v65->fields._closeBtnObject,
          (int64_t)this,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        if ( !this->fields.mode )
          LOBYTE(v65[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v60, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_77;
        v78 = *(_QWORD *)&checkWindow->fields.m_CachedPtr;
        v79 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(checkWindow->fields.m_CancellationTokenSource);
        if ( !v78 )
          goto LABEL_77;
        m_CancellationTokenSource_low = SLODWORD(checkWindow->fields.m_CancellationTokenSource);
        ++v58;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v78 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)checkWindow,
            (Il2CppObject *)v60,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = v78 + 8 * m_CancellationTokenSource_low;
          LODWORD(checkWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v81 + 32) = v60;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v81 + 32), (int64_t)v60, v72, v73, v74, v75, v76, v77);
        }
      }
LABEL_65:
      max_length = v41->max_length;
      ++v57;
    }
    while ( (int)v57 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = &StringLiteral_15814/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = &StringLiteral_15815/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v84, 0LL);
  if ( !titleLabel )
LABEL_77:
    sub_1C1AE30(checkWindow, v29);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4BCADCD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&inMode);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BCADCD = 1;
  }
  CommandSpellWindowComponent__InitializeCommandSpell(this, 0LL, inMode, -1, v4);
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(tree_root, 0LL);
  tree_root = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !tree_root )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       tree_root,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  tree_root = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)tree_root & 1) != 0 )
  {
    if ( Component_object )
    {
      tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)Component_object,
                                               (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
        tree_root = (UnityEngine_Component_o *)Component_object[4].klass;
        if ( tree_root )
        {
          tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   tree_root,
                                                   (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1C1AE30(tree_root, v10);
  }
}


void __fastcall CommandSpellWindowComponent__OnClick(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x8

  callback_close = this->fields.callback_close;
  if ( callback_close )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback_close->fields.m_target)(
      callback_close->fields.original_method_info,
      *(_QWORD *)&callback_close->fields.extra_arg);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BCADD3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__, v3);
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCADD3 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C1ABEC(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1C1AE30(v11, v12);
    CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, 0, 0, v10, 2, 0LL, 0LL);
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
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v22; // x21
  BalanceConfig_c *v23; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCADCE & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, call);
    sub_1C1ABD4(&CondType_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v12);
    byte_4BCADCE = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.isOpenFlg = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_34;
  this->fields.commandCount = UserGameEntity__getCommandSpell(SelfUserGame, 0LL);
  if ( this->fields.isUseTemporarySpell )
    this->fields.commandCount = this->fields.temporarySpell;
  label_count = this->fields.label_count;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int)this + 192, 0LL);
  if ( !label_count )
    goto LABEL_34;
  if ( SelfUserGame )
    v16 = (System_String_o *)SelfUserGame;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v16, 0LL);
  if ( this->fields.mode == 1 )
  {
    SelfUserGame = (UserGameEntity_o *)this->fields.objlist;
    if ( !SelfUserGame )
      goto LABEL_34;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)SelfUserGame,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v27.fields._current )
        sub_1C1AE30(0LL, v17);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27.fields._current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_object )
        sub_1C1AE30(0LL, v19);
      CommandSpellObjectComponent__updateIsUse(
        (CommandSpellObjectComponent_o *)Component_object,
        this->fields.mode,
        this->fields.commandCount,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0LL)) == 0LL )
  {
LABEL_34:
    sub_1C1AE30(SelfUserGame, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    v22 = this->fields.classBoardWindowButton;
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v23->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_38787928(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( v22 )
    {
      UnityEngine_GameObject__SetActive(v22, (unsigned __int8)SelfUserGame & 1, 0LL);
      goto LABEL_29;
    }
    goto LABEL_34;
  }
LABEL_29:
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
    sub_1C1AE30(spellnamelabel, isAddFunction);
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
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v17; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v19; // x2
  bool IsQuestClear_38787928; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v22; // x21
  BattleWindowOuterClickManagerComponent_o *v23; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2

  if ( (byte_4BCADCF & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&Id);
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_cancelSpell__, v5);
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_endSpellOpened__, v6);
    sub_1C1ABD4(&CondType_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&BattleWindowComponent_EndCall_TypeInfo, v12);
    sub_1C1ABD4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BCADCF = 1;
  }
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_23;
  BattlePerformance__SetCloseSelectMainSubSvtWindow((BattlePerformance_o *)battlePerf, 0LL);
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_23;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)battlePerf, 0LL);
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    this->fields.tmp_Id = Id;
    battlePerf = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_object_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)battlePerf,
                       Id,
                       (const MethodInfo_3248678 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v17 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v17 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_38787928 = CondType__IsQuestClear_38787928(ClassBoardReleaseQuestId, -1, 0, 0LL);
            battlePerf = 0LL;
            if ( IsQuestClear_38787928 )
            {
              if ( !Master_object )
                goto LABEL_23;
              LOBYTE(battlePerf) = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                     (ClassBoardCommandSpellMaster_o *)Master_object,
                                     Id,
                                     0LL);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, (unsigned __int8)battlePerf & 1, v19);
            checkWindow = this->fields.checkWindow;
            v22 = (BattleWindowComponent_EndCall_o *)sub_1C1AE20(BattleWindowComponent_EndCall_TypeInfo);
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
              v24 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C1AE20(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
              BattleWindowOuterClickComponent_OuterClickCall___ctor(
                v24,
                (Il2CppObject *)this,
                (intptr_t)Method_CommandSpellWindowComponent_cancelSpell__,
                v25);
              if ( v23 )
              {
                BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v23, v24, v26);
                return;
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_1C1AE30(battlePerf, *(_QWORD *)&Id);
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4BCADD1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_cancelSpell__, method);
    byte_4BCADD1 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    v3 = Method_CommandSpellWindowComponent_cancelSpell__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_cancelSpell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_CommandSpellWindowComponent_cancelSpell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_1C1AE30(0LL, v5);
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

  if ( (byte_4BCADD2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___, method);
    sub_1C1ABD4(&StringLiteral_13151/*"Sprite"*/, v3);
    byte_4BCADD2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_object_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_2F96A20 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_1C1AE30(transform, v5);
  }
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
      sub_1C1AE38(transform, v5);
    v9 = (char *)&v7[2 * v8];
    v10 = (UnityEngine_Component_o *)*((_QWORD *)v9 + 4);
    if ( !v10 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v9 + 4), 0LL);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13151/*"Sprite"*/, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x8

  if ( (byte_4BCADD0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CommandSpellWindowComponent_okSpell__, method);
    byte_4BCADD0 = 1;
  }
  v3 = Method_CommandSpellWindowComponent_okSpell__;
  if ( (*((_BYTE *)Method_CommandSpellWindowComponent_okSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_CommandSpellWindowComponent_okSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  callback_use = this->fields.callback_use;
  if ( callback_use )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback_use->fields.m_target)(
      callback_use->fields.original_method_info,
      (unsigned int)this->fields.tmp_Id,
      *(_QWORD *)&callback_use->fields.extra_arg);
}


void __fastcall CommandSpellWindowComponent__onCloseButton(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  struct CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x8

  callback_close = this->fields.callback_close;
  if ( callback_close )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback_close->fields.m_target)(
      callback_close->fields.original_method_info,
      *(_QWORD *)&callback_close->fields.extra_arg);
}


void __fastcall CommandSpellWindowComponent__setCallBackPushClose(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callback_close = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callback_close,
    (int64_t)callback,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callback_use = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callback_use,
    (int64_t)callback,
    (int64_t)method,
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
    sub_1C1AE30(0LL, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._closeBtnObject = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._closeBtnObject,
    (int64_t)value,
    (int64_t)method,
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A601C4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60184;
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__Invoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A60220;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A601D8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__BeginInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = commandSpellId;
  if ( (byte_4BCADD7 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&commandSpellId);
    byte_4BCADD7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__Invoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    commandSpellId,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CommandSpellWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCADD8 & 1) == 0 )
  {
    sub_1C1ABD4(&CommandSpellWindowComponent___c_TypeInfo, v1);
    byte_4BCADD8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandSpellWindowComponent___c_TypeInfo->static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}