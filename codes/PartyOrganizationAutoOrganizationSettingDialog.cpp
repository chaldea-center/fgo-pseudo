void PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22C92 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1C2D490(&StringLiteral_17433/*"btn_bg_04"*/);
    sub_1C2D490(&StringLiteral_17432/*"btn_bg_03"*/);
    byte_4C22C92 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17432/*"btn_bg_03"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17432/*"btn_bg_03"*/,
    v1,
    v2);
  v3 = StringLiteral_17433/*"btn_bg_04"*/;
  static_fields = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17433/*"btn_bg_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->DISABLE_BUTTON_SPRITE, v3, v5, v6);
}


void PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _QWORD *v8; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x21
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
  ListViewSort_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C22C91 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
    byte_4C22C91 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    goto LABEL_47;
  v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  p_version = &v3->fields._version;
  ++v3->fields._version;
  items = v3->fields._items;
  p_size = &v3->fields._size;
  size = v3->fields._size;
  if ( !items )
    goto LABEL_47;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      0,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 1;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 2;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 3;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 4;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 5;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 6;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 7;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 8;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 9;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 10;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 < LODWORD(items->max_length) )
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 11;
    ++*p_version;
    goto LABEL_41;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_47:
    sub_1C2D6EC(v4, v5);
LABEL_41:
  v24 = *p_size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      12,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 12;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.categoryFilterKind, (int32_t)v3, v6, v7);
  v25 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v25, 3, 0, 0);
  this->fields.autoOrganizationSortInfo = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoOrganizationSortInfo, (int32_t)v25, v26, v27);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__Awake(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationAutoOrganizationSettingDialog__Callback(
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
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_33938652(this, 0, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__Close_33938652(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *v7; // x20

  if ( (byte_4C22C84 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_4C22C84 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


int32_t PartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t PartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
}


void PartyOrganizationAutoOrganizationSettingDialog__EndClose(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
        const MethodInfo *method)
{
  __int64 v1; // x19
  System_String_o *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3

  if ( (byte_4C22C8F & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_2083/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C2D490(&StringLiteral_2082/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_4C22C8F = 1;
  }
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0);
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  if ( !*(_DWORD *)(v1 + 24)
    || (*(_QWORD *)(v1 + 32) = v2,
        sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), (int32_t)v2, v4, v5),
        v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0),
        *(_DWORD *)(v1 + 24) <= 1u) )
  {
    sub_1C2D6F4(v2, v3, v4);
  }
  *(_QWORD *)(v1 + 40) = v2;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 40), (int32_t)v2, v4, v6);
  return (System_String_array *)v1;
}


System_Boolean_array *PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x23
  __int64 v9; // x2

  v4 = this;
  if ( (byte_4C22C8D & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    byte_4C22C8D = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v7 = sub_1C2D538(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)this,
                                                                   v8,
                                                                   (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_43628744(
                                                                   sort,
                                                                   (int32_t)this,
                                                                   0);
      if ( !v7 )
        break;
      if ( v8 >= *(unsigned int *)(v7 + 24) )
        sub_1C2D6F4(this, sort, v9);
      *(_BYTE *)(v7 + 32 + v8++) = (unsigned __int8)this & 1;
      if ( size == v8 )
        return (System_Boolean_array *)v7;
    }
LABEL_12:
    sub_1C2D6EC(this, sort);
  }
  return (System_Boolean_array *)v7;
}


int32_t PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(
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
      sub_1C2D6EC(0, method);
    if ( ListViewSort__GetFilter_43628744(operationSortInfo, v3 + 6, 0) )
      break;
    --v3;
  }
  while ( v3 );
  return v3;
}


void PartyOrganizationAutoOrganizationSettingDialog__Init(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22C8A & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_4C22C8A = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0
  struct ListViewSort_o *v8; // x8

  if ( (byte_4C22C8B & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_4C22C8B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_43629564(operationSortInfo, i, 0, 0);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
        goto LABEL_17;
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0);
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
    sub_1C2D6EC(operationSortInfo, v5);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct System_Int32_array *eventIdList; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x22
  int32_t v16; // w26
  Il2CppObject *v17; // x0
  ListViewSort_o *v18; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4C22C89 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    sub_1C2D490(&StringLiteral_2493/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22C89 = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      max_length = eventIdList->max_length;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)max_length >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)max_length )
            sub_1C2D6F4(this, method, v9);
          if ( !v14 )
            break;
          v16 = eventIdList->m_Items[v15];
          if ( v14->fields._stringLength >= 1 )
            v14 = System_String__Concat_63457864(v14, (System_String_o *)StringLiteral_811/*","*/, 0);
          v20 = v16;
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat((Il2CppObject *)v14, v17, 0);
          LODWORD(max_length) = eventIdList->max_length;
          ++v15;
          v14 = (System_String_o *)this;
          if ( (__int64)v15 >= (int)max_length )
            goto LABEL_17;
        }
LABEL_26:
        sub_1C2D6EC(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2493/*"AutoOrganizationBonusFilterEventId"*/, v14, 0);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v18 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0);
      if ( !v18 )
        goto LABEL_26;
      ListViewSort__SetFilter(v18, 41, ((unsigned __int8)this & 1) == 0, 0);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v19);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4C22C8C & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_4C22C8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_43629564(operationSortInfo, i, 1, 0);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_1C2D6EC(operationSortInfo, v5);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C22C86 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_4C22C86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(0, v7);
    ListViewSort__SwitchFilter_43630636(operationSortInfo, kind, 0);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t unit,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  int32_t i; // w21
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4C22C88 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    byte_4C22C88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    for ( i = 0; i != 6; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C2D6EC(0, v7);
      ListViewSort__SetFilter_43629564(operationSortInfo, i + 7, i < unit, 0);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4C22C87 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    byte_4C22C87 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    for ( i = 7; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C2D6EC(0, v6);
      ListViewSort__SetFilter_43629564(operationSortInfo, i, 0, 0);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v6);
  }
}


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit2(
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


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit3(
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


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit4(
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


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit5(
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


void PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit6(
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
void PartyOrganizationAutoOrganizationSettingDialog__Open(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v15; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ListViewSort_o *v20; // x21
  ListViewSort_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
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
  __int64 v42; // x2
  const MethodInfo *v43; // x3
  struct UILabel_o *unit1Label; // x22
  ListViewSort_o *v45; // x21
  const MethodInfo *v46; // x3
  struct UILabel_o *unit2Label; // x22
  const MethodInfo *v48; // x3
  struct UILabel_o *unit3Label; // x22
  const MethodInfo *v50; // x3
  struct UILabel_o *unit4Label; // x22
  const MethodInfo *v52; // x3
  struct UILabel_o *unit5Label; // x22
  const MethodInfo *v54; // x3
  struct UILabel_o *unit6Label; // x22
  __int64 v56; // x8
  __int64 v57; // x25
  UILabel_o *v58; // x22
  System_String_o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x0
  UILabel_o *unitExplanationLabel; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v68; // x0
  struct GameOptionRadioButtonGroup_o *v69; // x20
  System_Action_int__o *v70; // x21
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  bool v73; // w1
  int32_t v74; // w8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v80; // x20
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v82; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v85; // x9
  struct ListViewSort_o *v86; // x8
  const MethodInfo *v87; // x2
  System_Action_o *v88; // x20
  __int64 v89; // x0
  UnityEngine_Bounds_o v90; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C22C83 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1C2D490(&UILabel___TypeInfo);
    sub_1C2D490(&StringLiteral_11878/*"SERVANT_SORT_RESET"*/);
    sub_1C2D490(&StringLiteral_2076/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/);
    sub_1C2D490(&StringLiteral_2081/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_2087/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/);
    sub_1C2D490(&StringLiteral_2079/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_1C2D490(&StringLiteral_11800/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C2D490(&StringLiteral_11627/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C2D490(&StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/);
    sub_1C2D490(&StringLiteral_2077/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/);
    sub_1C2D490(&StringLiteral_2078/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_1C2D490(&StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11799/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C2D490(&StringLiteral_2080/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_1C2D490(&StringLiteral_12001/*"SERVANT_UNIT"*/);
    sub_1C2D490(&StringLiteral_11798/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C2D490(&StringLiteral_11796/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C2D490(&StringLiteral_2084/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_1C2D490(&StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/);
    sub_1C2D490(&StringLiteral_2085/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_1C2D490(&StringLiteral_12000/*"SERVANT_TAKE"*/);
    sub_1C2D490(&StringLiteral_2086/*"AUTO_ORGANIZATION_SETTING_UNIT"*/);
    sub_1C2D490(&StringLiteral_11797/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4C22C83 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      eventId,
      (const MethodInfo *)preQuest);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v11, v12);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)autoOrganizationSortInfo, v11, v12);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_108;
      ListViewSort__Load(baseSortInfo, 0);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v13);
    this->fields.oldSettingStatus = SettingState;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.oldSettingStatus, (int32_t)SettingState, v18, v19);
    v20 = this->fields.baseSortInfo;
    v21 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
    ListViewSort___ctor_43601448(v21, v20, 0);
    this->fields.operationSortInfo = v21;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v21, v22, v23);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_108;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_108;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
    clearLabel = this->fields.clearLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/, 0);
    if ( !clearLabel )
      goto LABEL_108;
    UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_108;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
    initializeLabel = this->fields.initializeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_SORT_RESET"*/, 0);
    if ( !initializeLabel )
      goto LABEL_108;
    UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0);
    if ( !explanationLabel )
      goto LABEL_108;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
    kindTitleLabel = this->fields.kindTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2079/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0);
    if ( !kindTitleLabel )
      goto LABEL_108;
    UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0);
    rarityTitleLabel = this->fields.rarityTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0);
    if ( !rarityTitleLabel )
      goto LABEL_108;
    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0);
    unitTitleLabel = this->fields.unitTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, 0);
    if ( !unitTitleLabel )
      goto LABEL_108;
    UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0);
    eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, 0);
    if ( !eventEquipTitleLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0);
    eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, 0);
    if ( !eventEquipExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0);
    kindServantLabel = this->fields.kindServantLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_TAKE"*/, 0);
    if ( !kindServantLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0);
    kindServantEquipLabel = this->fields.kindServantEquipLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11627/*"SERVANT_EQUIP_TAKE"*/, 0);
    if ( !kindServantEquipLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0);
    rarity1Label = this->fields.rarity1Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    if ( !rarity1Label )
      goto LABEL_108;
    UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0);
    rarity2Label = this->fields.rarity2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    if ( !rarity2Label )
      goto LABEL_108;
    UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0);
    rarity3Label = this->fields.rarity3Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    if ( !rarity3Label )
      goto LABEL_108;
    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0);
    rarity4Label = this->fields.rarity4Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    if ( !rarity4Label )
      goto LABEL_108;
    UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0);
    rarity5Label = this->fields.rarity5Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    if ( !rarity5Label )
      goto LABEL_108;
    UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0);
    baseSortInfo = (ListViewSort_o *)sub_1C2D538(UILabel___TypeInfo, 6);
    if ( !baseSortInfo )
      goto LABEL_108;
    unit1Label = this->fields.unit1Label;
    v45 = baseSortInfo;
    if ( unit1Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit1Label, baseSortInfo->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( !*(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_109;
    v45->fields.manager = (struct ListViewManager_o *)unit1Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.manager, (int32_t)unit1Label, v42, v43);
    unit2Label = this->fields.unit2Label;
    if ( unit2Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit2Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 1u )
      goto LABEL_109;
    v45->fields.saveKey = (struct System_String_o *)unit2Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.saveKey, (int32_t)unit2Label, v42, v46);
    unit3Label = this->fields.unit3Label;
    if ( unit3Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit3Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 2u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.defaultSortKind = unit3Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.defaultSortKind, (int32_t)unit3Label, v42, v48);
    unit4Label = this->fields.unit4Label;
    if ( unit4Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit4Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 3u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.sortKind = unit4Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.sortKind, (int32_t)unit4Label, v42, v50);
    unit5Label = this->fields.unit5Label;
    if ( unit5Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit5Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 4u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.bonusKind = unit5Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.bonusKind, (int32_t)unit5Label, v42, v52);
    unit6Label = this->fields.unit6Label;
    if ( unit6Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1C2D5CC(this->fields.unit6Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
      {
LABEL_110:
        v89 = sub_1C2D710();
        sub_1C2D5B8(v89, 0);
      }
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 5u )
LABEL_109:
      sub_1C2D6F4(baseSortInfo, v15, v42);
    *(_QWORD *)&v45->fields.bonusKind2 = unit6Label;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->fields.bonusKind2, (int32_t)unit6Label, v42, v54);
    v56 = *(_QWORD *)&v45->fields.FILTER_DEFAULT_VALUE;
    if ( (int)v56 >= 1 )
    {
      v57 = 0;
      while ( (unsigned int)v57 < (unsigned int)v56 )
      {
        v58 = (UILabel_o *)*((_QWORD *)&v45->fields.manager + v57);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_UNIT"*/, 0);
        LODWORD(v90.fields.m_Center.fields.x) = v57 + 1;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v60, v61, v62);
        baseSortInfo = (ListViewSort_o *)System_String__Format(v59, v63, 0);
        if ( !v58 )
          goto LABEL_108;
        UILabel__set_text(v58, (System_String_o *)baseSortInfo, 0);
        v56 = *(_QWORD *)&v45->fields.FILTER_DEFAULT_VALUE;
        if ( (int)++v57 >= (int)v56 )
          goto LABEL_54;
      }
      goto LABEL_109;
    }
LABEL_54:
    unitExplanationLabel = this->fields.unitExplanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2087/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, 0);
    if ( !unitExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(unitExplanationLabel, (System_String_o *)baseSortInfo, 0);
    organizationModeLabel = this->fields.organizationModeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2080/*"AUTO_ORGANIZATION_SETTING_MODE"*/, 0);
    if ( !organizationModeLabel )
      goto LABEL_108;
    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0);
    organizationModeDetail = this->fields.organizationModeDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2081/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, 0);
    if ( !organizationModeDetail )
      goto LABEL_108;
    UILabel__set_text(organizationModeDetail, (System_String_o *)baseSortInfo, 0);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !baseSortInfo )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
    if ( preQuest )
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
      if ( !baseSortInfo )
        goto LABEL_108;
      GameOptionRadioButtonGroup__Init((GameOptionRadioButtonGroup_o *)baseSortInfo, 0);
      organizationModeGroup = this->fields.organizationModeGroup;
      v68 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v68);
      if ( !organizationModeGroup )
        goto LABEL_108;
      GameOptionRadioButtonGroup__SetLabels(organizationModeGroup, (System_String_array *)baseSortInfo, 0);
      v69 = this->fields.organizationModeGroup;
      v70 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v70,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
        0);
      if ( !v69 )
        goto LABEL_108;
      v69->fields.selectedCallback = v70;
      sub_1C2D434((CGThumbnailListItem_o *)&v69->fields.selectedCallback, (int32_t)v70, v71, v72);
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v73 = 1;
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v73 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, v73, 0);
    v74 = this->fields.eventId;
    this->fields.isServantEquipBonusFilterEnable = 0;
    if ( v74 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
      if ( !baseSortInfo )
        goto LABEL_108;
      EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0, 0);
      v76 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
              (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
      this->fields.eventIdList = v76;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)v76, v77, v78);
      eventIdList = this->fields.eventIdList;
      if ( eventIdList
        && SLODWORD(eventIdList->max_length) >= 1
        && System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
             this->fields.eventId,
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        baseSortInfo = (ListViewSort_o *)sub_1C2D538(int___TypeInfo, 1);
        if ( !baseSortInfo )
          goto LABEL_108;
        v80 = (System_Int32_array *)baseSortInfo;
        if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
          goto LABEL_109;
        LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        if ( !baseSortInfo )
          goto LABEL_108;
        FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)baseSortInfo, v80, 1, 1, 0);
        if ( FilterList && FilterList->fields._size >= 1 )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          this->fields.isServantEquipBonusFilterEnable = 1;
          if ( !baseSortInfo )
            goto LABEL_108;
          AutoOrganizationServantBonusFilterEquipComponent__CreateList(
            (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
            v80,
            0);
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          if ( !baseSortInfo )
            goto LABEL_108;
          ServantBonusFilterEquipComponent__SetInitButtonSelect((ServantBonusFilterEquipComponent_o *)baseSortInfo, 0);
        }
      }
      baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      if ( this->fields.isServantEquipBonusFilterEnable )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
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
                                           0);
        if ( !baseSortInfo )
          goto LABEL_108;
        v82 = (UnityEngine_Transform_o *)baseSortInfo;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseSortInfo, 0);
        NGUIMath__CalculateRelativeWidgetBounds_49121872(&v90, parent, v82, 0);
        GameObjectExtensions__SetLocalPositionY(
          this->fields.eventBonusObject,
          v90.fields.m_Center.fields.y - v90.fields.m_Extents.fields.y,
          0);
        goto LABEL_97;
      }
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
      if ( !baseSortInfo )
        goto LABEL_108;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
LABEL_97:
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      goto LABEL_106;
    baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
    if ( baseSortInfo )
    {
      ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.element_class)(
        baseSortInfo,
        1,
        baseSortInfo->klass[1]._1.castClass);
      baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
      if ( baseSortInfo )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)baseSortInfo, 0);
        v85 = this->fields.scrollView;
        if ( v85 )
        {
          v86 = this->fields.baseSortInfo;
          if ( v86 )
          {
            baseSortInfo = (ListViewSort_o *)v85->fields.verticalScrollBar;
            if ( baseSortInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v86->fields.scrollBarValue, 0);
LABEL_106:
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v15);
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 1, v87);
              this->fields.state = 1;
              v88 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v88,
                (Il2CppObject *)this,
                Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                0);
              BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_108:
    sub_1C2D6EC(baseSortInfo, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C22C85 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_4C22C85 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = (UICommonButton_o *)this->fields.buttonList;
  if ( !decideButton )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C2D6EC(v6, v7);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v12.fields._current, isEnable, 0);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !gameObject )
        sub_1C2D6EC(0, v10);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1C2D6EC(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v5; // w20
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v7; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v8; // x8
  char v9; // w22
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *v11; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_4C22C8E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4C22C8E = 1;
  }
  buttonList = v2->fields.buttonList;
  if ( !buttonList )
    goto LABEL_20;
  size = buttonList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.spriteList;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v5,
                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v7 = (UISprite_o *)this;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                   v5,
                                                                   (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_43628744(
                                                                   operationSortInfo,
                                                                   (int32_t)this,
                                                                   0);
      v8 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v9 = (char)this;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
        v8 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      }
      if ( !v7 )
        break;
      p_ENABLE_BUTTON_SPRITE = &v8->static_fields->ENABLE_BUTTON_SPRITE;
      if ( (v9 & 1) == 0 )
        ++p_ENABLE_BUTTON_SPRITE;
      UISprite__set_spriteName(v7, *p_ENABLE_BUTTON_SPRITE, 0);
      if ( size == ++v5 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
  }
LABEL_15:
  v11 = v2->fields.operationSortInfo;
  if ( !v11 )
    goto LABEL_20;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v2->fields.organizationModeGroup;
  autoOrganizationMode = v11->fields.autoOrganizationMode;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !organizationModeGroup )
    goto LABEL_20;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationSettingDialog___Open_b__60_0(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct ListViewSort_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *operationSortInfo; // x9
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_4C22C93 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4C22C93 = 1;
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
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_1C2D6EC(this, *(_QWORD *)&selectedIndex);
  }
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v5 = v4->fields.operationSortInfo;
  if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !v5 )
    goto LABEL_15;
  v5->fields.autoOrganizationMode = selectedIndex == 1;
  v6 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
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

  if ( (byte_4C22C81 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4C22C81 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D9AC(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22C90 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4C22C90 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


void PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
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

  if ( (byte_4C22C82 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4C22C82 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C2D9AC(v7);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


void PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6BFC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6BF80;
}


System_IAsyncResult_o *PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C22C94 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22C94 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}