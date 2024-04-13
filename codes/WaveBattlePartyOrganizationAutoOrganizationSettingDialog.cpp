void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E7346 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v11, v12, v13);
    byte_42E7346 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_17165/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17165/*"btn_bg_03"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_17166/*"btn_bg_04"*/;
  v16->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17166/*"btn_bg_04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->DISABLE_BUTTON_SPRITE, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ListViewSort_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E7345 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo,
      v14,
      v15,
      v16);
    byte_42E7345 = 1;
  }
  v17 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v17,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    0,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKind,
    (System_Int32_array **)v17,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor(v26, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.autoOrganizationSortInfo,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_22692132(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_22692132(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_42E733A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__, v6, v7, v8);
    byte_42E733A = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_array *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x20
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42E7343 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1802/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1801/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v10, v11, v12);
    byte_42E7343 = 1;
  }
  v13 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 2LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1802/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  v22 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = (System_String_o *)sub_B5D684(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_15;
  }
  if ( !v13->max_length )
    goto LABEL_14;
  v13->m_Items[0] = (System_String_o *)v22;
  sub_B5D560((BattleServantConfConponent_o *)v13->m_Items, v22, v16, v17, v18, v19, v20, v21);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1801/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL);
  v29 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = (System_String_o *)sub_B5D684(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_15:
      v32 = sub_B5D6BC();
      sub_B5D668(v32, 0LL);
    }
  }
  if ( v13->max_length <= 1 )
  {
LABEL_14:
    v31 = sub_B5D6C8(v14);
    sub_B5D668(v31, 0LL);
  }
  v13->m_Items[1] = (System_String_o *)v29;
  sub_B5D560((BattleServantConfConponent_o *)&v13->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  return v13;
}


System_Boolean_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v14; // x21
  unsigned __int64 v15; // x23
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *v16; // x25
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E7341 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__,
      v6,
      v7,
      v8);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                           &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
                                                                           v9,
                                                                           v10,
                                                                           v11);
    byte_42E7341 = 1;
  }
  categoryFilterKind = v5->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5DC(bool___TypeInfo, (unsigned int)size);
  v14 = (System_Boolean_array *)this;
  if ( size >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = v5->fields.categoryFilterKind;
      if ( !v16 )
        break;
      if ( v15 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !sort )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34051256(
                                                                             sort,
                                                                             v16->fields._items->m_Items[v15 + 1],
                                                                             0LL);
      if ( !v14 )
        break;
      if ( v15 >= v14->max_length )
      {
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      v14->m_Items[v15++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v15 >= size )
        return v14;
    }
LABEL_14:
    sub_B5D69C(this, sort);
  }
  return v14;
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
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E733E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    byte_42E733E = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v7);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x0
  unsigned int v9; // w20

  if ( (byte_42E733F & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, (_DWORD)method, v2, v3);
    byte_42E733F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
LABEL_10:
      sub_B5D69C(operationSortInfo, v7);
    v9 = 0;
    while ( v9 < 7 )
    {
      ListViewSort__SetFilter_34052144(operationSortInfo, v9, 0, 0LL);
      operationSortInfo = this->fields.operationSortInfo;
      ++v9;
      if ( !operationSortInfo )
        goto LABEL_10;
    }
    operationSortInfo->fields.autoOrganizationMode = 0;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x2
  float value; // s0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_42E733D & 1) == 0 )
  {
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                           &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__,
                                                                           (_DWORD)method,
                                                                           v2,
                                                                           v3);
    byte_42E733D = 1;
  }
  if ( v4->fields.state == 2 )
  {
    scrollView = v4->fields.scrollView;
    if ( !scrollView )
      goto LABEL_12;
    this = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v4, 0, v7);
    v4->fields.state = 3;
    v9 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_B5D69C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(v4, 1, v11);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  unsigned int v8; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42E7340 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7340 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B5D69C(0LL, v7);
      ListViewSort__SetFilter_34052144(operationSortInfo, ++v8, 1, 0LL);
    }
    while ( v8 < 6 );
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
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
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42E733C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__,
      kind,
      (_DWORD)method,
      v3);
    byte_42E733C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(0LL, v8);
    ListViewSort__SwitchFilter_34053232(operationSortInfo, kind, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v10);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v93; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v95; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  ListViewSort_o *v104; // x21
  ListViewSort_o *v105; // x22
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *kindTitleLabel; // x21
  UILabel_o *rarityTitleLabel; // x21
  UILabel_o *kindServantLabel; // x21
  UILabel_o *kindServantEquipLabel; // x21
  UILabel_o *rarity1Label; // x21
  UILabel_o *rarity2Label; // x21
  UILabel_o *rarity3Label; // x21
  UILabel_o *rarity4Label; // x21
  UILabel_o *rarity5Label; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v130; // x0
  struct GameOptionRadioButtonGroup_o *v131; // x21
  System_Action_int__o *v132; // x22
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  UnityEngine_Object_o *scrollView; // x21
  struct UIScrollView_o *v140; // x9
  const MethodInfo *v141; // x2
  System_Action_o *v142; // x20

  if ( (byte_42E7339 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)sort, (_DWORD)callback, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Action_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ListViewSort_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v26, v27, v28);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__, v29, v30, v31);
    sub_B5D5C4(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_11855/*"SERVANT_EQUIP_TAKE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_1803/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_1804/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_12201/*"SERVANT_TAKE"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v83, v84, v85);
    byte_42E7339 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_46;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v93);
    this->fields.oldSettingStatus = SettingState;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    v104 = this->fields.baseSortInfo;
    v105 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34029496(v105, v104, 0LL);
    this->fields.operationSortInfo = v105;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1804/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1803/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    kindServantLabel = this->fields.kindServantLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12201/*"SERVANT_TAKE"*/,
                                                       0LL);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11855/*"SERVANT_EQUIP_TAKE"*/,
                                                         0LL);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                        rarity1Label = this->fields.rarity1Label;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                           0LL);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                          rarity2Label = this->fields.rarity2Label;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                             0LL);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                            rarity3Label = this->fields.rarity3Label;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                               0LL);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                              rarity4Label = this->fields.rarity4Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                 0LL);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity5Label = this->fields.rarity5Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                   0LL);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                  organizationModeLabel = this->fields.organizationModeLabel;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                     0LL);
                                  if ( organizationModeLabel )
                                  {
                                    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
                                    organizationModeDetail = this->fields.organizationModeDetail;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
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
                                        v130 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                        if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                        }
                                        baseSortInfo = (ListViewSort_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v130);
                                        if ( organizationModeGroup )
                                        {
                                          GameOptionRadioButtonGroup__SetLabels(
                                            organizationModeGroup,
                                            (System_String_array *)baseSortInfo,
                                            0LL);
                                          v131 = this->fields.organizationModeGroup;
                                          v132 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v132,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
                                            (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
                                          if ( v131 )
                                          {
                                            v131->fields.selectedCallback = v132;
                                            sub_B5D560(
                                              (BattleServantConfConponent_o *)&v131->fields.selectedCallback,
                                              (System_Int32_array **)v132,
                                              v133,
                                              v134,
                                              v135,
                                              v136,
                                              v137,
                                              v138);
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
                                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              }
                                              if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                goto LABEL_45;
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
                                                  v140 = this->fields.scrollView;
                                                  if ( v140 )
                                                  {
                                                    if ( *p_baseSortInfo )
                                                    {
                                                      baseSortInfo = *(ListViewSort_o **)&v140->fields.showScrollBars;
                                                      if ( baseSortInfo )
                                                      {
                                                        UIProgressBar__set_value(
                                                          (UIProgressBar_o *)baseSortInfo,
                                                          (*p_baseSortInfo)->fields.scrollBarValue,
                                                          0LL);
LABEL_45:
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v95);
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v141);
                                                        this->fields.state = 1;
                                                        v142 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                                        System_Action___ctor(
                                                          v142,
                                                          (Il2CppObject *)this,
                                                          Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0LL);
                                                        BaseDialog__Open((BaseDialog_o *)this, v142, 0, 0LL);
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
LABEL_46:
    sub_B5D69C(baseSortInfo, v95);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UICommonButton_o *decideButton; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E733B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v12, v13, v14);
    byte_42E733B = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B5D69C(v16, v17);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v22.fields.current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B5D69C(0LL, v20);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_B5D69C(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v16; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v19; // x20
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v20; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_42E7342 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v8, v9, v10);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                           &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                           v11,
                                                                           v12,
                                                                           v13);
    byte_42E7342 = 1;
  }
  buttonList = v4->fields.buttonList;
  if ( !buttonList )
    goto LABEL_30;
  size = buttonList->fields._size;
  if ( size > 0 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      spriteList = v4->fields.spriteList;
      if ( !spriteList )
        break;
      if ( spriteList->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      categoryFilterKind = v4->fields.categoryFilterKind;
      if ( !categoryFilterKind )
        break;
      v19 = spriteList->fields._items->m_Items[v16];
      if ( categoryFilterKind->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v4->fields.operationSortInfo )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34051256(
                                                                             v4->fields.operationSortInfo,
                                                                             categoryFilterKind->fields._items->m_Items[v16 + 1],
                                                                             0LL);
      v20 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v20 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v20->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v19 )
          break;
      }
      else
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v20 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v20->static_fields->DISABLE_BUTTON_SPRITE;
        if ( !v19 )
          break;
      }
      UISprite__set_spriteName(v19, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( (int)++v16 >= size )
        goto LABEL_24;
    }
LABEL_30:
    sub_B5D69C(this, method);
  }
LABEL_24:
  operationSortInfo = v4->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_30;
  organizationModeGroup = v4->fields.organizationModeGroup;
  autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !organizationModeGroup )
    goto LABEL_30;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___Open_b__42_0(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewSort_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v5 = this;
  if ( (byte_42E7347 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
      selectedIndex,
      (_DWORD)method,
      v3);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                           &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                           v6,
                                                                           v7,
                                                                           v8);
    byte_42E7347 = 1;
  }
  if ( v5->fields.state != 2 )
  {
    operationSortInfo = v5->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      organizationModeGroup = v5->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      }
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&selectedIndex);
  }
  v9 = v5->fields.operationSortInfo;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_17;
  v9->fields.autoOrganizationMode = selectedIndex == 1;
  v10 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__ + 75) & 2) != 0 )
    v10 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
  v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7337 & 1) == 0 )
  {
    sub_B5D5C4(
      &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42E7337 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D990(v8);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7344 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E7344 = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E7338 & 1) == 0 )
  {
    sub_B5D5C4(
      &WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42E7338 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D990(v8);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5FF6 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5FF6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}