void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
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
  ListViewSort_o *v12; // x20
  System_Collections_Generic_List_T__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v21; // x10
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
  System_Collections_Generic_List_T__o *v35; // x20
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  System_Collections_Generic_List_object__o *v43; // x20

  if ( (byte_4B31FBD & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    sub_1BD3458(&ListViewSort_TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UISprite___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v9);
    sub_1BD3458(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_List_UISprite__TypeInfo, v11);
    byte_4B31FBD = 1;
  }
  v12 = (ListViewSort_o *)sub_1BD36A4(ListViewSort_TypeInfo);
  ListViewSort___ctor(v12, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v12;
  sub_1BD33FC(&this->fields.presentBoxSortInfo);
  v13 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v13 )
    goto LABEL_70;
  v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v13->fields._version;
  ++v13->fields._version;
  items = v13->fields._items;
  p_size = &v13->fields._size;
  size = v13->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      0,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      1,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 1;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      2,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 2;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      3,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 3;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      4,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 4;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      5,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 5;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      6,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 6;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      7,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 7;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      8,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 8;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      9,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 9;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      10,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 10;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      11,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 11;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      12,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 12;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      14,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 14;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      13,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v13;
  sub_1BD33FC(&this->fields.categoryFilterKindList);
  v35 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v35,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v35 )
    goto LABEL_70;
  v36 = v35->fields._items;
  v37 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v35->fields._version;
  if ( !v36 )
    goto LABEL_70;
  v38 = v35->fields._size;
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v35,
      4,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    v36 = v35->fields._items;
    v37 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v35->fields._version;
    if ( !v36 )
      goto LABEL_70;
  }
  else
  {
    v35->fields._size = v38 + 1;
    *((_DWORD *)v36->m_Items + v38) = 4;
    ++v35->fields._version;
  }
  v39 = v35->fields._size;
  if ( (unsigned int)v39 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v35,
      3,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    v36 = v35->fields._items;
    v37 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v35->fields._version;
    if ( !v36 )
      goto LABEL_70;
  }
  else
  {
    v35->fields._size = v39 + 1;
    *((_DWORD *)v36->m_Items + v39) = 3;
    ++v35->fields._version;
  }
  v40 = v35->fields._size;
  if ( (unsigned int)v40 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v35,
      2,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    v36 = v35->fields._items;
    v37 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v35->fields._version;
    if ( !v36 )
      goto LABEL_70;
  }
  else
  {
    v35->fields._size = v40 + 1;
    *((_DWORD *)v36->m_Items + v40) = 2;
    ++v35->fields._version;
  }
  v41 = v35->fields._size;
  if ( (unsigned int)v41 < v36->max_length )
  {
    v35->fields._size = v41 + 1;
    *((_DWORD *)v36->m_Items + v41) = 1;
    ++v35->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v35,
    1,
    *(const MethodInfo_35A6598 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  v36 = v35->fields._items;
  v37 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v35->fields._version;
  if ( !v36 )
LABEL_70:
    sub_1BD36B4(v14, v15);
LABEL_64:
  v42 = v35->fields._size;
  if ( (unsigned int)v42 >= v36->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v35,
      0,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v35->fields._size = v42 + 1;
    *((_DWORD *)v36->m_Items + v42) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v35;
  sub_1BD33FC(&this->fields.rarityFilterKindList);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v43;
  sub_1BD33FC(&this->fields.filterBtnSpriteList);
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
    sub_1BD33FC(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_31011684(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_31011684(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B31FB3 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_EndClose__, v5);
    byte_4B31FB3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BD33FC(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BD36B4(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BD33FC(&this->fields.closeCallbackFunc);
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
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  int size; // w25
  int32_t v23; // w20
  PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *v24; // x22
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  UnityEngine_GameObject_o *v32; // x1
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v35; // x24
  EventDelegate_o *v36; // x22
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v42; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v44; // w25
  int32_t v45; // w20
  PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *v46; // x22
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v48; // x21
  UnityEngine_GameObject_o *v49; // x0
  System_Collections_Generic_List_object__o *v50; // x23
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  UnityEngine_GameObject_o *v54; // x1
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_object__o *v56; // x23
  EventDelegate_Callback_o *v57; // x24
  EventDelegate_o *v58; // x22
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  ListViewSort_o *v63; // x22
  UILabel_o *v64; // x21

  if ( (byte_4B31FB4 & 1) == 0 )
  {
    sub_1BD3458(&EventDelegate_Callback_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_1BD3458(&EventDelegate_TypeInfo, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UISprite__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v15);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_1BD3458(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_1BD3458(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_4B31FB4 = 1;
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
      v23 = 0;
      while ( 1 )
      {
        v24 = (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)sub_1BD36A4(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(v24, 0LL);
        if ( !v24 )
          break;
        v24->fields.__4__this = this;
        sub_1BD33FC(&v24->fields.__4__this);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v26 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_34386852(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v26, 1, 0LL);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v26,
                                                     (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v30 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v31 = filterBtnSpriteList->fields._size;
        v32 = categoryGrid;
        if ( (unsigned int)v31 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + v31;
          filterBtnSpriteList->fields._size = v31 + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1BD33FC(v33 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        v24->fields.kind = System_Collections_Generic_List_Int32Enum___get_Item(
                             (System_Collections_Generic_List_T__o *)categoryGrid,
                             v23,
                             (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v26,
                                                     (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v35 = (EventDelegate_Callback_o *)sub_1BD36A4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v35,
          (Il2CppObject *)v24,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v36 = (EventDelegate_o *)sub_1BD36A4(EventDelegate_TypeInfo);
        EventDelegate___ctor_47473860(v36, v35, 0LL);
        if ( !monitor )
          break;
        v37 = monitor->fields._items;
        v38 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( !v37 )
          break;
        v39 = monitor->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            (Il2CppObject *)v36,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          monitor->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v36;
          sub_1BD33FC(v40 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v26, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v42 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v23,
                                                     (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v42 )
          break;
        UILabel__set_text(v42, (System_String_o *)categoryGrid, 0LL);
        if ( size == ++v23 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1BD36B4(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v44 = rarityFilterKindList->fields._size;
    if ( v44 >= 1 )
    {
      v45 = 0;
      do
      {
        v46 = (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)sub_1BD36A4(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(v46, 0LL);
        if ( !v46 )
          goto LABEL_63;
        v46->fields.__4__this = this;
        sub_1BD33FC(&v46->fields.__4__this);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v48 = categoryGrid;
        v49 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_34386852(v49, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        v50 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v48,
                                                     (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v50 )
          goto LABEL_63;
        v51 = v50->fields._items;
        v52 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v50->fields._version;
        if ( !v51 )
          goto LABEL_63;
        v53 = v50->fields._size;
        v54 = categoryGrid;
        if ( (unsigned int)v53 >= v51->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v50,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v51->obj.klass + v53;
          v50->fields._size = v53 + 1;
          v55[4] = (Il2CppClass *)v54;
          sub_1BD33FC(v55 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        v46->fields.kind = System_Collections_Generic_List_Int32Enum___get_Item(
                             (System_Collections_Generic_List_T__o *)categoryGrid,
                             v45,
                             (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v48,
                                                     (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v56 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v57 = (EventDelegate_Callback_o *)sub_1BD36A4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v57,
          (Il2CppObject *)v46,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v58 = (EventDelegate_o *)sub_1BD36A4(EventDelegate_TypeInfo);
        EventDelegate___ctor_47473860(v58, v57, 0LL);
        if ( !v56 )
          goto LABEL_63;
        v59 = v56->fields._items;
        v60 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v56->fields._version;
        if ( !v59 )
          goto LABEL_63;
        v61 = v56->fields._size;
        if ( (unsigned int)v61 >= v59->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v56,
            (Il2CppObject *)v58,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v59->obj.klass + v61;
          v56->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)v58;
          sub_1BD33FC(v62 + 4);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v48, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v63 = this->fields.operationSortInfo;
        v64 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v45,
                                                     (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v63 )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     v63,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v64 )
          goto LABEL_63;
        UILabel__set_text(v64, (System_String_o *)categoryGrid, 0LL);
      }
      while ( v44 != ++v45 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
        sub_1BD36BC(v4, v5, v6, v7);
      if ( !v11[v10] != v4->m_Items[v10 + 4] )
      {
        v12 = (__int64)++v10 < (int)v9;
        if ( v9 != v10 )
          continue;
      }
      return v12;
    }
LABEL_11:
    sub_1BD36B4(v4, v5);
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

  if ( (byte_4B31FB8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__, v6);
    byte_4B31FB8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
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
                                                                           (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_41608936(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1BD36B4(categoryFilterKindList, v9);
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
                                                                           (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_41608988(v16, (int32_t)categoryFilterKindList, 1, 0LL);
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

  if ( (byte_4B31FB7 & 1) == 0 )
  {
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickCancel__, method);
    byte_4B31FB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
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
  if ( (byte_4B31FB6 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickDecide__, method);
    byte_4B31FB6 = 1;
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
      v7 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BD36B4(this, method);
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
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B31FBA & 1) == 0 )
  {
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickFilter__, *(_QWORD *)&kind);
    byte_4B31FBA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BD36B4(0LL, v7);
    ListViewSort__SwitchFilter_41609968(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
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

  if ( (byte_4B31FB9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__, v6);
    byte_4B31FB9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
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
                                                                           (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_41608936(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1BD36B4(categoryFilterKindList, v9);
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
                                                                           (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_41608988(v16, (int32_t)categoryFilterKindList, 0, 0LL);
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
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B31FBB & 1) == 0 )
  {
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__, *(_QWORD *)&kind);
    byte_4B31FBB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BD3470(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BD36B4(0LL, v7);
    ListViewSort__SwitchFilter_41610024(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1BD36B4(0LL, method);
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
  ListViewSort_o *v21; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v34; // x8
  System_Action_o *v35; // x20

  v6 = this;
  if ( (byte_4B31FB2 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, sort);
    sub_1BD3458(&ListViewSort_TypeInfo, v7);
    sub_1BD3458(&LocalizationManager_TypeInfo, v8);
    sub_1BD3458(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_1BD3458(&StringLiteral_11994/*"SERVANT_SORT_RESET"*/, v10);
    sub_1BD3458(&StringLiteral_10581/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_1BD3458(&StringLiteral_11843/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_1BD3458(&StringLiteral_11847/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_1BD3458(&StringLiteral_11996/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_1BD3458(&StringLiteral_11844/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_1BD3458(&StringLiteral_10559/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BD3458(&StringLiteral_10580/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_4B31FB2 = 1;
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
        sub_1BD33FC(&v6->fields.callbackFunc);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1BD33FC(&v6->fields.baseSortInfo);
        }
        else
        {
          v6->fields.baseSortInfo = v6->fields.presentBoxSortInfo;
          sub_1BD33FC(&v6->fields.baseSortInfo);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v6->fields.kindStatus = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v19);
        sub_1BD33FC(&v6->fields.kindStatus);
        baseSortInfo = v6->fields.baseSortInfo;
        v21 = (ListViewSort_o *)sub_1BD36A4(ListViewSort_TypeInfo);
        ListViewSort___ctor_41582320(v21, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v21;
        sub_1BD33FC(&v6->fields.operationSortInfo);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10559/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10580/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10581/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11847/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11844/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11843/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11994/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v30);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v31);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v32);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v34 = v6->fields.baseSortInfo;
                            if ( v34 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v34->fields.scrollBarValue, 0LL);
                                v6->fields.state = 1;
                                v35 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v35,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v35, 0, 0LL);
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
    sub_1BD36B4(this, sort);
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
    sub_1BD36B4(decideButton, isEnable);
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
  if ( (byte_4B31FB5 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v6);
    sub_1BD3458(&StringLiteral_17670/*"btn_bg_04"*/, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BD3458(&StringLiteral_17669/*"btn_bg_03"*/, v8);
    byte_4B31FB5 = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList) == 0LL )
LABEL_20:
    sub_1BD36B4(this, method);
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
               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                                                 (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41608156(operationSortInfo, (int32_t)this, 0LL);
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
                                                 (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41608108(operationSortInfo, (int32_t)this, 0LL);
        if ( !v16 )
          goto LABEL_20;
      }
      v17 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17669/*"btn_bg_03"*/ : &StringLiteral_17670/*"btn_bg_04"*/);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x22
  __int64 i; // x26
  char *v19; // x9

  v4 = this;
  if ( (byte_4B31FBC & 1) == 0 )
  {
    sub_1BD3458(&bool___TypeInfo, sort);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1BD3458(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v8);
    byte_4B31FBC = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v12 = (unsigned int)rarityFilterKindList->fields._size;
  v13 = (System_Boolean_array *)sub_1BD3500(bool___TypeInfo, (unsigned int)(v12 + size));
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
                                               (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41608108(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
LABEL_21:
        sub_1BD36BC(this, sort, v15, v16);
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( size == v14 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1BD36B4(this, sort);
  }
LABEL_12:
  if ( (int)v12 >= 1 )
  {
    v17 = 0LL;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v17,
                                               (const MethodInfo_35A62A8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_41608156(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( size + v17 >= (unsigned __int64)v13->max_length )
        goto LABEL_21;
      ++v17;
      v19 = (char *)v13 + (i >> 32);
      v19[32] = (unsigned __int8)this & 1;
      if ( v12 == v17 )
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

  if ( (byte_4B31FB0 & 1) == 0 )
  {
    sub_1BD3458(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B31FB0 = 1;
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
    v8 = sub_1C0E948(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1BD3974(v7);
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

  if ( (byte_4B31FB1 & 1) == 0 )
  {
    sub_1BD3458(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B31FB1 = 1;
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
    v8 = sub_1C0E948(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_1BD3974(v7);
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
  sub_1BD33FC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BD3518(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0ED10;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0ECC8;
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
  if ( (byte_4B3290A & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, result);
    byte_4B3290A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BD340C(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
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
    sub_1BD36B4(0LL, method);
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
    sub_1BD36B4(0LL, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}