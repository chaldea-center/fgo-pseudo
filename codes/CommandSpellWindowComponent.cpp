void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E257 & 1) == 0 )
  {
    sub_1B885B0(&CommandSpellWindowComponent_TypeInfo);
    byte_4A5E257 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void __fastcall CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E256 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5E256 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objlist, (int32_t)v3, v4, v5);
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

  if ( (byte_4A5E24C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E24C = 1;
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
    sub_1B8880C(tree_root, call);
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

  if ( (byte_4A5E255 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E255 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  int32_t v10; // w2
  int32_t v11; // w3
  BattleWindowComponent_o *checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  System_Object_array *Entitys_object; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x8
  int32_t size; // w2
  int v19; // w9
  CommandSpellWindowComponent___c_c *v20; // x0
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v22; // x23
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int max_length; // w8
  __int64 v27; // x25
  int v28; // w26
  Il2CppObject **m_Items; // x24
  UnityEngine_GameObject_o *v30; // x22
  CommandSpellWindowComponent_c *v31; // x8
  UnityEngine_Transform_o *v32; // x23
  const MethodInfo *v33; // x4
  Il2CppObject *v34; // x8
  BattleWindowComponent_o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v43; // x8
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v46; // x8
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E24D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_CommandSpellEntity___);
    sub_1B885B0(&CommandSpellWindowComponent_TypeInfo);
    sub_1B885B0(&System_Comparison_CommandSpellEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_CommandSpellEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__);
    sub_1B885B0(&CommandSpellWindowComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15558/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/);
    sub_1B885B0(&StringLiteral_15557/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/);
    sub_1B885B0(&StringLiteral_2824/*"BATTLE_CHECKUSE_COMMANDSPELL"*/);
    sub_1B885B0(&StringLiteral_3744/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/);
    byte_4A5E24D = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battlePerf, (int32_t)bp, v10, v11);
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
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2824/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_77;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
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
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_77;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)checkWindow,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_CommandSpellEntity___);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      (System_Collections_Generic_List_object__o *)this->fields.objlist,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v48 = v47;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v48.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_77;
    size = objlist->fields._size;
    v19 = objlist->fields._version + 1;
    objlist->fields._size = 0;
    objlist->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)objlist->fields._items, 0, size, 0LL);
  }
  v20 = CommandSpellWindowComponent___c_TypeInfo;
  if ( !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v20 = CommandSpellWindowComponent___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v20->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = CommandSpellWindowComponent___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v22,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      0LL);
    static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v24, v25);
  }
  System_Array__Sort_object__48551928(
    Entitys_object,
    _9__39_0,
    (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys_object )
    goto LABEL_77;
  max_length = Entitys_object->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0LL;
    v28 = 0;
    m_Items = Entitys_object->m_Items;
    do
    {
      if ( (unsigned int)v27 >= max_length )
LABEL_78:
        sub_1B88814(checkWindow, v9);
      checkWindow = (BattleWindowComponent_o *)m_Items[v27];
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
        max_length = Entitys_object->max_length;
      }
      if ( (unsigned int)v27 >= max_length )
        goto LABEL_78;
      checkWindow = (BattleWindowComponent_o *)m_Items[v27];
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
        v30 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
        v31 = CommandSpellWindowComponent_TypeInfo;
        v32 = (UnityEngine_Transform_o *)checkWindow;
        if ( !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          v31 = CommandSpellWindowComponent_TypeInfo;
        }
        if ( !v32 )
          goto LABEL_77;
        v49.fields.x = 0.0;
        v49.fields.z = 0.0;
        v49.fields.y = (float)-(v28 * v31->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v32, v49, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v30,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( (unsigned int)v27 >= Entitys_object->max_length )
          goto LABEL_78;
        v34 = m_Items[v27];
        if ( !v34 )
          goto LABEL_77;
        v35 = checkWindow;
        if ( !checkWindow )
          goto LABEL_77;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          (int32_t)v34[1].klass,
          this->fields.commandCount,
          v33);
        v35->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->fields._closeBtnObject, (int32_t)this, v36, v37);
        if ( !this->fields.mode )
          LOBYTE(v35[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v30, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_77;
        v40 = *(_QWORD *)&checkWindow->fields.m_CachedPtr;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(checkWindow->fields.m_CancellationTokenSource);
        if ( !v40 )
          goto LABEL_77;
        m_CancellationTokenSource_low = SLODWORD(checkWindow->fields.m_CancellationTokenSource);
        ++v28;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v40 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)checkWindow,
            (Il2CppObject *)v30,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = v40 + 8 * m_CancellationTokenSource_low;
          LODWORD(checkWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v43 + 32) = v30;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)v30, v38, v39);
        }
      }
LABEL_65:
      max_length = Entitys_object->max_length;
      ++v27;
    }
    while ( (int)v27 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = &StringLiteral_15557/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = &StringLiteral_15558/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v46, 0LL);
  if ( !titleLabel )
LABEL_77:
    sub_1B8880C(checkWindow, v9);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4A5E24E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E24E = 1;
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
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
                                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
        tree_root = (UnityEngine_Component_o *)Component_object[4].klass;
        if ( tree_root )
        {
          tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   tree_root,
                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1B8880C(tree_root, v8);
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
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5E254 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__);
    sub_1B885B0(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E254 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v4 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
    CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, 0, 0, v7, 2, 0LL, 0LL);
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
  Il2CppObject *Component_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *classBoardWindowButton; // x21
  UnityEngine_GameObject_o *v14; // x21
  BalanceConfig_c *v15; // x0
  int32_t ClassBoardReleaseQuestId; // w22
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5E24F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E24F = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
    v8 = (System_String_o *)SelfUserGame;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v8, 0LL);
  if ( this->fields.mode == 1 )
  {
    SelfUserGame = (UserGameEntity_o *)this->fields.objlist;
    if ( !SelfUserGame )
      goto LABEL_34;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)SelfUserGame,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1B8880C(0LL, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19.fields._current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_object )
        sub_1B8880C(0LL, v11);
      CommandSpellObjectComponent__updateIsUse(
        (CommandSpellObjectComponent_o *)Component_object,
        this->fields.mode,
        this->fields.commandCount,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0LL)) == 0LL )
  {
LABEL_34:
    sub_1B8880C(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0LL, 0LL) )
  {
    v14 = this->fields.classBoardWindowButton;
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    ClassBoardReleaseQuestId = v15->static_fields->ClassBoardReleaseQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, (unsigned __int8)SelfUserGame & 1, 0LL);
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
    sub_1B8880C(spellnamelabel, isAddFunction);
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
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v7; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v9; // x2
  bool IsQuestClear_37596684; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  BattleWindowOuterClickManagerComponent_o *v13; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4A5E250 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_CommandSpellWindowComponent_cancelSpell__);
    sub_1B885B0(&Method_CommandSpellWindowComponent_endSpellOpened__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E250 = 1;
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
    battlePerf = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_object_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)battlePerf,
                       Id,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v7 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v7 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v7->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_37596684 = CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
            battlePerf = 0LL;
            if ( IsQuestClear_37596684 )
            {
              if ( !Master_object )
                goto LABEL_23;
              LOBYTE(battlePerf) = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                     (ClassBoardCommandSpellMaster_o *)Master_object,
                                     Id,
                                     0LL);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, (unsigned __int8)battlePerf & 1, v9);
            checkWindow = this->fields.checkWindow;
            v12 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
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
              v14 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B887FC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
              BattleWindowOuterClickComponent_OuterClickCall___ctor(
                v14,
                (Il2CppObject *)this,
                (intptr_t)Method_CommandSpellWindowComponent_cancelSpell__,
                v15);
              if ( v13 )
              {
                BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v13, v14, v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_1B8880C(battlePerf, *(_QWORD *)&Id);
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4A5E252 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandSpellWindowComponent_cancelSpell__);
    byte_4A5E252 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    v3 = Method_CommandSpellWindowComponent_cancelSpell__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_cancelSpell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CommandSpellWindowComponent_cancelSpell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5E253 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___);
    sub_1B885B0(&StringLiteral_12909/*"Sprite"*/);
    byte_4A5E253 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_object_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(transform, v4);
  }
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 < 1 )
    return 0LL;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v5 )
      sub_1B88814(transform, v4);
    v8 = (char *)&v6[2 * v7];
    v9 = (UnityEngine_Component_o *)*((_QWORD *)v8 + 4);
    if ( !v9 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + 4), 0LL);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_12909/*"Sprite"*/, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x8

  if ( (byte_4A5E251 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandSpellWindowComponent_okSpell__);
    byte_4A5E251 = 1;
  }
  v3 = Method_CommandSpellWindowComponent_okSpell__;
  if ( (*((_BYTE *)Method_CommandSpellWindowComponent_okSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandSpellWindowComponent_okSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
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

  this->fields.callback_close = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback_close, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callback_use = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback_use, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_1B8880C(0LL, method);
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

  this->fields._closeBtnObject = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellWindowComponent_CloseButtonCallBack___ctor(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
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
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D25DC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D259C;
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  this->fields.m_target = (Il2CppObject *)sub_19D2638;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D25F0;
}


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
  if ( (byte_4A5E258 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E258 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E259 & 1) == 0 )
  {
    sub_1B885B0(&CommandSpellWindowComponent___c_TypeInfo);
    byte_4A5E259 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommandSpellWindowComponent___c_TypeInfo->static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}