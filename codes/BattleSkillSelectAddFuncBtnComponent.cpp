void __fastcall BattleSkillSelectAddFuncBtnComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleSkillSelectAddFuncBtnComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19339 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, v1, v2);
    byte_4B19339 = 1;
  }
  static_fields = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_GRID_WIDTH = 0x8000000100LL;
  *(_QWORD *)&static_fields->TWO_ALTERNATIVES_BTN_WIDTH = 0xC3900000000000F4LL;
  *(_OWORD *)&static_fields->THREE_ALTERNATIVES_GRID_WIDTH = xmmword_BD2240;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int *btnTop; // x0
  Il2CppObject *btnPrefab; // x21
  Il2CppObject *v33; // x21
  Il2CppObject *Component_object; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct UnityEngine_GameObject_o *btnTarget; // x1
  __int64 v53; // x1
  const MethodInfo *v54; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v55; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  CondensedScaleLabel_o *v60; // x21
  __int64 v61; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v62; // x0
  int32_t v63; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x20
  __int64 v67; // x1
  const MethodInfo *v68; // x5
  BattleSkillSelectAddFuncBtnComponent_c *v69; // x0
  __int64 v70; // x1
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x1
  CondensedScaleLabel_o *ComponentInChildren_object; // x20
  __int64 v75; // x1
  BattleSkillSelectAddFuncBtnComponent_c *v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19337 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillSelectAddFuncBtnComponent_TypeInfo, *(_QWORD *)&btnNum, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__RemoveAt__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Item__, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    byte_4B19337 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  if ( btnTop[6] >= btnNum )
  {
    v63 = btnTop[6];
    if ( v63 <= btnNum )
      goto LABEL_60;
    btnTop = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)btnTop,
                      v63 - 1,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( btnTop )
        {
          v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)btnTop, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
          UnityEngine_Object__Destroy_70154244(v66, 0LL);
          btnTop = (int *)this->fields.btnTop;
          if ( btnTop )
          {
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)btnTop,
              btnTop[6] - 1,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_UISprite__RemoveAt__);
            btnTop = (int *)this->fields.cancelBtnLabel;
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              btnTop = (int *)this->fields.cancelBtnSprite;
              if ( btnTop )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
                v69 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v67);
                  v69 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                }
                BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
                  this,
                  v69->static_fields->TWO_ALTERNATIVES_ROOT_POS,
                  v69->static_fields->TWO_ALTERNATIVES_GRID_WIDTH,
                  v69->static_fields->TWO_ALTERNATIVES_BTN_WIDTH,
                  (float)(-2 * v69->static_fields->TWO_ALTERNATIVES_ROOT_POS),
                  0,
                  v68);
                btnTop = (int *)this->fields.btnTop;
                if ( btnTop )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
                    (System_Collections_Generic_List_object__o *)btnTop,
                    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
                  v78 = v77;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v78,
                            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
                  {
                    if ( !v78.fields._current )
                      sub_1BCAA3C(0LL, v70);
                    v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v78.fields._current, 0LL);
                    if ( !v71 )
                      sub_1BCAA3C(0LL, v72);
                    ComponentInChildren_object = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                            v71,
                                                                            (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
                    {
                      v76 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
                      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v75);
                      if ( !ComponentInChildren_object )
                        sub_1BCAA3C(v76, v75);
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
    sub_1BCAA3C(btnTop, *(_QWORD *)&btnNum);
  }
  btnPrefab = (Il2CppObject *)this->fields.btnPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&btnNum);
  v33 = UnityEngine_Object__Instantiate_object_(
          btnPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(
    (UnityEngine_GameObject_o *)v33,
    (UnityEngine_Component_o *)this->fields.btnRoot,
    0LL);
  if ( !v33 )
    goto LABEL_65;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v33,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return;
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  v41 = *((_QWORD *)btnTop + 2);
  v42 = Method_System_Collections_Generic_List_UISprite__Add__;
  ++btnTop[7];
  if ( !v41 )
    goto LABEL_65;
  v43 = btnTop[6];
  if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)btnTop,
      Component_object,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = v41 + 8 * v43;
    btnTop[6] = v43 + 1;
    *(_QWORD *)(v44 + 32) = Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)Component_object, v35, v36, v37, v38, v39, v40);
  }
  if ( !Component_object )
    goto LABEL_65;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
  GameObjectExtensions__SetParent(v45, (UnityEngine_Component_o *)this->fields.btnRoot, 0LL);
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTop[12] = 2;
  btnTop = (int *)UnityEngine_Component__GetComponent_object_(
                    (UnityEngine_Component_o *)Component_object,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleValueButtonComponent___);
  if ( !btnTop )
    goto LABEL_65;
  btnTarget = this->fields.btnTarget;
  *((_QWORD *)btnTop + 4) = btnTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)(btnTop + 8), (int64_t)btnTarget, v46, v47, v48, v49, v50, v51);
  UISprite__set_atlas((UISprite_o *)Component_object, this->fields.btnAtlas, 0LL);
  btnTop = (int *)this->fields.cancelBtnLabel;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 0, 0LL);
  btnTop = (int *)this->fields.cancelBtnSprite;
  if ( !btnTop )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
  v55 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v53);
    v55 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
  }
  BattleSkillSelectAddFuncBtnComponent__SetCommonPart(
    this,
    v55->static_fields->THREE_ALTERNATIVES_ROOT_POS,
    v55->static_fields->THREE_ALTERNATIVES_GRID_WIDTH,
    v55->static_fields->THREE_ALTERNATIVES_BTN_WIDTH,
    v55->static_fields->THREE_ALTERNATIVES_CANCEL_POS,
    1,
    v54);
  btnTop = (int *)this->fields.btnTop;
  if ( !btnTop )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)btnTop,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__) )
  {
    if ( !v78.fields._current )
      sub_1BCAA3C(0LL, v56);
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v78.fields._current, 0LL);
    if ( !v57 )
      sub_1BCAA3C(0LL, v58);
    v60 = (CondensedScaleLabel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                     v57,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v60, 0LL, 0LL) )
    {
      v62 = BattleSkillSelectAddFuncBtnComponent_TypeInfo;
      if ( !BattleSkillSelectAddFuncBtnComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncBtnComponent_TypeInfo, v61);
      if ( !v60 )
        sub_1BCAA3C(v62, v61);
      v60->fields.maxWidth = BattleSkillSelectAddFuncBtnComponent_TypeInfo->static_fields->THREE_ALTERNATIVES_CONDENSED_SCALE;
      CondensedScaleLabel__SetCondensedScale(v60, 0LL);
    }
  }
LABEL_59:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Component_o *btnRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  struct System_String_o **p_addBtnSpriteName; // x8
  System_String_o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19338 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__,
      *(_QWORD *)&rootPosX,
      *(_QWORD *)&cellWidth);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UISprite__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&StringLiteral_17640/*"btn_bg_01"*/, v19, v20);
    byte_4B19338 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  btnRoot = (UnityEngine_Component_o *)this->fields.btnRoot;
  if ( !btnRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)rootPosX, 0LL);
  v23 = this->fields.btnRoot;
  if ( !v23 )
    goto LABEL_18;
  v23->fields.cellWidth = (float)cellWidth;
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot )
    goto LABEL_18;
  v24 = UnityEngine_Component__get_gameObject(btnRoot, 0LL);
  GameObjectExtensions__SetLocalPositionX(v24, cancelBtnPosX, 0LL);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnTop;
  p_addBtnSpriteName = &this->fields.addBtnSpriteName;
  if ( !isThreeAlternatives )
    p_addBtnSpriteName = (struct System_String_o **)&StringLiteral_17640/*"btn_bg_01"*/;
  if ( !btnRoot )
    goto LABEL_18;
  v26 = *p_addBtnSpriteName;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)btnRoot,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UISprite__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UISprite__MoveNext__);
    if ( !v27 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1BCAA3C(v27, v28);
    UISprite__set_spriteName((UISprite_o *)v31.fields._current, v26, 0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[33].method)(
      current,
      current->klass->vtable[34].methodPtr);
    UIWidget__set_width((UIWidget_o *)current, btnWidth, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UISprite__Dispose__);
  btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel;
  if ( !btnRoot
    || (UISprite__set_spriteName((UISprite_o *)btnRoot, v26, 0LL),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))btnRoot->klass[2]._1.typeMetadataHandle)(
          btnRoot,
          btnRoot->klass[2]._1.interopData),
        (btnRoot = (UnityEngine_Component_o *)this->fields.btnCancel) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(btnRoot, *(_QWORD *)&rootPosX);
  }
  UIWidget__set_width((UIWidget_o *)btnRoot, btnWidth, 0LL);
}