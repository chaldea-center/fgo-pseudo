void __fastcall CommandSpellWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B69ECD & 1) == 0 )
  {
    sub_1BE4ACC(&CommandSpellWindowComponent_TypeInfo, v1);
    byte_4B69ECD = 1;
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

  if ( (byte_4B69ECC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B69ECC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objlist = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.objlist, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B69EC2 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, call);
    byte_4B69EC2 = 1;
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
    sub_1BE4D28(tree_root, call);
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

  if ( (byte_4B69ECB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B69ECB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
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
  System_Object_array *Entitys_object; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *objlist; // x8
  int32_t size; // w2
  int v43; // w9
  CommandSpellWindowComponent___c_c *v44; // x0
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v46; // x23
  struct CommandSpellWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int max_length; // w8
  __int64 v55; // x25
  int v56; // w26
  Il2CppObject **m_Items; // x24
  UnityEngine_GameObject_o *v58; // x22
  CommandSpellWindowComponent_c *v59; // x8
  UnityEngine_Transform_o *v60; // x23
  const MethodInfo *v61; // x4
  Il2CppObject *v62; // x8
  BattleWindowComponent_o *v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v79; // x8
  int32_t mode; // w8
  UILabel_o *titleLabel; // x19
  __int64 *v82; // x8
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B69EC3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_CommandSpellEntity___, bp);
    sub_1BE4ACC(&CommandSpellWindowComponent_TypeInfo, v9);
    sub_1BE4ACC(&System_Comparison_CommandSpellEntity__TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v15);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v20);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BE4ACC(&Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__, v23);
    sub_1BE4ACC(&CommandSpellWindowComponent___c_TypeInfo, v24);
    sub_1BE4ACC(&StringLiteral_15765/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/, v25);
    sub_1BE4ACC(&StringLiteral_15764/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/, v26);
    sub_1BE4ACC(&StringLiteral_2851/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, v27);
    sub_1BE4ACC(&StringLiteral_3784/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, v28);
    byte_4B69EC3 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bp, 0LL, 0LL) )
  {
    this->fields.battlePerf = bp;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.battlePerf, (int64_t)bp, v30, v31, v32, v33, v34, v35);
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
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2851/*"BATTLE_CHECKUSE_COMMANDSPELL"*/, 0LL);
  if ( !checkuselabel )
    goto LABEL_77;
  UILabel__set_text(checkuselabel, (System_String_o *)checkWindow, 0LL);
  classBoardCautionLabel = this->fields.classBoardCautionLabel;
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3784/*"COMMAND_SPELL_ADD_FUNCTION_CAUTION_TEXT"*/, 0LL);
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
  checkWindow = (BattleWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !checkWindow )
    goto LABEL_77;
  checkWindow = (BattleWindowComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)checkWindow,
                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !checkWindow )
    goto LABEL_77;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)checkWindow,
                     (const MethodInfo_2F599A4 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___);
  if ( this->fields.objlist )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v83,
      (System_Collections_Generic_List_object__o *)this->fields.objlist,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v84 = v83;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v84.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    objlist = this->fields.objlist;
    if ( !objlist )
      goto LABEL_77;
    size = objlist->fields._size;
    v43 = objlist->fields._version + 1;
    objlist->fields._size = 0;
    objlist->fields._version = v43;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)objlist->fields._items, 0, size, 0LL);
  }
  v44 = CommandSpellWindowComponent___c_TypeInfo;
  if ( !CommandSpellWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent___c_TypeInfo);
    v44 = CommandSpellWindowComponent___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v44->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = CommandSpellWindowComponent___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_CommandSpellEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v46,
      Method_CommandSpellWindowComponent___c__InitializeCommandSpell_b__39_0__,
      0LL);
    static_fields = CommandSpellWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_CommandSpellEntity__o *)_9__39_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
      (int64_t)_9__39_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  System_Array__Sort_object__49441616(
    Entitys_object,
    _9__39_0,
    (const MethodInfo_2F26B50 *)Method_System_Array_Sort_CommandSpellEntity___);
  if ( !Entitys_object )
    goto LABEL_77;
  max_length = Entitys_object->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0LL;
    v56 = 0;
    m_Items = Entitys_object->m_Items;
    do
    {
      if ( (unsigned int)v55 >= max_length )
LABEL_78:
        sub_1BE4D30(checkWindow, v29);
      checkWindow = (BattleWindowComponent_o *)m_Items[v55];
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
      if ( (unsigned int)v55 >= max_length )
        goto LABEL_78;
      checkWindow = (BattleWindowComponent_o *)m_Items[v55];
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
        v58 = (UnityEngine_GameObject_o *)checkWindow;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)checkWindow, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__get_transform(v58, 0LL);
        v59 = CommandSpellWindowComponent_TypeInfo;
        v60 = (UnityEngine_Transform_o *)checkWindow;
        if ( !CommandSpellWindowComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandSpellWindowComponent_TypeInfo);
          v59 = CommandSpellWindowComponent_TypeInfo;
        }
        if ( !v60 )
          goto LABEL_77;
        v85.fields.x = 0.0;
        v85.fields.z = 0.0;
        v85.fields.y = (float)-(v56 * v59->static_fields->objheight);
        UnityEngine_Transform__set_localPosition(v60, v85, 0LL);
        checkWindow = (BattleWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v58,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
        if ( (unsigned int)v55 >= Entitys_object->max_length )
          goto LABEL_78;
        v62 = m_Items[v55];
        if ( !v62 )
          goto LABEL_77;
        v63 = checkWindow;
        if ( !checkWindow )
          goto LABEL_77;
        CommandSpellObjectComponent__setData(
          (CommandSpellObjectComponent_o *)checkWindow,
          this->fields.mode,
          (int32_t)v62[1].klass,
          this->fields.commandCount,
          v61);
        v63->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)this;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v63->fields._closeBtnObject,
          (int64_t)this,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        if ( !this->fields.mode )
          LOBYTE(v63[1].fields.m_CachedPtr) = 0;
        UnityEngine_GameObject__SetActive(v58, 1, 0LL);
        checkWindow = (BattleWindowComponent_o *)this->fields.objlist;
        if ( !checkWindow )
          goto LABEL_77;
        v76 = *(_QWORD *)&checkWindow->fields.m_CachedPtr;
        v77 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(checkWindow->fields.m_CancellationTokenSource);
        if ( !v76 )
          goto LABEL_77;
        m_CancellationTokenSource_low = SLODWORD(checkWindow->fields.m_CancellationTokenSource);
        ++v56;
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v76 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)checkWindow,
            (Il2CppObject *)v58,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = v76 + 8 * m_CancellationTokenSource_low;
          LODWORD(checkWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v79 + 32) = v58;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v79 + 32), (int64_t)v58, v70, v71, v72, v73, v74, v75);
        }
      }
LABEL_65:
      max_length = Entitys_object->max_length;
      ++v55;
    }
    while ( (int)v55 < max_length );
  }
  mode = this->fields.mode;
  if ( mode )
  {
    if ( mode != 1 )
      return;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = &StringLiteral_15764/*"WINDOWTITLE_COMMANDSPELL_BATTLE"*/;
  }
  else
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = &StringLiteral_15765/*"WINDOWTITLE_COMMANDSPELL_NO_BATTLE"*/;
  }
  checkWindow = (BattleWindowComponent_o *)LocalizationManager__Get((System_String_o *)*v82, 0LL);
  if ( !titleLabel )
LABEL_77:
    sub_1BE4D28(checkWindow, v29);
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

  if ( (byte_4B69EC4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&inMode);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B69EC4 = 1;
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
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
                                               (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( tree_root )
      {
        UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
        tree_root = (UnityEngine_Component_o *)Component_object[4].klass;
        if ( tree_root )
        {
          tree_root = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   tree_root,
                                                   (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( tree_root )
          {
            UIPanel__set_depth((UIPanel_o *)tree_root, scrollViewDepth, 0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_1BE4D28(tree_root, v10);
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

  if ( (byte_4B69ECA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__, v3);
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B69ECA = 1;
  }
  if ( !this->fields.isOpenClassBoardEffectListDialog )
  {
    classBoardWindowMask = this->fields.classBoardWindowMask;
    this->fields.isOpenClassBoardEffectListDialog = 1;
    if ( classBoardWindowMask )
      UnityEngine_GameObject__SetActive(classBoardWindowMask, 1, 0LL);
    v7 = Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BE4AE4(Method_CommandSpellWindowComponent_OnClickClassBoardWindowOpen__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CommandSpellWindowComponent_EndCloseClassBoardEffectListDialog__,
      0LL);
    if ( !Instance )
      sub_1BE4D28(v11, v12);
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

  if ( (byte_4B69EC5 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, call);
    sub_1BE4ACC(&CondType_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    byte_4B69EC5 = 1;
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
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      if ( !v27.fields._current )
        sub_1BE4D28(0LL, v17);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27.fields._current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandSpellObjectComponent___);
      if ( !Component_object )
        sub_1BE4D28(0LL, v19);
      CommandSpellObjectComponent__updateIsUse(
        (CommandSpellObjectComponent_o *)Component_object,
        this->fields.mode,
        this->fields.commandCount,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  SelfUserGame = (UserGameEntity_o *)this->fields.tree_root;
  if ( !SelfUserGame
    || (SelfUserGame = (UserGameEntity_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)SelfUserGame,
                                             0LL)) == 0LL )
  {
LABEL_34:
    sub_1BE4D28(SelfUserGame, v14);
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
    SelfUserGame = (UserGameEntity_o *)CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL);
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
    sub_1BE4D28(spellnamelabel, isAddFunction);
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
  bool IsQuestClear_38498148; // w8
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x20
  BattleWindowComponent_EndCall_o *v22; // x21
  BattleWindowOuterClickManagerComponent_o *v23; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2

  if ( (byte_4B69EC6 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&Id);
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_cancelSpell__, v5);
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_endSpellOpened__, v6);
    sub_1BE4ACC(&CondType_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&BattleWindowComponent_EndCall_TypeInfo, v12);
    sub_1BE4ACC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B69EC6 = 1;
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
    battlePerf = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( battlePerf )
    {
      battlePerf = DataManager__GetMasterData_object_(
                     (DataManager_o *)battlePerf,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( battlePerf )
      {
        battlePerf = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)battlePerf,
                       Id,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
        if ( battlePerf )
        {
          if ( this->fields.spellnamelabel )
          {
            UILabel__set_text(this->fields.spellnamelabel, *((System_String_o **)battlePerf + 4), 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
            v17 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v17 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v17->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_38498148 = CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL);
            battlePerf = 0LL;
            if ( IsQuestClear_38498148 )
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
            v22 = (BattleWindowComponent_EndCall_o *)sub_1BE4D18(BattleWindowComponent_EndCall_TypeInfo);
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
              v24 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1BE4D18(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
    sub_1BE4D28(battlePerf, *(_QWORD *)&Id);
  }
}


void __fastcall CommandSpellWindowComponent__cancelSpell(CommandSpellWindowComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct BattleWindowOuterClickManagerComponent_o *checkWindow; // x0

  if ( (byte_4B69EC8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_cancelSpell__, method);
    byte_4B69EC8 = 1;
  }
  if ( this->fields.isOpenFlg )
  {
    v3 = Method_CommandSpellWindowComponent_cancelSpell__;
    if ( (*((_BYTE *)Method_CommandSpellWindowComponent_cancelSpell__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CommandSpellWindowComponent_cancelSpell__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0LL);
    checkWindow = this->fields.checkWindow;
    if ( !checkWindow )
      sub_1BE4D28(0LL, v5);
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

  if ( (byte_4B69EC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___, method);
    sub_1BE4ACC(&StringLiteral_13106/*"Sprite"*/, v3);
    byte_4B69EC9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Component__GetComponentsInChildren_object_(
                      (UnityEngine_Component_o *)transform,
                      1,
                      (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIMessageButton___)) == 0LL )
  {
LABEL_14:
    sub_1BE4D28(transform, v5);
  }
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
      sub_1BE4D30(transform, v5);
    v9 = (char *)&v7[2 * v8];
    v10 = (UnityEngine_Component_o *)*((_QWORD *)v9 + 4);
    if ( !v10 )
      goto LABEL_14;
    transform = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v9 + 4), 0LL);
    if ( !transform )
      goto LABEL_14;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (void *)System_String__op_Equality(name, (System_String_o *)StringLiteral_13106/*"Sprite"*/, 0LL);
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

  if ( (byte_4B69EC7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandSpellWindowComponent_okSpell__, method);
    byte_4B69EC7 = 1;
  }
  v3 = Method_CommandSpellWindowComponent_okSpell__;
  if ( (*((_BYTE *)Method_CommandSpellWindowComponent_okSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_CommandSpellWindowComponent_okSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callback_close = callback;
  sub_1BE4A70(
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
  sub_1BE4A70(
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
    sub_1BE4D28(0LL, method);
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
  sub_1BE4A70(
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A2AB68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2AB28;
}


System_IAsyncResult_o *__fastcall CommandSpellWindowComponent_CloseButtonCallBack__BeginInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v5, callback, object);
}


void __fastcall CommandSpellWindowComponent_CloseButtonCallBack__EndInvoke(
        CommandSpellWindowComponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A2ABC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2AB7C;
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
  if ( (byte_4B69ECE & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&commandSpellId);
    byte_4B69ECE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall CommandSpellWindowComponent_UseCommandSpellCallBack__EndInvoke(
        CommandSpellWindowComponent_UseCommandSpellCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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

  if ( (byte_4B69ECF & 1) == 0 )
  {
    sub_1BE4ACC(&CommandSpellWindowComponent___c_TypeInfo, v1);
    byte_4B69ECF = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CommandSpellWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandSpellWindowComponent___c_TypeInfo->static_fields->__9 = (struct CommandSpellWindowComponent___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, a);
  return b->fields.priority - a->fields.priority;
}