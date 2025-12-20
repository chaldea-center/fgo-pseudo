void WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D28485 & 1) == 0 )
  {
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1C94098(&StringLiteral_17525/*"btn_bg_04"*/);
    sub_1C94098(&StringLiteral_17524/*"btn_bg_03"*/);
    byte_4D28485 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17524/*"btn_bg_03"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17524/*"btn_bg_03"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17525/*"btn_bg_04"*/;
  static_fields = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17525/*"btn_bg_04"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->DISABLE_BUTTON_SPRITE, v7, v9, v10, v11, v12, v13, v14);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x9
  _QWORD *v13; // x8
  __int64 size; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  ListViewSort_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D28484 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
    byte_4D28484 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    goto LABEL_29;
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      0,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
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
  v15 = v3->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      1,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
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
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
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
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
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
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v3->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 4;
    ++v3->fields._version;
  }
  v19 = v3->fields._size;
  if ( (unsigned int)v19 < LODWORD(items->max_length) )
  {
    v3->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 5;
    ++v3->fields._version;
    goto LABEL_23;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v3,
    5,
    *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v3->fields._version;
  if ( !items )
LABEL_29:
    sub_1C942F0(v4, v5);
LABEL_23:
  v20 = v3->fields._size;
  if ( (unsigned int)v20 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 6;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.categoryFilterKind, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v21 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor(v21, 3, 0, 0);
  this->fields.autoOrganizationSortInfo = v21;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.autoOrganizationSortInfo,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_35309312(this, 0, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_35309312(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_4D28479 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_4D28479 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


int32_t WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndClose(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
        const MethodInfo *method)
{
  __int64 v1; // x19
  System_String_o *v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D28482 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_2083/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C94098(&StringLiteral_2082/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_4D28482 = 1;
  }
  v1 = sub_1C94140(string___TypeInfo, 2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  if ( !*(_DWORD *)(v1 + 24)
    || (*(_QWORD *)(v1 + 32) = v2,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v1 + 32), (int32_t)v2, v4, v5, v6, v7, v8, v9),
        v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0),
        *(_DWORD *)(v1 + 24) <= 1u) )
  {
    sub_1C942F8(v2);
  }
  *(_QWORD *)(v1 + 40) = v2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v1 + 40), (int32_t)v2, v10, v11, v12, v13, v14, v15);
  return (System_String_array *)v1;
}


System_Boolean_array *WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x23

  v4 = this;
  if ( (byte_4D28480 & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    byte_4D28480 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v7 = sub_1C94140(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)this,
                                                                             v8,
                                                                             (const MethodInfo_385034C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_44656352(
                                                                             sort,
                                                                             (int32_t)this,
                                                                             0);
      if ( !v7 )
        break;
      if ( v8 >= *(unsigned int *)(v7 + 24) )
        sub_1C942F8(this);
      *(_BYTE *)(v7 + 32 + v8++) = (unsigned __int8)this & 1;
      if ( size == v8 )
        return (System_Boolean_array *)v7;
    }
LABEL_12:
    sub_1C942F0(this, sort);
  }
  return (System_Boolean_array *)v7;
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Init(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4D2847D & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_4D2847D = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct ListViewSort_o *operationSortInfo; // x0
  int32_t v7; // w20

  if ( (byte_4D2847E & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_4D2847E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
LABEL_10:
      sub_1C942F0(operationSortInfo, v5);
    v7 = 0;
    while ( v7 != 7 )
    {
      ListViewSort__SetFilter_44657176(operationSortInfo, v7, 0, 0);
      operationSortInfo = this->fields.operationSortInfo;
      ++v7;
      if ( !operationSortInfo )
        goto LABEL_10;
    }
    operationSortInfo->fields.autoOrganizationMode = 0;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
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
  if ( (byte_4D2847C & 1) == 0 )
  {
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    byte_4D2847C = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C942F0(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v9);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t i; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4D2847F & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_4D2847F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    for ( i = 0; i != 7; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C942F0(0, v5);
      ListViewSort__SetFilter_44657176(operationSortInfo, i, 1, 0);
    }
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4D2847B & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_4D2847B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C942F0(0, v7);
    ListViewSort__SwitchFilter_44658252(operationSortInfo, kind, 0);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v19; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ListViewSort_o *v28; // x20
  ListViewSort_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v54; // x0
  struct GameOptionRadioButtonGroup_o *v55; // x20
  System_Action_int__o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v64; // x9
  struct ListViewSort_o *v65; // x8
  const MethodInfo *v66; // x2
  System_Action_o *v67; // x20

  if ( (byte_4D28478 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_1C94098(&StringLiteral_11932/*"SERVANT_SORT_RESET"*/);
    sub_1C94098(&StringLiteral_2081/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_2079/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_1C94098(&StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C94098(&StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C94098(&StringLiteral_11766/*"SERVANT_SORT_CANCEL"*/);
    sub_1C94098(&StringLiteral_2078/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_1C94098(&StringLiteral_11770/*"SERVANT_SORT_DECIDE"*/);
    sub_1C94098(&StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C94098(&StringLiteral_2080/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_1C94098(&StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C94098(&StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C94098(&StringLiteral_2084/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_1C94098(&StringLiteral_11767/*"SERVANT_SORT_CLEAR"*/);
    sub_1C94098(&StringLiteral_2085/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_1C94098(&StringLiteral_12054/*"SERVANT_TAKE"*/);
    sub_1C94098(&StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4D28478 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)autoOrganizationSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_43;
      ListViewSort__Load(baseSortInfo, 0);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v17);
    this->fields.oldSettingStatus = SettingState;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.oldSettingStatus,
      (int32_t)SettingState,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v28 = this->fields.baseSortInfo;
    v29 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
    ListViewSort___ctor_44629008(v29, v28, 0);
    this->fields.operationSortInfo = v29;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SERVANT_SORT_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SORT_CLEAR"*/, 0);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_SORT_CANCEL"*/, 0);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_SORT_RESET"*/, 0);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2079/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0);
                    kindServantLabel = this->fields.kindServantLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/, 0);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/,
                                                         0);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0);
                        rarity1Label = this->fields.rarity1Label;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                           0);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0);
                          rarity2Label = this->fields.rarity2Label;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                             0);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0);
                            rarity3Label = this->fields.rarity3Label;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                               0);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0);
                              rarity4Label = this->fields.rarity4Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                 0);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0);
                                rarity5Label = this->fields.rarity5Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                   0);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0);
                                  organizationModeLabel = this->fields.organizationModeLabel;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_2080/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                     0);
                                  if ( organizationModeLabel )
                                  {
                                    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0);
                                    organizationModeDetail = this->fields.organizationModeDetail;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2081/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                       0);
                                    if ( organizationModeDetail )
                                    {
                                      UILabel__set_text(organizationModeDetail, (System_String_o *)baseSortInfo, 0);
                                      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                      if ( baseSortInfo )
                                      {
                                        GameOptionRadioButtonGroup__Init(
                                          (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                          0);
                                        organizationModeGroup = this->fields.organizationModeGroup;
                                        v54 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                        if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                        baseSortInfo = (ListViewSort_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v54);
                                        if ( organizationModeGroup )
                                        {
                                          GameOptionRadioButtonGroup__SetLabels(
                                            organizationModeGroup,
                                            (System_String_array *)baseSortInfo,
                                            0);
                                          v55 = this->fields.organizationModeGroup;
                                          v56 = (System_Action_int__o *)sub_1C942E4(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v56,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
                                            0);
                                          if ( v55 )
                                          {
                                            v55->fields.selectedCallback = v56;
                                            sub_1C9403C(
                                              (GrandQuestFolderBoardItem_o *)&v55->fields.selectedCallback,
                                              (int32_t)v56,
                                              v57,
                                              v58,
                                              v59,
                                              v60,
                                              v61,
                                              v62);
                                            baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
                                            if ( baseSortInfo )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)baseSortInfo,
                                                1,
                                                0);
                                              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
                                                goto LABEL_42;
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
                                                  v64 = this->fields.scrollView;
                                                  if ( v64 )
                                                  {
                                                    v65 = this->fields.baseSortInfo;
                                                    if ( v65 )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)v64->fields.verticalScrollBar;
                                                      if ( baseSortInfo )
                                                      {
                                                        UIProgressBar__set_value(
                                                          (UIProgressBar_o *)baseSortInfo,
                                                          v65->fields.scrollBarValue,
                                                          0);
LABEL_42:
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v19);
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v66);
                                                        this->fields.state = 1;
                                                        v67 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                                                        System_Action___ctor(
                                                          v67,
                                                          (Il2CppObject *)this,
                                                          Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0);
                                                        BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0, 0);
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
    sub_1C942F0(baseSortInfo, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
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

  if ( (byte_4D2847A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_4D2847A = 1;
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C942F0(v6, v7);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v12.fields._current, isEnable, 0);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !gameObject )
        sub_1C942F0(0, v10);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1C942F0(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
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
  if ( (byte_4D28481 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4D28481 = 1;
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
                                                                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v7 = (UISprite_o *)this;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                             v5,
                                                                             (const MethodInfo_385034C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_44656352(
                                                                             operationSortInfo,
                                                                             (int32_t)this,
                                                                             0);
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
      UISprite__set_spriteName(v7, *p_ENABLE_BUTTON_SPRITE, 0);
      if ( size == ++v5 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C942F0(this, method);
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
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattlePartyOrganizationAutoOrganizationSettingDialog___Open_b__42_0(
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
  if ( (byte_4D28486 & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_4D28486 = 1;
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
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_1C942F0(this, *(_QWORD *)&selectedIndex);
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
    v6 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
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

  if ( (byte_4D28476 & 1) == 0 )
  {
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4D28476 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C9468C(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28483 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4D28483 = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
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

  if ( (byte_4D28477 & 1) == 0 )
  {
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_4D28477 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1C9468C(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3138;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC30F0;
}


System_IAsyncResult_o *WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D28487 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28487 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}