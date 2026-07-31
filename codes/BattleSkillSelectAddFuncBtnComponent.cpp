void BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_593C138 & 1) == 0 )
  {
    sub_21FFC50(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    byte_593C138 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_E92E40;
  static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE = 190;
}


void BattleSkillSelectAddFuncBtnComponent___ctor(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593C137 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18159/*"btn_bg_01"*/);
    byte_593C137 = 1;
  }
  v9 = StringLiteral_18159/*"btn_bg_01"*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_18159/*"btn_bg_01"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spriteName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void BattleSkillSelectAddFuncBtnComponent__Awake(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent__Awake((BattleSkillSelectBtnBaseComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void BattleSkillSelectAddFuncBtnComponent__SetBtnLayout(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        int32_t btnNum,
        const MethodInfo *method)
{
  int *btnTop; // x0
  Il2CppObject *btnPrefab; // x21
  Il2CppObject *v7; // x21
  Il2CppObject *Component_object; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo_37ED7E0 *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UnityEngine_GameObject_o *btnTarget; // x1
  __int64 v28; // x1
  const MethodInfo *v29; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  CondensedScaleLabel_o *v35; // x21
  __int64 v36; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v37; // x0
  int32_t v38; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x1
  const MethodInfo *v43; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v44; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  CondensedScaleLabel_o *ComponentInChildren_object; // x20
  __int64 v50; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593C134 & 1) == 0 )
  {
    sub_21FFC50(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C134 = 1;
  }
  btnTop = (int *)this->fields.btnTop;
  memset(&v53, 0, sizeof(v53));
  if ( !btnTop )
    goto LABEL_65;
  if ( btnTop[6] >= btnNum )
  {
    v38 = btnTop[6];
    if ( v38 <= btnNum )
      goto LABEL_60;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v38 - 1,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( btnTop )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0);
      GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)this, 0);
      btnTop = (int *)this->fields.btnTop;
      if ( btnTop )
      {
        btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)btnTop,
                          btnTop[6] - 1,
                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
          UnityEngine_Object__Destroy_83246496(v41, 0);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
                v44 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                if ( !*(&BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v42);
                  v44 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                }
                BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
                  this,
                  v44->static_fields->TWO_ALTERNATIVES_ROOT_POS,
                  v44->static_fields->TWO_ALTERNATIVES_GRID_WIDTH,
                  v44->static_fields->TWO_ALTERNATIVES_BTN_WIDTH,
                  (float)(-2 * v44->static_fields->TWO_ALTERNATIVES_ROOT_POS),
                  0,
                  v43);
                btnTop = (int *)this->fields.btnTop;
                if ( btnTop )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
                    (System_Collections_Generic_List_object__o *)btnTop,
                    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v53 = v52;
                  v52.fields._list = 0;
                  *(_QWORD *)&v52.fields._index = &v53;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v53,
                            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v53.fields._current )
                      sub_21FFECC(0, v45);
                    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53.fields._current, 0);
                    if ( !v46 )
                      sub_21FFECC(0, v47);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v46,
                                                                            (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
                    {
                      v51 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !*(&BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v50);
                      if ( !ComponentInChildren_object )
                        sub_21FFECC(v51, v50);
                      ComponentInChildren_object->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE;
                      CondensedScaleLabel__SetCondensedScale(ComponentInChildren_object, 0);
                    }
                  }
                  goto LABEL_59;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_21FFECC(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&btnNum);
  v7 = UnityEngine_Object__Instantiate_object_(
         btnPrefab,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v7,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0);
  if ( !v7 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  v15 = *((_QWORD *)btnTop + 2);
  v16 = Method_System_Collections_Generic_List_UISprite__Add__;
  ++btnTop[7];
  if ( !v15 )
    goto LABEL_65;
  v17 = btnTop[6];
  if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)btnTop,
      Component_object,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * v17;
    btnTop[6] = v17 + 1;
    *(_QWORD *)(v18 + 32) = Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)Component_object, v9, v10, v11, v12, v13, v14);
  }
  if ( !Component_object )
    goto LABEL_65;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  GameObjectExtensions__SetParent(v19, (UnityEngine_Component_o *)this->fields.btnRoot, 0);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  v20 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)Component_object, v20);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(btnTop + 8), (int32_t)btnTarget, v21, v22, v23, v24, v25, v26);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
  v30 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  if ( !*(&BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v28);
    v30 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  }
  BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
    this,
    v30->static_fields->THREE_ALTERNATIVES_ROOT_POS,
    v30->static_fields->THREE_ALTERNATIVES_GRID_WIDTH,
    v30->static_fields->THREE_ALTERNATIVES_BTN_WIDTH,
    v30->static_fields->THREE_ALTERNATIVES_CANCEL_POS,
    1,
    v29);
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)btnTop,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v53 = v52;
  v52.fields._list = 0;
  *(_QWORD *)&v52.fields._index = &v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v53.fields._current )
      sub_21FFECC(0, v31);
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53.fields._current, 0);
    if ( !v32 )
      sub_21FFECC(0, v33);
    v35 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v32,
                                     (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0) )
    {
      v37 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !*(&BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v36);
      if ( !v35 )
        sub_21FFECC(v37, v36);
      v35->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v35, 0);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
LABEL_60:
  btnTop = (int *)this->fields.btnRoot;
  if ( !btnTop )
    goto LABEL_65;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)btnTop + 440LL))(btnTop, *(_QWORD *)(*(_QWORD *)btnTop + 448LL));
}


void BattleSkillSelectAddFuncBtnComponent__SetBtnSprite(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *selBtnInfo,
        UISprite_o *btn,
        const MethodInfo *method)
{
  BattleSkillSelectAddFuncBtnComponent_o *v6; // x21
  System_String_o **p_ImageName_k__BackingField; // x19
  System_String_o *ImageName_k__BackingField; // t1

  v6 = this;
  if ( (byte_593C136 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C136 = 1;
  }
  if ( !selBtnInfo )
    goto LABEL_14;
  ImageName_k__BackingField = selBtnInfo->fields._ImageName_k__BackingField;
  p_ImageName_k__BackingField = &selBtnInfo->fields._ImageName_k__BackingField;
  this = (BattleSkillSelectAddFuncBtnComponent_o *)System_String__op_Inequality(
                                                     ImageName_k__BackingField,
                                                     (System_String_o *)StringLiteral_1/*""*/,
                                                     0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  this = (BattleSkillSelectAddFuncBtnComponent_o *)v6->fields.battleUIAtlas;
  if ( !this )
    goto LABEL_14;
  this = (BattleSkillSelectAddFuncBtnComponent_o *)UIAtlas__GetSprite(
                                                     (UIAtlas_o *)this,
                                                     *p_ImageName_k__BackingField,
                                                     0);
  if ( !this )
  {
LABEL_17:
    if ( btn )
    {
      UISprite__set_atlas(btn, v6->fields.btnAtlas, 0);
      this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)btn,
                                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( this )
      {
        p_ImageName_k__BackingField = &v6->fields.spriteName;
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_21FFECC(this, selBtnInfo);
  }
  if ( !btn )
    goto LABEL_14;
  UISprite__set_atlas(btn, v6->fields.battleUIAtlas, 0);
  this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)btn,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !this )
    goto LABEL_14;
LABEL_13:
  UIButton__set_normalSprite((UIButton_o *)this, *p_ImageName_k__BackingField, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_String_o *addBtnSpriteName; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593C135 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    byte_593C135 = 1;
  }
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  memset(&v27, 0, sizeof(v27));
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0);
  v15 = this->fields.btnRoot;
  if ( !v15 )
    goto LABEL_18;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  v15->fields.cellWidth = (float)cellWidth;
  if ( !btnRoot )
    goto LABEL_18;
  v16 = UnityEngine_Component__get_gameObject(btnRoot, 0);
  GameObjectExtensions__SetLocalPositionX(v16, cancelBtnPosX, 0);
  if ( isThreeAlternatives )
  {
    addBtnSpriteName = this->fields.addBtnSpriteName;
    this->fields.spriteName = addBtnSpriteName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.spriteName,
      (int32_t)addBtnSpriteName,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  if ( !btnRoot )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v24 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_21FFECC(v24, v25);
    UISprite__set_spriteName((UISprite_o *)v27.fields._current, this->fields.spriteName, 0);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
      current,
      current->klass->vtable[33].method);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot
    || (UISprite__set_spriteName((UISprite_o *)btnRoot, this->fields.spriteName, 0),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))btnRoot->klass[2]._1.parent)(
          btnRoot,
          btnRoot->klass[2]._1.generic_class),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0) )
  {
LABEL_18:
    sub_21FFECC(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0);
}