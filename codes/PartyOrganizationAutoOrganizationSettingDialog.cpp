void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A56FE0 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56FE0 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17470/*"btn_bg_03"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17470/*"btn_bg_03"*/,
    v1,
    v2);
  v3 = StringLiteral_17471/*"btn_bg_04"*/;
  static_fields = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17471/*"btn_bg_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->DISABLE_BUTTON_SPRITE, v3, v5, v6);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
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
  int32_t v27; // w3

  if ( (byte_4A56FDF & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
    byte_4A56FDF = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      0,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      9,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v23 < items->max_length )
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 11;
    ++*p_version;
    goto LABEL_41;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    11,
    *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_47:
    sub_1B8880C(v4, v5);
LABEL_41:
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      12,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 12;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.categoryFilterKind, (int32_t)v3, v6, v7);
  v25 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v25, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationSortInfo, (int32_t)v25, v26, v27);
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
  int32_t v3; // w3
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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

  PartyOrganizationAutoOrganizationSettingDialog__Close_31974648(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_31974648(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_Action_o *v7; // x20

  if ( (byte_4A56FD2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_4A56FD2 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v1; // x19
  System_String_o *v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A56FDD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_2178/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1B885B0(&StringLiteral_2177/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_4A56FDD = 1;
  }
  v1 = sub_1B88658(string___TypeInfo, 2LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2178/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  if ( !*(_DWORD *)(v1 + 24)
    || (*(_QWORD *)(v1 + 32) = v2,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), (int32_t)v2, v4, v5),
        v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2177/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL),
        *(_DWORD *)(v1 + 24) <= 1u) )
  {
    sub_1B88814(v2, v3);
  }
  *(_QWORD *)(v1 + 40) = v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 40), (int32_t)v2, v6, v7);
  return (System_String_array *)v1;
}


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  System_Boolean_array *v7; // x22
  unsigned __int64 v8; // x23

  v4 = this;
  if ( (byte_4A56FDB & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    byte_4A56FDB = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v7 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)this,
                                                                   v8,
                                                                   (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_40785692(
                                                                   sort,
                                                                   (int32_t)this,
                                                                   0LL);
      if ( !v7 )
        break;
      if ( v8 >= v7->max_length )
        sub_1B88814(this, sort);
      v7->m_Items[v8++ + 4] = (unsigned __int8)this & 1;
      if ( size == v8 )
        return v7;
    }
LABEL_12:
    sub_1B8880C(this, sort);
  }
  return v7;
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
      sub_1B8880C(0LL, method);
    if ( ListViewSort__GetFilter_40785692(operationSortInfo, v3 + 6, 0LL) )
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

  if ( (byte_4A56FD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_4A56FD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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

  if ( (byte_4A56FD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_4A56FD9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_40786512(operationSortInfo, i, 0, 0LL);
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
    sub_1B8880C(operationSortInfo, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
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
  __int64 v13; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x22
  int v16; // w26
  Il2CppObject *v17; // x0
  ListViewSort_o *v18; // x20
  const MethodInfo *v19; // x2
  int v20; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4A56FD7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    sub_1B885B0(&StringLiteral_2617/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56FD7 = 1;
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
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      v13 = *(_QWORD *)&eventIdList->max_length;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v13 >= 1 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)v13 )
            sub_1B88814(this, method);
          if ( !v14 )
            break;
          v16 = eventIdList->m_Items[v15 + 1];
          if ( v14->fields._stringLength >= 1 )
            v14 = System_String__Concat_61707032(v14, (System_String_o *)StringLiteral_868/*","*/, 0LL);
          v20 = v16;
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v14,
                                                                       v17,
                                                                       0LL);
          LODWORD(v13) = eventIdList->max_length;
          ++v15;
          v14 = (System_String_o *)this;
          if ( (__int64)v15 >= (int)v13 )
            goto LABEL_17;
        }
LABEL_26:
        sub_1B8880C(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2617/*"AutoOrganizationBonusFilterEventId"*/, v14, 0LL);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v18 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v18 )
        goto LABEL_26;
      ListViewSort__SetFilter(v18, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v19);
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

  if ( (byte_4A56FDA & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_4A56FDA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    for ( i = 0; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_40786512(operationSortInfo, i, 1, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_1B8880C(operationSortInfo, v5);
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

  if ( (byte_4A56FD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_4A56FD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(0LL, v7);
    ListViewSort__SwitchFilter_40787584(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


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

  if ( (byte_4A56FD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    byte_4A56FD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    for ( i = 0; i != 6; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B8880C(0LL, v7);
      ListViewSort__SetFilter_40786512(operationSortInfo, i + 7, i < unit, 0LL);
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

  if ( (byte_4A56FD5 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    byte_4A56FD5 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    for ( i = 7; i != 13; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B8880C(0LL, v6);
      ListViewSort__SetFilter_40786512(operationSortInfo, i, 0, 0LL);
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Open(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  char v12; // w3
  const MethodInfo *v13; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v15; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int32_t v18; // w2
  char v19; // w3
  ListViewSort_o *v20; // x21
  ListViewSort_o *v21; // x22
  int32_t v22; // w2
  char v23; // w3
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
  int32_t v42; // w2
  char v43; // w3
  struct UILabel_o *unit1Label; // x22
  ListViewSort_o *v45; // x21
  int32_t v46; // w2
  char v47; // w3
  struct UILabel_o *unit2Label; // x22
  int32_t v49; // w2
  char v50; // w3
  struct UILabel_o *unit3Label; // x22
  int32_t v52; // w2
  char v53; // w3
  struct UILabel_o *unit4Label; // x22
  int32_t v55; // w2
  char v56; // w3
  struct UILabel_o *unit5Label; // x22
  int32_t v58; // w2
  char v59; // w3
  struct UILabel_o *unit6Label; // x22
  __int64 v61; // x8
  __int64 v62; // x25
  UILabel_o *v63; // x22
  System_String_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  UILabel_o *unitExplanationLabel; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v73; // x0
  struct GameOptionRadioButtonGroup_o *v74; // x20
  System_Action_int__o *v75; // x21
  int32_t v76; // w2
  char v77; // w3
  bool v78; // w1
  int32_t v79; // w8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  char v83; // w3
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v85; // x20
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v87; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v90; // x9
  struct ListViewSort_o *v91; // x8
  const MethodInfo *v92; // x2
  System_Action_o *v93; // x20
  __int64 v94; // x0
  UnityEngine_Bounds_o v95; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A56FD1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1B885B0(&UILabel___TypeInfo);
    sub_1B885B0(&StringLiteral_11837/*"SERVANT_SORT_RESET"*/);
    sub_1B885B0(&StringLiteral_2171/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/);
    sub_1B885B0(&StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_2182/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/);
    sub_1B885B0(&StringLiteral_2174/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_1B885B0(&StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1B885B0(&StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/);
    sub_1B885B0(&StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2172/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/);
    sub_1B885B0(&StringLiteral_2173/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_1B885B0(&StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1B885B0(&StringLiteral_2175/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_1B885B0(&StringLiteral_11950/*"SERVANT_UNIT"*/);
    sub_1B885B0(&StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1B885B0(&StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1B885B0(&StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_1B885B0(&StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/);
    sub_1B885B0(&StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_1B885B0(&StringLiteral_11949/*"SERVANT_TAKE"*/);
    sub_1B885B0(&StringLiteral_2181/*"AUTO_ORGANIZATION_SETTING_UNIT"*/);
    sub_1B885B0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4A56FD1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, eventId, preQuest);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v11, v12);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo,
        (int32_t)autoOrganizationSortInfo,
        v11,
        v12);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_108;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v13);
    this->fields.oldSettingStatus = SettingState;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldSettingStatus, (int32_t)SettingState, v18, v19);
    v20 = this->fields.baseSortInfo;
    v21 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40759792(v21, v20, 0LL);
    this->fields.operationSortInfo = v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v21, v22, v23);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_108;
    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
    decideLabel = this->fields.decideLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_108;
    UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
    clearLabel = this->fields.clearLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_108;
    UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
    cancelLabel = this->fields.cancelLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_108;
    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
    initializeLabel = this->fields.initializeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !initializeLabel )
      goto LABEL_108;
    UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
    explanationLabel = this->fields.explanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2173/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_108;
    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindTitleLabel = this->fields.kindTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
    if ( !kindTitleLabel )
      goto LABEL_108;
    UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    rarityTitleLabel = this->fields.rarityTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
    if ( !rarityTitleLabel )
      goto LABEL_108;
    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    unitTitleLabel = this->fields.unitTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2181/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, 0LL);
    if ( !unitTitleLabel )
      goto LABEL_108;
    UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2171/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, 0LL);
    if ( !eventEquipTitleLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
    eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2172/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, 0LL);
    if ( !eventEquipExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantLabel = this->fields.kindServantLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_TAKE"*/, 0LL);
    if ( !kindServantLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
    kindServantEquipLabel = this->fields.kindServantEquipLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/, 0LL);
    if ( !kindServantEquipLabel )
      goto LABEL_108;
    UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
    rarity1Label = this->fields.rarity1Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !rarity1Label )
      goto LABEL_108;
    UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
    rarity2Label = this->fields.rarity2Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !rarity2Label )
      goto LABEL_108;
    UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
    rarity3Label = this->fields.rarity3Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !rarity3Label )
      goto LABEL_108;
    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
    rarity4Label = this->fields.rarity4Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    if ( !rarity4Label )
      goto LABEL_108;
    UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
    rarity5Label = this->fields.rarity5Label;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    if ( !rarity5Label )
      goto LABEL_108;
    UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
    baseSortInfo = (ListViewSort_o *)sub_1B88658(UILabel___TypeInfo, 6LL);
    if ( !baseSortInfo )
      goto LABEL_108;
    unit1Label = this->fields.unit1Label;
    v45 = baseSortInfo;
    if ( unit1Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit1Label, baseSortInfo->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( !*(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE )
      goto LABEL_109;
    v45->fields.manager = (struct ListViewManager_o *)unit1Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.manager, (int32_t)unit1Label, v42, v43);
    unit2Label = this->fields.unit2Label;
    if ( unit2Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit2Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 1u )
      goto LABEL_109;
    v45->fields.saveKey = (struct System_String_o *)unit2Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.saveKey, (int32_t)unit2Label, v46, v47);
    unit3Label = this->fields.unit3Label;
    if ( unit3Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit3Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 2u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.defaultSortKind = unit3Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.defaultSortKind, (int32_t)unit3Label, v49, v50);
    unit4Label = this->fields.unit4Label;
    if ( unit4Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit4Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 3u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.sortKind = unit4Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.sortKind, (int32_t)unit4Label, v52, v53);
    unit5Label = this->fields.unit5Label;
    if ( unit5Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit5Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
        goto LABEL_110;
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 4u )
      goto LABEL_109;
    *(_QWORD *)&v45->fields.bonusKind = unit5Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.bonusKind, (int32_t)unit5Label, v55, v56);
    unit6Label = this->fields.unit6Label;
    if ( unit6Label )
    {
      baseSortInfo = (ListViewSort_o *)sub_1B886EC(this->fields.unit6Label, v45->klass->_1.element_class);
      if ( !baseSortInfo )
      {
LABEL_110:
        v94 = sub_1B88830();
        sub_1B886D8(v94, 0LL);
      }
    }
    if ( *(_DWORD *)&v45->fields.FILTER_DEFAULT_VALUE <= 5u )
LABEL_109:
      sub_1B88814(baseSortInfo, v15);
    *(_QWORD *)&v45->fields.bonusKind2 = unit6Label;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.bonusKind2, (int32_t)unit6Label, v58, v59);
    v61 = *(_QWORD *)&v45->fields.FILTER_DEFAULT_VALUE;
    if ( (int)v61 >= 1 )
    {
      v62 = 0LL;
      while ( (unsigned int)v62 < (unsigned int)v61 )
      {
        v63 = (UILabel_o *)*((_QWORD *)&v45->fields.manager + v62);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_UNIT"*/, 0LL);
        LODWORD(v95.fields.m_Center.fields.x) = v62 + 1;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95, v65, v66, v67);
        baseSortInfo = (ListViewSort_o *)System_String__Format(v64, v68, 0LL);
        if ( !v63 )
          goto LABEL_108;
        UILabel__set_text(v63, (System_String_o *)baseSortInfo, 0LL);
        v61 = *(_QWORD *)&v45->fields.FILTER_DEFAULT_VALUE;
        if ( (int)++v62 >= (int)v61 )
          goto LABEL_54;
      }
      goto LABEL_109;
    }
LABEL_54:
    unitExplanationLabel = this->fields.unitExplanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2182/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, 0LL);
    if ( !unitExplanationLabel )
      goto LABEL_108;
    UILabel__set_text(unitExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeLabel = this->fields.organizationModeLabel;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"AUTO_ORGANIZATION_SETTING_MODE"*/, 0LL);
    if ( !organizationModeLabel )
      goto LABEL_108;
    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
    organizationModeDetail = this->fields.organizationModeDetail;
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, 0LL);
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
      v73 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v73);
      if ( !organizationModeGroup )
        goto LABEL_108;
      GameOptionRadioButtonGroup__SetLabels(organizationModeGroup, (System_String_array *)baseSortInfo, 0LL);
      v74 = this->fields.organizationModeGroup;
      v75 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v75,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
        0LL);
      if ( !v74 )
        goto LABEL_108;
      v74->fields.selectedCallback = v75;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v74->fields.selectedCallback, (int32_t)v75, v76, v77);
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v78 = 1;
    }
    else
    {
      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
      if ( !baseSortInfo )
        goto LABEL_108;
      v78 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, v78, 0LL);
    v79 = this->fields.eventId;
    this->fields.isServantEquipBonusFilterEnable = 0;
    if ( v79 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !baseSortInfo )
        goto LABEL_108;
      EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL, 0LL);
      v81 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
              (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
      this->fields.eventIdList = v81;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)v81, v82, v83);
      eventIdList = this->fields.eventIdList;
      if ( eventIdList
        && (int)eventIdList->max_length >= 1
        && System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
             this->fields.eventId,
             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        baseSortInfo = (ListViewSort_o *)sub_1B88658(int___TypeInfo, 1LL);
        if ( !baseSortInfo )
          goto LABEL_108;
        v85 = (System_Int32_array *)baseSortInfo;
        if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
          goto LABEL_109;
        LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        if ( !baseSortInfo )
          goto LABEL_108;
        FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)baseSortInfo, v85, 1, 0LL);
        if ( FilterList && FilterList->fields._size >= 1 )
        {
          baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
          this->fields.isServantEquipBonusFilterEnable = 1;
          if ( !baseSortInfo )
            goto LABEL_108;
          AutoOrganizationServantBonusFilterEquipComponent__CreateList(
            (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
            v85,
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
        v87 = (UnityEngine_Transform_o *)baseSortInfo;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseSortInfo, 0LL);
        NGUIMath__CalculateRelativeWidgetBounds_46736076(&v95, parent, v87, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          this->fields.eventBonusObject,
          v95.fields.m_Center.fields.y - v95.fields.m_Extents.fields.y,
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
        v90 = this->fields.scrollView;
        if ( v90 )
        {
          v91 = this->fields.baseSortInfo;
          if ( v91 )
          {
            baseSortInfo = (ListViewSort_o *)v90->fields.verticalScrollBar;
            if ( baseSortInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v91->fields.scrollBarValue, 0LL);
LABEL_106:
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v15);
              PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 1, v92);
              this->fields.state = 1;
              v93 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v93,
                (Il2CppObject *)this,
                Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                0LL);
              BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_108:
    sub_1B8880C(baseSortInfo, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
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

  if ( (byte_4A56FD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_4A56FD3 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B8880C(v6, v7);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v12.fields._current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1B8880C(0LL, v10);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1B8880C(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
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
  if ( (byte_4A56FDC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4A56FDC = 1;
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
                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v7 = (UISprite_o *)this;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                   (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                   v5,
                                                                   (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_40785692(
                                                                   operationSortInfo,
                                                                   (int32_t)this,
                                                                   0LL);
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
      UISprite__set_spriteName(v7, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( size == ++v5 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B8880C(this, method);
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
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog___Open_b__60_0(
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
  if ( (byte_4A56FE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4A56FE1 = 1;
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
    sub_1B8880C(this, *(_QWORD *)&selectedIndex);
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
    v6 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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

  if ( (byte_4A56FCF & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4A56FCF = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B88ACC(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56FDE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A56FDE = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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

  if ( (byte_4A56FD0 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4A56FD0 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8D0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8CC4;
}


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
  if ( (byte_4A56FE2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56FE2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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