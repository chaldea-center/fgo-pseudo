void __fastcall BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  BattleSkillSelectAddFuncBtnComponent_c *v1; // x8

  if ( (byte_438E246 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    byte_438E246 = 1;
  }
  BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 256;
  BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->TWO_ALTERNATIVES_ROOT_POS = 128;
  v1 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 244;
  v1->static_fields->THREE_ALTERNATIVES_CANCEL_POS = -288.0;
  v1->static_fields->THREE_ALTERNATIVES_GRID_WIDTH = 185;
  v1->static_fields->THREE_ALTERNATIVES_ROOT_POS = 103;
  v1->static_fields->THREE_ALTERNATIVES_BTN_WIDTH = 188;
}


void __fastcall BattleSkillSelectAddFuncBtnComponent___ctor(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall BattleSkillSelectAddFuncBtnComponent__Awake(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent__Awake((BattleSkillSelectBtnBaseComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncBtnComponent__SetBtnLayout(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        int32_t btnNum,
        const MethodInfo *method)
{
  BattleSkillSelectAddFuncBtnComponent_o *v4; // x19
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x21
  int32_t size; // w8
  UnityEngine_UI_Dropdown_DropdownItem_o *btnPrefab; // x20
  UnityEngine_GameObject_o *v8; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *v11; // x20
  int32_t v12; // w8
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v15; // x0
  int32_t *p_TWO_ALTERNATIVES_GRID_WIDTH; // x8
  BattleSkillSelectAddFuncBtnComponent_o *v17; // x0
  bool v18; // w4
  int32_t THREE_ALTERNATIVES_ROOT_POS; // w1
  int32_t THREE_ALTERNATIVES_GRID_WIDTH; // w2
  int32_t THREE_ALTERNATIVES_BTN_WIDTH; // w3
  float THREE_ALTERNATIVES_CANCEL_POS; // s0
  UnityEngine_GameObject_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UISprite_o *btnTarget; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v31; // x0
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  v4 = this;
  if ( (byte_438E244 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E244 = 1;
  }
  btnTop = v4->fields.btnTop;
  if ( !btnTop )
    goto LABEL_42;
  size = btnTop->fields._size;
  if ( size >= btnNum )
  {
    if ( size <= btnNum )
      goto LABEL_40;
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)btnTop->fields._items->m_Items[size - 1];
    if ( !this )
      goto LABEL_42;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
    v11 = v4->fields.btnTop;
    if ( !v11 )
      goto LABEL_42;
    v12 = v11->fields._size;
    if ( !v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v11->fields._items->m_Items[v12 - 1];
    if ( !this )
      goto LABEL_42;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v13, 0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.btnTop;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
      LODWORD(this->fields.btnCancel) - 1,
      (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.cancelBtnLabel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.cancelBtnSprite;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v15 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    if ( (BYTE3(BattleSkillSelectAddFuncBtnComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      v15 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    }
    p_TWO_ALTERNATIVES_GRID_WIDTH = &v15->static_fields->TWO_ALTERNATIVES_GRID_WIDTH;
    v17 = v4;
    v18 = 0;
    THREE_ALTERNATIVES_GRID_WIDTH = *p_TWO_ALTERNATIVES_GRID_WIDTH;
    THREE_ALTERNATIVES_ROOT_POS = p_TWO_ALTERNATIVES_GRID_WIDTH[1];
    THREE_ALTERNATIVES_BTN_WIDTH = p_TWO_ALTERNATIVES_GRID_WIDTH[2];
    THREE_ALTERNATIVES_CANCEL_POS = (float)(-2 * THREE_ALTERNATIVES_ROOT_POS);
LABEL_39:
    BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
      v17,
      THREE_ALTERNATIVES_ROOT_POS,
      THREE_ALTERNATIVES_GRID_WIDTH,
      THREE_ALTERNATIVES_BTN_WIDTH,
      THREE_ALTERNATIVES_CANCEL_POS,
      v18,
      v14);
LABEL_40:
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.btnRoot;
    if ( this )
    {
      (*(void (__fastcall **)(BattleSkillSelectAddFuncBtnComponent_o *, void *))&this->klass[1]._1.byval_arg.bits)(
        this,
        this->klass[1]._1.this_arg.data);
      return;
    }
LABEL_42:
    sub_B7769C(this, *(_QWORD *)&btnNum);
  }
  btnPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.btnPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     btnPrefab,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v8, (UnityEngine_Component_o *)v4->fields.btnRoot, 0LL);
  if ( !v8 )
    goto LABEL_42;
  Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     v8,
                                                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.btnTop;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      Component_srcLineSprite,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UISprite__Add__);
    if ( !Component_srcLineSprite )
      goto LABEL_42;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    GameObjectExtensions__SetParent(v23, (UnityEngine_Component_o *)v4->fields.btnRoot, 0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)Component_srcLineSprite,
                                                       (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    if ( !this )
      goto LABEL_42;
    LODWORD(this->fields.btnTop) = 2;
    this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)Component_srcLineSprite,
                                                       (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    if ( !this )
      goto LABEL_42;
    btnTarget = (struct UISprite_o *)v4->fields.btnTarget;
    this->fields.btnCancel = btnTarget;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.btnCancel,
      (System_Int32_array **)btnTarget,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    UISprite__set_atlas((UISprite_o *)Component_srcLineSprite, v4->fields.btnAtlas, 0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.cancelBtnLabel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)v4->fields.cancelBtnSprite;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v31 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    if ( (BYTE3(BattleSkillSelectAddFuncBtnComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      v31 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    }
    static_fields = v31->static_fields;
    v18 = 1;
    v17 = v4;
    THREE_ALTERNATIVES_GRID_WIDTH = static_fields->THREE_ALTERNATIVES_GRID_WIDTH;
    THREE_ALTERNATIVES_ROOT_POS = static_fields->THREE_ALTERNATIVES_ROOT_POS;
    THREE_ALTERNATIVES_BTN_WIDTH = static_fields->THREE_ALTERNATIVES_BTN_WIDTH;
    THREE_ALTERNATIVES_CANCEL_POS = static_fields->THREE_ALTERNATIVES_CANCEL_POS;
    goto LABEL_39;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        int32_t rootPosX,
        int32_t cellWidth,
        int32_t btnWidth,
        float cancelBtnPosX,
        bool isThreeAlternatives,
        const MethodInfo *method)
{
  UnityEngine_Component_o *btnRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct System_String_o **p_addBtnSpriteName; // x8
  System_String_o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438E245 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_B775C4(&StringLiteral_17292/*"btn_bg_01"*/);
    byte_438E245 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0LL);
  v15 = this->fields.btnRoot;
  if ( !v15 )
    goto LABEL_18;
  v15->fields.cellHeight = (float)cellWidth;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot )
    goto LABEL_18;
  v16 = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(v16, cancelBtnPosX, 0LL);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  p_addBtnSpriteName = &this->fields.addBtnSpriteName;
  if ( !isThreeAlternatives )
    p_addBtnSpriteName = (struct System_String_o **)&StringLiteral_17292/*"btn_bg_01"*/;
  if ( !btnRoot )
    goto LABEL_18;
  v18 = *p_addBtnSpriteName;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)btnRoot,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v19 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B7769C(v19, v20);
    UISprite__set_spriteName((UISprite_o *)v22.fields.current, v18, 0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
      current,
      current->klass->vtable[34].methodPtr);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot
    || (UISprite__set_spriteName((UISprite_o *)btnRoot, v18, 0LL),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))btnRoot->klass[2]._1.typeMetadataHandle)(
          btnRoot,
          btnRoot->klass[2]._1.interopData),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL) )
  {
LABEL_18:
    sub_B7769C(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0LL);
}