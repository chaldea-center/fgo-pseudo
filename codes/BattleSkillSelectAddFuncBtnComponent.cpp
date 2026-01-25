void BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_4CF1E54 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    byte_4CF1E54 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_CF52C0;
  static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE = 190;
}


void BattleSkillSelectAddFuncBtnComponent___ctor(
        BattleSkillSelectAddFuncBtnComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CF1E53 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17523/*"btn_bg_01"*/);
    byte_4CF1E53 = 1;
  }
  v9 = StringLiteral_17523/*"btn_bg_01"*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_17523/*"btn_bg_01"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.spriteName, v9, v2, v3, v4, v5, v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UnityEngine_GameObject_o *btnTarget; // x1
  const MethodInfo *v27; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x1
  CondensedScaleLabel_o *v32; // x21
  __int64 v33; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v34; // x0
  int32_t v35; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v37; // x20
  const MethodInfo *v38; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  CondensedScaleLabel_o *ComponentInChildren_object; // x20
  __int64 v44; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF1E50 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1E50 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  if ( btnTop[6] >= btnNum )
  {
    v35 = btnTop[6];
    if ( v35 <= btnNum )
      goto LABEL_60;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v35 - 1,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71870148(v37, 0);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
                v39 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                  v39 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                }
                BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
                  this,
                  v39->static_fields->TWO_ALTERNATIVES_ROOT_POS,
                  v39->static_fields->TWO_ALTERNATIVES_GRID_WIDTH,
                  v39->static_fields->TWO_ALTERNATIVES_BTN_WIDTH,
                  (float)(-2 * v39->static_fields->TWO_ALTERNATIVES_ROOT_POS),
                  0,
                  v38);
                btnTop = (int *)this->fields.btnTop;
                if ( btnTop )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
                    (System_Collections_Generic_List_object__o *)btnTop,
                    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v47 = v46;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v47,
                            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v47.fields._current )
                      sub_1C7BD40(0, v40);
                    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47.fields._current, 0);
                    if ( !v41 )
                      sub_1C7BD40(0, v42);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v41,
                                                                            (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
                    {
                      v45 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                      if ( !ComponentInChildren_object )
                        sub_1C7BD40(v45, v44);
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
    sub_1C7BD40(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         btnPrefab,
         (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v7,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0);
  if ( !v7 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * v17;
    btnTop[6] = v17 + 1;
    *(_QWORD *)(v18 + 32) = Component_object;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)Component_object, v9, v10, v11, v12, v13, v14);
  }
  if ( !Component_object )
    goto LABEL_65;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  GameObjectExtensions__SetParent(v19, (UnityEngine_Component_o *)this->fields.btnRoot, 0);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(btnTop + 8), (int32_t)btnTarget, v20, v21, v22, v23, v24, v25);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
  v28 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    v28 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  }
  BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
    this,
    v28->static_fields->THREE_ALTERNATIVES_ROOT_POS,
    v28->static_fields->THREE_ALTERNATIVES_GRID_WIDTH,
    v28->static_fields->THREE_ALTERNATIVES_BTN_WIDTH,
    v28->static_fields->THREE_ALTERNATIVES_CANCEL_POS,
    1,
    v27);
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)btnTop,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v47.fields._current )
      sub_1C7BD40(0, v29);
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47.fields._current, 0);
    if ( !v30 )
      sub_1C7BD40(0, v31);
    v32 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v30,
                                     (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0) )
    {
      v34 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      if ( !v32 )
        sub_1C7BD40(v34, v33);
      v32->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v32, 0);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
  if ( (byte_4CF1E52 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIButton___);
    this = (BattleSkillSelectAddFuncBtnComponent_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1E52 = 1;
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
                                                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( this )
      {
        p_ImageName_k__BackingField = &v6->fields.spriteName;
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_1C7BD40(this, selBtnInfo);
  }
  if ( !btn )
    goto LABEL_14;
  UISprite__set_atlas(btn, v6->fields.battleUIAtlas, 0);
  this = (BattleSkillSelectAddFuncBtnComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)btn,
                                                     (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIButton___);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_String_o *addBtnSpriteName; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF1E51 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    byte_4CF1E51 = 1;
  }
  memset(&v28, 0, sizeof(v28));
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
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.spriteName,
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
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v24 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1C7BD40(v24, v25);
    UISprite__set_spriteName((UISprite_o *)v28.fields._current, this->fields.spriteName, 0);
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[33].methodPtr)(
      current,
      current->klass->vtable[33].method);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
    sub_1C7BD40(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0);
}