void BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_4C5A4DF & 1) == 0 )
  {
    sub_1C3E564(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    byte_4C5A4DF = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_C119F0;
  static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE = 190;
}


void BattleSkillSelectAddFuncBtnComponent___ctor(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C5A4DE & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17452/*"btn_bg_01"*/);
    byte_4C5A4DE = 1;
  }
  v5 = StringLiteral_17452/*"btn_bg_01"*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_17452/*"btn_bg_01"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.spriteName, v5, v2, v3);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *btnTarget; // x1
  const MethodInfo *v19; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v20; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  CondensedScaleLabel_o *v24; // x21
  __int64 v25; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v26; // x0
  int32_t v27; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v29; // x20
  const MethodInfo *v30; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v31; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  CondensedScaleLabel_o *ComponentInChildren_object; // x20
  __int64 v36; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C5A4DB & 1) == 0 )
  {
    sub_1C3E564(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4DB = 1;
  }
  memset(&v39, 0, sizeof(v39));
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  if ( btnTop[6] >= btnNum )
  {
    v27 = btnTop[6];
    if ( v27 <= btnNum )
      goto LABEL_60;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v27 - 1,
                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71341564(v29, 0);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
                v31 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                  v31 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                }
                BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
                  this,
                  v31->static_fields->TWO_ALTERNATIVES_ROOT_POS,
                  v31->static_fields->TWO_ALTERNATIVES_GRID_WIDTH,
                  v31->static_fields->TWO_ALTERNATIVES_BTN_WIDTH,
                  (float)(-2 * v31->static_fields->TWO_ALTERNATIVES_ROOT_POS),
                  0,
                  v30);
                btnTop = (int *)this->fields.btnTop;
                if ( btnTop )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
                    (System_Collections_Generic_List_object__o *)btnTop,
                    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v39 = v38;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v39,
                            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v39.fields._current )
                      sub_1C3E7C0(0, v32);
                    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39.fields._current, 0);
                    if ( !v33 )
                      sub_1C3E7C0(0, v34);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v33,
                                                                            (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
                    {
                      v37 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                      if ( !ComponentInChildren_object )
                        sub_1C3E7C0(v37, v36);
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
    sub_1C3E7C0(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         btnPrefab,
         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v7,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0);
  if ( !v7 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return;
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  v11 = *((_QWORD *)btnTop + 2);
  v12 = Method_System_Collections_Generic_List_UISprite__Add__;
  ++btnTop[7];
  if ( !v11 )
    goto LABEL_65;
  v13 = btnTop[6];
  if ( (unsigned int)v13 >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)btnTop,
      Component_object,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = v11 + 8 * v13;
    btnTop[6] = v13 + 1;
    *(_QWORD *)(v14 + 32) = Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)Component_object, v9, v10);
  }
  if ( !Component_object )
    goto LABEL_65;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)this->fields.btnRoot, 0);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_1C3E508((CGThumbnailListItem_o *)(btnTop + 8), (int32_t)btnTarget, v16, v17);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
  v20 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    v20 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  }
  BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
    this,
    v20->static_fields->THREE_ALTERNATIVES_ROOT_POS,
    v20->static_fields->THREE_ALTERNATIVES_GRID_WIDTH,
    v20->static_fields->THREE_ALTERNATIVES_BTN_WIDTH,
    v20->static_fields->THREE_ALTERNATIVES_CANCEL_POS,
    1,
    v19);
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)btnTop,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v39.fields._current )
      sub_1C3E7C0(0, v21);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39.fields._current, 0);
    if ( !v22 )
      sub_1C3E7C0(0, v23);
    v24 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v22,
                                     (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0) )
    {
      v26 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      if ( !v24 )
        sub_1C3E7C0(v26, v25);
      v24->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v24, 0);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
  if ( (byte_4C5A4DD & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButton___);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A4DD = 1;
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
                                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( this )
      {
        p_ImageName_k__BackingField = &v6->fields.spriteName;
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_1C3E7C0(this, selBtnInfo);
  }
  if ( !btn )
    goto LABEL_14;
  UISprite__set_atlas(btn, v6->fields.battleUIAtlas, 0);
  this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)btn,
                                                     (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_o *addBtnSpriteName; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C5A4DC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    byte_4C5A4DC = 1;
  }
  memset(&v24, 0, sizeof(v24));
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0);
  v15 = this->fields.btnRoot;
  if ( !v15 )
    goto LABEL_18;
  v15->fields.cellWidth = (float)cellWidth;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot )
    goto LABEL_18;
  v16 = UnityEngine_Component__get_gameObject(btnRoot, 0);
  GameObjectExtensions__SetLocalPositionX(v16, cancelBtnPosX, 0);
  if ( isThreeAlternatives )
  {
    addBtnSpriteName = this->fields.addBtnSpriteName;
    this->fields.spriteName = addBtnSpriteName;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.spriteName, (int32_t)addBtnSpriteName, v17, v18);
  }
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  if ( !btnRoot )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v20 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1C3E7C0(v20, v21);
    UISprite__set_spriteName((UISprite_o *)v24.fields._current, this->fields.spriteName, 0);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
      current,
      current->klass->vtable[33].method);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
    sub_1C3E7C0(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0);
}