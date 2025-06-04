void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFDA78 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_17288/*"btn_bg_04"*/, v4);
    sub_1BC3008(&StringLiteral_17287/*"btn_bg_03"*/, v5);
    byte_4AFDA78 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17287/*"btn_bg_03"*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17287/*"btn_bg_03"*/,
    v2,
    v3);
  v6 = StringLiteral_17288/*"btn_bg_04"*/;
  static_fields = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17288/*"btn_bg_04"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->DISABLE_BUTTON_SPRITE, v6, v8, v9);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _QWORD *v12; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  ListViewSort_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4AFDA77 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&ListViewSort_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo, v6);
    byte_4AFDA77 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3685DF4 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v7 )
    goto LABEL_47;
  v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  p_version = &v7->fields._version;
  ++v7->fields._version;
  items = v7->fields._items;
  p_size = &v7->fields._size;
  size = v7->fields._size;
  if ( !items )
    goto LABEL_47;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      0,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      1,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 1;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      2,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 2;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      3,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 3;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      4,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 4;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      5,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 5;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      6,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 6;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      7,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 7;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      8,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 8;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      9,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 9;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      10,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 10;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 < items->max_length )
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 11;
    ++*p_version;
    goto LABEL_41;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v7,
    11,
    *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  items = v7->fields._items;
  v12 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v7->fields._version;
  if ( !items )
LABEL_47:
    sub_1BC3264(v8, v9);
LABEL_41:
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      12,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 12;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.categoryFilterKind, (int32_t)v7, v10, v11);
  v29 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor(v29, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v29;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.autoOrganizationSortInfo, (int32_t)v29, v30, v31);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Awake(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Callback(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_33271616(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_33271616(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4AFDA6A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_4AFDA6A = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndClose(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4AFDA75 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, v1);
    sub_1BC3008(&string___TypeInfo, v2);
    sub_1BC3008(&StringLiteral_2073/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v3);
    sub_1BC3008(&StringLiteral_2072/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v4);
    byte_4AFDA75 = 1;
  }
  v5 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  if ( !*(_DWORD *)(v5 + 24)
    || (*(_QWORD *)(v5 + 32) = v6,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9),
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2072/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL),
        *(_DWORD *)(v5 + 24) <= 1u) )
  {
    sub_1BC326C(v6, v7, v8);
  }
  *(_QWORD *)(v5 + 40) = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v6, v8, v10);
  return (System_String_array *)v5;
}


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  System_Boolean_array *v9; // x22
  unsigned __int64 v10; // x23
  __int64 v11; // x2

  v4 = this;
  if ( (byte_4AFDA73 & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, sort);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__,
      v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3008(
                                                                 &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
                                                                 v6);
    byte_4AFDA73 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v9 = (System_Boolean_array *)sub_1BC30B0(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)this,
                                                                   v10,
                                                                   (const MethodInfo_3686358 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_42829936(
                                                                   sort,
                                                                   (int32_t)this,
                                                                   0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
        sub_1BC326C(this, sort, v11);
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( size == v10 )
        return v9;
    }
LABEL_12:
    sub_1BC3264(this, sort);
  }
  return v9;
}


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w19
  ListViewSort_o *operationSortInfo; // x0

  v3 = 6;
  do
  {
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BC3264(0LL, method);
    if ( ListViewSort__GetFilter_42829936(operationSortInfo, v3 + 6, 0LL) )
      break;
    --v3;
  }
  while ( v3 );
  return v3;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Init(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4AFDA70 & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_4AFDA70 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0
  struct ListViewSort_o *v8; // x8

  if ( (byte_4AFDA71 & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_4AFDA71 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_42830756(operationSortInfo, i, 0, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
        goto LABEL_17;
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    if ( !this->fields.preQuest )
    {
LABEL_15:
      PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
      return;
    }
    v8 = this->fields.operationSortInfo;
    if ( v8 )
    {
      v8->fields.autoOrganizationMode = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_1BC3264(operationSortInfo, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x2
  float value; // s0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Int32_array *eventIdList; // x21
  __int64 v17; // x8
  System_String_o *v18; // x20
  unsigned __int64 v19; // x22
  int v20; // w26
  Il2CppObject *v21; // x0
  ListViewSort_o *v22; // x20
  const MethodInfo *v23; // x2
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4AFDA6F & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v3);
    sub_1BC3008(&StringLiteral_2479/*"AutoOrganizationBonusFilterEventId"*/, v4);
    sub_1BC3008(&StringLiteral_806/*","*/, v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFDA6F = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_26;
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_26;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v9);
    v2->fields.state = 3;
    v11 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      v17 = *(_QWORD *)&eventIdList->max_length;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v17 >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)v17 )
            sub_1BC326C(this, method, v13);
          if ( !v18 )
            break;
          v20 = eventIdList->m_Items[v19 + 1];
          if ( v18->fields._stringLength >= 1 )
            v18 = System_String__Concat_62348648(v18, (System_String_o *)StringLiteral_806/*","*/, 0LL);
          v24 = v20;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v13, v14, v15);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v18,
                                                                       v21,
                                                                       0LL);
          LODWORD(v17) = eventIdList->max_length;
          ++v19;
          v18 = (System_String_o *)this;
          if ( (__int64)v19 >= (int)v17 )
            goto LABEL_17;
        }
LABEL_26:
        sub_1BC3264(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2479/*"AutoOrganizationBonusFilterEventId"*/, v18, 0LL);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v22 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v22 )
        goto LABEL_26;
      ListViewSort__SetFilter(v22, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v23);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4AFDA72 & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_4AFDA72 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_42830756(operationSortInfo, i, 1, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_1BC3264(operationSortInfo, v5);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4AFDA6C & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_4AFDA6C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BC3264(0LL, v7);
    ListViewSort__SwitchFilter_42831828(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t unit,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  int32_t i; // w21
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4AFDA6E & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, *(_QWORD *)&unit);
    byte_4AFDA6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    for ( i = 0; i != 6; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BC3264(0LL, v7);
      ListViewSort__SetFilter_42830756(operationSortInfo, i + 7, i < unit, 0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4AFDA6D & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, method);
    byte_4AFDA6D = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    for ( i = 7; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BC3264(0LL, v6);
      ListViewSort__SetFilter_42830756(operationSortInfo, i, 0, 0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) >= 2 )
    v4 = 1;
  else
    v4 = 2;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) >= 3 )
    v4 = 2;
  else
    v4 = 3;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) >= 4 )
    v4 = 3;
  else
    v4 = 4;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) >= 5 )
    v4 = 4;
  else
    v4 = 5;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit6(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) >= 6 )
    v4 = 5;
  else
    v4 = 6;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Open(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v53; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  ListViewSort_o *v58; // x21
  ListViewSort_o *v59; // x22
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *kindTitleLabel; // x21
  UILabel_o *rarityTitleLabel; // x21
  UILabel_o *unitTitleLabel; // x21
  UILabel_o *eventEquipTitleLabel; // x21
  UILabel_o *eventEquipExplanationLabel; // x21
  UILabel_o *kindServantLabel; // x21
  UILabel_o *kindServantEquipLabel; // x21
  UILabel_o *rarity1Label; // x21
  UILabel_o *rarity2Label; // x21
  UILabel_o *rarity3Label; // x21
  UILabel_o *rarity4Label; // x21
  UILabel_o *rarity5Label; // x21
  __int64 v80; // x2
  const MethodInfo *v81; // x3
  struct UILabel_o *unit1Label; // x22
  ListViewSort_o *v83; // x21
  const MethodInfo *v84; // x3
  struct UILabel_o *unit2Label; // x22
  const MethodInfo *v86; // x3
  struct UILabel_o *unit3Label; // x22
  const MethodInfo *v88; // x3
  struct UILabel_o *unit4Label; // x22
  const MethodInfo *v90; // x3
  struct UILabel_o *unit5Label; // x22
  const MethodInfo *v92; // x3
  struct UILabel_o *unit6Label; // x22
  __int64 v94; // x8
  __int64 v95; // x25
  UILabel_o *v96; // x22
  System_String_o *v97; // x23
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x0
  UILabel_o *unitExplanationLabel; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v106; // x0
  struct GameOptionRadioButtonGroup_o *v107; // x20
  System_Action_int__o *v108; // x21
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  bool v111; // w1
  int32_t v112; // w8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v118; // x20
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v120; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v123; // x9
  struct ListViewSort_o *v124; // x8
  const MethodInfo *v125; // x2
  System_Action_o *v126; // x20
  __int64 v127; // x0
  UnityEngine_Bounds_o v128; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4AFDA69 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, sort);
    sub_1BC3008(&System_Action_TypeInfo, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v13);
    sub_1BC3008(&DataManager_TypeInfo, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v15);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1BC3008(&int___TypeInfo, v17);
    sub_1BC3008(&int_TypeInfo, v18);
    sub_1BC3008(&ListViewSort_TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v20);
    sub_1BC3008(&LocalizationManager_TypeInfo, v21);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v22);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v23);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, v24);
    sub_1BC3008(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v25);
    sub_1BC3008(&UILabel___TypeInfo, v26);
    sub_1BC3008(&StringLiteral_11769/*"SERVANT_SORT_RESET"*/, v27);
    sub_1BC3008(&StringLiteral_2066/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, v28);
    sub_1BC3008(&StringLiteral_2071/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v29);
    sub_1BC3008(&StringLiteral_2077/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, v30);
    sub_1BC3008(&StringLiteral_2069/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v31);
    sub_1BC3008(&StringLiteral_11691/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v32);
    sub_1BC3008(&StringLiteral_11518/*"SERVANT_EQUIP_TAKE"*/, v33);
    sub_1BC3008(&StringLiteral_11603/*"SERVANT_SORT_CANCEL"*/, v34);
    sub_1BC3008(&StringLiteral_2067/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, v35);
    sub_1BC3008(&StringLiteral_2068/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v36);
    sub_1BC3008(&StringLiteral_11607/*"SERVANT_SORT_DECIDE"*/, v37);
    sub_1BC3008(&StringLiteral_11690/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v38);
    sub_1BC3008(&StringLiteral_2070/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v39);
    sub_1BC3008(&StringLiteral_11891/*"SERVANT_UNIT"*/, v40);
    sub_1BC3008(&StringLiteral_11689/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v41);
    sub_1BC3008(&StringLiteral_11687/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v42);
    sub_1BC3008(&StringLiteral_2074/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v43);
    sub_1BC3008(&StringLiteral_11604/*"SERVANT_SORT_CLEAR"*/, v44);
    sub_1BC3008(&StringLiteral_2075/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v45);
    sub_1BC3008(&StringLiteral_11890/*"SERVANT_TAKE"*/, v46);
    sub_1BC3008(&StringLiteral_2076/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, v47);
    sub_1BC3008(&StringLiteral_11688/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v48);
    byte_4AFDA69 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      eventId,
      (const MethodInfo *)preQuest);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v49, v50);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)autoOrganizationSortInfo, v49, v50);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_108;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v51);
    this->fields.oldSettingStatus = SettingState;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.oldSettingStatus, (int32_t)SettingState, v56, v57);
    v58 = this->fields.baseSortInfo;
    v59 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
    ListViewSort___ctor_42803372(v59, v58, 0LL);
    this->fields.operationSortInfo = v59;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v59, v60, v61);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2075/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_108;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_108;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    clearLabel = this->fields.clearLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_108;
    UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_108;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    initializeLabel = this->fields.initializeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !initializeLabel )
      goto LABEL_108;
    UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2068/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_108;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindTitleLabel = this->fields.kindTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2069/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
    if ( !kindTitleLabel )
      goto LABEL_108;
    UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    rarityTitleLabel = this->fields.rarityTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2074/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
    if ( !rarityTitleLabel )
      goto LABEL_108;
    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    unitTitleLabel = this->fields.unitTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, 0LL);
    if ( !unitTitleLabel )
      goto LABEL_108;
    UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, 0LL);
    if ( !eventEquipTitleLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2067/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, 0LL);
    if ( !eventEquipExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantLabel = this->fields.kindServantLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_TAKE"*/, 0LL);
    if ( !kindServantLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantEquipLabel = this->fields.kindServantEquipLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11518/*"SERVANT_EQUIP_TAKE"*/, 0LL);
    if ( !kindServantEquipLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
    rarity1Label = this->fields.rarity1Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !rarity1Label )
      goto LABEL_108;
    UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
    rarity2Label = this->fields.rarity2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11691/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !rarity2Label )
      goto LABEL_108;
    UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
    rarity3Label = this->fields.rarity3Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !rarity3Label )
      goto LABEL_108;
    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
    rarity4Label = this->fields.rarity4Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    if ( !rarity4Label )
      goto LABEL_108;
    UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
    rarity5Label = this->fields.rarity5Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    if ( !rarity5Label )
      goto LABEL_108;
    UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
    baseSortInfo = (ListViewSort_o *)sub_1BC30B0(UILabel___TypeInfo, 6LL);
    if ( !baseSortInfo )
      goto LABEL_108;
    unit1Label = this->fields.unit1Label;
    v83 = baseSortInfo;
    if ( unit1Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit1Label, baseSortInfo->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( !*(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_109;
    v83->fields.manager = (struct ListViewManager_o *)unit1Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.manager, (int32_t)unit1Label, v80, v81);
    unit2Label = this->fields.unit2Label;
    if ( unit2Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit2Label, v83->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE <= 1u )
      goto LABEL_109;
    v83->fields.saveKey = (struct System_String_o *)unit2Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.saveKey, (int32_t)unit2Label, v80, v84);
    unit3Label = this->fields.unit3Label;
    if ( unit3Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit3Label, v83->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE <= 2u )
      goto LABEL_109;
    *(_QWORD *)&v83->fields.defaultSortKind = unit3Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.defaultSortKind, (int32_t)unit3Label, v80, v86);
    unit4Label = this->fields.unit4Label;
    if ( unit4Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit4Label, v83->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE <= 3u )
      goto LABEL_109;
    *(_QWORD *)&v83->fields.sortKind = unit4Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.sortKind, (int32_t)unit4Label, v80, v88);
    unit5Label = this->fields.unit5Label;
    if ( unit5Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit5Label, v83->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE <= 4u )
      goto LABEL_109;
    *(_QWORD *)&v83->fields.bonusKind = unit5Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.bonusKind, (int32_t)unit5Label, v80, v90);
    unit6Label = this->fields.unit6Label;
    if ( unit6Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BC3144(this->fields.unit6Label, v83->klass->_1.element_class);
      if ( !baseSortInfo )
      {
LABEL_110:
        v127 = sub_1BC3288();
        sub_1BC3130(v127, 0LL);
      }
    }
    if ( *(_DWORD *)&v83->fields.FILTER_DEFAULT_VALUE <= 5u )
LABEL_109:
      sub_1BC326C(baseSortInfo, v53, v80);
    *(_QWORD *)&v83->fields.bonusKind2 = unit6Label;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v83->fields.bonusKind2, (int32_t)unit6Label, v80, v92);
    v94 = *(_QWORD *)&v83->fields.FILTER_DEFAULT_VALUE;
    if ( (int)v94 >= 1 )
    {
      v95 = 0LL;
      while ( (unsigned int)v95 < (unsigned int)v94 )
      {
        v96 = (UILabel_o *)*((_QWORD *)&v83->fields.manager + v95);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_UNIT"*/, 0LL);
        LODWORD(v128.fields.m_Center.fields.x) = v95 + 1;
        v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128, v98, v99, v100);
        baseSortInfo = (ListViewSort_o *)System_String__Format(v97, v101, 0LL);
        if ( !v96 )
          goto LABEL_108;
        UILabel__set_text(v96, (System_String_o *)baseSortInfo, 0LL);
        v94 = *(_QWORD *)&v83->fields.FILTER_DEFAULT_VALUE;
        if ( (int)++v95 >= (int)v94 )
          goto LABEL_54;
      }
      goto LABEL_109;
    }
LABEL_54:
    unitExplanationLabel = this->fields.unitExplanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, 0LL);
    if ( !unitExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(unitExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeLabel = this->fields.organizationModeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2070/*"AUTO_ORGANIZATION_SETTING_MODE"*/, 0LL);
    if ( !organizationModeLabel )
      goto LABEL_108;
    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeDetail = this->fields.organizationModeDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2071/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, 0LL);
    if ( !organizationModeDetail )
      goto LABEL_108;
    UILabel__set_text(organizationModeDetail, (System_String_o *)baseSortInfo, 0LL);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !baseSortInfo )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
    if ( preQuest )
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
      if ( !baseSortInfo )
        goto LABEL_108;
      GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)baseSortInfo, 0LL);
      organizationModeGroup = this->fields.organizationModeGroup;
      v106 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v106);
      if ( !organizationModeGroup )
        goto LABEL_108;
      GameOptionRadioButtonGroup__SetLabels(organizationModeGroup, (System_String_array *)baseSortInfo, 0LL);
      v107 = this->fields.organizationModeGroup;
      v108 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v108,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
        0LL);
      if ( !v107 )
        goto LABEL_108;
      v107->fields.selectedCallback = v108;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v107->fields.selectedCallback, (int32_t)v108, v109, v110);
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v111 = 1;
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v111 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, v111, 0LL);
    v112 = this->fields.eventId;
    this->fields.isServantEquipBonusFilterEnable = 0;
    if ( v112 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !baseSortInfo )
        goto LABEL_108;
      EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL, 0LL);
      v114 = System_Linq_Enumerable__ToArray_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
               (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
      this->fields.eventIdList = v114;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)v114, v115, v116);
      eventIdList = this->fields.eventIdList;
      if ( eventIdList
        && (int)eventIdList->max_length >= 1
        && System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
             this->fields.eventId,
             (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        baseSortInfo = (ListViewSort_o *)sub_1BC30B0(int___TypeInfo, 1LL);
        if ( !baseSortInfo )
          goto LABEL_108;
        v118 = (System_Int32_array *)baseSortInfo;
        if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
          goto LABEL_109;
        LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        if ( !baseSortInfo )
          goto LABEL_108;
        FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)baseSortInfo, v118, 1, 1, 0LL);
        if ( FilterList && FilterList->fields._size >= 1 )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          this->fields.isServantEquipBonusFilterEnable = 1;
          if ( !baseSortInfo )
            goto LABEL_108;
          AutoOrganizationServantBonusFilterEquipComponent__CreateList(
            (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
            v118,
            0LL);
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          if ( !baseSortInfo )
            goto LABEL_108;
          ServantBonusFilterEquipComponent__SetInitButtonSelect((ServantBonusFilterEquipComponent_o *)baseSortInfo, 0LL);
        }
      }
      baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      if ( this->fields.isServantEquipBonusFilterEnable )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
        if ( this->fields.preQuest )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
          if ( !baseSortInfo )
            goto LABEL_108;
        }
        else
        {
          baseSortInfo = (ListViewSort_o *)this->fields.unitFilterObject;
          if ( !baseSortInfo )
            goto LABEL_108;
        }
        baseSortInfo = (ListViewSort_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)baseSortInfo,
                                           0LL);
        if ( !baseSortInfo )
          goto LABEL_108;
        v120 = (UnityEngine_Transform_o *)baseSortInfo;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseSortInfo, 0LL);
        NGUIMath__CalculateRelativeWidgetBounds_48316564(&v128, parent, v120, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          this->fields.eventBonusObject,
          v128.fields.m_Center.fields.y - v128.fields.m_Extents.fields.y,
          0LL);
        goto LABEL_97;
      }
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
      if ( !baseSortInfo )
        goto LABEL_108;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
LABEL_97:
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      goto LABEL_106;
    baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
    if ( baseSortInfo )
    {
      ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.castClass)(
        baseSortInfo,
        1LL,
        baseSortInfo->klass[1]._1.declaringType);
      baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
      if ( baseSortInfo )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)baseSortInfo, 0LL);
        v123 = this->fields.scrollView;
        if ( v123 )
        {
          v124 = this->fields.baseSortInfo;
          if ( v124 )
          {
            baseSortInfo = (ListViewSort_o *)v123->fields.verticalScrollBar;
            if ( baseSortInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v124->fields.scrollBarValue, 0LL);
LABEL_106:
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v53);
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 1, v125);
              this->fields.state = 1;
              v126 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(
                v126,
                (Il2CppObject *)this,
                Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)this, v126, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_108:
    sub_1BC3264(baseSortInfo, v53);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UICommonButton_o *decideButton; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4AFDA6B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_4AFDA6B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = (UICommonButton_o *)this->fields.buttonList;
  if ( !decideButton )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1BC3264(v9, v10);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v15.fields._current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1BC3264(0LL, v13);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1BC3264(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v8; // w20
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v10; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v11; // x8
  char v12; // w22
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *v14; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_4AFDA74 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UISprite__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__, v4);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3008(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_4AFDA74 = 1;
  }
  buttonList = v2->fields.buttonList;
  if ( !buttonList )
    goto LABEL_20;
  size = buttonList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.spriteList;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v8,
                                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v10 = (UISprite_o *)this;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                   v8,
                                                                   (const MethodInfo_3686358 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_42829936(
                                                                   operationSortInfo,
                                                                   (int32_t)this,
                                                                   0LL);
      v11 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v12 = (char)this;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
        v11 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      }
      if ( !v10 )
        break;
      p_ENABLE_BUTTON_SPRITE = &v11->static_fields->ENABLE_BUTTON_SPRITE;
      if ( (v12 & 1) == 0 )
        ++p_ENABLE_BUTTON_SPRITE;
      UISprite__set_spriteName(v10, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( size == ++v8 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1BC3264(this, method);
  }
LABEL_15:
  v14 = v2->fields.operationSortInfo;
  if ( !v14 )
    goto LABEL_20;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v2->fields.organizationModeGroup;
  autoOrganizationMode = v14->fields.autoOrganizationMode;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !organizationModeGroup )
    goto LABEL_20;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog___Open_b__60_0(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  __int64 v5; // x1
  struct ListViewSort_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct ListViewSort_o *operationSortInfo; // x9
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_4AFDA79 & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, *(_QWORD *)&selectedIndex);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3008(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_4AFDA79 = 1;
  }
  if ( v4->fields.state != 2 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      organizationModeGroup = v4->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BC3264(this, *(_QWORD *)&selectedIndex);
  }
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v6 = v4->fields.operationSortInfo;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !v6 )
    goto LABEL_15;
  v6->fields.autoOrganizationMode = selectedIndex == 1;
  v7 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4AFDA67 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_4AFDA67 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3524(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFDA76 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15495/*"Window/CancelButton"*/, method);
    byte_4AFDA76 = 1;
  }
  return (System_String_o *)StringLiteral_15495/*"Window/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4AFDA68 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_4AFDA68 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BC3524(v7);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07840;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A077F8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4AFDA7A & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, result);
    byte_4AFDA7A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}