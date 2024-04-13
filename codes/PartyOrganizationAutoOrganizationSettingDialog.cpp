void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
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
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42ECECE & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v11, v12, v13);
    byte_42ECECE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_17165/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17165/*"btn_bg_03"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_17166/*"btn_bg_04"*/;
  v16->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17166/*"btn_bg_04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->DISABLE_BUTTON_SPRITE, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42ECECD & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo,
      v14,
      v15,
      v16);
    byte_42ECECD = 1;
  }
  v17 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v17,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    0,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    9,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    11,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v17,
    12,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v17;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_33854400(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_33854400(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42ECEC0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v6, v7, v8);
    byte_42ECEC0 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
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

  if ( (byte_42ECECB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1802/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1801/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v10, v11, v12);
    byte_42ECECB = 1;
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
      v32 = sub_B5D6BC(v14);
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


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v14; // x21
  unsigned __int64 v15; // x23
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *v16; // x25
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42ECEC9 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__,
      v6,
      v7,
      v8);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                 &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
                                                                 v9,
                                                                 v10,
                                                                 v11);
    byte_42ECEC9 = 1;
  }
  categoryFilterKind = v5->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5DC(bool___TypeInfo, (unsigned int)size);
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
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34051196(
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


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w19
  ListViewSort_o *operationSortInfo; // x0

  v3 = 6;
  while ( 1 )
  {
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(0LL, method);
    if ( ListViewSort__GetFilter_34051196(operationSortInfo, v3 + 6, 0LL) )
      break;
    if ( --v3 <= 0 )
      return 0;
  }
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
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42ECEC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECEC6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  unsigned int v8; // w20
  ListViewSort_o *operationSortInfo; // x0
  struct ListViewSort_o *v10; // x8

  if ( (byte_42ECEC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, (_DWORD)method, v2, v3);
    byte_42ECEC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_34052080(operationSortInfo, ++v8, 0, 0LL);
    }
    while ( v8 < 0xC );
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
      PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
      return;
    }
    v10 = this->fields.operationSortInfo;
    if ( v10 )
    {
      v10->fields.autoOrganizationMode = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(operationSortInfo, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x19
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
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v19; // x2
  float value; // s0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct System_Int32_array *eventIdList; // x21
  __int64 v24; // x8
  System_String_o *v25; // x20
  unsigned __int64 v26; // x22
  int v27; // w26
  Il2CppObject *v28; // x0
  ListViewSort_o *v29; // x20
  const MethodInfo *v30; // x2
  __int64 v31; // x0
  int v32; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_42ECEC5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2235/*"AutoOrganizationBonusFilterEventId"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_707/*","*/, v11, v12, v13);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42ECEC5 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    scrollView = v4->fields.scrollView;
    if ( !scrollView )
      goto LABEL_26;
    this = *(PartyOrganizationAutoOrganizationSettingDialog_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_26;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v4, 0, v19);
    v4->fields.state = 3;
    v21 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v21 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    eventIdList = v4->fields.eventIdList;
    if ( eventIdList )
    {
      v24 = *(_QWORD *)&eventIdList->max_length;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v24 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( v26 >= (unsigned int)v24 )
          {
            v31 = sub_B5D6C8(this);
            sub_B5D668(v31, 0LL);
          }
          if ( !v25 )
            break;
          v27 = eventIdList->m_Items[v26 + 1];
          if ( v25->fields.m_stringLength >= 1 )
            v25 = System_String__Concat_44577788(v25, (System_String_o *)StringLiteral_707/*","*/, 0LL);
          v32 = v27;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v25,
                                                                       v28,
                                                                       0LL);
          LODWORD(v24) = eventIdList->max_length;
          ++v26;
          v25 = (System_String_o *)this;
          if ( (__int64)v26 >= (int)v24 )
            goto LABEL_17;
        }
LABEL_26:
        sub_B5D69C(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2235/*"AutoOrganizationBonusFilterEventId"*/, v25, 0LL);
    }
    if ( v4->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v29 = v4->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v29 )
        goto LABEL_26;
      ListViewSort__SetFilter(v29, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v4->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v4, 1, v30);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  unsigned int v8; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42ECEC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, (_DWORD)method, v2, v3);
    byte_42ECEC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_34052080(operationSortInfo, ++v8, 1, 0LL);
    }
    while ( v8 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_B5D69C(operationSortInfo, v7);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
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
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42ECEC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, kind, (_DWORD)method, v3);
    byte_42ECEC2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(0LL, v8);
    ListViewSort__SwitchFilter_34053164(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v10);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t unit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  unsigned int v9; // w21
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42ECEC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, unit, (_DWORD)method, v3);
    byte_42ECEC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v9 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B5D69C(0LL, v8);
      ListViewSort__SetFilter_34052080(operationSortInfo, v9 + 8, (int)(v9 + 1) < unit, 0LL);
      ++v9;
    }
    while ( v9 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v8);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  unsigned int v9; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42ECEC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, (_DWORD)method, v2, v3);
    byte_42ECEC3 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v5);
  }
  else
  {
    v6 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v9 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B5D69C(0LL, v8);
      ListViewSort__SetFilter_34052080(operationSortInfo, v9 + 8, 0, 0LL);
      ++v9;
    }
    while ( v9 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v8);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 2 )
    v4 = 2;
  else
    v4 = 1;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 3 )
    v4 = 3;
  else
    v4 = 2;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 4 )
    v4 = 4;
  else
    v4 = 3;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 5 )
    v4 = 5;
  else
    v4 = 4;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit6(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 6 )
    v4 = 6;
  else
    v4 = 5;
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  const MethodInfo *v136; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v138; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  ListViewSort_o *v147; // x22
  ListViewSort_o *v148; // x23
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *initializeLabel; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *kindTitleLabel; // x22
  UILabel_o *rarityTitleLabel; // x22
  UILabel_o *unitTitleLabel; // x22
  UILabel_o *eventEquipTitleLabel; // x22
  UILabel_o *eventEquipExplanationLabel; // x22
  UILabel_o *kindServantLabel; // x22
  UILabel_o *kindServantEquipLabel; // x22
  UILabel_o *rarity1Label; // x22
  UILabel_o *rarity2Label; // x22
  UILabel_o *rarity3Label; // x22
  UILabel_o *rarity4Label; // x22
  UILabel_o *rarity5Label; // x22
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **unit1Label; // x23
  ListViewSort_o *v180; // x22
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **unit2Label; // x23
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **unit3Label; // x23
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **unit4Label; // x23
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_Int32_array **unit5Label; // x23
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Int32_array **unit6Label; // x23
  __int64 v216; // x8
  __int64 v217; // x26
  UILabel_o *v218; // x23
  System_String_o *v219; // x24
  Il2CppObject *v220; // x0
  UILabel_o *unitExplanationLabel; // x22
  UILabel_o *organizationModeLabel; // x22
  UILabel_o *organizationModeDetail; // x22
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v225; // x0
  struct GameOptionRadioButtonGroup_o *v226; // x21
  System_Action_int__o *v227; // x22
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  bool v234; // w1
  int32_t isServantEquipBonusFilterEnable; // w8
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v237; // x0
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v245; // x21
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v247; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *eventBonusObject; // x21
  UnityEngine_Object_o *scrollView; // x21
  struct UIScrollView_o *v251; // x9
  const MethodInfo *v252; // x2
  System_Action_o *v253; // x20
  __int64 v254; // x0
  __int64 v255; // x0
  struct ListViewSort_o **p_baseSortInfo; // [xsp+0h] [xbp-90h]
  UnityEngine_Bounds_o v257; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v258; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o min; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECEBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)sort, eventId, preQuest);
    sub_B5D5C4(&System_Action_int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Action_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v31, v32, v33);
    sub_B5D5C4(&int___TypeInfo, v34, v35, v36);
    sub_B5D5C4(&int_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&ListViewSort_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v43, v44, v45);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v52, v53, v54);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, v55, v56, v57);
    sub_B5D5C4(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&UILabel___TypeInfo, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_1806/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_11855/*"SERVANT_EQUIP_TAKE"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_1796/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_12202/*"SERVANT_UNIT"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_1803/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_1804/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_12201/*"SERVANT_TAKE"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_1805/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v127, v128, v129);
    byte_42ECEBF = 1;
  }
  memset(&v258, 0, sizeof(v258));
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&eventId,
      (System_String_array **)preQuest,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v130,
        v131,
        v132,
        v133,
        v134,
        v135);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v130,
        v131,
        v132,
        v133,
        v134,
        v135);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_115;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v136);
    this->fields.oldSettingStatus = SettingState;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146);
    v147 = this->fields.baseSortInfo;
    v148 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34029496(v148, v147, 0LL);
    this->fields.operationSortInfo = v148;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v148,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
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
                    unitTitleLabel = this->fields.unitTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_1805/*"AUTO_ORGANIZATION_SETTING_UNIT"*/,
                                                       0LL);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/,
                                                         0LL);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1796/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/,
                                                           0LL);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
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
                                        baseSortInfo = (ListViewSort_o *)sub_B5D5DC(UILabel___TypeInfo, 6LL);
                                        if ( baseSortInfo )
                                        {
                                          unit1Label = (System_Int32_array **)this->fields.unit1Label;
                                          v180 = baseSortInfo;
                                          if ( unit1Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit1Label,
                                                                               baseSortInfo->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( !*(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE )
                                            goto LABEL_116;
                                          v180->fields.manager = (struct ListViewManager_o *)unit1Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.manager,
                                            unit1Label,
                                            v173,
                                            v174,
                                            v175,
                                            v176,
                                            v177,
                                            v178);
                                          unit2Label = (System_Int32_array **)this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit2Label,
                                                                               v180->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE <= 1u )
                                            goto LABEL_116;
                                          v180->fields.saveKey = (struct System_String_o *)unit2Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.saveKey,
                                            unit2Label,
                                            v181,
                                            v182,
                                            v183,
                                            v184,
                                            v185,
                                            v186);
                                          unit3Label = (System_Int32_array **)this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit3Label,
                                                                               v180->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE <= 2u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v180->fields.defaultSortKind = unit3Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.defaultSortKind,
                                            unit3Label,
                                            v188,
                                            v189,
                                            v190,
                                            v191,
                                            v192,
                                            v193);
                                          unit4Label = (System_Int32_array **)this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit4Label,
                                                                               v180->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE <= 3u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v180->fields.sortKind = unit4Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.sortKind,
                                            unit4Label,
                                            v195,
                                            v196,
                                            v197,
                                            v198,
                                            v199,
                                            v200);
                                          unit5Label = (System_Int32_array **)this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit5Label,
                                                                               v180->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE <= 4u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v180->fields.bonusKind = unit5Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.bonusKind,
                                            unit5Label,
                                            v202,
                                            v203,
                                            v204,
                                            v205,
                                            v206,
                                            v207);
                                          unit6Label = (System_Int32_array **)this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B5D684(
                                                                               this->fields.unit6Label,
                                                                               v180->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                            {
LABEL_117:
                                              v255 = sub_B5D6BC(baseSortInfo);
                                              sub_B5D668(v255, 0LL);
                                            }
                                          }
                                          if ( *(_DWORD *)&v180->fields.FILTER_DEFAULT_VALUE <= 5u )
                                          {
LABEL_116:
                                            v254 = sub_B5D6C8(baseSortInfo);
                                            sub_B5D668(v254, 0LL);
                                          }
                                          *(_QWORD *)&v180->fields.bonusKind2 = unit6Label;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&v180->fields.bonusKind2,
                                            unit6Label,
                                            v209,
                                            v210,
                                            v211,
                                            v212,
                                            v213,
                                            v214);
                                          v216 = *(_QWORD *)&v180->fields.FILTER_DEFAULT_VALUE;
                                          if ( (int)v216 >= 1 )
                                          {
                                            v217 = 0LL;
                                            while ( (unsigned int)v217 < (unsigned int)v216 )
                                            {
                                              v218 = (UILabel_o *)*((_QWORD *)&v180->fields.manager + v217);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v219 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12202/*"SERVANT_UNIT"*/,
                                                       0LL);
                                              LODWORD(v257.fields.m_Center.fields.x) = v217 + 1;
                                              v220 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257);
                                              baseSortInfo = (ListViewSort_o *)System_String__Format(v219, v220, 0LL);
                                              if ( !v218 )
                                                goto LABEL_115;
                                              UILabel__set_text(v218, (System_String_o *)baseSortInfo, 0LL);
                                              v216 = *(_QWORD *)&v180->fields.FILTER_DEFAULT_VALUE;
                                              if ( (int)++v217 >= (int)v216 )
                                                goto LABEL_56;
                                            }
                                            goto LABEL_116;
                                          }
LABEL_56:
                                          unitExplanationLabel = this->fields.unitExplanationLabel;
                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                          }
                                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1806/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/,
                                                                             0LL);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              unitExplanationLabel,
                                              (System_String_o *)baseSortInfo,
                                              0LL);
                                            organizationModeLabel = this->fields.organizationModeLabel;
                                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                               0LL);
                                            if ( organizationModeLabel )
                                            {
                                              UILabel__set_text(
                                                organizationModeLabel,
                                                (System_String_o *)baseSortInfo,
                                                0LL);
                                              organizationModeDetail = this->fields.organizationModeDetail;
                                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                                 0LL);
                                              if ( organizationModeDetail )
                                              {
                                                UILabel__set_text(
                                                  organizationModeDetail,
                                                  (System_String_o *)baseSortInfo,
                                                  0LL);
                                                baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                                                if ( baseSortInfo )
                                                {
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    1,
                                                    0LL);
                                                  if ( preQuest )
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__Init(
                                                      (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                                      0LL);
                                                    organizationModeGroup = this->fields.organizationModeGroup;
                                                    v225 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                                    if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v225);
                                                    if ( !organizationModeGroup )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__SetLabels(
                                                      organizationModeGroup,
                                                      (System_String_array *)baseSortInfo,
                                                      0LL);
                                                    v226 = this->fields.organizationModeGroup;
                                                    v227 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
                                                    System_Action_int____ctor(
                                                      v227,
                                                      (Il2CppObject *)this,
                                                      (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
                                                      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
                                                    if ( !v226 )
                                                      goto LABEL_115;
                                                    v226->fields.selectedCallback = v227;
                                                    sub_B5D560(
                                                      (BattleServantConfConponent_o *)&v226->fields.selectedCallback,
                                                      (System_Int32_array **)v227,
                                                      v228,
                                                      v229,
                                                      v230,
                                                      v231,
                                                      v232,
                                                      v233);
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v234 = 1;
                                                  }
                                                  else
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v234 = 0;
                                                  }
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    v234,
                                                    0LL);
                                                  isServantEquipBonusFilterEnable = this->fields.eventId;
                                                  this->fields.isServantEquipBonusFilterEnable = 0;
                                                  if ( isServantEquipBonusFilterEnable )
                                                  {
                                                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !DataManager_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL);
                                                    v237 = System_Linq_Enumerable__ToArray_int_(
                                                             EventValUpEventIdHash,
                                                             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
                                                    this->fields.eventIdList = v237;
                                                    sub_B5D560(
                                                      (BattleServantConfConponent_o *)&this->fields.eventIdList,
                                                      (System_Int32_array **)v237,
                                                      v238,
                                                      v239,
                                                      v240,
                                                      v241,
                                                      v242,
                                                      v243);
                                                    eventIdList = this->fields.eventIdList;
                                                    if ( eventIdList
                                                      && (int)eventIdList->max_length >= 1
                                                      && System_Linq_Enumerable__Contains_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                           this->fields.eventId,
                                                           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)sub_B5D5DC(int___TypeInfo, 1LL);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      v245 = (System_Int32_array *)baseSortInfo;
                                                      if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
                                                        goto LABEL_116;
                                                      LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
                                                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !DataManager_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                      }
                                                      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      FilterList = EventBonusFilterMaster__GetFilterList(
                                                                     (EventBonusFilterMaster_o *)baseSortInfo,
                                                                     v245,
                                                                     1,
                                                                     0LL);
                                                      if ( FilterList && FilterList->fields._size >= 1 )
                                                      {
                                                        baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                        this->fields.isServantEquipBonusFilterEnable = 1;
                                                        if ( !baseSortInfo )
                                                          goto LABEL_115;
                                                        AutoOrganizationServantBonusFilterEquipComponent__CreateList(
                                                          (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                          v245,
                                                          0LL);
                                                        baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                        if ( !baseSortInfo )
                                                          goto LABEL_115;
                                                        ServantBonusFilterEquipComponent__SetInitButtonSelect(
                                                          (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                          0LL);
                                                      }
                                                    }
                                                    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
                                                  }
                                                  baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
                                                  if ( !baseSortInfo )
                                                    goto LABEL_115;
                                                  if ( isServantEquipBonusFilterEnable )
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      1,
                                                      0LL);
                                                    if ( this->fields.preQuest )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                    }
                                                    else
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)this->fields.unitFilterObject;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)baseSortInfo,
                                                                                       0LL);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v247 = (UnityEngine_Transform_o *)baseSortInfo;
                                                    parent = UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)baseSortInfo,
                                                               0LL);
                                                    NGUIMath__CalculateRelativeWidgetBounds_46150780(
                                                      &v257,
                                                      parent,
                                                      v247,
                                                      0LL);
                                                    v258 = v257;
                                                    eventBonusObject = this->fields.eventBonusObject;
                                                    min = UnityEngine_Bounds__get_min(&v258, 0LL);
                                                    GameObjectExtensions__SetLocalPositionY(
                                                      eventBonusObject,
                                                      min.fields.y,
                                                      0LL);
                                                  }
                                                  else
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      0,
                                                      0LL);
                                                  }
                                                  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                  }
                                                  if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                    goto LABEL_113;
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
                                                      v251 = this->fields.scrollView;
                                                      if ( v251 )
                                                      {
                                                        if ( *p_baseSortInfo )
                                                        {
                                                          baseSortInfo = *(ListViewSort_o **)&v251->fields.showScrollBars;
                                                          if ( baseSortInfo )
                                                          {
                                                            UIProgressBar__set_value(
                                                              (UIProgressBar_o *)baseSortInfo,
                                                              (*p_baseSortInfo)->fields.scrollBarValue,
                                                              0LL);
LABEL_113:
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                              this,
                                                              v138);
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                              this,
                                                              1,
                                                              v252);
                                                            this->fields.state = 1;
                                                            v253 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                                            System_Action___ctor(
                                                              v253,
                                                              (Il2CppObject *)this,
                                                              Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                              0LL);
                                                            BaseDialog__Open((BaseDialog_o *)this, v253, 0, 0LL);
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
LABEL_115:
    sub_B5D69C(baseSortInfo, v138);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42ECEC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v12, v13, v14);
    byte_42ECEC1 = 1;
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x19
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
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v19; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v20; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_42ECECA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v8, v9, v10);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v11,
                                                                 v12,
                                                                 v13);
    byte_42ECECA = 1;
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
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34051196(
                                                                   v4->fields.operationSortInfo,
                                                                   categoryFilterKind->fields._items->m_Items[v16 + 1],
                                                                   0LL);
      v20 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v20 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v20->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v19 )
          break;
      }
      else
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v20 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
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
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !organizationModeGroup )
    goto LABEL_30;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog___Open_b__60_0(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v5; // x20
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
  if ( (byte_42ECECF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
      selectedIndex,
      (_DWORD)method,
      v3);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5D5C4(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8);
    byte_42ECECF = 1;
  }
  if ( v5->fields.state != 2 )
  {
    operationSortInfo = v5->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      organizationModeGroup = v5->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
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
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_17;
  v9->fields.autoOrganizationMode = selectedIndex == 1;
  v10 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 75) & 2) != 0 )
    v10 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42ECEBD & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECEBD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v8->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECECC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42ECECC = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42ECEBE & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ECEBE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v8->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5A78 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A78 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v7; // x25
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v19; // x8
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v3 + 32);
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