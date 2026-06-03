void PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_T__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  _QWORD *v19; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  System_Collections_Generic_List_T__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  System_Collections_Generic_List_object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4E723D9 & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    sub_1D0F0B4(&ListViewSort_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UISprite__TypeInfo);
    byte_4E723D9 = 1;
  }
  v3 = (ListViewSort_o *)sub_1D0F300(ListViewSort_TypeInfo);
  ListViewSort___ctor(v3, 3, 0, 0);
  this->fields.presentBoxSortInfo = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.presentBoxSortInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1D0F300(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_39413C4 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v10 )
    goto LABEL_70;
  v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v10->fields._version;
  ++v10->fields._version;
  items = v10->fields._items;
  p_size = &v10->fields._size;
  size = v10->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      1,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 1;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      2,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 2;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      3,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 3;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      4,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 4;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      5,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 5;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      6,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 6;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      7,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 7;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      8,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 8;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      9,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 9;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      10,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 10;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      11,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 11;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      12,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 12;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      14,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 14;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      13,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.categoryFilterKindList,
    (int32_t)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v38 = (System_Collections_Generic_List_T__o *)sub_1D0F300(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v38,
    (const MethodInfo_39413C4 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v38 )
    goto LABEL_70;
  v45 = v38->fields._items;
  v46 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v38->fields._version;
  if ( !v45 )
    goto LABEL_70;
  v47 = v38->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v38,
      4,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v45 = v38->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v38->fields._version;
    if ( !v45 )
      goto LABEL_70;
  }
  else
  {
    v38->fields._size = v47 + 1;
    *((_DWORD *)v45->m_Items + v47) = 4;
    ++v38->fields._version;
  }
  v48 = v38->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v38,
      3,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v45 = v38->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v38->fields._version;
    if ( !v45 )
      goto LABEL_70;
  }
  else
  {
    v38->fields._size = v48 + 1;
    *((_DWORD *)v45->m_Items + v48) = 3;
    ++v38->fields._version;
  }
  v49 = v38->fields._size;
  if ( (unsigned int)v49 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v38,
      2,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v45 = v38->fields._items;
    v46 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v38->fields._version;
    if ( !v45 )
      goto LABEL_70;
  }
  else
  {
    v38->fields._size = v49 + 1;
    *((_DWORD *)v45->m_Items + v49) = 2;
    ++v38->fields._version;
  }
  v50 = v38->fields._size;
  if ( (unsigned int)v50 < LODWORD(v45->max_length) )
  {
    v38->fields._size = v50 + 1;
    *((_DWORD *)v45->m_Items + v50) = 1;
    ++v38->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v38,
    1,
    *(const MethodInfo_3941C18 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  v45 = v38->fields._items;
  v46 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v38->fields._version;
  if ( !v45 )
LABEL_70:
    sub_1D0F30C(v11, v12);
LABEL_64:
  v51 = v38->fields._size;
  if ( (unsigned int)v51 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v38,
      0,
      *(const MethodInfo_3941C18 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v38->fields._size = v51 + 1;
    *((_DWORD *)v45->m_Items + v51) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v38;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.rarityFilterKindList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v52 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v52;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.filterBtnSpriteList,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxFilterSelectMenu__Callback(PresentBoxFilterSelectMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1D0F058(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_34208520(this, 0, v2);
}


void PresentBoxFilterSelectMenu__Close_34208520(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4E723CF & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_EndClose__);
    byte_4E723CF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PresentBoxFilterSelectMenu__EndOpen(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentBoxFilterSelectMenu__Init(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentBoxFilterSelectMenu__InitDisp(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *categoryGrid; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w25
  int32_t v6; // w20
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  UnityEngine_GameObject_o *v27; // x1
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v30; // x24
  EventDelegate_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v43; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v45; // w25
  int32_t v46; // w20
  __int64 v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v55; // x21
  UnityEngine_GameObject_o *v56; // x0
  System_Collections_Generic_List_object__o *v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  UnityEngine_GameObject_o *v67; // x1
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_object__o *v69; // x23
  EventDelegate_Callback_o *v70; // x24
  EventDelegate_o *v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  ListViewSort_o *v82; // x22
  UILabel_o *v83; // x21

  if ( (byte_4E723D0 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1D0F0B4(&EventDelegate_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__);
    sub_1D0F0B4(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__);
    sub_1D0F0B4(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
    byte_4E723D0 = 1;
  }
  categoryGrid = this->fields.categoryGrid;
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0);
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0);
  if ( !(_DWORD)categoryGrid )
  {
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_63;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = sub_1D0F300(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = this;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v15 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_37349004(gameObject, this->fields.categoryGrid, 0);
        UnityEngine_GameObject__SetActive(v15, 1, 0);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v15,
                                                     (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v25 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v26 = filterBtnSpriteList->fields._size;
        v27 = categoryGrid;
        if ( (unsigned int)v26 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v26;
          filterBtnSpriteList->fields._size = v26 + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        *(_DWORD *)(v7 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)categoryGrid,
                                 v6,
                                 (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v15,
                                                     (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v30 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v30,
          (Il2CppObject *)v7,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0);
        v31 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
        EventDelegate___ctor_50674352(v31, v30, 0);
        if ( !monitor )
          break;
        v38 = monitor->fields._items;
        v39 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v38 )
          break;
        v40 = monitor->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v31,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          monitor->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v31;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v15, 0, 0);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v43 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v6,
                                                     (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v43 )
          break;
        UILabel__set_text(v43, (System_String_o *)categoryGrid, 0);
        if ( size == ++v6 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1D0F30C(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.element_class)(
      categoryGrid,
      categoryGrid->klass[1]._1.castClass);
  }
  categoryGrid = this->fields.rarityGrid;
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0);
  if ( !categoryGrid )
    goto LABEL_63;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0);
  if ( !(_DWORD)categoryGrid )
  {
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_63;
    v45 = rarityFilterKindList->fields._size;
    if ( v45 >= 1 )
    {
      v46 = 0;
      do
      {
        v47 = sub_1D0F300(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v47, 0);
        if ( !v47 )
          goto LABEL_63;
        *(_QWORD *)(v47 + 24) = this;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v47 + 24), (int32_t)this, v48, v49, v50, v51, v52, v53);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v55 = categoryGrid;
        v56 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_37349004(v56, this->fields.rarityGrid, 0);
        UnityEngine_GameObject__SetActive(v55, 1, 0);
        v57 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v55,
                                                     (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v57 )
          goto LABEL_63;
        v64 = v57->fields._items;
        v65 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v57->fields._version;
        if ( !v64 )
          goto LABEL_63;
        v66 = v57->fields._size;
        v67 = categoryGrid;
        if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &v64->obj.klass + v66;
          v57->fields._size = v66 + 1;
          v68[4] = (Il2CppClass *)v67;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v67, v58, v59, v60, v61, v62, v63);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        *(_DWORD *)(v47 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v46,
                                  (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v55,
                                                     (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v69 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v70 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v70,
          (Il2CppObject *)v47,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0);
        v71 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
        EventDelegate___ctor_50674352(v71, v70, 0);
        if ( !v69 )
          goto LABEL_63;
        v78 = v69->fields._items;
        v79 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v69->fields._version;
        if ( !v78 )
          goto LABEL_63;
        v80 = v69->fields._size;
        if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v69,
            (Il2CppObject *)v71,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v78->obj.klass + v80;
          v69->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)v71;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v81 + 4), (int32_t)v71, v72, v73, v74, v75, v76, v77);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v55, 0, 0);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v82 = this->fields.operationSortInfo;
        v83 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v46,
                                                     (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v82 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v82,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v83 )
          goto LABEL_63;
        UILabel__set_text(v83, (System_String_o *)categoryGrid, 0);
      }
      while ( v45 != ++v46 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.element_class)(
      categoryGrid,
      categoryGrid->klass[1]._1.castClass);
  }
}


bool PresentBoxFilterSelectMenu__IsChangedStatus(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Boolean_array *v4; // x0
  __int64 v5; // x1
  struct System_Boolean_array *kindStatus; // x10
  __int64 max_length; // x9
  unsigned __int64 v8; // x8
  bool *m_Items; // x10
  bool v10; // w13

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_11;
  if ( (int)kindStatus->max_length >= 1 )
  {
    max_length = (unsigned int)kindStatus->max_length;
    v8 = 0;
    m_Items = kindStatus->m_Items;
    v10 = 1;
    while ( v4 )
    {
      if ( v8 >= LODWORD(v4->max_length) )
        sub_1D0F314(v4);
      if ( !m_Items[v8] != v4->m_Items[v8] )
      {
        v10 = (__int64)++v8 < (int)max_length;
        if ( max_length != v8 )
          continue;
      }
      return v10;
    }
LABEL_11:
    sub_1D0F30C(v4, v5);
  }
  return 0;
}


void PresentBoxFilterSelectMenu__OnClickAllSelect(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v8; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v10; // w22
  int32_t v11; // w20
  ListViewSort_o *v12; // x21

  if ( (byte_4E723D4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    byte_4E723D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v8,
                                                                           (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_45221356(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0);
        if ( size == ++v8 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1D0F30C(categoryFilterKindList, v5);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v10 = categoryFilterKindList->fields._size;
    if ( v10 >= 1 )
    {
      v11 = 0;
      do
      {
        v12 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v11,
                                                                           (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v12 )
          break;
        ListViewSort__SetFilter_45221408(v12, (int32_t)categoryFilterKindList, 1, 0);
        if ( v10 == ++v11 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E723D3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    byte_4E723D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PresentBoxFilterSelectMenu__Callback(this, 0, v5);
  }
}


void PresentBoxFilterSelectMenu__OnClickDecide(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4E723D2 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    byte_4E723D2 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    filterScrollView = v2->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_12;
    this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_PresentBoxFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1D0F098(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1D0F30C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v2, v9);
    PresentBoxFilterSelectMenu__Callback(v2, IsChangedStatus, v11);
  }
}


void PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4E723D6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    byte_4E723D6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1D0F30C(0, v7);
    ListViewSort__SwitchFilter_45222388(operationSortInfo, kind, 0);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void PresentBoxFilterSelectMenu__OnClickInitialize(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v8; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v10; // w22
  int32_t v11; // w20
  ListViewSort_o *v12; // x21

  if ( (byte_4E723D5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    byte_4E723D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v8,
                                                                           (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_45221356(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0);
        if ( size == ++v8 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1D0F30C(categoryFilterKindList, v5);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v10 = categoryFilterKindList->fields._size;
    if ( v10 >= 1 )
    {
      v11 = 0;
      do
      {
        v12 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v11,
                                                                           (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v12 )
          break;
        ListViewSort__SetFilter_45221408(v12, (int32_t)categoryFilterKindList, 0, 0);
        if ( v10 == ++v11 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4E723D7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    byte_4E723D7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1D0F0CC(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1D0F30C(0, v7);
    ListViewSort__SwitchFilter_45222444(operationSortInfo, kind, 0);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1D0F30C(0, method);
  gameObject = UnityEngine_Component__get_gameObject(cancelButton, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void PresentBoxFilterSelectMenu__Open(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        PresentBoxFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v6; // x19
  struct ListViewSort_o *presentBoxSortInfo; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  struct ListViewSort_o *v21; // x1
  System_Boolean_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v49; // x8
  System_Action_o *v50; // x20

  v6 = this;
  if ( (byte_4E723CE & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&ListViewSort_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_PresentBoxFilterSelectMenu_EndOpen__);
    sub_1D0F0B4(&StringLiteral_12055/*"SERVANT_SORT_RESET"*/);
    sub_1D0F0B4(&StringLiteral_10577/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/);
    sub_1D0F0B4(&StringLiteral_11889/*"SERVANT_SORT_CANCEL"*/);
    sub_1D0F0B4(&StringLiteral_11893/*"SERVANT_SORT_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_12057/*"SERVANT_SORT_TITLE2"*/);
    sub_1D0F0B4(&StringLiteral_11890/*"SERVANT_SORT_CLEAR"*/);
    sub_1D0F0B4(&StringLiteral_10555/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_1D0F0B4(&StringLiteral_10576/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/);
    byte_4E723CE = 1;
  }
  if ( !v6->fields.state )
  {
    presentBoxSortInfo = v6->fields.presentBoxSortInfo;
    if ( presentBoxSortInfo )
    {
      presentBoxSortInfo->fields.listViewKind = 4;
      this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v6->fields.callbackFunc = callback;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc,
          (int32_t)callback,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v6->fields.baseSortInfo,
            (int32_t)sort,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        else
        {
          v21 = v6->fields.presentBoxSortInfo;
          v6->fields.baseSortInfo = v21;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v6->fields.baseSortInfo,
            (int32_t)v21,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0);
        }
        v22 = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v20);
        v6->fields.kindStatus = v22;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v6->fields.kindStatus, (int32_t)v22, v23, v24, v25, v26, v27, v28);
        baseSortInfo = v6->fields.baseSortInfo;
        v30 = (ListViewSort_o *)sub_1D0F300(ListViewSort_TypeInfo);
        ListViewSort___ctor_45193524(v30, baseSortInfo, 0);
        v6->fields.operationSortInfo = v30;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v6->fields.operationSortInfo,
          (int32_t)v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10555/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10576/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, 0);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10577/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11893/*"SERVANT_SORT_DECIDE"*/,
                                                           0);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11890/*"SERVANT_SORT_CLEAR"*/,
                                                             0);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11889/*"SERVANT_SORT_CANCEL"*/,
                                                               0);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12055/*"SERVANT_SORT_RESET"*/,
                                                                 0);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v45);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v46);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v47);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v49 = v6->fields.baseSortInfo;
                            if ( v49 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v49->fields.scrollBarValue, 0);
                                v6->fields.state = 1;
                                v50 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v50,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0);
                                BaseDialog__Open((BaseDialog_o *)v6, v50, 0, 0, 0);
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
    sub_1D0F30C(this, sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentBoxFilterSelectMenu__SetButtonEnable(
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
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, v5, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.categoryGrid) == 0) )
  {
LABEL_7:
    sub_1D0F30C(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0);
}


void PresentBoxFilterSelectMenu__SetButtonSelect(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int m_CancellationTokenSource; // w9
  int v5; // w23
  int32_t size; // w26
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_4E723D1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1D0F0B4(&StringLiteral_17699/*"btn_bg_04"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_1D0F0B4(&StringLiteral_17698/*"btn_bg_03"*/);
    byte_4E723D1 = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList) == 0 )
LABEL_20:
    sub_1D0F30C(this, method);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v5 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    size = categoryFilterKindList->fields._size;
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v7,
               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      operationSortInfo = v2->fields.operationSortInfo;
      v10 = (UISprite_o *)Item;
      if ( v7 >= size )
      {
        this = (PresentBoxFilterSelectMenu_o *)v2->fields.rarityFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v7 - size,
                                                 (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_45220576(operationSortInfo, (int32_t)this, 0);
        if ( !v10 )
          goto LABEL_20;
      }
      else
      {
        this = (PresentBoxFilterSelectMenu_o *)v2->fields.categoryFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v7,
                                                 (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_45220528(operationSortInfo, (int32_t)this, 0);
        if ( !v10 )
          goto LABEL_20;
      }
      v11 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17698/*"btn_bg_03"*/ : &StringLiteral_17699/*"btn_bg_04"*/);
      UISprite__set_spriteName(v10, *v11, 0);
      if ( v5 == v7 )
        break;
      this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList;
      ++v7;
      if ( !this )
        goto LABEL_20;
    }
  }
}


System_Boolean_array *PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  __int64 size; // x23
  __int64 v8; // x24
  __int64 v9; // x21
  unsigned __int64 v10; // x22
  __int64 v11; // x22
  __int64 i; // x26
  __int64 v13; // x9

  v4 = this;
  if ( (byte_4E723D8 & 1) == 0 )
  {
    sub_1D0F0B4(&bool___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    this = (PresentBoxFilterSelectMenu_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    byte_4E723D8 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v8 = (unsigned int)rarityFilterKindList->fields._size;
  v9 = sub_1D0F15C(bool___TypeInfo, (unsigned int)(v8 + size));
  if ( (int)size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.categoryFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v10,
                                               (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_45220528(sort, (int32_t)this, 0);
      if ( !v9 )
        break;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
LABEL_21:
        sub_1D0F314(this);
      *(_BYTE *)(v9 + 32 + v10++) = (unsigned __int8)this & 1;
      if ( size == v10 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1D0F30C(this, sort);
  }
LABEL_12:
  if ( (int)v8 >= 1 )
  {
    v11 = 0;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v11,
                                               (const MethodInfo_3941928 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_45220576(sort, (int32_t)this, 0);
      if ( !v9 )
        break;
      if ( size + v11 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
        goto LABEL_21;
      ++v11;
      v13 = v9 + (i >> 32);
      *(_BYTE *)(v13 + 32) = (unsigned __int8)this & 1;
      if ( v8 == v11 )
        return (System_Boolean_array *)v9;
    }
    goto LABEL_20;
  }
  return (System_Boolean_array *)v9;
}


void PresentBoxFilterSelectMenu__add_callbackFunc(
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

  if ( (byte_4E723CC & 1) == 0 )
  {
    sub_1D0F0B4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4E723CC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1D0F6A8(v7);
  PresentBoxFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


void PresentBoxFilterSelectMenu__remove_callbackFunc(
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

  if ( (byte_4E723CD & 1) == 0 )
  {
    sub_1D0F0B4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4E723CD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D6AE88(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1D0F6A8(v7);
  PresentBoxFilterSelectMenu__Init(v10, v11);
}


void PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B35950;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B35908;
}


System_IAsyncResult_o *PresentBoxFilterSelectMenu_CallbackFunc__BeginInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4E723DA & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    byte_4E723DA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void PresentBoxFilterSelectMenu_CallbackFunc__Invoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PresentBoxFilterSelectMenu___c__DisplayClass38_0___InitDisp_b__0(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, method);
  PresentBoxFilterSelectMenu__OnClickFilter(this->fields.__4__this, this->fields.kind, v2);
}


void PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PresentBoxFilterSelectMenu___c__DisplayClass38_1___InitDisp_b__1(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(this->fields.__4__this, this->fields.kind, v2);
}