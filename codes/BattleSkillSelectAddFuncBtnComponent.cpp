void __fastcall BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_49FF440 & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, v1);
    byte_49FF440 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_QWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = 0x67000000B9LL;
  static_fields->THREE_ALTERNATIVES_BTN_WIDTH = 188;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int *btnTop; // x0
  int32_t v14; // w8
  Il2CppObject *btnPrefab; // x20
  Il2CppObject *v16; // x20
  Il2CppObject *Component_object; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v21; // x20
  const MethodInfo *v22; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v23; // x0
  int32_t *p_TWO_ALTERNATIVES_GRID_WIDTH; // x8
  BattleSkillSelectAddFuncBtnComponent_o *v25; // x0
  bool v26; // w4
  int32_t THREE_ALTERNATIVES_ROOT_POS; // w1
  int32_t THREE_ALTERNATIVES_GRID_WIDTH; // w2
  int32_t THREE_ALTERNATIVES_BTN_WIDTH; // w3
  float THREE_ALTERNATIVES_CANCEL_POS; // s0
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct UnityEngine_GameObject_o *btnTarget; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v39; // x0
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_49FF43E & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, *(_QWORD *)&btnNum);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__RemoveAt__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__get_Item__, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FF43E = 1;
  }
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_38;
  v14 = btnTop[6];
  if ( v14 >= btnNum )
  {
    if ( v14 <= btnNum )
      goto LABEL_36;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v14 - 1,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( !btnTop )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
    GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)this, 0LL);
    btnTop = (int *)this->fields.btnTop;
    if ( !btnTop )
      goto LABEL_38;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      btnTop[6] - 1,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( !btnTop )
      goto LABEL_38;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v21, 0LL);
    btnTop = (int *)this->fields.btnTop;
    if ( !btnTop )
      goto LABEL_38;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)btnTop,
      btnTop[6] - 1,
      (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    btnTop = (int *)this->fields.cancelBtnLabel;
    if ( !btnTop )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
    btnTop = (int *)this->fields.cancelBtnSprite;
    if ( !btnTop )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
    v23 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      v23 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    }
    p_TWO_ALTERNATIVES_GRID_WIDTH = &v23->static_fields->TWO_ALTERNATIVES_GRID_WIDTH;
    v25 = this;
    v26 = 0;
    THREE_ALTERNATIVES_GRID_WIDTH = *p_TWO_ALTERNATIVES_GRID_WIDTH;
    THREE_ALTERNATIVES_ROOT_POS = p_TWO_ALTERNATIVES_GRID_WIDTH[1];
    THREE_ALTERNATIVES_BTN_WIDTH = p_TWO_ALTERNATIVES_GRID_WIDTH[2];
    THREE_ALTERNATIVES_CANCEL_POS = (float)(-2 * THREE_ALTERNATIVES_ROOT_POS);
LABEL_35:
    BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
      v25,
      THREE_ALTERNATIVES_ROOT_POS,
      THREE_ALTERNATIVES_GRID_WIDTH,
      THREE_ALTERNATIVES_BTN_WIDTH,
      THREE_ALTERNATIVES_CANCEL_POS,
      v26,
      v22);
LABEL_36:
    btnTop = (int *)this->fields.btnRoot;
    if ( btnTop )
    {
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)btnTop + 440LL))(
        btnTop,
        *(_QWORD *)(*(_QWORD *)btnTop + 448LL));
      return;
    }
LABEL_38:
    sub_1B64324(btnTop);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          btnPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v16,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0LL);
  if ( !v16 )
    goto LABEL_38;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v16,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    btnTop = (int *)this->fields.btnTop;
    if ( !btnTop )
      goto LABEL_38;
    v31 = *((_QWORD *)btnTop + 2);
    v32 = Method_System_Collections_Generic_List_UISprite__Add__;
    ++btnTop[7];
    if ( !v31 )
      goto LABEL_38;
    v33 = btnTop[6];
    if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)btnTop,
        Component_object,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v31 + 8 * v33;
      btnTop[6] = v33 + 1;
      *(_QWORD *)(v34 + 32) = Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)Component_object, v18, v19);
    }
    if ( !Component_object )
      goto LABEL_38;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    GameObjectExtensions__SetParent(v35, (UnityEngine_Component_o *)this->fields.btnRoot, 0LL);
    btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Component_object,
                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    if ( !btnTop )
      goto LABEL_38;
    btnTop[12] = 2;
    btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                      (UnityEngine_Component_o *)Component_object,
                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    if ( !btnTop )
      goto LABEL_38;
    btnTarget = this->fields.btnTarget;
    *((_QWORD *)btnTop + 4) = btnTarget;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(btnTop + 8), (int32_t)btnTarget, v36, v37);
    UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0LL);
    btnTop = (int *)this->fields.cancelBtnLabel;
    if ( !btnTop )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
    btnTop = (int *)this->fields.cancelBtnSprite;
    if ( !btnTop )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
    v39 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      v39 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
    }
    static_fields = v39->static_fields;
    v26 = 1;
    v25 = this;
    THREE_ALTERNATIVES_GRID_WIDTH = static_fields->THREE_ALTERNATIVES_GRID_WIDTH;
    THREE_ALTERNATIVES_ROOT_POS = static_fields->THREE_ALTERNATIVES_ROOT_POS;
    THREE_ALTERNATIVES_BTN_WIDTH = static_fields->THREE_ALTERNATIVES_BTN_WIDTH;
    THREE_ALTERNATIVES_CANCEL_POS = static_fields->THREE_ALTERNATIVES_CANCEL_POS;
    goto LABEL_35;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Component_o *btnRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  struct System_String_o **p_addBtnSpriteName; // x8
  System_String_o *v22; // x21
  _BOOL8 v23; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF43F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, *(_QWORD *)&rootPosX);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v15);
    sub_1B640C8(&StringLiteral_17397/*"btn_bg_01"*/, v16);
    byte_49FF43F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0LL);
  v19 = this->fields.btnRoot;
  if ( !v19 )
    goto LABEL_18;
  v19->fields.cellWidth = (float)cellWidth;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot )
    goto LABEL_18;
  v20 = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(v20, cancelBtnPosX, 0LL);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  p_addBtnSpriteName = &this->fields.addBtnSpriteName;
  if ( !isThreeAlternatives )
    p_addBtnSpriteName = (struct System_String_o **)&StringLiteral_17397/*"btn_bg_01"*/;
  if ( !btnRoot )
    goto LABEL_18;
  v22 = *p_addBtnSpriteName;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v23 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B64324(v23);
    UISprite__set_spriteName((UISprite_o *)v26.fields._current, v22, 0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
      current,
      current->klass->vtable[34].methodPtr);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot
    || (UISprite__set_spriteName((UISprite_o *)btnRoot, v22, 0LL),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))btnRoot->klass[2]._1.typeMetadataHandle)(
          btnRoot,
          btnRoot->klass[2]._1.interopData),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL) )
  {
LABEL_18:
    sub_1B64324(btnRoot);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0LL);
}