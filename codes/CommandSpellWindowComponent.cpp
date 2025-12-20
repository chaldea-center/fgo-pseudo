void CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D30127 & 1) == 0 )
  {
    sub_1C94098(&CommandSpellWindowComponent_TypeInfo);
    byte_4D30127 = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30126 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D30126 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.objlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.temporarySpell = -1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void CommandSpellWindowComponent__Close(
        CommandSpellWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_Component_o *tree_root; // x0
  UnityEngine_Object_o *classBoardWindowButton; // x21

  if ( (byte_4D3011C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3011C = 1;
  }
  tree_root = (UnityEngine_Component_o *)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_12;
  tree_root = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(tree_root, 0);
  if ( !tree_root )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0, 0) )
  {
    tree_root = (UnityEngine_Component_o *)this->fields.classBoardWindowButton;
    if ( !tree_root )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tree_root, 0, 0);
  }
  tree_root = (UnityEngine_Component_o *)this->fields.checkWindow;
  if ( !tree_root )
LABEL_12:
    sub_1C942F0(tree_root, call);
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))tree_root->klass[1]._1.declaringType)(
    tree_root,
    tree_root->klass[1]._1.parent);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void CommandSpellWindowComponent__CompOpen(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void CommandSpellWindowComponent__EndCloseClassBoardEffectListDialog(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *classBoardWindowMask; // x0

  if ( (byte_4D30125 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30125 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
  classBoardWindowMask = this->fields.classBoardWindowMask;
  this->fields.isOpenClassBoardEffectListDialog = 0;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
}


void CommandSpellWindowComponent__InitializeCommandSpell(
        CommandSpellWindowComponent_o *this,
        BattlePerformance_o *bp,
        int32_t inMode,
        int32_t temporary,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleWindowComponent_o *checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  System_Object_array *Entitys; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x8
  int32_t size; // w2
  int v23; // w9
  CommandSpellWindowComponent___c_c *v24; // x0
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v26; // x23
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int max_length; // w8
  __int64 v35; // x25
  int v36; // w26
  Il2CppObject **m_Items; // x24
  UnityEngine_GameObject_o *v38; // x22
  CommandSpellWindowComponent_c *v39; // x8
  UnityEngine_Transform_o *v40; // x23
  const MethodInfo *v41; // x4
  Il2CppObject *v42; // x8
  BattleWindowComponent_o *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v59; // x8
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v62; // x8
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3011D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_CommandSpellEntity___);
    sub_1C94098(&CommandSpellWindowComponent_TypeInfo);
    sub_1C94098(&System_Comparison_CommandSpellEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__);
    sub_1C94098(&CommandSpellWindowComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_15615/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/);
    sub_1C94098(&StringLiteral_15614/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/);
    sub_1C94098(&StringLiteral_2703/*"BATTLE_CHECKUSE_COMMANDSPELL"*/);
    sub_1C94098(&StringLiteral_3676/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/);
    byte_4D3011D = 1;
  }
  memset(&v64, 0, sizeof(v64));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0, 0) )
  {
    this->fields.battlePerf = bp;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.battlePerf, (int32_t)bp, v10, v11, v12, v13, v14, v15);
  }
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkWindow->klass->vtable._7_setInitialPos.methodPtr)(
    checkWindow,
    checkWindow->klass->vtable._7_setInitialPos.method);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  BattleWindowComponent__setInitData(checkWindow, 1, 0.15, 0, 0);
  checkWindow = (BattleWindowComponent_o *)this->fields.checkWindow;
  if ( !checkWindow )
    goto LABEL_77;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))checkWindow->klass->vtable._9_setClose.methodPtr)(
    checkWindow,
    checkWindow->klass->vtable._9_setClose.method);
  checkuselabel = this->fields.checkuselabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2703/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0);
  if ( !checkuselabel )
    goto LABEL_77;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0);
  if ( !classBoardCautionLabel )
    goto LABEL_77;
  UILabel__set_text(classBoardCautionLabel, (System_String_o *)checkWindow, 0);
  checkWindow = (BattleWindowComponent_o *)this->fields.classBoardCautionLabel;
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)checkWindow,
                                             0);
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0);
  checkWindow = (BattleWindowComponent_o *)this->fields.tree_root;
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)checkWindow, 0);
  checkWindow = (BattleWindowComponent_o *)this->fields.prefab;
  if ( !checkWindow )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 0, 0);
  if ( (temporary & 0x80000000) == 0 )
    this->fields.commandCount = temporary;
  this->fields.mode = inMode;
  if ( !inMode )
    this->fields.commandCount = 10;
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_77;
  Entitys = DataMasterBase_object__object__int___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)checkWindow,
              (const MethodInfo_345A744 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      (System_Collections_Generic_List_object__o *)this->fields.objlist,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v64 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v64,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v64.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v64,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_77;
    size = objlist->fields._size;
    v23 = objlist->fields._version + 1;
    objlist->fields._size = 0;
    objlist->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)objlist->fields._items, 0, size, 0);
  }
  v24 = CommandSpellWindowComponent___c_TypeInfo;
  if ( !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v24 = CommandSpellWindowComponent___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v24->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = CommandSpellWindowComponent___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v26,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      0);
    static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_0,
      (int32_t)_9__39_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  System_Array__Sort_object__51807060(
    Entitys,
    _9__39_0,
    (const MethodInfo_3168354 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys )
    goto LABEL_77;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    v36 = 0;
    m_Items = Entitys->m_Items;
    do
    {
      if ( (unsigned int)v35 >= max_length )
LABEL_78:
        sub_1C942F8(checkWindow);
      checkWindow = (BattleWindowComponent_o *)m_Items[v35];
      if ( !checkWindow )
        goto LABEL_77;
      if ( !LODWORD(checkWindow->fields.m_CancellationTokenSource) )
        goto LABEL_65;
      if ( inMode == 1 )
      {
        checkWindow = (BattleWindowComponent_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)checkWindow, 0);
        if ( ((unsigned __int8)checkWindow & 1) == 0 )
          goto LABEL_65;
        max_length = Entitys->max_length;
      }
      if ( (unsigned int)v35 >= max_length )
        goto LABEL_78;
      checkWindow = (BattleWindowComponent_o *)m_Items[v35];
      if ( !checkWindow )
        goto LABEL_77;
      checkWindow = (BattleWindowComponent_o *)CommandSpellEntity__checkHideInDetailWindow(
                                                 (CommandSpellEntity_o *)checkWindow,
                                                 0);
      if ( ((unsigned __int8)checkWindow & 1) == 0 )
      {
        checkWindow = (BattleWindowComponent_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   this->fields.prefab,
                                                   this->fields.tree_root,
                                                   0,
                                                   0);
        if ( !checkWindow )
          goto LABEL_77;
        v38 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v38, 0);
        v39 = CommandSpellWindowComponent_TypeInfo;
        v40 = (UnityEngine_Transform_o *)checkWindow;
        if ( !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          v39 = CommandSpellWindowComponent_TypeInfo;
        }
        if ( !v40 )
          goto LABEL_77;
        v65.fields.x = 0.0;
        v65.fields.z = 0.0;
        v65.fields.y = (float)-(v36 * v39->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v40, v65, 0);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v38,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( (unsigned int)v35 >= LODWORD(Entitys->max_length) )
          goto LABEL_78;
        v42 = m_Items[v35];
        if ( !v42 )
          goto LABEL_77;
        v43 = checkWindow;
        if ( !checkWindow )
          goto LABEL_77;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          (int32_t)v42[1].klass,
          this->fields.commandCount,
          v41);
        v43->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v43->fields._closeBtnObject,
          (int32_t)this,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        if ( !this->fields.mode )
          LOBYTE(v43[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v38, 1, 0);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_77;
        m_CachedPtr = checkWindow->fields.m_CachedPtr;
        v57 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(checkWindow->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_77;
        m_CancellationTokenSource_low = SLODWORD(checkWindow->fields.m_CancellationTokenSource);
        ++v36;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)checkWindow,
            (Il2CppObject *)v38,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(checkWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v59 + 32) = v38;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v59 + 32), (int32_t)v38, v50, v51, v52, v53, v54, v55);
        }
      }
LABEL_65:
      max_length = Entitys->max_length;
      ++v35;
    }
    while ( (int)v35 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_15614/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_15615/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v62, 0);
  if ( !titleLabel )
LABEL_77:
    sub_1C942F0(checkWindow, v9);
  UILabel__set_text(titleLabel, (System_String_o *)checkWindow, 0);
}


void CommandSpellWindowComponent__InitializeCommandSpellDepth(
        CommandSpellWindowComponent_o *this,
        int32_t inMode,
        int32_t scrollViewDepth,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  intptr_t tree_root; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_object; // x20

  if ( (byte_4D3011E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3011E = 1;
  }
  CommandSpellWindowComponent__InitializeCommandSpell(this, 0, inMode, -1, v4);
  tree_root = (intptr_t)this->fields.tree_root;
  if ( !tree_root )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tree_root, 0);
  tree_root = (intptr_t)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !tree_root )
    goto LABEL_14;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)tree_root,
                                               (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  tree_root = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (tree_root & 1) != 0 )
  {
    if ( Component_object )
    {
      tree_root = (intptr_t)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Component_object,
                              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0);
        tree_root = Component_object[2].fields.m_CachedPtr;
        if ( tree_root )
        {
          tree_root = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)tree_root,
                                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1C942F0(tree_root, v8);
  }
}


void CommandSpellWindowComponent__OnClick(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x8

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
  {
    callback_close = this->fields.callback_close;
    if ( callback_close )
      ((void (__fastcall *)(intptr_t, intptr_t))callback_close->fields.invoke_impl)(
        callback_close->fields.method_code,
        callback_close->fields.method);
  }
}


void CommandSpellWindowComponent__OnClickClassBoardWindowOpen(
        CommandSpellWindowComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *classBoardWindowMask; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  UnityEngine_Object_o *battlePerf; // x20
  BattleData_o *classStatisticsInfos; // x0
  __int64 v8; // x1
  System_Collections_ICollection_o *ServantListIfSwitchPartyBattle; // x20
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v12; // x8
  BattleServantData_array *battleServantList; // x22
  Il2CppObject *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_4D30124 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__);
    sub_1C94098(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    sub_1C94098(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30124 = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    battlePerf = (UnityEngine_Object_o *)this->fields.battlePerf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    classStatisticsInfos = (BattleData_o *)UnityEngine_Object__op_Equality(battlePerf, 0, 0);
    ServantListIfSwitchPartyBattle = 0;
    if ( ((unsigned __int8)classStatisticsInfos & 1) == 0 )
    {
      v10 = this->fields.battlePerf;
      if ( !v10 )
        goto LABEL_28;
      data = (UnityEngine_Object_o *)v10->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      classStatisticsInfos = (BattleData_o *)UnityEngine_Object__op_Equality(data, 0, 0);
      ServantListIfSwitchPartyBattle = 0;
      if ( ((unsigned __int8)classStatisticsInfos & 1) == 0 )
      {
        v12 = this->fields.battlePerf;
        if ( !v12 )
          goto LABEL_28;
        classStatisticsInfos = v12->fields.data;
        if ( !classStatisticsInfos )
          goto LABEL_28;
        ServantListIfSwitchPartyBattle = (System_Collections_ICollection_o *)BattleData__GetServantListIfSwitchPartyBattle(
                                                                               classStatisticsInfos,
                                                                               0);
      }
    }
    if ( BasicHelper__IsNullOrEmpty(ServantListIfSwitchPartyBattle, 0) )
      battleServantList = 0;
    else
      battleServantList = (BattleServantData_array *)ServantListIfSwitchPartyBattle;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = (BattleData_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(
                                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                                               0);
    if ( Instance )
    {
      CommonUI__OpenClassBoardEffectListDialog(
        (CommonUI_o *)Instance,
        1,
        0,
        0,
        v15,
        2,
        0,
        0,
        0,
        (ClassStatisticsInfo_array *)classStatisticsInfos,
        battleServantList,
        0);
      return;
    }
LABEL_28:
    sub_1C942F0(classStatisticsInfos, v8);
  }
}


void CommandSpellWindowComponent__Open(
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

  if ( (byte_4D3011F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D3011F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.isOpenFlg = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_34;
  this->fields.commandCount = UserGameEntity__getCommandSpell(SelfUserGame, 0);
  if ( this->fields.isUseTemporarySpell )
    this->fields.commandCount = this->fields.temporarySpell;
  label_count = this->fields.label_count;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int)this + 192, 0);
  if ( !label_count )
    goto LABEL_34;
  if ( SelfUserGame )
    v8 = (System_String_o *)SelfUserGame;
  else
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label_count, v8, 0);
  if ( this->fields.mode == 1 )
  {
    SelfUserGame = (UserGameEntity_o *)this->fields.objlist;
    if ( !SelfUserGame )
      goto LABEL_34;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)SelfUserGame,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1C942F0(0, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19.fields._current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_object )
        sub_1C942F0(0, v11);
      CommandSpellObjectComponent__updateIsUse(
        (CommandSpellObjectComponent_o *)Component_object,
        this->fields.mode,
        this->fields.commandCount,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0)) == 0 )
  {
LABEL_34:
    sub_1C942F0(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  classBoardWindowButton = (UnityEngine_Object_o *)this->fields.classBoardWindowButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardWindowButton, 0, 0) )
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
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_41072884(ClassBoardReleaseQuestId, -1, 0, 0);
    if ( v14 )
    {
      UnityEngine_GameObject__SetActive(v14, (unsigned __int8)SelfUserGame & 1, 0);
      goto LABEL_29;
    }
    goto LABEL_34;
  }
LABEL_29:
  classBoardWindowMask = this->fields.classBoardWindowMask;
  if ( classBoardWindowMask )
    UnityEngine_GameObject__SetActive(classBoardWindowMask, 0, 0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellWindowComponent__SetCheckUseLabel(
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
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(spellnamelabel, 0);
  v7 = 49.0;
  if ( isAddFunction )
  {
    v7 = 70.0;
    v8 = 52.5;
  }
  else
  {
    v8 = 32.4;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v7, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.spellNameLineSprite, v8, 0);
  spellnamelabel = (UnityEngine_Component_o *)this->fields.checkuselabel;
  if ( !spellnamelabel )
    goto LABEL_11;
  v9 = UnityEngine_Component__get_gameObject(spellnamelabel, 0);
  v10 = -5.0;
  if ( isAddFunction )
    v10 = 25.0;
  GameObjectExtensions__SetLocalPositionY(v9, v10, 0);
  spellnamelabel = (UnityEngine_Component_o *)this->fields.classBoardCautionLabel;
  if ( !spellnamelabel
    || (spellnamelabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(spellnamelabel, 0)) == 0 )
  {
LABEL_11:
    sub_1C942F0(spellnamelabel, isAddFunction);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spellnamelabel, isAddFunction, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellWindowComponent__UseSpell(CommandSpellWindowComponent_o *this, int32_t Id, const MethodInfo *method)
{
  void *battlePerf; // x0
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v7; // x8
  int32_t ClassBoardReleaseQuestId; // w22
  const MethodInfo *v9; // x2
  bool IsQuestClear_41072884; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  BattleWindowOuterClickManagerComponent_o *v13; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4D30120 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_CommandSpellWindowComponent_cancelSpell__);
    sub_1C94098(&Method_CommandSpellWindowComponent_endSpellOpened__);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C94098(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C94098(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30120 = 1;
  }
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_23;
  BattlePerformance__SetCloseSelectMainSubSvtWindow((BattlePerformance_o *)battlePerf, 0);
  battlePerf = this->fields.battlePerf;
  if ( !battlePerf )
    goto LABEL_23;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)battlePerf, 0);
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    this->fields.tmp_Id = Id;
    battlePerf = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_object_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)battlePerf,
                       Id,
                       (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v7 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v7 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v7->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_41072884 = CondType__IsQuestClear_41072884(ClassBoardReleaseQuestId, -1, 0, 0);
            battlePerf = 0;
            if ( IsQuestClear_41072884 )
            {
              if ( !Master_object )
                goto LABEL_23;
              LOBYTE(battlePerf) = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                     (ClassBoardCommandSpellMaster_o *)Master_object,
                                     Id,
                                     0);
            }
            CommandSpellWindowComponent__SetCheckUseLabel(this, (unsigned __int8)battlePerf & 1, v9);
            checkWindow = this->fields.checkWindow;
            v12 = (BattleWindowComponent_EndCall_o *)sub_1C942E4(BattleWindowComponent_EndCall_TypeInfo);
            BattleWindowComponent_EndCall___ctor(
              v12,
              (Il2CppObject *)this,
              Method_CommandSpellWindowComponent_endSpellOpened__,
              0);
            if ( checkWindow )
            {
              ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))checkWindow->klass->vtable._10_Open.methodPtr)(
                checkWindow,
                v12,
                checkWindow->klass->vtable._10_Open.method);
              v13 = this->fields.checkWindow;
              v14 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C942E4(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1C942F0(battlePerf, *(_QWORD *)&Id);
  }
}


void CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4D30122 & 1) == 0 )
  {
    sub_1C94098(&Method_CommandSpellWindowComponent_cancelSpell__);
    byte_4D30122 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    v3 = Method_CommandSpellWindowComponent_cancelSpell__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_cancelSpell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CommandSpellWindowComponent_cancelSpell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_1C942F0(0, v5);
    ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, _QWORD, const MethodInfo *))checkWindow->klass->vtable._12_Close.methodPtr)(
      checkWindow,
      0,
      checkWindow->klass->vtable._12_Close.method);
    this->fields.isOpenFlg = 0;
  }
}


void CommandSpellWindowComponent__endSpellOpened(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.isOpenFlg = 1;
}


UnityEngine_GameObject_o *CommandSpellWindowComponent__get_closeBtnObject(
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

  if ( (byte_4D30123 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___);
    sub_1C94098(&StringLiteral_13061/*"Sprite"*/);
    byte_4D30123 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_object_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0 )
  {
LABEL_14:
    sub_1C942F0(transform, v4);
  }
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v5 )
      sub_1C942F8(transform);
    v8 = (char *)&v6[2 * v7];
    v9 = (UnityEngine_Component_o *)*((_QWORD *)v8 + 4);
    if ( !v9 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v8 + 4), 0);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13061/*"Sprite"*/, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
      break;
    v5 = v6[6];
    if ( (int)++v7 >= v5 )
      return 0;
  }
  gameObject = UnityEngine_Component__get_gameObject(v9, 0);
  ((void (__fastcall *)(CommandSpellWindowComponent_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    gameObject,
    this->klass->vtable._5_set_closeBtnObject.method);
  return UnityEngine_Component__get_gameObject(v9, 0);
}


void CommandSpellWindowComponent__okSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x8

  if ( (byte_4D30121 & 1) == 0 )
  {
    sub_1C94098(&Method_CommandSpellWindowComponent_okSpell__);
    byte_4D30121 = 1;
  }
  v3 = Method_CommandSpellWindowComponent_okSpell__;
  if ( (*((_BYTE *)Method_CommandSpellWindowComponent_okSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_CommandSpellWindowComponent_okSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  callback_use = this->fields.callback_use;
  if ( callback_use )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback_use->fields.invoke_impl)(
      callback_use->fields.method_code,
      (unsigned int)this->fields.tmp_Id,
      callback_use->fields.method);
}


void CommandSpellWindowComponent__onCloseButton(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_CloseButtonCallBack_o *callback_close; // x8

  callback_close = this->fields.callback_close;
  if ( callback_close )
    ((void (__fastcall *)(intptr_t, intptr_t))callback_close->fields.invoke_impl)(
      callback_close->fields.method_code,
      callback_close->fields.method);
}


void CommandSpellWindowComponent__setCallBackPushClose(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callback_close = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callback_close,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callback_use = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callback_use,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_1C942F0(0, method);
  ((void (__fastcall *)(struct BattleWindowOuterClickManagerComponent_o *, const MethodInfo *))checkWindow->klass->vtable._9_setClose.methodPtr)(
    checkWindow,
    checkWindow->klass->vtable._9_setClose.method);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0);
}


void CommandSpellWindowComponent__setMode(CommandSpellWindowComponent_o *this, int32_t mode, const MethodInfo *method)
{
  this->fields.mode = mode;
}


void CommandSpellWindowComponent__set_closeBtnObject(
        CommandSpellWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._closeBtnObject = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._closeBtnObject,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandSpellWindowComponent_CloseButtonCallBack___ctor(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACCDD8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACCD98;
}


System_IAsyncResult_o *CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void CommandSpellWindowComponent_CloseButtonCallBack__Invoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACCE34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACCDEC;
}


System_IAsyncResult_o *CommandSpellWindowComponent_UseCommandSpellCallBack__BeginInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = commandSpellId;
  if ( (byte_4D30128 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D30128 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void CommandSpellWindowComponent_UseCommandSpellCallBack__Invoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    commandSpellId,
    this->fields.method);
}


void CommandSpellWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30129 & 1) == 0 )
  {
    sub_1C94098(&CommandSpellWindowComponent___c_TypeInfo);
    byte_4D30129 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandSpellWindowComponent___c_TypeInfo->static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandSpellWindowComponent___c___ctor(CommandSpellWindowComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CommandSpellWindowComponent___c___InitializeCommandSpell_b__39_0(
        CommandSpellWindowComponent___c_o *this,
        CommandSpellEntity_o *a,
        CommandSpellEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}