void CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2AA0D & 1) == 0 )
  {
    sub_1C2D490(&CommandSpellWindowComponent_TypeInfo);
    byte_4C2AA0D = 1;
  }
  CommandSpellWindowComponent_TypeInfo->static_fields->objheight = 120;
}


void CommandSpellWindowComponent___ctor(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2AA0C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C2AA0C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.objlist, (int32_t)v3, v4, v5);
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

  if ( (byte_4C2AA02 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA02 = 1;
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
    sub_1C2D6EC(tree_root, call);
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

  if ( (byte_4C2AA0B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AA0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  const MethodInfo *v11; // x3
  BattleWindowComponent_o *checkWindow; // x0
  UILabel_o *checkuselabel; // x22
  UILabel_o *classBoardCautionLabel; // x22
  System_Object_array *Entitys; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x8
  int32_t size; // w2
  int v19; // w9
  CommandSpellWindowComponent___c_c *v20; // x0
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v22; // x23
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x2
  int max_length; // w8
  __int64 v28; // x25
  int v29; // w26
  Il2CppObject **m_Items; // x24
  UnityEngine_GameObject_o *v31; // x22
  CommandSpellWindowComponent_c *v32; // x8
  UnityEngine_Transform_o *v33; // x23
  const MethodInfo *v34; // x4
  Il2CppObject *v35; // x8
  BattleWindowComponent_o *v36; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v44; // x8
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2AA03 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Sort_CommandSpellEntity___);
    sub_1C2D490(&CommandSpellWindowComponent_TypeInfo);
    sub_1C2D490(&System_Comparison_CommandSpellEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__);
    sub_1C2D490(&CommandSpellWindowComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_15556/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/);
    sub_1C2D490(&StringLiteral_15555/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/);
    sub_1C2D490(&StringLiteral_2704/*"BATTLE_CHECKUSE_COMMANDSPELL"*/);
    sub_1C2D490(&StringLiteral_3664/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/);
    byte_4C2AA03 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0, 0) )
  {
    this->fields.battlePerf = bp;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battlePerf, (int32_t)bp, v10, v11);
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
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2704/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0);
  if ( !checkuselabel )
    goto LABEL_77;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0);
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
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_77;
  Entitys = DataMasterBase_object__object__int___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)checkWindow,
              (const MethodInfo_338701C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this->fields.objlist,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v49.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_77;
    size = objlist->fields._size;
    v19 = objlist->fields._version + 1;
    objlist->fields._size = 0;
    objlist->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)objlist->fields._items, 0, size, 0);
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
    _9__39_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v22,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      0);
    static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v24, v25);
  }
  System_Array__Sort_object__50966632(
    Entitys,
    _9__39_0,
    (const MethodInfo_309B068 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys )
    goto LABEL_77;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    v29 = 0;
    m_Items = Entitys->m_Items;
    do
    {
      if ( (unsigned int)v28 >= max_length )
LABEL_78:
        sub_1C2D6F4(checkWindow, v9, v26);
      checkWindow = (BattleWindowComponent_o *)m_Items[v28];
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
      if ( (unsigned int)v28 >= max_length )
        goto LABEL_78;
      checkWindow = (BattleWindowComponent_o *)m_Items[v28];
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
        v31 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v31, 0);
        v32 = CommandSpellWindowComponent_TypeInfo;
        v33 = (UnityEngine_Transform_o *)checkWindow;
        if ( !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          v32 = CommandSpellWindowComponent_TypeInfo;
        }
        if ( !v33 )
          goto LABEL_77;
        v50.fields.x = 0.0;
        v50.fields.z = 0.0;
        v50.fields.y = (float)-(v29 * v32->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v33, v50, 0);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v31,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( (unsigned int)v28 >= LODWORD(Entitys->max_length) )
          goto LABEL_78;
        v35 = m_Items[v28];
        if ( !v35 )
          goto LABEL_77;
        v36 = checkWindow;
        if ( !checkWindow )
          goto LABEL_77;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          (int32_t)v35[1].klass,
          this->fields.commandCount,
          v34);
        v36->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_1C2D434((CGThumbnailListItem_o *)&v36->fields._closeBtnObject, (int32_t)this, v37, v38);
        if ( !this->fields.mode )
          LOBYTE(v36[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v31, 1, 0);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_77;
        m_CachedPtr = checkWindow->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(checkWindow->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_77;
        m_CancellationTokenSource_low = SLODWORD(checkWindow->fields.m_CancellationTokenSource);
        ++v29;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)checkWindow,
            (Il2CppObject *)v31,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(checkWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v44 + 32) = v31;
          sub_1C2D434((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v31, v39, v40);
        }
      }
LABEL_65:
      max_length = Entitys->max_length;
      ++v28;
    }
    while ( (int)v28 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = &StringLiteral_15555/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = &StringLiteral_15556/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v47, 0);
  if ( !titleLabel )
LABEL_77:
    sub_1C2D6EC(checkWindow, v9);
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

  if ( (byte_4C2AA04 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA04 = 1;
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
                                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  tree_root = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (tree_root & 1) != 0 )
  {
    if ( Component_object )
    {
      tree_root = (intptr_t)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Component_object,
                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0);
        tree_root = Component_object[2].fields.m_CachedPtr;
        if ( tree_root )
        {
          tree_root = (intptr_t)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)tree_root,
                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1C2D6EC(tree_root, v8);
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

  if ( (byte_4C2AA0A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__);
    sub_1C2D490(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AA0A = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0);
    v4 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
    sub_1C2D6EC(classStatisticsInfos, v8);
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

  if ( (byte_4C2AA05 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AA05 = 1;
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1C2D6EC(0, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v19.fields._current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_object )
        sub_1C2D6EC(0, v11);
      CommandSpellObjectComponent__updateIsUse(
        (CommandSpellObjectComponent_o *)Component_object,
        this->fields.mode,
        this->fields.commandCount,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0)) == 0 )
  {
LABEL_34:
    sub_1C2D6EC(SelfUserGame, v6);
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
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
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
    sub_1C2D6EC(spellnamelabel, isAddFunction);
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
  bool IsQuestClear_40102980; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  BattleWindowOuterClickManagerComponent_o *v13; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4C2AA06 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_CommandSpellWindowComponent_cancelSpell__);
    sub_1C2D490(&Method_CommandSpellWindowComponent_endSpellOpened__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AA06 = 1;
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
    battlePerf = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_object_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)battlePerf,
                       Id,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v7 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v7 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v7->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_40102980 = CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
            battlePerf = 0;
            if ( IsQuestClear_40102980 )
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
            v12 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
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
              v14 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C2D6DC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1C2D6EC(battlePerf, *(_QWORD *)&Id);
  }
}


void CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4C2AA08 & 1) == 0 )
  {
    sub_1C2D490(&Method_CommandSpellWindowComponent_cancelSpell__);
    byte_4C2AA08 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    v3 = Method_CommandSpellWindowComponent_cancelSpell__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_cancelSpell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CommandSpellWindowComponent_cancelSpell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_1C2D6EC(0, v5);
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
  __int64 v5; // x2
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w22
  char *v9; // x8
  UnityEngine_Component_o *v10; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C2AA09 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___);
    sub_1C2D490(&StringLiteral_13003/*"Sprite"*/);
    byte_4C2AA09 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_object_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(transform, v4);
  }
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
      sub_1C2D6F4(transform, v4, v5);
    v9 = (char *)&v7[2 * v8];
    v10 = (UnityEngine_Component_o *)*((_QWORD *)v9 + 4);
    if ( !v10 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v9 + 4), 0);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13003/*"Sprite"*/, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
      break;
    v6 = v7[6];
    if ( (int)++v8 >= v6 )
      return 0;
  }
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  ((void (__fastcall *)(CommandSpellWindowComponent_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    gameObject,
    this->klass->vtable._5_set_closeBtnObject.method);
  return UnityEngine_Component__get_gameObject(v10, 0);
}


void CommandSpellWindowComponent__okSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback_use; // x8

  if ( (byte_4C2AA07 & 1) == 0 )
  {
    sub_1C2D490(&Method_CommandSpellWindowComponent_okSpell__);
    byte_4C2AA07 = 1;
  }
  v3 = Method_CommandSpellWindowComponent_okSpell__;
  if ( (*((_BYTE *)Method_CommandSpellWindowComponent_okSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CommandSpellWindowComponent_okSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  const MethodInfo *v3; // x3

  this->fields.callback_close = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callback_close, (int32_t)callback, (int32_t)method, v3);
}


void CommandSpellWindowComponent__setCallBackUse(
        CommandSpellWindowComponent_o *this,
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callback_use = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callback_use, (int32_t)callback, (int32_t)method, v3);
}


void CommandSpellWindowComponent__setClose(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  checkWindow = this->fields.checkWindow;
  if ( !checkWindow )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v3; // x3

  this->fields._closeBtnObject = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
}


void CommandSpellWindowComponent_CloseButtonCallBack___ctor(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
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
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A75E44;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75E04;
}


System_IAsyncResult_o *CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  this->fields.invoke_impl = (intptr_t)sub_1A75EA0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75E58;
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
  if ( (byte_4C2AA0E & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C2AA0E = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C2AA0F & 1) == 0 )
  {
    sub_1C2D490(&CommandSpellWindowComponent___c_TypeInfo);
    byte_4C2AA0F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandSpellWindowComponent___c_TypeInfo->static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CommandSpellWindowComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}