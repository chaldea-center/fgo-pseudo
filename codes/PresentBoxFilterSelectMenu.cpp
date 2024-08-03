void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ListViewSort_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_T__o *v16; // x20
  __int64 v17; // x0
  _QWORD *v18; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
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
  __int64 v36; // x10
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_T__o *v39; // x20
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20

  if ( (byte_49F7716 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&ListViewSort_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_List_UISprite__TypeInfo, v12);
    byte_49F7716 = 1;
  }
  v13 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor(v13, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v13;
  sub_1B6406C(&this->fields.presentBoxSortInfo);
  v16 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo,
                                                  v14,
                                                  v15);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v16 )
    goto LABEL_70;
  v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v16->fields._version;
  ++v16->fields._version;
  items = v16->fields._items;
  p_size = &v16->fields._size;
  size = v16->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      0,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      1,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 1;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 2;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 3;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      4,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 4;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      5,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 5;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      6,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 6;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      7,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 7;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      8,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 8;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      9,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 9;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      10,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 10;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      11,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 11;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      12,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 12;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      14,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 14;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      13,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v16;
  sub_1B6406C(&this->fields.categoryFilterKindList);
  v39 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo,
                                                  v37,
                                                  v38);
  System_Collections_Generic_List_Int32Enum____ctor(
    v39,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v39 )
    goto LABEL_70;
  v40 = v39->fields._items;
  v41 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v39->fields._version;
  if ( !v40 )
    goto LABEL_70;
  v42 = v39->fields._size;
  if ( (unsigned int)v42 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      4,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v40 = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v40 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v42 + 1;
    *((_DWORD *)v40->m_Items + v42) = 4;
    ++v39->fields._version;
  }
  v43 = v39->fields._size;
  if ( (unsigned int)v43 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v40 = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v40 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v43 + 1;
    *((_DWORD *)v40->m_Items + v43) = 3;
    ++v39->fields._version;
  }
  v44 = v39->fields._size;
  if ( (unsigned int)v44 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    v40 = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v40 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v44 + 1;
    *((_DWORD *)v40->m_Items + v44) = 2;
    ++v39->fields._version;
  }
  v45 = v39->fields._size;
  if ( (unsigned int)v45 < v40->max_length )
  {
    v39->fields._size = v45 + 1;
    *((_DWORD *)v40->m_Items + v45) = 1;
    ++v39->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v39,
    1,
    *(const MethodInfo_34927A8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  v40 = v39->fields._items;
  v41 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v39->fields._version;
  if ( !v40 )
LABEL_70:
    sub_1B64324(v17);
LABEL_64:
  v46 = v39->fields._size;
  if ( (unsigned int)v46 >= v40->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      0,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v39->fields._size = v46 + 1;
    *((_DWORD *)v40->m_Items + v46) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v39;
  sub_1B6406C(&this->fields.rarityFilterKindList);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UISprite__TypeInfo,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v49;
  sub_1B6406C(&this->fields.filterBtnSpriteList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1B6406C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_30493860(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_30493860(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_49F770C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_EndClose__, v5);
    byte_49F770C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B6406C(&this->fields.closeCallbackFunc);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *categoryGrid; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w25
  int32_t v25; // w20
  __int64 v26; // x22
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  UnityEngine_GameObject_o *v34; // x1
  Il2CppClass **v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  EventDelegate_o *v42; // x22
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v52; // w25
  int32_t v53; // w20
  __int64 v54; // x22
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v56; // x21
  UnityEngine_GameObject_o *v57; // x0
  System_Collections_Generic_List_object__o *v58; // x23
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  UnityEngine_GameObject_o *v62; // x1
  Il2CppClass **v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  System_Collections_Generic_List_object__o *v66; // x23
  EventDelegate_Callback_o *v67; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  EventDelegate_o *v70; // x22
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  ListViewSort_o *v75; // x22
  UILabel_o *v76; // x21

  if ( (byte_49F770D & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_1B640C8(&EventDelegate_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_1B640C8(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_1B640C8(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_49F770D = 1;
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
      v25 = 0;
      while ( 1 )
      {
        v26 = sub_1B64314(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v21, v22);
        System_Object___ctor((Il2CppObject *)v26, 0LL);
        if ( !v26 )
          break;
        *(_QWORD *)(v26 + 24) = this;
        sub_1B6406C(v26 + 24);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v28 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_33381252(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v28, 1, 0LL);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v28,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v32 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v33 = filterBtnSpriteList->fields._size;
        v34 = categoryGrid;
        if ( (unsigned int)v33 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + v33;
          filterBtnSpriteList->fields._size = v33 + 1;
          v35[4] = (Il2CppClass *)v34;
          sub_1B6406C(v35 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        *(_DWORD *)(v26 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v25,
                                  (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v28,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v39 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v36, v37);
        EventDelegate_Callback___ctor(
          v39,
          (Il2CppObject *)v26,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v42 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v40, v41);
        EventDelegate___ctor_46508544(v42, v39, 0LL);
        if ( !monitor )
          break;
        v43 = monitor->fields._items;
        v44 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v43 )
          break;
        v45 = monitor->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v42,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          monitor->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v42;
          sub_1B6406C(v46 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v28, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v48 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v25,
                                                     (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v48 )
          break;
        UILabel__set_text(v48, (System_String_o *)categoryGrid, 0LL);
        if ( size == ++v25 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1B64324(categoryGrid);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v52 = rarityFilterKindList->fields._size;
    if ( v52 >= 1 )
    {
      v53 = 0;
      do
      {
        v54 = sub_1B64314(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v49, v50);
        System_Object___ctor((Il2CppObject *)v54, 0LL);
        if ( !v54 )
          goto LABEL_63;
        *(_QWORD *)(v54 + 24) = this;
        sub_1B6406C(v54 + 24);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v56 = categoryGrid;
        v57 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_33381252(v57, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v56, 1, 0LL);
        v58 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v56,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v58 )
          goto LABEL_63;
        v59 = v58->fields._items;
        v60 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v58->fields._version;
        if ( !v59 )
          goto LABEL_63;
        v61 = v58->fields._size;
        v62 = categoryGrid;
        if ( (unsigned int)v61 >= v59->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &v59->obj.klass + v61;
          v58->fields._size = v61 + 1;
          v63[4] = (Il2CppClass *)v62;
          sub_1B6406C(v63 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        *(_DWORD *)(v54 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v53,
                                  (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v56,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v66 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v67 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v64, v65);
        EventDelegate_Callback___ctor(
          v67,
          (Il2CppObject *)v54,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v70 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v68, v69);
        EventDelegate___ctor_46508544(v70, v67, 0LL);
        if ( !v66 )
          goto LABEL_63;
        v71 = v66->fields._items;
        v72 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v66->fields._version;
        if ( !v71 )
          goto LABEL_63;
        v73 = v66->fields._size;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            (Il2CppObject *)v70,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v66->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)v70;
          sub_1B6406C(v74 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v56, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v75 = this->fields.operationSortInfo;
        v76 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v53,
                                                     (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v75 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v75,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v76 )
          goto LABEL_63;
        UILabel__set_text(v76, (System_String_o *)categoryGrid, 0LL);
      }
      while ( v52 != ++v53 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_Boolean_array *kindStatus; // x10
  __int64 v9; // x9
  unsigned __int64 v10; // x8
  bool *v11; // x10
  bool v12; // w13

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_11;
  if ( (int)*(_QWORD *)&kindStatus->max_length >= 1 )
  {
    v9 = (unsigned int)*(_QWORD *)&kindStatus->max_length;
    v10 = 0LL;
    v11 = &kindStatus->m_Items[4];
    v12 = 1;
    while ( v4 )
    {
      if ( v10 >= v4->max_length )
        sub_1B6432C(v4, v5, v6, v7);
      if ( !v11[v10] != v4->m_Items[v10 + 4] )
      {
        v12 = (__int64)++v10 < (int)v9;
        if ( v9 != v10 )
          continue;
      }
      return v12;
    }
LABEL_11:
    sub_1B64324(v4);
  }
  return 0;
}


void __fastcall PresentBoxFilterSelectMenu__OnClickAllSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v12; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v14; // w22
  int32_t v15; // w20
  ListViewSort_o *v16; // x21

  if ( (byte_49F7711 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__, v6);
    byte_49F7711 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0();
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v12,
                                                                           (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_40454768(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1B64324(categoryFilterKindList);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v14 = categoryFilterKindList->fields._size;
    if ( v14 >= 1 )
    {
      v15 = 0;
      do
      {
        v16 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v15,
                                                                           (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_40454820(v16, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( v14 == ++v15 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F7710 & 1) == 0 )
  {
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickCancel__, method);
    byte_49F7710 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PresentBoxFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickDecide(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
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
  if ( (byte_49F770F & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickDecide__, method);
    byte_49F770F = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_PresentBoxFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0();
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1B64324(this);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v2, v9);
    PresentBoxFilterSelectMenu__Callback(v2, IsChangedStatus, v11);
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
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49F7713 & 1) == 0 )
  {
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickFilter__, *(_QWORD *)&kind);
    byte_49F7713 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0();
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B64324(0LL);
    ListViewSort__SwitchFilter_40455800(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickInitialize(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_T__o *categoryFilterKindList; // x0
  int size; // w22
  int32_t v12; // w20
  ListViewSort_o *operationSortInfo; // x21
  int v14; // w22
  int32_t v15; // w20
  ListViewSort_o *v16; // x21

  if ( (byte_49F7712 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__, v6);
    byte_49F7712 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0();
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    size = categoryFilterKindList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      do
      {
        operationSortInfo = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v12,
                                                                           (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_40454768(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1B64324(categoryFilterKindList);
    }
LABEL_14:
    categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_20;
    v14 = categoryFilterKindList->fields._size;
    if ( v14 >= 1 )
    {
      v15 = 0;
      do
      {
        v16 = this->fields.operationSortInfo;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                           categoryFilterKindList,
                                                                           v15,
                                                                           (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_40454820(v16, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( v14 == ++v15 )
          goto LABEL_21;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList;
      }
      while ( categoryFilterKindList );
      goto LABEL_20;
    }
LABEL_21:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
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
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49F7714 & 1) == 0 )
  {
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__, *(_QWORD *)&kind);
    byte_49F7714 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0();
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B64324(0LL);
    ListViewSort__SwitchFilter_40455856(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1B64324(0LL);
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
  struct ListViewSort_o *presentBoxSortInfo; // x8
  const MethodInfo *v19; // x2
  ListViewSort_o *baseSortInfo; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  ListViewSort_o *v23; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x20

  v6 = this;
  if ( (byte_49F770B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_1B640C8(&StringLiteral_11782/*"SERVANT_SORT_RESET"*/, v10);
    sub_1B640C8(&StringLiteral_10383/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_1B640C8(&StringLiteral_11631/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_1B640C8(&StringLiteral_11635/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_1B640C8(&StringLiteral_11784/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_1B640C8(&StringLiteral_11632/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_1B640C8(&StringLiteral_10361/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B640C8(&StringLiteral_10382/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_49F770B = 1;
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
        sub_1B6406C(&v6->fields.callbackFunc);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1B6406C(&v6->fields.baseSortInfo);
        }
        else
        {
          v6->fields.baseSortInfo = v6->fields.presentBoxSortInfo;
          sub_1B6406C(&v6->fields.baseSortInfo);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v6->fields.kindStatus = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v19);
        sub_1B6406C(&v6->fields.kindStatus);
        baseSortInfo = v6->fields.baseSortInfo;
        v23 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v21, v22);
        ListViewSort___ctor_40426860(v23, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v23;
        sub_1B6406C(&v6->fields.operationSortInfo);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11784/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10361/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10382/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10383/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11635/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11632/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11631/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11782/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v32);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v33);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v34);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v36 = v6->fields.baseSortInfo;
                            if ( v36 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v36->fields.scrollBarValue, 0LL);
                                v6->fields.state = 1;
                                v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
                                System_Action___ctor(
                                  v39,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v39, 0, 0LL);
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
    sub_1B64324(this);
  }
}


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
    sub_1B64324(decideButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int m_CancellationTokenSource; // w9
  int v11; // w23
  int32_t size; // w26
  int32_t v13; // w20
  Il2CppObject *Item; // x0
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v16; // x21
  System_String_o **v17; // x8

  v2 = this;
  if ( (byte_49F770E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v6);
    sub_1B640C8(&StringLiteral_17401/*"btn_bg_04"*/, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B640C8(&StringLiteral_17400/*"btn_bg_03"*/, v8);
    byte_49F770E = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList) == 0LL )
LABEL_20:
    sub_1B64324(this);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v11 = m_CancellationTokenSource - 1;
  if ( m_CancellationTokenSource >= 1 )
  {
    size = categoryFilterKindList->fields._size;
    v13 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v13,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      operationSortInfo = v2->fields.operationSortInfo;
      v16 = (UISprite_o *)Item;
      if ( v13 >= size )
      {
        this = (PresentBoxFilterSelectMenu_o *)v2->fields.rarityFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v13 - size,
                                                 (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_40453988(operationSortInfo, (int32_t)this, 0LL);
        if ( !v16 )
          goto LABEL_20;
      }
      else
      {
        this = (PresentBoxFilterSelectMenu_o *)v2->fields.categoryFilterKindList;
        if ( !this )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 v13,
                                                 (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_40453940(operationSortInfo, (int32_t)this, 0LL);
        if ( !v16 )
          goto LABEL_20;
      }
      v17 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17400/*"btn_bg_03"*/ : &StringLiteral_17401/*"btn_bg_04"*/);
      UISprite__set_spriteName(v16, *v17, 0LL);
      if ( v11 == v13 )
        break;
      this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList;
      ++v13;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  __int64 size; // x23
  __int64 v12; // x24
  System_Boolean_array *v13; // x21
  unsigned __int64 v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x22
  __int64 i; // x26
  char *v20; // x9

  v4 = this;
  if ( (byte_49F7715 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, sort);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B640C8(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v8);
    byte_49F7715 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v12 = (unsigned int)rarityFilterKindList->fields._size;
  v13 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, (unsigned int)(v12 + size));
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.categoryFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v14,
                                               (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_40453940(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
LABEL_21:
        sub_1B6432C(this, v15, v16, v17);
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( size == v14 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1B64324(this);
  }
LABEL_12:
  if ( (int)v12 >= 1 )
  {
    v18 = 0LL;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v18,
                                               (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_40453988(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( size + v18 >= (unsigned __int64)v13->max_length )
        goto LABEL_21;
      ++v18;
      v20 = (char *)v13 + (i >> 32);
      v20[32] = (unsigned __int8)this & 1;
      if ( v12 == v18 )
        return v13;
    }
    goto LABEL_20;
  }
  return v13;
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

  if ( (byte_49F7709 & 1) == 0 )
  {
    sub_1B640C8(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F7709 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1B645E4(v7);
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

  if ( (byte_49F770A & 1) == 0 )
  {
    sub_1B640C8(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F770A = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1B645E4(v7);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4824;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A47DC;
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
  if ( (byte_49F7717 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F7717 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  PresentBoxFilterSelectMenu__OnClickFilter(this->fields.__4__this, this->fields.kind, v2);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(this->fields.__4__this, this->fields.kind, v2);
}