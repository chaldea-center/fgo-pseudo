void __fastcall BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_4BDF776 & 1) == 0 )
  {
    sub_1C21E38(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    byte_4BDF776 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_BFDBE0;
  static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE = 190;
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
  int *btnTop; // x0
  Il2CppObject *btnPrefab; // x21
  Il2CppObject *v7; // x21
  Il2CppObject *Component_object; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
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

  if ( (byte_4BDF774 & 1) == 0 )
  {
    sub_1C21E38(&BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF774 = 1;
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
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
    if ( btnTop )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
      GameObjectExtensions__SetParent(gameObject, (UnityEngine_Component_o *)this, 0LL);
      btnTop = (int *)this->fields.btnTop;
      if ( btnTop )
      {
        btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)btnTop,
                          btnTop[6] - 1,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(v37, 0LL);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
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
                    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v47 = v46;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v47,
                            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v47.fields._current )
                      sub_1C22094(0LL, v40);
                    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47.fields._current, 0LL);
                    if ( !v41 )
                      sub_1C22094(0LL, v42);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v41,
                                                                            (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
                    {
                      v45 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                      if ( !ComponentInChildren_object )
                        sub_1C22094(v45, v44);
                      ComponentInChildren_object->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->TWO_ALTERNATIVES_CONDENSED_SCALE;
                      CondensedScaleLabel__SetCondensedScale(ComponentInChildren_object, 0LL);
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
    sub_1C22094(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         btnPrefab,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v7,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0LL);
  if ( !v7 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
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
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * v17;
    btnTop[6] = v17 + 1;
    *(_QWORD *)(v18 + 32) = Component_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)Component_object, v9, v10, v11, v12, v13, v14);
  }
  if ( !Component_object )
    goto LABEL_65;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  GameObjectExtensions__SetParent(v19, (UnityEngine_Component_o *)this->fields.btnRoot, 0LL);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_1C21DDC((PartyOrganizationUtility_o *)(btnTop + 8), (int64_t)btnTarget, v20, v21, v22, v23, v24, v25);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0LL);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
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
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v47.fields._current )
      sub_1C22094(0LL, v29);
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47.fields._current, 0LL);
    if ( !v30 )
      sub_1C22094(0LL, v31);
    v32 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v30,
                                     (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
    {
      v34 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      if ( !v32 )
        sub_1C22094(v34, v33);
      v32->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v32, 0LL);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
LABEL_60:
  btnTop = (int *)this->fields.btnRoot;
  if ( !btnTop )
    goto LABEL_65;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)btnTop + 440LL))(btnTop, *(_QWORD *)(*(_QWORD *)btnTop + 448LL));
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
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF775 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
    sub_1C21E38(&StringLiteral_17756/*"btn_bg_01"*/);
    byte_4BDF775 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0LL);
  v15 = this->fields.btnRoot;
  if ( !v15 )
    goto LABEL_18;
  v15->fields.cellWidth = (float)cellWidth;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot )
    goto LABEL_18;
  v16 = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(v16, cancelBtnPosX, 0LL);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  p_addBtnSpriteName = &this->fields.addBtnSpriteName;
  if ( !isThreeAlternatives )
    p_addBtnSpriteName = (struct System_String_o **)&StringLiteral_17756/*"btn_bg_01"*/;
  if ( !btnRoot )
    goto LABEL_18;
  v18 = *p_addBtnSpriteName;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v19 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C22094(v19, v20);
    UISprite__set_spriteName((UISprite_o *)v23.fields._current, v18, 0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
      current,
      current->klass->vtable[34].methodPtr);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
    sub_1C22094(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0LL);
}