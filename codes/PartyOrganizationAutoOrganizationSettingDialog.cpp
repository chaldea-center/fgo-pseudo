void PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5933E4F & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_18163/*"btn_bg_04"*/);
    sub_21FFC50(&StringLiteral_18162/*"btn_bg_03"*/);
    byte_5933E4F = 1;
  }
  v7 = StringLiteral_18162/*"btn_bg_03"*/;
  PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_18162/*"btn_bg_03"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18163/*"btn_bg_04"*/;
  static_fields = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_18163/*"btn_bg_04"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DISABLE_BUTTON_SPRITE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
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
  __int64 v26; // x10
  ListViewSort_o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2

  if ( (byte_5933E4E & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
    byte_5933E4E = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    goto LABEL_47;
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_47;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      0,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++v3->fields._version;
  }
  v15 = v3->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 1;
    ++v3->fields._version;
  }
  v16 = v3->fields._size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 2;
    ++v3->fields._version;
  }
  v17 = v3->fields._size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 3;
    ++v3->fields._version;
  }
  v18 = v3->fields._size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 4;
    ++v3->fields._version;
  }
  v19 = v3->fields._size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 5;
    ++v3->fields._version;
  }
  v20 = v3->fields._size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 6;
    ++v3->fields._version;
  }
  v21 = v3->fields._size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 7;
    ++v3->fields._version;
  }
  v22 = v3->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 8;
    ++v3->fields._version;
  }
  v23 = v3->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 9;
    ++v3->fields._version;
  }
  v24 = v3->fields._size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_47;
  }
  else
  {
    v3->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 10;
    ++v3->fields._version;
  }
  v25 = v3->fields._size;
  if ( (unsigned int)v25 < LODWORD(items->max_length) )
  {
    v3->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 11;
    ++v3->fields._version;
    goto LABEL_41;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_47:
    sub_21FFECC(v4, v5);
LABEL_41:
  v26 = v3->fields._size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      12,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 12;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.categoryFilterKind,
    (int32_t)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v27 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v27, 3, 0, 0);
  this->fields.autoOrganizationSortInfo = v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoOrganizationSortInfo,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v34, v35);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20

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


void PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_40880884(this, 0, v2);
}


void PartyOrganizationAutoOrganizationSettingDialog__Close_40880884(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_5933E41 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_5933E41 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = System_Action_TypeInfo;
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_21FFEBC(v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5933E4C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_2183/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_21FFC50(&StringLiteral_2182/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_5933E4C = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 2);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2183/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11),
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2182/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0),
        (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(v4);
  }
  *(_QWORD *)(v3 + 40) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v4, v12, v13, v14, v15, v16, v17);
  return (System_String_array *)v3;
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

  v4 = this;
  if ( (byte_5933E4A & 1) == 0 )
  {
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    byte_5933E4A = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v7 = sub_21FFD10(bool___TypeInfo, (unsigned int)size);
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
                                                                   (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_50812376(
                                                                   sort,
                                                                   (int32_t)this,
                                                                   0);
      if ( !v7 )
        break;
      if ( v8 >= *(unsigned int *)(v7 + 24) )
        sub_21FFED4(this);
      *(_BYTE *)(v7 + 32 + v8++) = (unsigned __int8)this & 1;
      if ( size == v8 )
        return (System_Boolean_array *)v7;
    }
LABEL_12:
    sub_21FFECC(this, sort);
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
      sub_21FFECC(0, method);
    if ( ListViewSort__GetFilter_50812376(operationSortInfo, v3 + 6, 0) )
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
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_5933E47 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_5933E47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    this->fields.state = 3;
    if ( (v4[83] & 2) != 0 )
      v4 = (_BYTE *)sub_21FFC68(v4);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, *((_QWORD *)v4 + 4));
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

  if ( (byte_5933E48 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_5933E48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_50813196(operationSortInfo, i, 0, 0);
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
    sub_21FFECC(operationSortInfo, v5);
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
  struct System_Int32_array *eventIdList; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v11; // x20
  unsigned __int64 v12; // x22
  int32_t v13; // w26
  Il2CppObject *v14; // x0
  ListViewSort_o *v15; // x20
  const MethodInfo *v16; // x2
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_5933E46 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    sub_21FFC50(&StringLiteral_2606/*"AutoOrganizationBonusFilterEventId"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933E46 = 1;
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
      v7 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      max_length = eventIdList->max_length;
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)max_length >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)max_length )
            sub_21FFED4(this);
          if ( !v11 )
            break;
          v13 = eventIdList->m_Items[v12];
          if ( v11->fields._stringLength >= 1 )
            v11 = System_String__Concat_75438412(v11, (System_String_o *)StringLiteral_869/*","*/, 0);
          v17 = v13;
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat((Il2CppObject *)v11, v14, 0);
          LODWORD(max_length) = eventIdList->max_length;
          ++v12;
          v11 = (System_String_o *)this;
          if ( (__int64)v12 >= (int)max_length )
            goto LABEL_17;
        }
LABEL_26:
        sub_21FFECC(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2606/*"AutoOrganizationBonusFilterEventId"*/, v11, 0);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v15 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0);
      if ( !v15 )
        goto LABEL_26;
      ListViewSort__SetFilter(v15, 41, ((unsigned __int8)this & 1) == 0, 0);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v16);
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

  if ( (byte_5933E49 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_5933E49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_50813196(operationSortInfo, i, 1, 0);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_21FFECC(operationSortInfo, v5);
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

  if ( (byte_5933E43 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_5933E43 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(0, v7);
    ListViewSort__SwitchFilter_50814268(operationSortInfo, kind, 0);
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

  if ( (byte_5933E45 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    byte_5933E45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    for ( i = 0; i != 6; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_21FFECC(0, v7);
      ListViewSort__SetFilter_50813196(operationSortInfo, i + 7, i < unit, 0);
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

  if ( (byte_5933E44 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    byte_5933E44 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    for ( i = 7; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_21FFECC(0, v6);
      ListViewSort__SetFilter_50813196(operationSortInfo, i, 0, 0);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v21; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ListViewSort_o *v30; // x21
  ListViewSort_o *v31; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  __int64 v39; // x2
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
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct UILabel_o *unit1Label; // x22
  ListViewSort_o *v65; // x21
  __int64 v66; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct UILabel_o *unit2Label; // x22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct UILabel_o *unit3Label; // x22
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct UILabel_o *unit4Label; // x22
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct UILabel_o *unit5Label; // x22
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct UILabel_o *unit6Label; // x22
  __int64 v102; // x1
  __int64 v103; // x2
  int v104; // w8
  __int64 v105; // x25
  UILabel_o *v106; // x22
  System_String_o *v107; // x23
  Il2CppObject *v108; // x0
  UILabel_o *unitExplanationLabel; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v115; // x0
  struct GameOptionRadioButtonGroup_o *v116; // x20
  System_Action_int__o *v117; // x21
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  bool v124; // w1
  __int64 v125; // x2
  int32_t v126; // w8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v128; // x0
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Int32_array *eventIdList; // x0
  __int64 v136; // x2
  System_Int32_array *v137; // x20
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  UnityEngine_Transform_o *v141; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v144; // x9
  struct ListViewSort_o *v145; // x8
  const MethodInfo *v146; // x2
  System_Action_o *v147; // x20
  __int64 v148; // x0
  UnityEngine_Bounds_o v149; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_5933E40 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&StringLiteral_12373/*"SERVANT_SORT_RESET"*/);
    sub_21FFC50(&StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/);
    sub_21FFC50(&StringLiteral_2181/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_2187/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/);
    sub_21FFC50(&StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_21FFC50(&StringLiteral_12295/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_21FFC50(&StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/);
    sub_21FFC50(&StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/);
    sub_21FFC50(&StringLiteral_2177/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/);
    sub_21FFC50(&StringLiteral_2178/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_21FFC50(&StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12294/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_21FFC50(&StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_21FFC50(&StringLiteral_12497/*"SERVANT_UNIT"*/);
    sub_21FFC50(&StringLiteral_12293/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_21FFC50(&StringLiteral_12291/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_21FFC50(&StringLiteral_2184/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_21FFC50(&StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/);
    sub_21FFC50(&StringLiteral_2185/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_21FFC50(&StringLiteral_12496/*"SERVANT_TAKE"*/);
    sub_21FFC50(&StringLiteral_2186/*"AUTO_ORGANIZATION_SETTING_UNIT"*/);
    sub_21FFC50(&StringLiteral_12292/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_5933E40 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&eventId,
      (System_String_o *)preQuest,
      (int32_t)callback,
      (int32_t)method,
      v6,
      v7);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)autoOrganizationSortInfo,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_108;
      ListViewSort__Load(baseSortInfo, 0);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v19);
    this->fields.oldSettingStatus = SettingState;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.oldSettingStatus,
      (int32_t)SettingState,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = this->fields.baseSortInfo;
    v31 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
    ListViewSort___ctor_50785372(v31, v30, 0);
    this->fields.operationSortInfo = v31;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2185/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/, 0);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/, 0);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"SERVANT_SORT_RESET"*/, 0);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2178/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2184/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0);
                    unitTitleLabel = this->fields.unitTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2186/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, 0);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/,
                                                         0);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_2177/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/,
                                                           0);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0);
                          kindServantLabel = this->fields.kindServantLabel;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12496/*"SERVANT_TAKE"*/,
                                                             0);
                          if ( kindServantLabel )
                          {
                            UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0);
                            kindServantEquipLabel = this->fields.kindServantEquipLabel;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/,
                                                               0);
                            if ( kindServantEquipLabel )
                            {
                              UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0);
                              rarity1Label = this->fields.rarity1Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12291/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                                 0);
                              if ( rarity1Label )
                              {
                                UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0);
                                rarity2Label = this->fields.rarity2Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12295/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                                   0);
                                if ( rarity2Label )
                                {
                                  UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0);
                                  rarity3Label = this->fields.rarity3Label;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12292/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                                     0);
                                  if ( rarity3Label )
                                  {
                                    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0);
                                    rarity4Label = this->fields.rarity4Label;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12293/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                       0);
                                    if ( rarity4Label )
                                    {
                                      UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0);
                                      rarity5Label = this->fields.rarity5Label;
                                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_12294/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                         0);
                                      if ( rarity5Label )
                                      {
                                        UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0);
                                        baseSortInfo = (ListViewSort_o *)sub_21FFD10(UILabel___TypeInfo, 6);
                                        if ( baseSortInfo )
                                        {
                                          unit1Label = this->fields.unit1Label;
                                          v65 = baseSortInfo;
                                          if ( unit1Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit1Label,
                                                                               baseSortInfo->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_110;
                                          }
                                          if ( !*(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE )
                                            goto LABEL_109;
                                          v65->fields.manager = (struct ListViewManager_o *)unit1Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.manager,
                                            (int32_t)unit1Label,
                                            v58,
                                            v59,
                                            v60,
                                            v61,
                                            v62,
                                            v63);
                                          unit2Label = this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit2Label,
                                                                               v65->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_110;
                                          }
                                          if ( (*(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE & 0xFFFFFFFE) == 0 )
                                            goto LABEL_109;
                                          v65->fields.saveKey = (struct System_String_o *)unit2Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.saveKey,
                                            (int32_t)unit2Label,
                                            v67,
                                            v68,
                                            v69,
                                            v70,
                                            v71,
                                            v72);
                                          unit3Label = this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit3Label,
                                                                               v65->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_110;
                                          }
                                          if ( *(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE <= 2u )
                                            goto LABEL_109;
                                          *(_QWORD *)&v65->fields.defaultSortKind = unit3Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.defaultSortKind,
                                            (int32_t)unit3Label,
                                            v74,
                                            v75,
                                            v76,
                                            v77,
                                            v78,
                                            v79);
                                          unit4Label = this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit4Label,
                                                                               v65->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_110;
                                          }
                                          if ( (*(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE & 0xFFFFFFFC) == 0 )
                                            goto LABEL_109;
                                          *(_QWORD *)&v65->fields.sortKind = unit4Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.sortKind,
                                            (int32_t)unit4Label,
                                            v81,
                                            v82,
                                            v83,
                                            v84,
                                            v85,
                                            v86);
                                          unit5Label = this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit5Label,
                                                                               v65->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_110;
                                          }
                                          if ( *(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE <= 4u )
                                            goto LABEL_109;
                                          *(_QWORD *)&v65->fields.bonusKind = unit5Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.bonusKind,
                                            (int32_t)unit5Label,
                                            v88,
                                            v89,
                                            v90,
                                            v91,
                                            v92,
                                            v93);
                                          unit6Label = this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_21FFDA4(
                                                                               this->fields.unit6Label,
                                                                               v65->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                            {
LABEL_110:
                                              v148 = sub_21FFEF0(baseSortInfo, v66);
                                              sub_21FFD90(v148, 0);
                                            }
                                          }
                                          if ( *(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE <= 5u )
LABEL_109:
                                            sub_21FFED4(baseSortInfo);
                                          *(_QWORD *)&v65->fields.bonusKind2 = unit6Label;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v65->fields.bonusKind2,
                                            (int32_t)unit6Label,
                                            v95,
                                            v96,
                                            v97,
                                            v98,
                                            v99,
                                            v100);
                                          v104 = *(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE;
                                          if ( v104 >= 1 )
                                          {
                                            v105 = 0;
                                            while ( (unsigned int)v105 < v104 )
                                            {
                                              v106 = (UILabel_o *)*((_QWORD *)&v65->fields.manager + v105);
                                              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
                                              v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12497/*"SERVANT_UNIT"*/, 0);
                                              LODWORD(v149.fields.m_Center.fields.x) = v105 + 1;
                                              v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v149);
                                              baseSortInfo = (ListViewSort_o *)System_String__Format(v107, v108, 0);
                                              if ( !v106 )
                                                goto LABEL_108;
                                              UILabel__set_text(v106, (System_String_o *)baseSortInfo, 0);
                                              v104 = *(_DWORD *)&v65->fields.FILTER_DEFAULT_VALUE;
                                              if ( (int)++v105 >= v104 )
                                                goto LABEL_54;
                                            }
                                            goto LABEL_109;
                                          }
LABEL_54:
                                          unitExplanationLabel = this->fields.unitExplanationLabel;
                                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
                                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2187/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/,
                                                                             0);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(unitExplanationLabel, (System_String_o *)baseSortInfo, 0);
                                            organizationModeLabel = this->fields.organizationModeLabel;
                                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                               0);
                                            if ( organizationModeLabel )
                                            {
                                              UILabel__set_text(
                                                organizationModeLabel,
                                                (System_String_o *)baseSortInfo,
                                                0);
                                              organizationModeDetail = this->fields.organizationModeDetail;
                                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_2181/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                                 0);
                                              if ( organizationModeDetail )
                                              {
                                                UILabel__set_text(
                                                  organizationModeDetail,
                                                  (System_String_o *)baseSortInfo,
                                                  0);
                                                baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0);
                                                if ( baseSortInfo )
                                                {
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    1,
                                                    0);
                                                  if ( preQuest )
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    GameOptionRadioButtonGroup__Init(
                                                      (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                                      0);
                                                    organizationModeGroup = this->fields.organizationModeGroup;
                                                    v115 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                                    if ( !*(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished
                                                          + 1) )
                                                      j_il2cpp_runtime_class_init_0(
                                                        PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                        v112,
                                                        v113);
                                                    baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v115);
                                                    if ( !organizationModeGroup )
                                                      goto LABEL_108;
                                                    GameOptionRadioButtonGroup__SetLabels(
                                                      organizationModeGroup,
                                                      (System_String_array *)baseSortInfo,
                                                      0);
                                                    v116 = this->fields.organizationModeGroup;
                                                    v117 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
                                                    System_Action_int____ctor(
                                                      v117,
                                                      (Il2CppObject *)this,
                                                      (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
                                                      0);
                                                    if ( !v116 )
                                                      goto LABEL_108;
                                                    v116->fields.selectedCallback = v117;
                                                    sub_21FFBF4(
                                                      (MissionNaviTransitionBoardItem_o *)&v116->fields.selectedCallback,
                                                      (int32_t)v117,
                                                      v118,
                                                      v119,
                                                      v120,
                                                      v121,
                                                      v122,
                                                      v123);
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    v124 = 1;
                                                  }
                                                  else
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    v124 = 0;
                                                  }
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    v124,
                                                    0);
                                                  v126 = this->fields.eventId;
                                                  this->fields.isServantEquipBonusFilterEnable = 0;
                                                  if ( !v126 )
                                                    goto LABEL_92;
                                                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v125);
                                                  baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
                                                  if ( !baseSortInfo )
                                                    goto LABEL_108;
                                                  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(
                                                                            (EventMaster_o *)baseSortInfo,
                                                                            0,
                                                                            0,
                                                                            0);
                                                  v128 = System_Linq_Enumerable__ToArray_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                                                           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
                                                  this->fields.eventIdList = v128;
                                                  sub_21FFBF4(
                                                    (MissionNaviTransitionBoardItem_o *)&this->fields.eventIdList,
                                                    (int32_t)v128,
                                                    v129,
                                                    v130,
                                                    v131,
                                                    v132,
                                                    v133,
                                                    v134);
                                                  eventIdList = this->fields.eventIdList;
                                                  if ( eventIdList
                                                    && SLODWORD(eventIdList->max_length) >= 1
                                                    && System_Linq_Enumerable__Contains_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                         this->fields.eventId,
                                                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)sub_21FFD10(int___TypeInfo, 1);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    v137 = (System_Int32_array *)baseSortInfo;
                                                    if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
                                                      goto LABEL_109;
                                                    LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
                                                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v136);
                                                    baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    FilterList = EventBonusFilterMaster__GetFilterList(
                                                                   (EventBonusFilterMaster_o *)baseSortInfo,
                                                                   v137,
                                                                   1,
                                                                   1,
                                                                   0);
                                                    if ( FilterList && FilterList->fields._size >= 1 )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                      this->fields.isServantEquipBonusFilterEnable = 1;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_108;
                                                      AutoOrganizationServantBonusFilterEquipComponent__CreateList(
                                                        (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                        v137,
                                                        0);
                                                      baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_108;
                                                      ServantBonusFilterEquipComponent__SetInitButtonSelect(
                                                        (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                        0);
                                                    }
                                                  }
                                                  if ( this->fields.isServantEquipBonusFilterEnable )
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      1,
                                                      0);
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
                                                    v141 = (UnityEngine_Transform_o *)baseSortInfo;
                                                    parent = UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)baseSortInfo,
                                                               0);
                                                    NGUIMath__CalculateRelativeWidgetBounds_56085108(
                                                      &v149,
                                                      parent,
                                                      v141,
                                                      0);
                                                    GameObjectExtensions__SetLocalPositionY(
                                                      this->fields.eventBonusObject,
                                                      v149.fields.m_Center.fields.y - v149.fields.m_Extents.fields.y,
                                                      0);
                                                  }
                                                  else
                                                  {
LABEL_92:
                                                    baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_108;
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      0,
                                                      0);
                                                  }
                                                  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                                    j_il2cpp_runtime_class_init_0(
                                                      UnityEngine_Object_TypeInfo,
                                                      v139,
                                                      v140);
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
                                                      v144 = this->fields.scrollView;
                                                      if ( v144 )
                                                      {
                                                        v145 = this->fields.baseSortInfo;
                                                        if ( v145 )
                                                        {
                                                          baseSortInfo = (ListViewSort_o *)v144->fields.verticalScrollBar;
                                                          if ( baseSortInfo )
                                                          {
                                                            UIProgressBar__set_value(
                                                              (UIProgressBar_o *)baseSortInfo,
                                                              v145->fields.scrollBarValue,
                                                              0);
LABEL_106:
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                              this,
                                                              v21);
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                              this,
                                                              1,
                                                              v146);
                                                            this->fields.state = 1;
                                                            v147 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                                                            System_Action___ctor(
                                                              v147,
                                                              (Il2CppObject *)this,
                                                              Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                              0);
                                                            BaseDialog__Open((BaseDialog_o *)this, v147, 0, 0, 0);
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
LABEL_108:
    sub_21FFECC(baseSortInfo, v21);
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
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5933E42 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_5933E42 = 1;
  }
  decideButton = this->fields.decideButton;
  memset(&v13, 0, sizeof(v13));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v6 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_21FFECC(v6, v7);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v13.fields._current, isEnable, 0);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !gameObject )
        sub_21FFECC(0, v10);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_21FFECC(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationAutoOrganizationSettingDialog_o *v3; // x19
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v6; // w20
  UISprite_o *v7; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v9; // x2
  bool Filter_50812376; // w8
  int v11; // w9
  struct System_Collections_Generic_List_UICommonButton__o *p_monitor; // x8
  struct ListViewSort_o *v13; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v3 = this;
  if ( (byte_5933E4B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_5933E4B = 1;
  }
  buttonList = v3->fields.buttonList;
  if ( !buttonList )
    goto LABEL_23;
  size = buttonList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3->fields.spriteList;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v6,
                                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v3->fields.categoryFilterKind )
        break;
      v7 = (UISprite_o *)this;
      operationSortInfo = v3->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)v3->fields.categoryFilterKind,
                                                                   v6,
                                                                   (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      Filter_50812376 = ListViewSort__GetFilter_50812376(operationSortInfo, (int32_t)this, 0);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v11 = *(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished + 1);
      if ( Filter_50812376 )
      {
        if ( !v11 )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, method, v9);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_monitor = this->fields.buttonList;
      }
      else
      {
        if ( !v11 )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, method, v9);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_monitor = (struct System_Collections_Generic_List_UICommonButton__o *)&this->fields.buttonList->monitor;
      }
      if ( !v7 )
        break;
      UISprite__set_spriteName(v7, (System_String_o *)p_monitor->klass, 0);
      if ( size == ++v6 )
        goto LABEL_18;
    }
LABEL_23:
    sub_21FFECC(this, method);
  }
LABEL_18:
  v13 = v3->fields.operationSortInfo;
  if ( !v13 )
    goto LABEL_23;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v3->fields.organizationModeGroup;
  autoOrganizationMode = v13->fields.autoOrganizationMode;
  if ( !*(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, method, v2);
  if ( !organizationModeGroup )
    goto LABEL_23;
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
  if ( (byte_5933E50 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_5933E50 = 1;
  }
  if ( v4->fields.state != 2 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      organizationModeGroup = v4->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      if ( !*(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
          *(_QWORD *)&selectedIndex,
          method);
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&selectedIndex);
  }
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v5 = v4->fields.operationSortInfo;
  if ( !*(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
      *(_QWORD *)&selectedIndex,
      method);
  if ( !v5 )
    goto LABEL_15;
  v5->fields.autoOrganizationMode = selectedIndex == 1;
  v6 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933E3E & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_5933E3E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v6->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_220024C(
                                                              v6,
                                                              PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_5933E4D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_5933E4D = 1;
  }
  return (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/;
}


void PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5933E3F & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_5933E3F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v6->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_220024C(
                                                              v6,
                                                              PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v11, v12);
}


void PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FF1290;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF1248;
}


System_IAsyncResult_o *PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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


void PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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