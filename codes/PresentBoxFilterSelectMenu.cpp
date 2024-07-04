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
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_T__o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  _QWORD *v20; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
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
  __int64 v38; // x10
  System_Collections_Generic_List_T__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  System_Collections_Generic_List_object__o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3

  if ( (byte_48E6343 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    sub_1B00CCC(&ListViewSort_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_List_UISprite__TypeInfo, v11);
    byte_48E6343 = 1;
  }
  v12 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
  ListViewSort___ctor(v12, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v12;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxSortInfo, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v15 )
    goto LABEL_70;
  v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
  p_version = &v15->fields._version;
  ++v15->fields._version;
  items = v15->fields._items;
  p_size = &v15->fields._size;
  size = v15->fields._size;
  if ( !items )
    goto LABEL_70;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      1,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 1;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 2;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 3;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 4;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      5,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 5;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 6;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      7,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 7;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      8,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 8;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      9,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 9;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      10,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 10;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      11,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 11;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      12,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 12;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      14,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_70;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 14;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      13,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)items->m_Items + v38) = 13;
  }
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.categoryFilterKindList, (int32_t)v15, v18, v19);
  v39 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v39,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v39 )
    goto LABEL_70;
  v42 = v39->fields._items;
  v43 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v39->fields._version;
  if ( !v42 )
    goto LABEL_70;
  v44 = v39->fields._size;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    v42 = v39->fields._items;
    v43 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v42 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v44 + 1;
    *((_DWORD *)v42->m_Items + v44) = 4;
    ++v39->fields._version;
  }
  v45 = v39->fields._size;
  if ( (unsigned int)v45 >= v42->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    v42 = v39->fields._items;
    v43 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v42 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v45 + 1;
    *((_DWORD *)v42->m_Items + v45) = 3;
    ++v39->fields._version;
  }
  v46 = v39->fields._size;
  if ( (unsigned int)v46 >= v42->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    v42 = v39->fields._items;
    v43 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
    ++v39->fields._version;
    if ( !v42 )
      goto LABEL_70;
  }
  else
  {
    v39->fields._size = v46 + 1;
    *((_DWORD *)v42->m_Items + v46) = 2;
    ++v39->fields._version;
  }
  v47 = v39->fields._size;
  if ( (unsigned int)v47 < v42->max_length )
  {
    v39->fields._size = v47 + 1;
    *((_DWORD *)v42->m_Items + v47) = 1;
    ++v39->fields._version;
    goto LABEL_64;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v39,
    1,
    *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  v42 = v39->fields._items;
  v43 = Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__;
  ++v39->fields._version;
  if ( !v42 )
LABEL_70:
    sub_1B00F28(v16, v17);
LABEL_64:
  v48 = v39->fields._size;
  if ( (unsigned int)v48 >= v42->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v39->fields._size = v48 + 1;
    *((_DWORD *)v42->m_Items + v48) = 0;
  }
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v39;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.rarityFilterKindList, (int32_t)v39, v40, v41);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v49;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.filterBtnSpriteList, (int32_t)v49, v50, v51);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__Callback(
        PresentBoxFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B00C70(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_44136060(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_44136060(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_48E6339 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_EndClose__, v6);
    byte_48E6339 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
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
  __int64 v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *filterBtnSpriteList; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  UnityEngine_GameObject_o *v36; // x1
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_object__o *monitor; // x23
  EventDelegate_Callback_o *v39; // x24
  EventDelegate_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v48; // x21
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  int v50; // w25
  int32_t v51; // w20
  __int64 v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *templateRarityButton; // x21
  UnityEngine_GameObject_o *v56; // x21
  UnityEngine_GameObject_o *v57; // x0
  System_Collections_Generic_List_object__o *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  UnityEngine_GameObject_o *v64; // x1
  Il2CppClass **v65; // x0
  System_Collections_Generic_List_object__o *v66; // x23
  EventDelegate_Callback_o *v67; // x24
  EventDelegate_o *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  ListViewSort_o *v75; // x22
  UILabel_o *v76; // x21

  if ( (byte_48E633A & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_Callback_TypeInfo, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_1B00CCC(&EventDelegate_TypeInfo, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_1B00CCC(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_1B00CCC(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_48E633A = 1;
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
        v24 = sub_1B00F18(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0LL);
        if ( !v24 )
          break;
        *(_QWORD *)(v24 + 24) = this;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)this, v25, v26);
        templateCategoryButton = (Il2CppObject *)this->fields.templateCategoryButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateCategoryButton,
                                                     (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v28 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32541256(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v28, 1, 0LL);
        filterBtnSpriteList = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v28,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        items = filterBtnSpriteList->fields._items;
        v34 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++filterBtnSpriteList->fields._version;
        if ( !items )
          break;
        v35 = filterBtnSpriteList->fields._size;
        v36 = categoryGrid;
        if ( (unsigned int)v35 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            filterBtnSpriteList,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + v35;
          filterBtnSpriteList->fields._size = v35 + 1;
          v37[4] = (Il2CppClass *)v36;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.categoryFilterKindList;
        if ( !categoryGrid )
          break;
        *(_DWORD *)(v24 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v23,
                                  (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v28,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        monitor = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v39 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v39,
          (Il2CppObject *)v24,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v40 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
        EventDelegate___ctor_45649980(v40, v39, 0LL);
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
            (Il2CppObject *)v40,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          monitor->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v40;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v28, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.categoryFilterKindList )
          break;
        operationSortInfo = this->fields.operationSortInfo;
        v48 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList,
                                                     v23,
                                                     (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     operationSortInfo,
                                                     (int32_t)categoryGrid,
                                                     0LL);
        if ( !v48 )
          break;
        UILabel__set_text(v48, (System_String_o *)categoryGrid, 0LL);
        if ( size == ++v23 )
          goto LABEL_30;
      }
LABEL_63:
      sub_1B00F28(categoryGrid, method);
    }
LABEL_30:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v50 = rarityFilterKindList->fields._size;
    if ( v50 >= 1 )
    {
      v51 = 0;
      do
      {
        v52 = sub_1B00F18(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v52, 0LL);
        if ( !v52 )
          goto LABEL_63;
        *(_QWORD *)(v52 + 24) = this;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v52 + 24), (int32_t)this, v53, v54);
        templateRarityButton = (Il2CppObject *)this->fields.templateRarityButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                     templateRarityButton,
                                                     (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_63;
        v56 = categoryGrid;
        v57 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32541256(v57, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v56, 1, 0LL);
        v58 = (System_Collections_Generic_List_object__o *)this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v56,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v58 )
          goto LABEL_63;
        v61 = v58->fields._items;
        v62 = Method_System_Collections_Generic_List_UISprite__Add__;
        ++v58->fields._version;
        if ( !v61 )
          goto LABEL_63;
        v63 = v58->fields._size;
        v64 = categoryGrid;
        if ( (unsigned int)v63 >= v61->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)categoryGrid,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v61->obj.klass + v63;
          v58->fields._size = v63 + 1;
          v65[4] = (Il2CppClass *)v64;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v64, v59, v60);
        }
        categoryGrid = (UnityEngine_GameObject_o *)this->fields.rarityFilterKindList;
        if ( !categoryGrid )
          goto LABEL_63;
        *(_DWORD *)(v52 + 16) = System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)categoryGrid,
                                  v51,
                                  (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     v56,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_63;
        v66 = (System_Collections_Generic_List_object__o *)categoryGrid[4].monitor;
        v67 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v67,
          (Il2CppObject *)v52,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v68 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
        EventDelegate___ctor_45649980(v68, v67, 0LL);
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
            (Il2CppObject *)v68,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v66->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)v68;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v68, v69, v70);
        }
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v56, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_63;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        if ( !this->fields.rarityFilterKindList )
          goto LABEL_63;
        v75 = this->fields.operationSortInfo;
        v76 = (UILabel_o *)categoryGrid;
        categoryGrid = (UnityEngine_GameObject_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                     (System_Collections_Generic_List_T__o *)this->fields.rarityFilterKindList,
                                                     v51,
                                                     (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
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
      while ( v50 != ++v51 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_63;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 categoryGrid,
                                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
        sub_1B00F30(v4, v5);
      if ( !v9[v8] != v4->m_Items[v8 + 4] )
      {
        v10 = (__int64)++v8 < (int)v7;
        if ( v7 != v8 )
          continue;
      }
      return v10;
    }
LABEL_11:
    sub_1B00F28(v4, v5);
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

  if ( (byte_48E633E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickAllSelect__, v6);
    byte_48E633E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickAllSelect__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickAllSelect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickAllSelect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
                                                                           (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_39491848(operationSortInfo, (int32_t)categoryFilterKindList, 1, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1B00F28(categoryFilterKindList, v9);
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
                                                                           (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_39491900(v16, (int32_t)categoryFilterKindList, 1, 0LL);
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

  if ( (byte_48E633D & 1) == 0 )
  {
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickCancel__, method);
    byte_48E633D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentBoxFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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
  if ( (byte_48E633C & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickDecide__, method);
    byte_48E633C = 1;
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
      v7 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1B00F28(this, method);
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

  if ( (byte_48E6340 & 1) == 0 )
  {
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickFilter__, *(_QWORD *)&kind);
    byte_48E6340 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(0LL, v7);
    ListViewSort__SwitchFilter_39492880(operationSortInfo, kind, 0LL);
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

  if ( (byte_48E633F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickInitialize__, v6);
    byte_48E633F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PresentBoxFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickInitialize__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
                                                                           (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          break;
        ListViewSort__SetFilter_39491848(operationSortInfo, (int32_t)categoryFilterKindList, 0, 0LL);
        if ( size == ++v12 )
          goto LABEL_14;
        categoryFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_20:
      sub_1B00F28(categoryFilterKindList, v9);
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
                                                                           (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !v16 )
          break;
        ListViewSort__SetFilter_39491900(v16, (int32_t)categoryFilterKindList, 0, 0LL);
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

  if ( (byte_48E6341 & 1) == 0 )
  {
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__, *(_QWORD *)&kind);
    byte_48E6341 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__;
    if ( (*((_BYTE *)Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_PresentBoxFilterSelectMenu_OnClickRarityFilter__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(0LL, v7);
    ListViewSort__SwitchFilter_39492936(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_1B00F28(0LL, method);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  struct ListViewSort_o *v24; // x1
  System_Boolean_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *categoryFilterTitle; // x20
  UILabel_o *rarityFilterTitle; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  struct UIScrollView_o *filterScrollView; // x9
  struct ListViewSort_o *v44; // x8
  System_Action_o *v45; // x20

  v6 = this;
  if ( (byte_48E6338 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, sort);
    sub_1B00CCC(&ListViewSort_TypeInfo, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_1B00CCC(&StringLiteral_11646/*"SERVANT_SORT_RESET"*/, v10);
    sub_1B00CCC(&StringLiteral_10304/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_1B00CCC(&StringLiteral_11496/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_1B00CCC(&StringLiteral_11500/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_1B00CCC(&StringLiteral_11648/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_1B00CCC(&StringLiteral_11497/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_1B00CCC(&StringLiteral_10282/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B00CCC(&StringLiteral_10303/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_48E6338 = 1;
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
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v19, v20);
        if ( sort )
        {
          v6->fields.baseSortInfo = sort;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.baseSortInfo, (int32_t)sort, v21, v22);
        }
        else
        {
          v24 = v6->fields.presentBoxSortInfo;
          v6->fields.baseSortInfo = v24;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.baseSortInfo, (int32_t)v24, v21, v22);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_25;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v25 = PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v23);
        v6->fields.kindStatus = v25;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.kindStatus, (int32_t)v25, v26, v27);
        baseSortInfo = v6->fields.baseSortInfo;
        v29 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
        ListViewSort___ctor_39465708(v29, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v29;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.operationSortInfo, (int32_t)v29, v30, v31);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          titleLabel = v6->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11648/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10303/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10304/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11500/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11497/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11496/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11646/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v40);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v41);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v42);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            v44 = v6->fields.baseSortInfo;
                            if ( v44 )
                            {
                              this = (PresentBoxFilterSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
                              if ( this )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)this, v44->fields.scrollBarValue, 0LL);
                                v6->fields.state = 1;
                                v45 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v45,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v45, 0, 0LL);
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
    sub_1B00F28(this, sort);
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
    sub_1B00F28(decideButton, isEnable);
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
  if ( (byte_48E633B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v6);
    sub_1B00CCC(&StringLiteral_17233/*"btn_bg_04"*/, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B00CCC(&StringLiteral_17232/*"btn_bg_03"*/, v8);
    byte_48E633B = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList || (this = (PresentBoxFilterSelectMenu_o *)v2->fields.filterBtnSpriteList) == 0LL )
LABEL_20:
    sub_1B00F28(this, method);
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
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
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
                                                 (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_39491068(operationSortInfo, (int32_t)this, 0LL);
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
                                                 (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
        if ( !operationSortInfo )
          goto LABEL_20;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_39491020(operationSortInfo, (int32_t)this, 0LL);
        if ( !v16 )
          goto LABEL_20;
      }
      v17 = (System_String_o **)(((unsigned __int8)this & 1) != 0 ? &StringLiteral_17232/*"btn_bg_03"*/ : &StringLiteral_17233/*"btn_bg_04"*/);
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
  __int64 v15; // x22
  __int64 i; // x26
  char *v17; // x9

  v4 = this;
  if ( (byte_48E6342 & 1) == 0 )
  {
    sub_1B00CCC(&bool___TypeInfo, sort);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_1B00CCC(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v8);
    byte_48E6342 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_20;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_20;
  size = (unsigned int)categoryFilterKindList->fields._size;
  v12 = (unsigned int)rarityFilterKindList->fields._size;
  v13 = (System_Boolean_array *)sub_1B00D74(bool___TypeInfo, (unsigned int)(v12 + size));
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
                                               (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_39491020(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
LABEL_21:
        sub_1B00F30(this, sort);
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( size == v14 )
        goto LABEL_12;
    }
LABEL_20:
    sub_1B00F28(this, sort);
  }
LABEL_12:
  if ( (int)v12 >= 1 )
  {
    v15 = 0LL;
    for ( i = size << 32; ; i += 0x100000000LL )
    {
      this = (PresentBoxFilterSelectMenu_o *)v4->fields.rarityFilterKindList;
      if ( !this )
        break;
      this = (PresentBoxFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                               (System_Collections_Generic_List_T__o *)this,
                                               v15,
                                               (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_39491068(sort, (int32_t)this, 0LL);
      if ( !v13 )
        break;
      if ( size + v15 >= (unsigned __int64)v13->max_length )
        goto LABEL_21;
      ++v15;
      v17 = (char *)v13 + (i >> 32);
      v17[32] = (unsigned __int8)this & 1;
      if ( v12 == v15 )
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

  if ( (byte_48E6336 & 1) == 0 )
  {
    sub_1B00CCC(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_48E6336 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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

  if ( (byte_48E6337 & 1) == 0 )
  {
    sub_1B00CCC(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_48E6337 = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_194FE48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194FE00;
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
  if ( (byte_48E6344 & 1) == 0 )
  {
    sub_1B00CCC(&bool_TypeInfo, result);
    byte_48E6344 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(this->fields.__4__this, this->fields.kind, v2);
}