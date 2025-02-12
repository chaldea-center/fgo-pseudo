void __fastcall BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_4BCACC2 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, v1);
    byte_4BCACC2 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_BF9C80;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int *btnTop; // x0
  Il2CppObject *btnPrefab; // x21
  Il2CppObject *v20; // x21
  Il2CppObject *Component_object; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct UnityEngine_GameObject_o *btnTarget; // x1
  const MethodInfo *v40; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *v43; // x0
  __int64 v44; // x1
  CondensedScaleLabel_o *v45; // x21
  __int64 v46; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v47; // x0
  int32_t v48; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v50; // x20
  const MethodInfo *v51; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v52; // x0
  __int64 v53; // x1
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x1
  CondensedScaleLabel_o *ComponentInChildren_object; // x20
  __int64 v57; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCACC0 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, *(_QWORD *)&btnNum);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___, v9);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__RemoveAt__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__get_Count__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v15);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v17);
    byte_4BCACC0 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  if ( btnTop[6] >= btnNum )
  {
    v48 = btnTop[6];
    if ( v48 <= btnNum )
      goto LABEL_60;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v48 - 1,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70794412(v50, 0LL);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
                v52 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                  v52 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                }
                BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
                  this,
                  v52->static_fields->TWO_ALTERNATIVES_ROOT_POS,
                  v52->static_fields->TWO_ALTERNATIVES_GRID_WIDTH,
                  v52->static_fields->TWO_ALTERNATIVES_BTN_WIDTH,
                  (float)(-2 * v52->static_fields->TWO_ALTERNATIVES_ROOT_POS),
                  0,
                  v51);
                btnTop = (int *)this->fields.btnTop;
                if ( btnTop )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                    (System_Collections_Generic_List_object__o *)btnTop,
                    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v60 = v59;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v60,
                            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v60.fields._current )
                      sub_1C1AE30(0LL, v53);
                    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60.fields._current, 0LL);
                    if ( !v54 )
                      sub_1C1AE30(0LL, v55);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v54,
                                                                            (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
                    {
                      v58 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
                      if ( !ComponentInChildren_object )
                        sub_1C1AE30(v58, v57);
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
    sub_1C1AE30(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object_(
          btnPrefab,
          (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v20,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0LL);
  if ( !v20 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v20,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return;
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  v28 = *((_QWORD *)btnTop + 2);
  v29 = Method_System_Collections_Generic_List_UISprite__Add__;
  ++btnTop[7];
  if ( !v28 )
    goto LABEL_65;
  v30 = btnTop[6];
  if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)btnTop,
      Component_object,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * v30;
    btnTop[6] = v30 + 1;
    *(_QWORD *)(v31 + 32) = Component_object;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)Component_object, v22, v23, v24, v25, v26, v27);
  }
  if ( !Component_object )
    goto LABEL_65;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  GameObjectExtensions__SetParent(v32, (UnityEngine_Component_o *)this->fields.btnRoot, 0LL);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)(btnTop + 8), (int64_t)btnTarget, v33, v34, v35, v36, v37, v38);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0LL);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
  v41 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
    v41 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  }
  BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
    this,
    v41->static_fields->THREE_ALTERNATIVES_ROOT_POS,
    v41->static_fields->THREE_ALTERNATIVES_GRID_WIDTH,
    v41->static_fields->THREE_ALTERNATIVES_BTN_WIDTH,
    v41->static_fields->THREE_ALTERNATIVES_CANCEL_POS,
    1,
    v40);
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)btnTop,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v60 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v60.fields._current )
      sub_1C1AE30(0LL, v42);
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v60.fields._current, 0LL);
    if ( !v43 )
      sub_1C1AE30(0LL, v44);
    v45 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v43,
                                     (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
    {
      v47 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo);
      if ( !v45 )
        sub_1C1AE30(v47, v46);
      v45->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v45, 0LL);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
  __int64 v24; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCACC1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, *(_QWORD *)&rootPosX);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v15);
    sub_1C1ABD4(&StringLiteral_17743/*"btn_bg_01"*/, v16);
    byte_4BCACC1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
    p_addBtnSpriteName = (struct System_String_o **)&StringLiteral_17743/*"btn_bg_01"*/;
  if ( !btnRoot )
    goto LABEL_18;
  v22 = *p_addBtnSpriteName;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v23 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C1AE30(v23, v24);
    UISprite__set_spriteName((UISprite_o *)v27.fields._current, v22, 0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
      current,
      current->klass->vtable[34].methodPtr);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
    sub_1C1AE30(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0LL);
}