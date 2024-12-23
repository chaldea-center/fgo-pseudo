void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B62C0D & 1) == 0 )
  {
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v8);
    sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v9);
    byte_4B62C0D = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields->ENABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17690/*"btn_bg_03"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields,
    StringLiteral_17690/*"btn_bg_03"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_17691/*"btn_bg_04"*/;
  static_fields = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  static_fields->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17691/*"btn_bg_04"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->DISABLE_BUTTON_SPRITE, v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x9
  _QWORD *v17; // x8
  __int64 size; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  ListViewSort_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B62C0C & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__,
      v5);
    sub_1BE4ACC(
      &System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo,
      v6);
    byte_4B62C0C = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v7 )
    goto LABEL_29;
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      0,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
    ++v7->fields._version;
  }
  v19 = v7->fields._size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      1,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v7->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 1;
    ++v7->fields._version;
  }
  v20 = v7->fields._size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      2,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v7->fields._size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 2;
    ++v7->fields._version;
  }
  v21 = v7->fields._size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      3,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v7->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 3;
    ++v7->fields._version;
  }
  v22 = v7->fields._size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      4,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_29;
  }
  else
  {
    v7->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 4;
    ++v7->fields._version;
  }
  v23 = v7->fields._size;
  if ( (unsigned int)v23 < items->max_length )
  {
    v7->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 5;
    ++v7->fields._version;
    goto LABEL_23;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v7,
    5,
    *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__;
  ++v7->fields._version;
  if ( !items )
LABEL_29:
    sub_1BE4D28(v8, v9);
LABEL_23:
  v24 = v7->fields._size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      6,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 6;
  }
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.categoryFilterKind, (int64_t)v7, v10, v11, v12, v13, v14, v15);
  v25 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor(v25, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v25;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.autoOrganizationSortInfo,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x20
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_33165800(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_33165800(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4B62C01 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_4B62C01 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B62C0A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v1);
    sub_1BE4ACC(&string___TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_2203/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v3);
    sub_1BE4ACC(&StringLiteral_2202/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v4);
    byte_4B62C0A = 1;
  }
  v5 = sub_1BE4B74(string___TypeInfo, 2LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2203/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v5 )
    sub_1BE4D28(v6, v7);
  if ( !*(_DWORD *)(v5 + 24)
    || (*(_QWORD *)(v5 + 32) = v6,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v8, v9, v10, v11, v12, v13),
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2202/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL),
        *(_DWORD *)(v5 + 24) <= 1u) )
  {
    sub_1BE4D30(v6, v7);
  }
  *(_QWORD *)(v5 + 40) = v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)v6, v14, v15, v16, v17, v18, v19);
  return (System_String_array *)v5;
}


System_Boolean_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  __int64 size; // x21
  System_Boolean_array *v9; // x22
  unsigned __int64 v10; // x23

  v4 = this;
  if ( (byte_4B62C08 & 1) == 0 )
  {
    sub_1BE4ACC(&bool___TypeInfo, sort);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__,
      v5);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4ACC(
                                                                           &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
                                                                           v6);
    byte_4B62C08 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_12;
  size = (unsigned int)categoryFilterKind->fields._size;
  v9 = (System_Boolean_array *)sub_1BE4B74(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.categoryFilterKind;
      if ( !this )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)this,
                                                                             v10,
                                                                             (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !sort )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_41747112(
                                                                             sort,
                                                                             (int32_t)this,
                                                                             0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
        sub_1BE4D30(this, sort);
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( size == v10 )
        return v9;
    }
LABEL_12:
    sub_1BE4D28(this, sort);
  }
  return v9;
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

  if ( (byte_4B62C05 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_4B62C05 = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
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

  if ( (byte_4B62C06 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_4B62C06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
LABEL_10:
      sub_1BE4D28(operationSortInfo, v5);
    v7 = 0;
    while ( v7 != 7 )
    {
      ListViewSort__SetFilter_41747936(operationSortInfo, v7, 0, 0LL);
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
  if ( (byte_4B62C04 & 1) == 0 )
  {
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4ACC(
                                                                           &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__,
                                                                           method);
    byte_4B62C04 = 1;
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
      v7 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BE4D28(this, method);
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

  if ( (byte_4B62C07 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_4B62C07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    for ( i = 0; i != 7; ++i )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BE4D28(0LL, v5);
      ListViewSort__SetFilter_41747936(operationSortInfo, i, 1, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B62C03 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_4B62C03 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(0LL, v7);
    ListViewSort__SwitchFilter_41749012(operationSortInfo, kind, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v43; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  ListViewSort_o *v52; // x20
  ListViewSort_o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v78; // x0
  struct GameOptionRadioButtonGroup_o *v79; // x20
  System_Action_int__o *v80; // x21
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v88; // x9
  struct ListViewSort_o *v89; // x8
  const MethodInfo *v90; // x2
  System_Action_o *v91; // x20

  if ( (byte_4B62C00 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, sort);
    sub_1BE4ACC(&System_Action_TypeInfo, v11);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v14);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v15);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__, v16);
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_12007/*"SERVANT_SORT_RESET"*/, v18);
    sub_1BE4ACC(&StringLiteral_2201/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v19);
    sub_1BE4ACC(&StringLiteral_2199/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v20);
    sub_1BE4ACC(&StringLiteral_11941/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v21);
    sub_1BE4ACC(&StringLiteral_11771/*"SERVANT_EQUIP_TAKE"*/, v22);
    sub_1BE4ACC(&StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/, v23);
    sub_1BE4ACC(&StringLiteral_2198/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v24);
    sub_1BE4ACC(&StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/, v25);
    sub_1BE4ACC(&StringLiteral_11940/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v26);
    sub_1BE4ACC(&StringLiteral_2200/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v27);
    sub_1BE4ACC(&StringLiteral_11939/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v28);
    sub_1BE4ACC(&StringLiteral_11937/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v29);
    sub_1BE4ACC(&StringLiteral_2204/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v30);
    sub_1BE4ACC(&StringLiteral_11857/*"SERVANT_SORT_CLEAR"*/, v31);
    sub_1BE4ACC(&StringLiteral_2205/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v32);
    sub_1BE4ACC(&StringLiteral_12119/*"SERVANT_TAKE"*/, v33);
    sub_1BE4ACC(&StringLiteral_11938/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v34);
    byte_4B62C00 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v35, v36, v37, v38, v39, v40);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.baseSortInfo,
        (int64_t)autoOrganizationSortInfo,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_43;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v41);
    this->fields.oldSettingStatus = SettingState;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.oldSettingStatus,
      (int64_t)SettingState,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = this->fields.baseSortInfo;
    v53 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
    ListViewSort___ctor_41720984(v53, v52, 0LL);
    this->fields.operationSortInfo = v53;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.operationSortInfo,
      (int64_t)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2205/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11857/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2198/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2199/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2204/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    kindServantLabel = this->fields.kindServantLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12119/*"SERVANT_TAKE"*/,
                                                       0LL);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11771/*"SERVANT_EQUIP_TAKE"*/,
                                                         0LL);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                        rarity1Label = this->fields.rarity1Label;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11937/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                           0LL);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                          rarity2Label = this->fields.rarity2Label;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11941/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                             0LL);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                            rarity3Label = this->fields.rarity3Label;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11938/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                               0LL);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                              rarity4Label = this->fields.rarity4Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11939/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                 0LL);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity5Label = this->fields.rarity5Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                   0LL);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                  organizationModeLabel = this->fields.organizationModeLabel;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_2200/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                     0LL);
                                  if ( organizationModeLabel )
                                  {
                                    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
                                    organizationModeDetail = this->fields.organizationModeDetail;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_2201/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
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
                                        v78 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                        if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                        baseSortInfo = (ListViewSort_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v78);
                                        if ( organizationModeGroup )
                                        {
                                          GameOptionRadioButtonGroup__SetLabels(
                                            organizationModeGroup,
                                            (System_String_array *)baseSortInfo,
                                            0LL);
                                          v79 = this->fields.organizationModeGroup;
                                          v80 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v80,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
                                            0LL);
                                          if ( v79 )
                                          {
                                            v79->fields.selectedCallback = v80;
                                            sub_1BE4A70(
                                              (PartyOrganizationUtility_o *)&v79->fields.selectedCallback,
                                              (int64_t)v80,
                                              v81,
                                              v82,
                                              v83,
                                              v84,
                                              v85,
                                              v86);
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
                                                  v88 = this->fields.scrollView;
                                                  if ( v88 )
                                                  {
                                                    v89 = this->fields.baseSortInfo;
                                                    if ( v89 )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)v88->fields.verticalScrollBar;
                                                      if ( baseSortInfo )
                                                      {
                                                        UIProgressBar__set_value(
                                                          (UIProgressBar_o *)baseSortInfo,
                                                          v89->fields.scrollBarValue,
                                                          0LL);
LABEL_42:
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v43);
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v90);
                                                        this->fields.state = 1;
                                                        v91 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                                                        System_Action___ctor(
                                                          v91,
                                                          (Il2CppObject *)this,
                                                          Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0LL);
                                                        BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
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
    sub_1BE4D28(baseSortInfo, v43);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_4B62C02 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_4B62C02 = 1;
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
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1BE4D28(v9, v10);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v15.fields._current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_1BE4D28(0LL, v13);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_1BE4D28(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w24
  int32_t v8; // w20
  ListViewSort_o *operationSortInfo; // x22
  UISprite_o *v10; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v11; // x8
  char v12; // w22
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *v14; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_4B62C09 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
      v4);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4ACC(
                                                                           &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                           v5);
    byte_4B62C09 = 1;
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
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.spriteList;
      if ( !this )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                                             (System_Collections_Generic_List_object__o *)this,
                                                                             v8,
                                                                             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
      if ( !v2->fields.categoryFilterKind )
        break;
      operationSortInfo = v2->fields.operationSortInfo;
      v10 = (UISprite_o *)this;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                             (System_Collections_Generic_List_T__o *)v2->fields.categoryFilterKind,
                                                                             v8,
                                                                             (const MethodInfo_35D173C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
      if ( !operationSortInfo )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_41747112(
                                                                             operationSortInfo,
                                                                             (int32_t)this,
                                                                             0LL);
      v11 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      v12 = (char)this;
      if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
        v11 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
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
    sub_1BE4D28(this, method);
  }
LABEL_15:
  v14 = v2->fields.operationSortInfo;
  if ( !v14 )
    goto LABEL_20;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  organizationModeGroup = v2->fields.organizationModeGroup;
  autoOrganizationMode = v14->fields.autoOrganizationMode;
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
  __int64 v5; // x1
  struct ListViewSort_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct ListViewSort_o *operationSortInfo; // x9
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_4B62C0E & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
      *(_QWORD *)&selectedIndex);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4ACC(
                                                                           &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                           v5);
    byte_4B62C0E = 1;
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
    sub_1BE4D28(this, *(_QWORD *)&selectedIndex);
  }
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  v6 = v4->fields.operationSortInfo;
  if ( !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  if ( !v6 )
    goto LABEL_15;
  v6->fields.autoOrganizationMode = selectedIndex == 1;
  v7 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
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

  if ( (byte_4B62BFE & 1) == 0 )
  {
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_4B62BFE = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4FE8(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62C0B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15848/*"Window/CancelButton"*/, method);
    byte_4B62C0B = 1;
  }
  return (System_String_o *)StringLiteral_15848/*"Window/CancelButton"*/;
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

  if ( (byte_4B62BFF & 1) == 0 )
  {
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_4B62BFF = 1;
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
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_1BE4FE8(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A21A1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A219D4;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B62C0F & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B62C0F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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