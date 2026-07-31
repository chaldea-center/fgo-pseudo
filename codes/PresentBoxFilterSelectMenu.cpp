void PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_T__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  __int64 v22; // x10
  __int64 v23; // x10
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
  System_Collections_Generic_List_T__o *v36; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  System_Collections_Generic_List_object__o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x1
  __int64 v58; // x2

  if ( (byte_5932F95 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UISprite__TypeInfo);
    byte_5932F95 = 1;
  }
  v3 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v3, 3, 0, 0);
  this->fields.presentBoxSortInfo = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.presentBoxSortInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v10 )
    goto LABEL_70;
  items = v10->fields._items;
  v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_70;
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++v10->fields._version;
  }
  v22 = v10->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      1,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 1;
    ++v10->fields._version;
  }
  v23 = v10->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      2,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 2;
    ++v10->fields._version;
  }
  v24 = v10->fields._size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      3,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 3;
    ++v10->fields._version;
  }
  v25 = v10->fields._size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      4,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 4;
    ++v10->fields._version;
  }
  v26 = v10->fields._size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      5,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 5;
    ++v10->fields._version;
  }
  v27 = v10->fields._size;
  if ( (unsigned int)v27 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      6,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 6;
    ++v10->fields._version;
  }
  v28 = v10->fields._size;
  if ( (unsigned int)v28 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      7,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 7;
    ++v10->fields._version;
  }
  v29 = v10->fields._size;
  if ( (unsigned int)v29 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      8,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 8;
    ++v10->fields._version;
  }
  v30 = v10->fields._size;
  if ( (unsigned int)v30 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      9,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 9;
    ++v10->fields._version;
  }
  v31 = v10->fields._size;
  if ( (unsigned int)v31 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      10,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 10;
    ++v10->fields._version;
  }
  v32 = v10->fields._size;
  if ( (unsigned int)v32 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      11,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 11;
    ++v10->fields._version;
  }
  v33 = v10->fields._size;
  if ( (unsigned int)v33 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      12,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 12;
    ++v10->fields._version;
  }
  v34 = v10->fields._size;
  if ( (unsigned int)v34 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      14,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v10->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    v10->fields._size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 14;
    ++v10->fields._version;
  }
  v35 = v10->fields._size;
  if ( (unsigned int)v35 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      13,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.categoryFilterKindList,
    (int32_t)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v36 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v36,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v36 )
    goto LABEL_70;
  v43 = v36->fields._items;
  v44 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v36->fields._version;
  if ( !v43 )
    goto LABEL_70;
  v45 = v36->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v36,
      4,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v36->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v36->fields._version;
    if ( !v43 )
      goto LABEL_70;
  }
  else
  {
    v36->fields._size = v45 + 1;
    *((_DWORD *)v43->m_Items + v45) = 4;
    ++v36->fields._version;
  }
  v46 = v36->fields._size;
  if ( (unsigned int)v46 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v36,
      3,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v36->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v36->fields._version;
    if ( !v43 )
      goto LABEL_70;
  }
  else
  {
    v36->fields._size = v46 + 1;
    *((_DWORD *)v43->m_Items + v46) = 3;
    ++v36->fields._version;
  }
  v47 = v36->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v36,
      2,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    v43 = v36->fields._items;
    v44 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v36->fields._version;
    if ( !v43 )
      goto LABEL_70;
  }
  else
  {
    v36->fields._size = v47 + 1;
    *((_DWORD *)v43->m_Items + v47) = 2;
    ++v36->fields._version;
  }
  v48 = v36->fields._size;
  if ( (unsigned int)v48 < LODWORD(v43->max_length) )
  {
    v36->fields._size = v48 + 1;
    *((_DWORD *)v43->m_Items + v48) = 1;
    ++v36->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v36,
    1,
    *(const MethodInfo_4435950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  v43 = v36->fields._items;
  v44 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v36->fields._version;
  if ( !v43 )
LABEL_70:
    sub_21FFECC(v11, v12);
LABEL_64:
  v49 = v36->fields._size;
  if ( (unsigned int)v49 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v36,
      0,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v36->fields._size = v49 + 1;
    *((_DWORD *)v43->m_Items + v49) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rarityFilterKindList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v50 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v50;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterBtnSpriteList,
    (int32_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v57, v58);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxFilterSelectMenu__Callback(PresentBoxFilterSelectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_39403140(this, 0, v2);
}


void PresentBoxFilterSelectMenu__Close_39403140(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5932F8B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_EndClose__);
    byte_5932F8B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  UnityEngine_GameObject_o *v29; // x1
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v32; // x24
  EventDelegate_o *v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  UILabel_o *v44; // x21
  ListViewSort_o *operationSortInfo; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v47; // w25
  int32_t v48; // w20
  __int64 v49; // x22
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v59; // x21
  UnityEngine_GameObject_o *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x23
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  UnityEngine_GameObject_o *v71; // x1
  Il2CppClass **v72; // x0
  System_Collections_Generic_List_object__o *v73; // x23
  EventDelegate_Callback_o *v74; // x24
  EventDelegate_o *v75; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  UILabel_o *v86; // x21
  ListViewSort_o *v87; // x22

  if ( (byte_5932F8C & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__);
    sub_21FFC50(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__);
    sub_21FFC50(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
    byte_5932F8C = 1;
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
        v7 = sub_21FFEBC(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = this;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v17 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_42881912(gameObject, this->fields.categoryGrid, 0);
        UnityEngine_GameObject__SetActive(v17, 1, 0);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v17,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v27 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v28 = filterBtnSpriteList->fields._size;
        v29 = categoryGrid;
        if ( (unsigned int)v28 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + v28;
          filterBtnSpriteList->fields._size = v28 + 1;
          v30[4] = (Il2CppClass *)v29;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v29, v20, v21, v22, v23, v24, v25);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        *(_DWORD *)(v7 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)categoryGrid,
                                 v6,
                                 (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v17,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v32 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v32,
          (Il2CppObject *)v7,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0);
        v33 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56132624(v33, v32, 0);
        if ( !monitor )
          break;
        v40 = monitor->fields._items;
        v41 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v40 )
          break;
        v42 = monitor->fields._size;
        if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v33,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v40->obj.klass + v42;
          monitor->fields._size = v42 + 1;
          v43[4] = (Il2CppClass *)v33;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v17, 0, 0);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        v44 = (UILabel_o *)categoryGrid;
        operationSortInfo = this->fields.operationSortInfo;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v6,
                                                     (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)categoryGrid, 0);
        if ( size == ++v6 )
          goto LABEL_30;
      }
LABEL_63:
      sub_21FFECC(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v47 = rarityFilterKindList->fields._size;
    if ( v47 >= 1 )
    {
      v48 = 0;
      do
      {
        v49 = sub_21FFEBC(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0);
        if ( !v49 )
          goto LABEL_63;
        *(_QWORD *)(v49 + 24) = this;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 24), (int32_t)this, v50, v51, v52, v53, v54, v55);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v59 = categoryGrid;
        v60 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_42881912(v60, this->fields.rarityGrid, 0);
        UnityEngine_GameObject__SetActive(v59, 1, 0);
        v61 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v59,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v61 )
          goto LABEL_63;
        v68 = v61->fields._items;
        v69 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v61->fields._version;
        if ( !v68 )
          goto LABEL_63;
        v70 = v61->fields._size;
        v71 = categoryGrid;
        if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v68->obj.klass + v70;
          v61->fields._size = v70 + 1;
          v72[4] = (Il2CppClass *)v71;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v71, v62, v63, v64, v65, v66, v67);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        *(_DWORD *)(v49 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v48,
                                  (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v59,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v73 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v74 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v74,
          (Il2CppObject *)v49,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0);
        v75 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56132624(v75, v74, 0);
        if ( !v73 )
          goto LABEL_63;
        v82 = v73->fields._items;
        v83 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v73->fields._version;
        if ( !v82 )
          goto LABEL_63;
        v84 = v73->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v73,
            (Il2CppObject *)v75,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v73->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v75;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v59, 0, 0);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v86 = (UILabel_o *)categoryGrid;
        v87 = this->fields.operationSortInfo;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v48,
                                                     (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v87 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v87,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v86 )
          goto LABEL_63;
        UILabel__set_text(v86, (System_String_o *)categoryGrid, 0);
      }
      while ( v47 != ++v48 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
  unsigned __int64 v7; // x8
  unsigned __int64 max_length; // x9
  bool *m_Items; // x10
  bool v10; // w12

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_11;
  if ( (int)kindStatus->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)kindStatus->max_length;
    m_Items = kindStatus->m_Items;
    v10 = 1;
    while ( v4 )
    {
      if ( v7 >= LODWORD(v4->max_length) )
        sub_21FFED4(v4);
      if ( m_Items[v7] == v4->m_Items[v7] )
      {
        v10 = ++v7 < max_length;
        if ( max_length != v7 )
          continue;
      }
      return v10;
    }
LABEL_11:
    sub_21FFECC(v4, v5);
  }
  return 0;
}


void PresentBoxFilterSelectMenu__OnClickAllSelect(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_T__o *Item; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w22
  int32_t v9; // w20
  ListViewSort_o *operationSortInfo; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v12; // w22
  int32_t v13; // w20
  ListViewSort_o *v14; // x21

  if ( (byte_5932F90 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    byte_5932F90 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
        if ( !Item )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         Item,
                                                         v9,
                                                         (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_50812912(operationSortInfo, (int32_t)Item, 1, 0);
        if ( size == ++v9 )
          goto LABEL_12;
      }
LABEL_20:
      sub_21FFECC(Item, v6);
    }
LABEL_12:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_20;
    v12 = rarityFilterKindList->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0;
      do
      {
        Item = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
        if ( !Item )
          goto LABEL_20;
        v14 = this->fields.operationSortInfo;
        Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         Item,
                                                         v13,
                                                         (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v14 )
          goto LABEL_20;
        ListViewSort__SetFilter_50812964(v14, (int32_t)Item, 1, 0);
      }
      while ( v12 != ++v13 );
    }
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v6);
  }
}


void PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932F8F & 1) == 0 )
  {
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    byte_5932F8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  bool IsChangedStatus; // w8
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_5932F8E & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    byte_5932F8E = 1;
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
      v7 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_21FFECC(this, method);
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

  if ( (byte_5932F92 & 1) == 0 )
  {
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    byte_5932F92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(0, v7);
    ListViewSort__SwitchFilter_50813948(operationSortInfo, kind, 0);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void PresentBoxFilterSelectMenu__OnClickInitialize(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_T__o *Item; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w22
  int32_t v9; // w20
  ListViewSort_o *operationSortInfo; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v12; // w22
  int32_t v13; // w20
  ListViewSort_o *v14; // x21

  if ( (byte_5932F91 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    byte_5932F91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
        if ( !Item )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         Item,
                                                         v9,
                                                         (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_50812912(operationSortInfo, (int32_t)Item, 0, 0);
        if ( size == ++v9 )
          goto LABEL_12;
      }
LABEL_20:
      sub_21FFECC(Item, v6);
    }
LABEL_12:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_20;
    v12 = rarityFilterKindList->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0;
      do
      {
        Item = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
        if ( !Item )
          goto LABEL_20;
        v14 = this->fields.operationSortInfo;
        Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         Item,
                                                         v13,
                                                         (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v14 )
          goto LABEL_20;
        ListViewSort__SetFilter_50812964(v14, (int32_t)Item, 0, 0);
      }
      while ( v12 != ++v13 );
    }
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v6);
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

  if ( (byte_5932F93 & 1) == 0 )
  {
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    byte_5932F93 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(0, v7);
    ListViewSort__SwitchFilter_50814004(operationSortInfo, kind, 0);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_21FFECC(0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  struct ListViewSort_o *v21; // x1
  System_Boolean_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
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
  System_Action_o *v52; // x20

  v6 = this;
  if ( (byte_5932F8A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PresentBoxFilterSelectMenu_EndOpen__);
    sub_21FFC50(&StringLiteral_12373/*"SERVANT_SORT_RESET"*/);
    sub_21FFC50(&StringLiteral_10853/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/);
    sub_21FFC50(&StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12375/*"SERVANT_SORT_TITLE2"*/);
    sub_21FFC50(&StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/);
    sub_21FFC50(&StringLiteral_10831/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_21FFC50(&StringLiteral_10852/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/);
    byte_5932F8A = 1;
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFunc,
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
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v6->fields.baseSortInfo,
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
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v6->fields.baseSortInfo,
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v6->fields.kindStatus,
          (int32_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        baseSortInfo = v6->fields.baseSortInfo;
        v30 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
        ListViewSort___ctor_50785372(v30, baseSortInfo, 0);
        v6->fields.operationSortInfo = v30;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v6->fields.operationSortInfo,
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
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12375/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10852/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, 0);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10853/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/,
                                                           0);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/,
                                                             0);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/,
                                                               0);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12373/*"SERVANT_SORT_RESET"*/,
                                                                 0);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0);
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
                                UIProgressBar__set_value((UIProgressBar_o *)this, v51->fields.scrollBarValue, 0);
                                v6->fields.state = 1;
                                v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v52,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0);
                                BaseDialog__Open((BaseDialog_o *)v6, v52, 0, 0, 0);
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
    sub_21FFECC(this, sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentBoxFilterSelectMenu__SetButtonEnable(
        PresentBoxFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_7;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.categoryGrid) == 0) )
  {
LABEL_7:
    sub_21FFECC(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0);
}


void PresentBoxFilterSelectMenu__SetButtonSelect(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x9
  int size; // w23
  int32_t v6; // w28
  int32_t i; // w20
  ListViewSort_o *v8; // x22
  PresentBoxFilterSelectMenu_o *v9; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 *v11; // x8

  v2 = this;
  if ( (byte_5932F8D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_21FFC50(&StringLiteral_18163/*"btn_bg_04"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_21FFC50(&StringLiteral_18162/*"btn_bg_03"*/);
    byte_5932F8D = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (filterBtnSpriteList = v2->fields.filterBtnSpriteList) == 0 )
LABEL_22:
    sub_21FFECC(this, method);
  size = filterBtnSpriteList->fields._size;
  if ( size >= 1 )
  {
    v6 = categoryFilterKindList->fields._size;
    for ( i = 0; i != size; ++i )
    {
      this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList;
      if ( i >= v6 )
      {
        if ( !this )
          goto LABEL_22;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 i,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( !v2->fields.rarityFilterKindList )
          goto LABEL_22;
        v9 = this;
        operationSortInfo = v2->fields.operationSortInfo;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)v2->fields.rarityFilterKindList,
                                                 i - v6,
                                                 (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_22;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_50812132(operationSortInfo, (int32_t)this, 0);
        if ( !v9 )
          goto LABEL_22;
      }
      else
      {
        if ( !this )
          goto LABEL_22;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 i,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
        if ( !v2->fields.categoryFilterKindList )
          goto LABEL_22;
        v8 = v2->fields.operationSortInfo;
        v9 = this;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKindList,
                                                 i,
                                                 (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !v8 )
          goto LABEL_22;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_50812084(v8, (int32_t)this, 0);
        if ( !v9 )
          goto LABEL_22;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
        v11 = &StringLiteral_18162/*"btn_bg_03"*/;
      else
        v11 = &StringLiteral_18163/*"btn_bg_04"*/;
      UISprite__set_spriteName((UISprite_o *)v9, (System_String_o *)*v11, 0);
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
  __int64 v11; // x26
  __int64 v12; // x22
  __int64 v13; // x8

  v4 = this;
  if ( (byte_5932F94 & 1) == 0 )
  {
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    this = (PresentBoxFilterSelectMenu_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    byte_5932F94 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v8 = (unsigned int)rarityFilterKindList->fields._size;
  v9 = sub_21FFD10(bool___TypeInfo, (unsigned int)(v8 + size));
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
                                               (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_50812084(sort, (int32_t)this, 0);
      if ( !v9 )
        break;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
LABEL_21:
        sub_21FFED4(this);
      *(_BYTE *)(v9 + 32 + v10++) = (unsigned __int8)this & 1;
      if ( size == v10 )
        goto LABEL_12;
    }
LABEL_20:
    sub_21FFECC(this, sort);
  }
LABEL_12:
  if ( (int)v8 >= 1 )
  {
    v11 = size << 32;
    v12 = 0;
    while ( 1 )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        goto LABEL_20;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v12,
                                               (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        goto LABEL_20;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_50812132(sort, (int32_t)this, 0);
      if ( !v9 )
        goto LABEL_20;
      if ( size + v12 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
        goto LABEL_21;
      v13 = v9 + (v11 >> 32);
      ++v12;
      v11 += 0x100000000LL;
      *(_BYTE *)(v13 + 32) = (unsigned __int8)this & 1;
      if ( v8 == v12 )
        return (System_Boolean_array *)v9;
    }
  }
  return (System_Boolean_array *)v9;
}


void PresentBoxFilterSelectMenu__add_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxFilterSelectMenu_o *v11; // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932F88 & 1) == 0 )
  {
    sub_21FFC50(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_5932F88 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v6->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxFilterSelectMenu_o *)sub_220024C(v6, PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  PresentBoxFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void PresentBoxFilterSelectMenu__remove_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxFilterSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5932F89 & 1) == 0 )
  {
    sub_21FFC50(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_5932F89 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v6->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxFilterSelectMenu_o *)sub_220024C(v6, PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  PresentBoxFilterSelectMenu__Init(v11, v12);
}


void PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEE1D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEE18C;
}


System_IAsyncResult_o *PresentBoxFilterSelectMenu_CallbackFunc__BeginInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(this->fields.__4__this, this->fields.kind, v2);
}