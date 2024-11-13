void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0

  if ( (byte_4B11EBD & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v5, v6);
    byte_4B11EBD = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17643/*"btn_bg_03"*/;
  sub_1BCA784(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields, StringLiteral_17643/*"btn_bg_03"*/);
  v7 = StringLiteral_17644/*"btn_bg_04"*/;
  static_fields = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17644/*"btn_bg_04"*/;
  sub_1BCA784(&static_fields->DISABLE_BUTTON_SPRITE, v7);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ListViewSort_o *v36; // x20
  __int64 v37; // x1

  if ( (byte_4B11EBC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__,
      v9,
      v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo, v11, v12);
    byte_4B11EBC = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v13 )
    goto LABEL_47;
  v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  p_version = &v13->fields._version;
  ++v13->fields._version;
  items = v13->fields._items;
  p_size = &v13->fields._size;
  size = v13->fields._size;
  if ( !items )
    goto LABEL_47;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      0,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
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
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 10;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 < items->max_length )
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 11;
    ++*p_version;
    goto LABEL_41;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v13,
    11,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  items = v13->fields._items;
  v16 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v13->fields._version;
  if ( !items )
LABEL_47:
    sub_1BCAA3C(v14, v15);
LABEL_41:
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      12,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 12;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v13;
  sub_1BCA784(&this->fields.categoryFilterKind, v13);
  v36 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v33, v34, v35);
  ListViewSort___ctor(v36, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v36;
  sub_1BCA784(&this->fields.autoOrganizationSortInfo, v36);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v37);
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
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x0

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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_32521720(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_32521720(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11EAF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5, v6);
    byte_4B11EAF = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_array *v10; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4B11EBA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_2198/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_2197/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v7, v8);
    byte_4B11EBA = 1;
  }
  v10 = (System_String_array *)sub_1BCA888(string___TypeInfo, 2LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2198/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  if ( !v10->max_length
    || (v10->m_Items[0] = v11,
        sub_1BCA784(v10->m_Items, v11),
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2197/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL),
        v10->max_length <= 1) )
  {
    sub_1BCAA44(v11, v12);
  }
  v10->m_Items[1] = v11;
  sub_1BCA784(&v10->m_Items[1], v11);
  return v10;
}


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  System_Boolean_array *v11; // x22
  unsigned __int64 v12; // x23

  v4 = this;
  if ( (byte_4B11EB8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, sort, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__,
      v5,
      v6);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCA7E0(
                                                                 &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
                                                                 v7,
                                                                 v8);
    byte_4B11EB8 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v11 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)this,
                                                                   v12,
                                                                   (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_41507520(
                                                                   sort,
                                                                   (int32_t)this,
                                                                   0LL);
      if ( !v11 )
        break;
      if ( v12 >= v11->max_length )
        sub_1BCAA44(this, sort);
      v11->m_Items[v12++ + 4] = (unsigned __int8)this & 1;
      if ( size == v12 )
        return v11;
    }
LABEL_12:
    sub_1BCAA3C(this, sort);
  }
  return v11;
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
      sub_1BCAA3C(0LL, method);
    if ( ListViewSort__GetFilter_41507520(operationSortInfo, v3 + 6, 0LL) )
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

  if ( (byte_4B11EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method, v2);
    byte_4B11EB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0
  struct ListViewSort_o *v9; // x8

  if ( (byte_4B11EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method, v2);
    byte_4B11EB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_41508340(operationSortInfo, i, 0, 0LL);
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
      PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v6);
      return;
    }
    v9 = this->fields.operationSortInfo;
    if ( v9 )
    {
      v9->fields.autoOrganizationMode = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(operationSortInfo, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationAutoOrganizationSettingDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v14; // x2
  float value; // s0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct System_Int32_array *eventIdList; // x21
  __int64 v19; // x8
  System_String_o *v20; // x20
  unsigned __int64 v21; // x22
  int v22; // w26
  Il2CppObject *v23; // x0
  ListViewSort_o *v24; // x20
  const MethodInfo *v25; // x2
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4B11EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&StringLiteral_2638/*"AutoOrganizationBonusFilterEventId"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v8, v9);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B11EB4 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    scrollView = v3->fields.scrollView;
    if ( !scrollView )
      goto LABEL_26;
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_26;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v3, 0, v14);
    v3->fields.state = 3;
    v16 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    eventIdList = v3->fields.eventIdList;
    if ( eventIdList )
    {
      v19 = *(_QWORD *)&eventIdList->max_length;
      v20 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v19 >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          if ( v21 >= (unsigned int)v19 )
            sub_1BCAA44(this, method);
          if ( !v20 )
            break;
          v22 = eventIdList->m_Items[v21 + 1];
          if ( v20->fields._stringLength >= 1 )
            v20 = System_String__Concat_62401220(v20, (System_String_o *)StringLiteral_863/*","*/, 0LL);
          v26 = v22;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v20,
                                                                       v23,
                                                                       0LL);
          LODWORD(v19) = eventIdList->max_length;
          ++v21;
          v20 = (System_String_o *)this;
          if ( (__int64)v21 >= (int)v19 )
            goto LABEL_17;
        }
LABEL_26:
        sub_1BCAA3C(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2638/*"AutoOrganizationBonusFilterEventId"*/, v20, 0LL);
    }
    if ( v3->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v24 = v3->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v24 )
        goto LABEL_26;
      ListViewSort__SetFilter(v24, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v3, 1, v25);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4B11EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method, v2);
    byte_4B11EB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_41508340(operationSortInfo, i, 1, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_1BCAA3C(operationSortInfo, v6);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v6);
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

  if ( (byte_4B11EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind, method);
    byte_4B11EB1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter_41509412(operationSortInfo, kind, 0LL);
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

  if ( (byte_4B11EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, *(_QWORD *)&unit, method);
    byte_4B11EB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    for ( i = 0; i != 6; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BCAA3C(0LL, v7);
      ListViewSort__SetFilter_41508340(operationSortInfo, i + 7, i < unit, 0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4B11EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, method, v2);
    byte_4B11EB2 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v4);
  }
  else
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    for ( i = 7; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BCAA3C(0LL, v7);
      ListViewSort__SetFilter_41508340(operationSortInfo, i, 0, 0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  const MethodInfo *v87; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v89; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  ListViewSort_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  ListViewSort_o *v96; // x22
  __int64 v97; // x1
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
  struct UILabel_o *unit1Label; // x22
  ListViewSort_o *v117; // x21
  struct UILabel_o *unit2Label; // x22
  struct UILabel_o *unit3Label; // x22
  struct UILabel_o *unit4Label; // x22
  struct UILabel_o *unit5Label; // x22
  struct UILabel_o *unit6Label; // x22
  __int64 v123; // x8
  __int64 v124; // x25
  UILabel_o *v125; // x22
  System_String_o *v126; // x23
  Il2CppObject *v127; // x0
  UILabel_o *unitExplanationLabel; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  __int64 v131; // x1
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v133; // x0
  struct GameOptionRadioButtonGroup_o *v134; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  System_Action_int__o *v138; // x21
  bool v139; // w1
  int32_t v140; // w8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v142; // x0
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v144; // x20
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v146; // x1
  UnityEngine_Transform_o *v147; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v150; // x9
  struct ListViewSort_o *v151; // x8
  const MethodInfo *v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  System_Action_o *v156; // x20
  __int64 v157; // x0
  UnityEngine_Bounds_o v158; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B11EAE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, sort, *(_QWORD *)&eventId);
    sub_1BCA7E0(&System_Action_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v21, v22);
    sub_1BCA7E0(&int___TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v35, v36);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, v37, v38);
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v39, v40);
    sub_1BCA7E0(&UILabel___TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_2191/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_2196/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_2202/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_2194/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_11739/*"SERVANT_EQUIP_TAKE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_2192/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_2193/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2195/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_12088/*"SERVANT_UNIT"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_2199/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_2200/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_12087/*"SERVANT_TAKE"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_2201/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v85, v86);
    byte_4B11EAE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1BCA784(&this->fields.baseSortInfo, sort);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1BCA784(&this->fields.baseSortInfo, autoOrganizationSortInfo);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_108;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v87);
    this->fields.oldSettingStatus = SettingState;
    sub_1BCA784(&this->fields.oldSettingStatus, SettingState);
    v92 = this->fields.baseSortInfo;
    v96 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v93, v94, v95);
    ListViewSort___ctor_41481440(v96, v92, 0LL);
    this->fields.operationSortInfo = v96;
    sub_1BCA784(&this->fields.operationSortInfo, v96);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2200/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_108;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_108;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    clearLabel = this->fields.clearLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_108;
    UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_108;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    initializeLabel = this->fields.initializeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !initializeLabel )
      goto LABEL_108;
    UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2193/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_108;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindTitleLabel = this->fields.kindTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2194/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
    if ( !kindTitleLabel )
      goto LABEL_108;
    UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    rarityTitleLabel = this->fields.rarityTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2199/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
    if ( !rarityTitleLabel )
      goto LABEL_108;
    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    unitTitleLabel = this->fields.unitTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2201/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, 0LL);
    if ( !unitTitleLabel )
      goto LABEL_108;
    UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2191/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, 0LL);
    if ( !eventEquipTitleLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2192/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, 0LL);
    if ( !eventEquipExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantLabel = this->fields.kindServantLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_TAKE"*/, 0LL);
    if ( !kindServantLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantEquipLabel = this->fields.kindServantEquipLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11739/*"SERVANT_EQUIP_TAKE"*/, 0LL);
    if ( !kindServantEquipLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
    rarity1Label = this->fields.rarity1Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !rarity1Label )
      goto LABEL_108;
    UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
    rarity2Label = this->fields.rarity2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !rarity2Label )
      goto LABEL_108;
    UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
    rarity3Label = this->fields.rarity3Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !rarity3Label )
      goto LABEL_108;
    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
    rarity4Label = this->fields.rarity4Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    if ( !rarity4Label )
      goto LABEL_108;
    UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
    rarity5Label = this->fields.rarity5Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    if ( !rarity5Label )
      goto LABEL_108;
    UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
    baseSortInfo = (ListViewSort_o *)sub_1BCA888(UILabel___TypeInfo, 6LL);
    if ( !baseSortInfo )
      goto LABEL_108;
    unit1Label = this->fields.unit1Label;
    v117 = baseSortInfo;
    if ( unit1Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit1Label, baseSortInfo->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( !*(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_109;
    v117->fields.manager = (struct ListViewManager_o *)unit1Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.manager, unit1Label);
    unit2Label = this->fields.unit2Label;
    if ( unit2Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit2Label, v117->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE <= 1u )
      goto LABEL_109;
    v117->fields.saveKey = (struct System_String_o *)unit2Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.saveKey, unit2Label);
    unit3Label = this->fields.unit3Label;
    if ( unit3Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit3Label, v117->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE <= 2u )
      goto LABEL_109;
    *(_QWORD *)&v117->fields.defaultSortKind = unit3Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.defaultSortKind, unit3Label);
    unit4Label = this->fields.unit4Label;
    if ( unit4Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit4Label, v117->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE <= 3u )
      goto LABEL_109;
    *(_QWORD *)&v117->fields.sortKind = unit4Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.sortKind, unit4Label);
    unit5Label = this->fields.unit5Label;
    if ( unit5Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit5Label, v117->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE <= 4u )
      goto LABEL_109;
    *(_QWORD *)&v117->fields.bonusKind = unit5Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.bonusKind, unit5Label);
    unit6Label = this->fields.unit6Label;
    if ( unit6Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1BCA91C(this->fields.unit6Label, v117->klass->_1.element_class);
      if ( !baseSortInfo )
      {
LABEL_110:
        v157 = sub_1BCAA60();
        sub_1BCA908(v157, 0LL);
      }
    }
    if ( *(_DWORD *)&v117->fields.FILTER_DEFAULT_VALUE <= 5u )
LABEL_109:
      sub_1BCAA44(baseSortInfo, v89);
    *(_QWORD *)&v117->fields.bonusKind2 = unit6Label;
    baseSortInfo = (ListViewSort_o *)sub_1BCA784(&v117->fields.bonusKind2, unit6Label);
    v123 = *(_QWORD *)&v117->fields.FILTER_DEFAULT_VALUE;
    if ( (int)v123 >= 1 )
    {
      v124 = 0LL;
      while ( (unsigned int)v124 < (unsigned int)v123 )
      {
        v125 = (UILabel_o *)*((_QWORD *)&v117->fields.manager + v124);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89);
        v126 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_UNIT"*/, 0LL);
        LODWORD(v158.fields.m_Center.fields.x) = v124 + 1;
        v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158);
        baseSortInfo = (ListViewSort_o *)System_String__Format(v126, v127, 0LL);
        if ( !v125 )
          goto LABEL_108;
        UILabel__set_text(v125, (System_String_o *)baseSortInfo, 0LL);
        v123 = *(_QWORD *)&v117->fields.FILTER_DEFAULT_VALUE;
        if ( (int)++v124 >= (int)v123 )
          goto LABEL_54;
      }
      goto LABEL_109;
    }
LABEL_54:
    unitExplanationLabel = this->fields.unitExplanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2202/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, 0LL);
    if ( !unitExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(unitExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeLabel = this->fields.organizationModeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2195/*"AUTO_ORGANIZATION_SETTING_MODE"*/, 0LL);
    if ( !organizationModeLabel )
      goto LABEL_108;
    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeDetail = this->fields.organizationModeDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2196/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, 0LL);
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
      v133 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v131);
      baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v133);
      if ( !organizationModeGroup )
        goto LABEL_108;
      GameOptionRadioButtonGroup__SetLabels(organizationModeGroup, (System_String_array *)baseSortInfo, 0LL);
      v134 = this->fields.organizationModeGroup;
      v138 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v135, v136, v137);
      System_Action_int____ctor(
        v138,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
        0LL);
      if ( !v134 )
        goto LABEL_108;
      v134->fields.selectedCallback = v138;
      sub_1BCA784(&v134->fields.selectedCallback, v138);
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v139 = 1;
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v139 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, v139, 0LL);
    v140 = this->fields.eventId;
    this->fields.isServantEquipBonusFilterEnable = 0;
    if ( v140 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v89);
      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !baseSortInfo )
        goto LABEL_108;
      EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL, 0LL);
      v142 = System_Linq_Enumerable__ToArray_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      this->fields.eventIdList = v142;
      sub_1BCA784(&this->fields.eventIdList, v142);
      eventIdList = this->fields.eventIdList;
      if ( eventIdList
        && (int)eventIdList->max_length >= 1
        && System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
             this->fields.eventId,
             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        baseSortInfo = (ListViewSort_o *)sub_1BCA888(int___TypeInfo, 1LL);
        if ( !baseSortInfo )
          goto LABEL_108;
        v144 = (System_Int32_array *)baseSortInfo;
        if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
          goto LABEL_109;
        LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v89);
        baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        if ( !baseSortInfo )
          goto LABEL_108;
        FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)baseSortInfo, v144, 1, 0LL);
        if ( FilterList && FilterList->fields._size >= 1 )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          this->fields.isServantEquipBonusFilterEnable = 1;
          if ( !baseSortInfo )
            goto LABEL_108;
          AutoOrganizationServantBonusFilterEquipComponent__CreateList(
            (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
            v144,
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
        v147 = (UnityEngine_Transform_o *)baseSortInfo;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseSortInfo, 0LL);
        NGUIMath__CalculateRelativeWidgetBounds_47298008(&v158, parent, v147, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          this->fields.eventBonusObject,
          v158.fields.m_Center.fields.y - v158.fields.m_Extents.fields.y,
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v146);
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
        v150 = this->fields.scrollView;
        if ( v150 )
        {
          v151 = this->fields.baseSortInfo;
          if ( v151 )
          {
            baseSortInfo = (ListViewSort_o *)v150->fields.verticalScrollBar;
            if ( baseSortInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v151->fields.scrollBarValue, 0LL);
LABEL_106:
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v89);
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 1, v152);
              this->fields.state = 1;
              v156 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v153, v154, v155);
              System_Action___ctor(
                v156,
                (Il2CppObject *)this,
                Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)this, v156, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_108:
    sub_1BCAA3C(baseSortInfo, v89);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UICommonButton_o *decideButton; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B11EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v9, v10);
    byte_4B11EB0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v12 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1BCAA3C(v12, v13);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v18.fields._current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1BCAA3C(0LL, v16);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1BCAA3C(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationAutoOrganizationSettingDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v12; // w20
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v14; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v15; // x8
  char v16; // w22
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *v18; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v3 = this;
  if ( (byte_4B11EB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
      v6,
      v7);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCA7E0(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v8,
                                                                 v9);
    byte_4B11EB9 = 1;
  }
  buttonList = v3->fields.buttonList;
  if ( !buttonList )
    goto LABEL_20;
  size = buttonList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3->fields.spriteList;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v12,
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v3->fields.categoryFilterKind )
        break;
      operationSortInfo = v3->fields.operationSortInfo;
      v14 = (UISprite_o *)this;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)v3->fields.categoryFilterKind,
                                                                   v12,
                                                                   (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_41507520(
                                                                   operationSortInfo,
                                                                   (int32_t)this,
                                                                   0LL);
      v15 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v16 = (char)this;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, method);
        v15 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      }
      if ( !v14 )
        break;
      p_ENABLE_BUTTON_SPRITE = &v15->static_fields->ENABLE_BUTTON_SPRITE;
      if ( (v16 & 1) == 0 )
        ++p_ENABLE_BUTTON_SPRITE;
      UISprite__set_spriteName(v14, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( size == ++v12 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1BCAA3C(this, method);
  }
LABEL_15:
  v18 = v3->fields.operationSortInfo;
  if ( !v18 )
    goto LABEL_20;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v3->fields.organizationModeGroup;
  autoOrganizationMode = v18->fields.autoOrganizationMode;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, method);
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
  __int64 v6; // x2
  struct ListViewSort_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewSort_o *operationSortInfo; // x9
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_4B11EBE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
      *(_QWORD *)&selectedIndex,
      method);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCA7E0(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5,
                                                                 v6);
    byte_4B11EBE = 1;
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
        j_il2cpp_runtime_class_init_0(
          PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
          *(_QWORD *)&selectedIndex);
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&selectedIndex);
  }
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v7 = v4->fields.operationSortInfo;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, *(_QWORD *)&selectedIndex);
  if ( !v7 )
    goto LABEL_15;
  v7->fields.autoOrganizationMode = selectedIndex == 1;
  v8 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
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

  if ( (byte_4B11EAC & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B11EAC = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCACFC(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11EBB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B11EBB = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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

  if ( (byte_4B11EAD & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B11EAD = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BCACFC(v7);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06FBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06F74;
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
  if ( (byte_4B11EBF & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11EBF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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