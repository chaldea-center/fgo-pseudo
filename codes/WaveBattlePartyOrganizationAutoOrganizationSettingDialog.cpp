void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A572D4 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A572D4 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17470/*"btn_bg_03"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17470/*"btn_bg_03"*/,
    v1,
    v2);
  v3 = StringLiteral_17471/*"btn_bg_04"*/;
  static_fields = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17471/*"btn_bg_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->DISABLE_BUTTON_SPRITE, v3, v5, v6);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Object_array *items; // x9
  _QWORD *v9; // x8
  __int64 size; // x10
  __int64 v11; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  ListViewSort_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A572D3 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
    byte_4A572D3 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    goto LABEL_29;
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      0,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++v3->fields._version;
  }
  v11 = v3->fields._size;
  if ( (unsigned int)v11 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 1;
    ++v3->fields._version;
  }
  v12 = v3->fields._size;
  if ( (unsigned int)v12 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 2;
    ++v3->fields._version;
  }
  v13 = v3->fields._size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 3;
    ++v3->fields._version;
  }
  v14 = v3->fields._size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 4;
    ++v3->fields._version;
  }
  v15 = v3->fields._size;
  if ( (unsigned int)v15 < items->max_length )
  {
    v3->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 5;
    ++v3->fields._version;
    goto LABEL_23;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    5,
    *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_29:
    sub_1B8880C(v4, v5);
LABEL_23:
  v16 = v3->fields._size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 6;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.categoryFilterKind, (int32_t)v3, v6, v7);
  v17 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v17, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoOrganizationSortInfo, (int32_t)v17, v18, v19);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_32372912(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_32372912(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_Action_o *v7; // x20

  if ( (byte_4A572C8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_4A572C8 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


int32_t __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndClose(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
        const MethodInfo *method)
{
  __int64 v1; // x19
  System_String_o *v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A572D1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_2178/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1B885B0(&StringLiteral_2177/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_4A572D1 = 1;
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


System_Boolean_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  System_Boolean_array *v7; // x22
  unsigned __int64 v8; // x23

  v4 = this;
  if ( (byte_4A572CF & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    byte_4A572CF = 1;
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
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)this,
                                                                             v8,
                                                                             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_40785740(
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Init(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A572CC & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_4A572CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct ListViewSort_o *operationSortInfo; // x0
  int32_t v7; // w20

  if ( (byte_4A572CD & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_4A572CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
LABEL_10:
      sub_1B8880C(operationSortInfo, v5);
    v7 = 0;
    while ( v7 != 7 )
    {
      ListViewSort__SetFilter_40786564(operationSortInfo, v7, 0, 0LL);
      operationSortInfo = this->fields.operationSortInfo;
      ++v7;
      if ( !operationSortInfo )
        goto LABEL_10;
    }
    operationSortInfo->fields.autoOrganizationMode = 0;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A572CB & 1) == 0 )
  {
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    byte_4A572CB = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_12;
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1B8880C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v9);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4A572CE & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_4A572CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    for ( i = 0; i != 7; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B8880C(0LL, v5);
      ListViewSort__SetFilter_40786564(operationSortInfo, i, 1, 0LL);
    }
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4A572CA & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_4A572CA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(0LL, v7);
    ListViewSort__SwitchFilter_40787640(operationSortInfo, kind, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v11; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  ListViewSort_o *v16; // x20
  ListViewSort_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *kindTitleLabel; // x20
  UILabel_o *rarityTitleLabel; // x20
  UILabel_o *kindServantLabel; // x20
  UILabel_o *kindServantEquipLabel; // x20
  UILabel_o *rarity1Label; // x20
  UILabel_o *rarity2Label; // x20
  UILabel_o *rarity3Label; // x20
  UILabel_o *rarity4Label; // x20
  UILabel_o *rarity5Label; // x20
  UILabel_o *organizationModeLabel; // x20
  UILabel_o *organizationModeDetail; // x20
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x20
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v38; // x0
  struct GameOptionRadioButtonGroup_o *v39; // x20
  System_Action_int__o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v44; // x9
  struct ListViewSort_o *v45; // x8
  const MethodInfo *v46; // x2
  System_Action_o *v47; // x20

  if ( (byte_4A572C7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_11837/*"SERVANT_SORT_RESET"*/);
    sub_1B885B0(&StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_2174/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_1B885B0(&StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1B885B0(&StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/);
    sub_1B885B0(&StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2173/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_1B885B0(&StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1B885B0(&StringLiteral_2175/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_1B885B0(&StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1B885B0(&StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1B885B0(&StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_1B885B0(&StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/);
    sub_1B885B0(&StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_1B885B0(&StringLiteral_11949/*"SERVANT_TAKE"*/);
    sub_1B885B0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4A572C7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v7, v8);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo,
        (int32_t)autoOrganizationSortInfo,
        v7,
        v8);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_43;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v9);
    this->fields.oldSettingStatus = SettingState;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldSettingStatus, (int32_t)SettingState, v14, v15);
    v16 = this->fields.baseSortInfo;
    v17 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40759792(v17, v16, 0LL);
    this->fields.operationSortInfo = v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v17, v18, v19);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2180/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2173/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2179/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    kindServantLabel = this->fields.kindServantLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11949/*"SERVANT_TAKE"*/,
                                                       0LL);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/,
                                                         0LL);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                        rarity1Label = this->fields.rarity1Label;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                           0LL);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                          rarity2Label = this->fields.rarity2Label;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                             0LL);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                            rarity3Label = this->fields.rarity3Label;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                               0LL);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                              rarity4Label = this->fields.rarity4Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                 0LL);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity5Label = this->fields.rarity5Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                   0LL);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                  organizationModeLabel = this->fields.organizationModeLabel;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_2175/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                     0LL);
                                  if ( organizationModeLabel )
                                  {
                                    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
                                    organizationModeDetail = this->fields.organizationModeDetail;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                       0LL);
                                    if ( organizationModeDetail )
                                    {
                                      UILabel__set_text(organizationModeDetail, (System_String_o *)baseSortInfo, 0LL);
                                      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                      if ( baseSortInfo )
                                      {
                                        GameOptionRadioButtonGroup__Init(
                                          (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                          0LL);
                                        organizationModeGroup = this->fields.organizationModeGroup;
                                        v38 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                        if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                        baseSortInfo = (ListViewSort_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v38);
                                        if ( organizationModeGroup )
                                        {
                                          GameOptionRadioButtonGroup__SetLabels(
                                            organizationModeGroup,
                                            (System_String_array *)baseSortInfo,
                                            0LL);
                                          v39 = this->fields.organizationModeGroup;
                                          v40 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v40,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
                                            0LL);
                                          if ( v39 )
                                          {
                                            v39->fields.selectedCallback = v40;
                                            sub_1B88554(
                                              (ServantStatusBattleListViewItem_o *)&v39->fields.selectedCallback,
                                              (int32_t)v40,
                                              v41,
                                              v42);
                                            baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
                                            if ( baseSortInfo )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)baseSortInfo,
                                                1,
                                                0LL);
                                              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                goto LABEL_42;
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
                                                  v44 = this->fields.scrollView;
                                                  if ( v44 )
                                                  {
                                                    v45 = this->fields.baseSortInfo;
                                                    if ( v45 )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)v44->fields.verticalScrollBar;
                                                      if ( baseSortInfo )
                                                      {
                                                        UIProgressBar__set_value(
                                                          (UIProgressBar_o *)baseSortInfo,
                                                          v45->fields.scrollBarValue,
                                                          0LL);
LABEL_42:
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v11);
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v46);
                                                        this->fields.state = 1;
                                                        v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                                        System_Action___ctor(
                                                          v47,
                                                          (Il2CppObject *)this,
                                                          Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0LL);
                                                        BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
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
LABEL_43:
    sub_1B8880C(baseSortInfo, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_4A572C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_4A572C9 = 1;
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v5; // w20
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v7; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v8; // x8
  char v9; // w22
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *v11; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_4A572D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4A572D0 = 1;
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
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.spriteList;
      if ( !this )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)this,
                                                                             v5,
                                                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v7 = (UISprite_o *)this;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                             v5,
                                                                             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_40785740(
                                                                             operationSortInfo,
                                                                             (int32_t)this,
                                                                             0LL);
      v8 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v9 = (char)this;
      if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
        v8 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
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
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v2->fields.organizationModeGroup;
  autoOrganizationMode = v11->fields.autoOrganizationMode;
  if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !organizationModeGroup )
    goto LABEL_20;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___Open_b__42_0(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct ListViewSort_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *operationSortInfo; // x9
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_4A572D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4A572D5 = 1;
  }
  if ( v4->fields.state != 2 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      organizationModeGroup = v4->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&selectedIndex);
  }
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v5 = v4->fields.operationSortInfo;
  if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !v5 )
    goto LABEL_15;
  v5->fields.autoOrganizationMode = selectedIndex == 1;
  v6 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A572C5 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4A572C5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B88ACC(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A572D2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A572D2 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A572C6 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4A572C6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1B88ACC(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19C96E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C969C;
}


System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A572D6 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A572D6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}