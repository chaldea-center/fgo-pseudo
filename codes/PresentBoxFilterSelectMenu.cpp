void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  ListViewSort_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_T__o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  _QWORD *v30; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_T__o *v52; // x20
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x10
  __int64 v58; // x10
  __int64 v59; // x10
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  __int64 v64; // x1

  if ( (byte_4B11039 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UISprite__TypeInfo, v21, v22);
    byte_4B11039 = 1;
  }
  v23 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor(v23, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v23;
  sub_1BCA784(&this->fields.presentBoxSortInfo, v23);
  v27 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo,
                                                  v24,
                                                  v25,
                                                  v26);
  System_Collections_Generic_List_Int32Enum____ctor(
    v27,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v27 )
    goto LABEL_70;
  v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v27->fields._version;
  ++v27->fields._version;
  items = v27->fields._items;
  p_size = &v27->fields._size;
  size = v27->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      0,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 1;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 2;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 3;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)items->m_Items + v38) = 4;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)items->m_Items + v39) = 5;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)items->m_Items + v40) = 6;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      7,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)items->m_Items + v41) = 7;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)items->m_Items + v42) = 8;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      9,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)items->m_Items + v43) = 9;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      10,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)items->m_Items + v44) = 10;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      11,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)items->m_Items + v45) = 11;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      12,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)items->m_Items + v46) = 12;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    items = v27->fields._items;
    v30 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)items->m_Items + v47) = 14;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v27,
      13,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)items->m_Items + v48) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v27;
  sub_1BCA784(&this->fields.categoryFilterKindList, v27);
  v52 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo,
                                                  v49,
                                                  v50,
                                                  v51);
  System_Collections_Generic_List_Int32Enum____ctor(
    v52,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v52 )
    goto LABEL_70;
  v53 = v52->fields._items;
  v54 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v52->fields._version;
  if ( !v53 )
    goto LABEL_70;
  v55 = v52->fields._size;
  if ( (unsigned int)v55 >= v53->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    v53 = v52->fields._items;
    v54 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v52->fields._version;
    if ( !v53 )
      goto LABEL_70;
  }
  else
  {
    v52->fields._size = v55 + 1;
    *((_DWORD *)v53->m_Items + v55) = 4;
    ++v52->fields._version;
  }
  v56 = v52->fields._size;
  if ( (unsigned int)v56 >= v53->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    v53 = v52->fields._items;
    v54 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v52->fields._version;
    if ( !v53 )
      goto LABEL_70;
  }
  else
  {
    v52->fields._size = v56 + 1;
    *((_DWORD *)v53->m_Items + v56) = 3;
    ++v52->fields._version;
  }
  v57 = v52->fields._size;
  if ( (unsigned int)v57 >= v53->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    v53 = v52->fields._items;
    v54 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v52->fields._version;
    if ( !v53 )
      goto LABEL_70;
  }
  else
  {
    v52->fields._size = v57 + 1;
    *((_DWORD *)v53->m_Items + v57) = 2;
    ++v52->fields._version;
  }
  v58 = v52->fields._size;
  if ( (unsigned int)v58 < v53->max_length )
  {
    v52->fields._size = v58 + 1;
    *((_DWORD *)v53->m_Items + v58) = 1;
    ++v52->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v52,
    1,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  v53 = v52->fields._items;
  v54 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v52->fields._version;
  if ( !v53 )
LABEL_70:
    sub_1BCAA3C(v28, v29);
LABEL_64:
  v59 = v52->fields._size;
  if ( (unsigned int)v59 >= v53->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v52,
      0,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v52->fields._size = v59 + 1;
    *((_DWORD *)v53->m_Items + v59) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v52;
  sub_1BCA784(&this->fields.rarityFilterKindList, v52);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UISprite__TypeInfo,
                                                       v60,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v63;
  sub_1BCA784(&this->fields.filterBtnSpriteList, v63);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v64);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__Callback(
        PresentBoxFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_30974744(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_30974744(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B1102F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_EndClose__, v5, v6);
    byte_4B1102F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxFilterSelectMenu__EndOpen(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentBoxFilterSelectMenu__Init(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__InitDisp(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_GameObject_o *categoryGrid; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w25
  int32_t v43; // w20
  PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *v44; // x22
  __int64 v45; // x1
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v47; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  UnityEngine_GameObject_o *v53; // x1
  Il2CppClass **v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  EventDelegate_o *v62; // x22
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v68; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v72; // w25
  int32_t v73; // w20
  PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *v74; // x22
  __int64 v75; // x1
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v77; // x21
  UnityEngine_GameObject_o *v78; // x0
  System_Collections_Generic_List_object__o *v79; // x23
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  UnityEngine_GameObject_o *v83; // x1
  Il2CppClass **v84; // x0
  __int64 v85; // x2
  __int64 v86; // x3
  System_Collections_Generic_List_object__o *v87; // x23
  EventDelegate_Callback_o *v88; // x24
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  EventDelegate_o *v92; // x22
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  ListViewSort_o *v97; // x22
  UILabel_o *v98; // x21

  if ( (byte_4B11030 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      v18,
      v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v30, v31);
    sub_1BCA7E0(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v34, v35);
    sub_1BCA7E0(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v36, v37);
    byte_4B11030 = 1;
  }
  categoryGrid = this->fields.categoryGrid;
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0LL);
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0LL);
  if ( !(_DWORD)categoryGrid )
  {
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_63;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        v44 = (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)sub_1BCAA2C(
                                                                      PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo,
                                                                      method,
                                                                      v39,
                                                                      v40);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(v44, 0LL);
        if ( !v44 )
          break;
        v44->fields.__4__this = this;
        sub_1BCA784(&v44->fields.__4__this, this);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v47 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_34336992(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v47, 1, 0LL);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v47,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v51 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v52 = filterBtnSpriteList->fields._size;
        v53 = categoryGrid;
        if ( (unsigned int)v52 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + v52;
          filterBtnSpriteList->fields._size = v52 + 1;
          v54[4] = (Il2CppClass *)v53;
          sub_1BCA784(v54 + 4, v53);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        v44->fields.kind = System_Collections_Generic_List_Int32Enum___get_Item(
                             (System_Collections_Generic_List_T__o *)categoryGrid,
                             v43,
                             (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v47,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v58 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v55, v56);
        EventDelegate_Callback___ctor(
          v58,
          (Il2CppObject *)v44,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v62 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v59, v60, v61);
        EventDelegate___ctor_47348668(v62, v58, 0LL);
        if ( !monitor )
          break;
        v63 = monitor->fields._items;
        v64 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v63 )
          break;
        v65 = monitor->fields._size;
        if ( (unsigned int)v65 >= v63->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v62,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &v63->obj.klass + v65;
          monitor->fields._size = v65 + 1;
          v66[4] = (Il2CppClass *)v62;
          sub_1BCA784(v66 + 4, v62);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v47, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v68 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v43,
                                                     (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v68 )
          break;
        UILabel__set_text(v68, (System_String_o *)categoryGrid, 0LL);
        if ( size == ++v43 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1BCAA3C(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.castClass)(
      categoryGrid,
      categoryGrid->klass[1]._1.declaringType);
  }
  categoryGrid = this->fields.rarityGrid;
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0LL);
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0LL);
  if ( !(_DWORD)categoryGrid )
  {
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_63;
    v72 = rarityFilterKindList->fields._size;
    if ( v72 >= 1 )
    {
      v73 = 0;
      do
      {
        v74 = (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)sub_1BCAA2C(
                                                                      PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo,
                                                                      method,
                                                                      v69,
                                                                      v70);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(v74, 0LL);
        if ( !v74 )
          goto LABEL_63;
        v74->fields.__4__this = this;
        sub_1BCA784(&v74->fields.__4__this, this);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v77 = categoryGrid;
        v78 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_34336992(v78, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v77, 1, 0LL);
        v79 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v77,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v79 )
          goto LABEL_63;
        v80 = v79->fields._items;
        v81 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v79->fields._version;
        if ( !v80 )
          goto LABEL_63;
        v82 = v79->fields._size;
        v83 = categoryGrid;
        if ( (unsigned int)v82 >= v80->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v79,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &v80->obj.klass + v82;
          v79->fields._size = v82 + 1;
          v84[4] = (Il2CppClass *)v83;
          sub_1BCA784(v84 + 4, v83);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        v74->fields.kind = System_Collections_Generic_List_Int32Enum___get_Item(
                             (System_Collections_Generic_List_T__o *)categoryGrid,
                             v73,
                             (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v77,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v87 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v88 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v85, v86);
        EventDelegate_Callback___ctor(
          v88,
          (Il2CppObject *)v74,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v92 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v89, v90, v91);
        EventDelegate___ctor_47348668(v92, v88, 0LL);
        if ( !v87 )
          goto LABEL_63;
        v93 = v87->fields._items;
        v94 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v87->fields._version;
        if ( !v93 )
          goto LABEL_63;
        v95 = v87->fields._size;
        if ( (unsigned int)v95 >= v93->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v87,
            (Il2CppObject *)v92,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = &v93->obj.klass + v95;
          v87->fields._size = v95 + 1;
          v96[4] = (Il2CppClass *)v92;
          sub_1BCA784(v96 + 4, v92);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v77, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v97 = this->fields.operationSortInfo;
        v98 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v73,
                                                     (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v97 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v97,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v98 )
          goto LABEL_63;
        UILabel__set_text(v98, (System_String_o *)categoryGrid, 0LL);
      }
      while ( v72 != ++v73 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.castClass)(
      categoryGrid,
      categoryGrid->klass[1]._1.declaringType);
  }
}


bool __fastcall PresentBoxFilterSelectMenu__IsChangedStatus(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Boolean_array *v4; // x0
  __int64 v5; // x1
  struct System_Boolean_array *kindStatus; // x10
  __int64 v7; // x9
  unsigned __int64 v8; // x8
  bool *v9; // x10
  bool v10; // w13

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_11;
  if ( (int)*(_QWORD *)&kindStatus->max_length >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)&kindStatus->max_length;
    v8 = 0LL;
    v9 = &kindStatus->m_Items[4];
    v10 = 1;
    while ( v4 )
    {
      if ( v8 >= v4->max_length )
        sub_1BCAA44(v4, v5);
      if ( !v9[v8] != v4->m_Items[v8 + 4] )
      {
        v10 = (__int64)++v8 < (int)v7;
        if ( v7 != v8 )
          continue;
      }
      return v10;
    }
LABEL_11:
    sub_1BCAA3C(v4, v5);
  }
  return 0;
}


void __fastcall PresentBoxFilterSelectMenu__OnClickAllSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v17; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v19; // w22
  int32_t v20; // w20
  ListViewSort_o *v21; // x21

  if ( (byte_4B11034 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__, v10, v11);
    byte_4B11034 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v17 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v17,
                                                                           (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_41508056(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( size == ++v17 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1BCAA3C(categoryFilterKindList, v14);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v19 = categoryFilterKindList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0;
      do
      {
        v21 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v20,
                                                                           (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v21 )
          break;
        ListViewSort__SetFilter_41508108(v21, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( v19 == ++v20 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v14);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11033 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickCancel__, method, v2);
    byte_4B11033 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PresentBoxFilterSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickDecide(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PresentBoxFilterSelectMenu_o *v3; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_4B11032 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickDecide__, method, v2);
    byte_4B11032 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    filterScrollView = v3->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_12;
    this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(v3, 0, v6);
    v3->fields.state = 3;
    v8 = Method_PresentBoxFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v3->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BCAA3C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v3, v10);
    PresentBoxFilterSelectMenu__Callback(v3, IsChangedStatus, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B11036 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickFilter__, *(_QWORD *)&kind, method);
    byte_4B11036 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter_41509088(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickInitialize(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v17; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v19; // w22
  int32_t v20; // w20
  ListViewSort_o *v21; // x21

  if ( (byte_4B11035 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__, v10, v11);
    byte_4B11035 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v17 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v17,
                                                                           (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_41508056(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( size == ++v17 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1BCAA3C(categoryFilterKindList, v14);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v19 = categoryFilterKindList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0;
      do
      {
        v21 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v20,
                                                                           (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v21 )
          break;
        ListViewSort__SetFilter_41508108(v21, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( v19 == ++v20 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B11037 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__, *(_QWORD *)&kind, method);
    byte_4B11037 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter_41509144(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1BCAA3C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__Open(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        PresentBoxFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v6; // x19
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
  struct ListViewSort_o *presentBoxSortInfo; // x8
  const MethodInfo *v30; // x2
  struct ListViewSort_o *v31; // x1
  System_Boolean_array *v32; // x0
  ListViewSort_o *baseSortInfo; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  ListViewSort_o *v37; // x21
  __int64 v38; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v51; // x8
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x20

  v6 = this;
  if ( (byte_4B1102E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, sort, callback);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_PresentBoxFilterSelectMenu_EndOpen__, v11, v12);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10566/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10544/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v25, v26);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BCA7E0(&StringLiteral_10565/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v27, v28);
    byte_4B1102E = 1;
  }
  if ( !v6->fields.state )
  {
    presentBoxSortInfo = v6->fields.presentBoxSortInfo;
    if ( presentBoxSortInfo )
    {
      presentBoxSortInfo->fields.listViewKind = 4;
      this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v6->fields.callbackFunc = callback;
        sub_1BCA784(&v6->fields.callbackFunc, callback);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1BCA784(&v6->fields.baseSortInfo, sort);
        }
        else
        {
          v31 = v6->fields.presentBoxSortInfo;
          v6->fields.baseSortInfo = v31;
          sub_1BCA784(&v6->fields.baseSortInfo, v31);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v32 = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v30);
        v6->fields.kindStatus = v32;
        sub_1BCA784(&v6->fields.kindStatus, v32);
        baseSortInfo = v6->fields.baseSortInfo;
        v37 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v34, v35, v36);
        ListViewSort___ctor_41481440(v37, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v37;
        sub_1BCA784(&v6->fields.operationSortInfo, v37);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10544/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10565/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10566/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11975/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v47);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v48);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v49);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v51 = v6->fields.baseSortInfo;
                            if ( v51 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v51->fields.scrollBarValue, 0LL);
                                v6->fields.state = 1;
                                v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
                                System_Action___ctor(
                                  v55,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v55, 0, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(this, sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__SetButtonEnable(
        PresentBoxFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_7;
  v5 = isEnable;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.categoryGrid) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PresentBoxFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int m_CancellationTokenSource; // w9
  int v18; // w23
  int32_t size; // w26
  int32_t v20; // w20
  Il2CppObject *Item; // x0
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v23; // x21
  System_String_o **v24; // x8

  v3 = this;
  if ( (byte_4B11031 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v10, v11);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v12, v13);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v14, v15);
    byte_4B11031 = 1;
  }
  categoryFilterKindList = v3->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v3->fields.filterBtnSpriteList) == 0LL )
LABEL_20:
    sub_1BCAA3C(this, method);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v18 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    size = categoryFilterKindList->fields._size;
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v20,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      operationSortInfo = v3->fields.operationSortInfo;
      v23 = (UISprite_o *)Item;
      if ( v20 >= size )
      {
        this = (PresentBoxFilterSelectMenu_o *)v3->fields.rarityFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v20 - size,
                                                 (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41507276(operationSortInfo, (int32_t)this, 0LL);
        if ( !v23 )
          goto LABEL_20;
      }
      else
      {
        this = (PresentBoxFilterSelectMenu_o *)v3->fields.categoryFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v20,
                                                 (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41507228(operationSortInfo, (int32_t)this, 0LL);
        if ( !v23 )
          goto LABEL_20;
      }
      v24 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
      UISprite__set_spriteName(v23, *v24, 0LL);
      if ( v18 == v20 )
        break;
      this = (PresentBoxFilterSelectMenu_o *)v3->fields.filterBtnSpriteList;
      ++v20;
      if ( !this )
        goto LABEL_20;
    }
  }
}


System_Boolean_array *__fastcall PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  __int64 size; // x23
  __int64 v16; // x24
  System_Boolean_array *v17; // x21
  unsigned __int64 v18; // x22
  __int64 v19; // x22
  __int64 i; // x26
  char *v21; // x9

  v4 = this;
  if ( (byte_4B11038 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v9, v10);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BCA7E0(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v11,
                                             v12);
    byte_4B11038 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v16 = (unsigned int)rarityFilterKindList->fields._size;
  v17 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)(v16 + size));
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.categoryFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v18,
                                               (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41507228(sort, (int32_t)this, 0LL);
      if ( !v17 )
        break;
      if ( v18 >= v17->max_length )
LABEL_21:
        sub_1BCAA44(this, sort);
      v17->m_Items[v18++ + 4] = (unsigned __int8)this & 1;
      if ( size == v18 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1BCAA3C(this, sort);
  }
LABEL_12:
  if ( (int)v16 >= 1 )
  {
    v19 = 0LL;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v19,
                                               (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41507276(sort, (int32_t)this, 0LL);
      if ( !v17 )
        break;
      if ( size + v19 >= (unsigned __int64)v17->max_length )
        goto LABEL_21;
      ++v19;
      v21 = (char *)v17 + (i >> 32);
      v21[32] = (unsigned __int8)this & 1;
      if ( v16 == v19 )
        return v17;
    }
    goto LABEL_20;
  }
  return v17;
}


void __fastcall PresentBoxFilterSelectMenu__add_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxFilterSelectMenu_o *v10; // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1102C & 1) == 0 )
  {
    sub_1BCA7E0(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1102C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1BCACFC(v7);
  PresentBoxFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PresentBoxFilterSelectMenu__remove_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxFilterSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1102D & 1) == 0 )
  {
    sub_1BCA7E0(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1102D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1BCACFC(v7);
  PresentBoxFilterSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A063C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06380;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentBoxFilterSelectMenu_CallbackFunc__BeginInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B11951 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11951 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__Invoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_0___InitDisp_b__0(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  PresentBoxFilterSelectMenu__OnClickFilter(_4__this, this->fields.kind, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_1___InitDisp_b__1(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}