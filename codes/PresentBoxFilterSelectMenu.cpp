void PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  System_Collections_Generic_List_T__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  _QWORD *v7; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  System_Collections_Generic_List_T__o *v26; // x20
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  System_Collections_Generic_List_object__o *v34; // x20

  if ( (byte_4C21D43 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UISprite__TypeInfo);
    byte_4C21D43 = 1;
  }
  v3 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v3, 3, 0, 0);
  this->fields.presentBoxSortInfo = v3;
  sub_1C2D434(&this->fields.presentBoxSortInfo);
  v4 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v4 )
    goto LABEL_70;
  v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v4->fields._version;
  ++v4->fields._version;
  items = v4->fields._items;
  p_size = &v4->fields._size;
  size = v4->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      0,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      1,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 1;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      2,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 2;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      3,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 3;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      4,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 4;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      5,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 5;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      6,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 6;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      7,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 7;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      8,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 8;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      9,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 9;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      10,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 10;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      11,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 11;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      12,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 12;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      14,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v4->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 14;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v4,
      13,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v4;
  sub_1C2D434(&this->fields.categoryFilterKindList);
  v26 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v26 )
    goto LABEL_70;
  v27 = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v26->fields._version;
  if ( !v27 )
    goto LABEL_70;
  v29 = v26->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      4,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v26->fields._version;
    if ( !v27 )
      goto LABEL_70;
  }
  else
  {
    v26->fields._size = v29 + 1;
    *((_DWORD *)v27->m_Items + v29) = 4;
    ++v26->fields._version;
  }
  v30 = v26->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      3,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v26->fields._version;
    if ( !v27 )
      goto LABEL_70;
  }
  else
  {
    v26->fields._size = v30 + 1;
    *((_DWORD *)v27->m_Items + v30) = 3;
    ++v26->fields._version;
  }
  v31 = v26->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      2,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v26->fields._version;
    if ( !v27 )
      goto LABEL_70;
  }
  else
  {
    v26->fields._size = v31 + 1;
    *((_DWORD *)v27->m_Items + v31) = 2;
    ++v26->fields._version;
  }
  v32 = v26->fields._size;
  if ( (unsigned int)v32 < LODWORD(v27->max_length) )
  {
    v26->fields._size = v32 + 1;
    *((_DWORD *)v27->m_Items + v32) = 1;
    ++v26->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v26,
    1,
    *(const MethodInfo_376F38C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  v27 = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v26->fields._version;
  if ( !v27 )
LABEL_70:
    sub_1C2D6EC(v5, v6);
LABEL_64:
  v33 = v26->fields._size;
  if ( (unsigned int)v33 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      0,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v26->fields._size = v33 + 1;
    *((_DWORD *)v27->m_Items + v33) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v26;
  sub_1C2D434(&this->fields.rarityFilterKindList);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v34;
  sub_1C2D434(&this->fields.filterBtnSpriteList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxFilterSelectMenu__Callback(PresentBoxFilterSelectMenu_o *this, bool result, const MethodInfo *method)
{
  struct PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0;
    sub_1C2D434(p_callbackFunc);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_32360820(this, 0, v2);
}


void PresentBoxFilterSelectMenu__Close_32360820(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C21D39 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_EndClose__);
    byte_4C21D39 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434(&this->fields.closeCallbackFunc);
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
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  UnityEngine_GameObject_o *v15; // x1
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v18; // x24
  EventDelegate_o *v19; // x22
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v25; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v27; // w25
  int32_t v28; // w20
  __int64 v29; // x22
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x23
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  UnityEngine_GameObject_o *v37; // x1
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_object__o *v39; // x23
  EventDelegate_Callback_o *v40; // x24
  EventDelegate_o *v41; // x22
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  ListViewSort_o *v46; // x22
  UILabel_o *v47; // x21

  if ( (byte_4C21D3A & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__);
    sub_1C2D490(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__);
    sub_1C2D490(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
    byte_4C21D3A = 1;
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
        v7 = sub_1C2D6DC(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = this;
        sub_1C2D434(v7 + 24);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v9 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_35924288(gameObject, this->fields.categoryGrid, 0);
        UnityEngine_GameObject__SetActive(v9, 1, 0);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v9,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v13 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v14 = filterBtnSpriteList->fields._size;
        v15 = categoryGrid;
        if ( (unsigned int)v14 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + v14;
          filterBtnSpriteList->fields._size = v14 + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1C2D434(v16 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        *(_DWORD *)(v7 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)categoryGrid,
                                 v6,
                                 (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v9,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v18 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v18,
          (Il2CppObject *)v7,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0);
        v19 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
        EventDelegate___ctor_49170772(v19, v18, 0);
        if ( !monitor )
          break;
        v20 = monitor->fields._items;
        v21 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v20 )
          break;
        v22 = monitor->fields._size;
        if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v19,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->obj.klass + v22;
          monitor->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)v19;
          sub_1C2D434(v23 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v9, 0, 0);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v25 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v6,
                                                     (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v25 )
          break;
        UILabel__set_text(v25, (System_String_o *)categoryGrid, 0);
        if ( size == ++v6 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1C2D6EC(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v27 = rarityFilterKindList->fields._size;
    if ( v27 >= 1 )
    {
      v28 = 0;
      do
      {
        v29 = sub_1C2D6DC(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v29, 0);
        if ( !v29 )
          goto LABEL_63;
        *(_QWORD *)(v29 + 24) = this;
        sub_1C2D434(v29 + 24);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v31 = categoryGrid;
        v32 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0);
        GameObjectExtensions__SafeSetParent_35924288(v32, this->fields.rarityGrid, 0);
        UnityEngine_GameObject__SetActive(v31, 1, 0);
        v33 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v31,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v33 )
          goto LABEL_63;
        v34 = v33->fields._items;
        v35 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v33->fields._version;
        if ( !v34 )
          goto LABEL_63;
        v36 = v33->fields._size;
        v37 = categoryGrid;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &v34->obj.klass + v36;
          v33->fields._size = v36 + 1;
          v38[4] = (Il2CppClass *)v37;
          sub_1C2D434(v38 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        *(_DWORD *)(v29 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v28,
                                  (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v31,
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v39 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v40 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v40,
          (Il2CppObject *)v29,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0);
        v41 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
        EventDelegate___ctor_49170772(v41, v40, 0);
        if ( !v39 )
          goto LABEL_63;
        v42 = v39->fields._items;
        v43 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v39->fields._version;
        if ( !v42 )
          goto LABEL_63;
        v44 = v39->fields._size;
        if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)v41,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v42->obj.klass + v44;
          v39->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v41;
          sub_1C2D434(v45 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v31, 0, 0);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v46 = this->fields.operationSortInfo;
        v47 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v28,
                                                     (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v46 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v46,
                                                     (int32_t)categoryGrid,
                                                     0);
        if ( !v47 )
          goto LABEL_63;
        UILabel__set_text(v47, (System_String_o *)categoryGrid, 0);
      }
      while ( v27 != ++v28 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
  __int64 v6; // x2
  struct System_Boolean_array *kindStatus; // x10
  __int64 max_length; // x9
  unsigned __int64 v9; // x8
  bool *m_Items; // x10
  bool v11; // w13

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_11;
  if ( (int)kindStatus->max_length >= 1 )
  {
    max_length = (unsigned int)kindStatus->max_length;
    v9 = 0;
    m_Items = kindStatus->m_Items;
    v11 = 1;
    while ( v4 )
    {
      if ( v9 >= LODWORD(v4->max_length) )
        sub_1C2D6F4(v4, v5, v6);
      if ( !m_Items[v9] != v4->m_Items[v9] )
      {
        v11 = (__int64)++v9 < (int)max_length;
        if ( max_length != v9 )
          continue;
      }
      return v11;
    }
LABEL_11:
    sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C21D3E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    byte_4C21D3E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
                                                                           (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_43629280(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0);
        if ( size == ++v8 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1C2D6EC(categoryFilterKindList, v5);
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
                                                                           (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v12 )
          break;
        ListViewSort__SetFilter_43629332(v12, (int32_t)categoryFilterKindList, 1, 0);
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

  if ( (byte_4C21D3D & 1) == 0 )
  {
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    byte_4C21D3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  if ( (byte_4C21D3C & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    byte_4C21D3C = 1;
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
      v7 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C2D6EC(this, method);
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

  if ( (byte_4C21D40 & 1) == 0 )
  {
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    byte_4C21D40 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(0, v7);
    ListViewSort__SwitchFilter_43630312(operationSortInfo, kind, 0);
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

  if ( (byte_4C21D3F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    byte_4C21D3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
                                                                           (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_43629280(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0);
        if ( size == ++v8 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1C2D6EC(categoryFilterKindList, v5);
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
                                                                           (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v12 )
          break;
        ListViewSort__SetFilter_43629332(v12, (int32_t)categoryFilterKindList, 0, 0);
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

  if ( (byte_4C21D41 & 1) == 0 )
  {
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    byte_4C21D41 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(0, v7);
    ListViewSort__SwitchFilter_43630368(operationSortInfo, kind, 0);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v8; // x2
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v10; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v23; // x8
  System_Action_o *v24; // x20

  v6 = this;
  if ( (byte_4C21D38 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PresentBoxFilterSelectMenu_EndOpen__);
    sub_1C2D490(&StringLiteral_11878/*"SERVANT_SORT_RESET"*/);
    sub_1C2D490(&StringLiteral_10426/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/);
    sub_1C2D490(&StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/);
    sub_1C2D490(&StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/);
    sub_1C2D490(&StringLiteral_10404/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_1C2D490(&StringLiteral_10425/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/);
    byte_4C21D38 = 1;
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
        sub_1C2D434(&v6->fields.callbackFunc);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1C2D434(&v6->fields.baseSortInfo);
        }
        else
        {
          v6->fields.baseSortInfo = v6->fields.presentBoxSortInfo;
          sub_1C2D434(&v6->fields.baseSortInfo);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0);
        }
        v6->fields.kindStatus = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v8);
        sub_1C2D434(&v6->fields.kindStatus);
        baseSortInfo = v6->fields.baseSortInfo;
        v10 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
        ListViewSort___ctor_43601448(v10, baseSortInfo, 0);
        v6->fields.operationSortInfo = v10;
        sub_1C2D434(&v6->fields.operationSortInfo);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10404/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10425/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, 0);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10426/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/,
                                                           0);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/,
                                                             0);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/,
                                                               0);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11878/*"SERVANT_SORT_RESET"*/,
                                                                 0);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v19);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v20);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v21);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v23 = v6->fields.baseSortInfo;
                            if ( v23 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v23->fields.scrollBarValue, 0);
                                v6->fields.state = 1;
                                v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v24,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0);
                                BaseDialog__Open((BaseDialog_o *)v6, v24, 0, 0);
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
    sub_1C2D6EC(this, sort);
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
    sub_1C2D6EC(decideButton, isEnable);
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
  if ( (byte_4C21D3B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_1C2D490(&StringLiteral_17433/*"btn_bg_04"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_1C2D490(&StringLiteral_17432/*"btn_bg_03"*/);
    byte_4C21D3B = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList) == 0 )
LABEL_20:
    sub_1C2D6EC(this, method);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                                                 (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_43628500(operationSortInfo, (int32_t)this, 0);
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
                                                 (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_43628452(operationSortInfo, (int32_t)this, 0);
        if ( !v10 )
          goto LABEL_20;
      }
      v11 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17432/*"btn_bg_03"*/ : &StringLiteral_17433/*"btn_bg_04"*/);
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
  __int64 v11; // x2
  __int64 v12; // x22
  __int64 i; // x26
  __int64 v14; // x9

  v4 = this;
  if ( (byte_4C21D42 & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    this = (PresentBoxFilterSelectMenu_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    byte_4C21D42 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v8 = (unsigned int)rarityFilterKindList->fields._size;
  v9 = sub_1C2D538(bool___TypeInfo, (unsigned int)(v8 + size));
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
                                               (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_43628452(sort, (int32_t)this, 0);
      if ( !v9 )
        break;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
LABEL_21:
        sub_1C2D6F4(this, sort, v11);
      *(_BYTE *)(v9 + 32 + v10++) = (unsigned __int8)this & 1;
      if ( size == v10 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1C2D6EC(this, sort);
  }
LABEL_12:
  if ( (int)v8 >= 1 )
  {
    v12 = 0;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v12,
                                               (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_43628500(sort, (int32_t)this, 0);
      if ( !v9 )
        break;
      if ( size + v12 >= (unsigned __int64)*(unsigned int *)(v9 + 24) )
        goto LABEL_21;
      ++v12;
      v14 = v9 + (i >> 32);
      *(_BYTE *)(v14 + 32) = (unsigned __int8)this & 1;
      if ( v8 == v12 )
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

  if ( (byte_4C21D36 & 1) == 0 )
  {
    sub_1C2D490(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4C21D36 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C21D37 & 1) == 0 )
  {
    sub_1C2D490(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4C21D37 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1C2D9AC(v7);
  PresentBoxFilterSelectMenu__Init(v10, v11);
}


void PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A69CB0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69C68;
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
  if ( (byte_4C21D44 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C21D44 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(this->fields.__4__this, this->fields.kind, v2);
}