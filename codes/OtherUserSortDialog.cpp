void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  ListViewSort_o *v11; // x20
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  ListViewSort_o *v17; // x20
  struct OtherUserSortDialog_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Enum_o v21; // [xsp+0h] [xbp-80h] BYREF
  int v22; // [xsp+10h] [xbp-70h]
  System_Enum_o v23; // [xsp+18h] [xbp-68h] BYREF
  int v24; // [xsp+28h] [xbp-58h]

  if ( (byte_48E6334 & 1) == 0 )
  {
    sub_1B00CCC(&FriendStatus_Kind_TypeInfo, v1);
    sub_1B00CCC(&ListViewSort_TypeInfo, v2);
    sub_1B00CCC(&OtherUserSortDialog_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_6682/*"FollowerSelect"*/, v4);
    sub_1B00CCC(&StringLiteral_6777/*"FriendOperation"*/, v5);
    byte_48E6334 = 1;
  }
  v6 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
  ListViewSort___ctor_39464988(v6, (System_String_o *)StringLiteral_6682/*"FollowerSelect"*/, 11, 0, 0LL);
  OtherUserSortDialog_TypeInfo->static_fields->supportSortInfo = v6;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)OtherUserSortDialog_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v23.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v23.monitor = (void *)-1LL;
  v24 = 4;
  v9 = System_Enum__ToString(&v23, 0LL);
  v10 = System_String__Concat_60325748((System_String_o *)StringLiteral_6777/*"FriendOperation"*/, v9, 0LL);
  v11 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
  ListViewSort___ctor_39464988(v11, v10, 3, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->friendMemberListSortInfo = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->friendMemberListSortInfo, (int32_t)v11, v13, v14);
  v22 = 3;
  v21.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v21.monitor = (void *)-1LL;
  v15 = System_Enum__ToString(&v21, 0LL);
  v16 = System_String__Concat_60325748((System_String_o *)StringLiteral_6777/*"FriendOperation"*/, v15, 0LL);
  v17 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
  ListViewSort___ctor_39464988(v17, v16, 3, 0, 0LL);
  v18 = OtherUserSortDialog_TypeInfo->static_fields;
  v18->friendRequestListSortInfo = v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->friendRequestListSortInfo, (int32_t)v17, v19, v20);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  System_Collections_Generic_List_T__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x9
  _QWORD *v24; // x8
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10

  if ( (byte_48E6333 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v7);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v8);
    byte_48E6333 = 1;
  }
  v9 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v9 )
    goto LABEL_43;
  items = v9->fields._items;
  v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_43;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      11,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 11;
    ++v9->fields._version;
  }
  v17 = v9->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v9->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 3;
    ++v9->fields._version;
  }
  v18 = v9->fields._size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      5,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v15 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v9->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 5;
    ++v9->fields._version;
  }
  v19 = v9->fields._size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 6;
  }
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sortKindList, (int32_t)v9, v12, v13);
  v20 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v20 )
    goto LABEL_43;
  v23 = v20->fields._items;
  v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v20->fields._version;
  if ( !v23 )
    goto LABEL_43;
  v25 = v20->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_43;
  }
  else
  {
    v20->fields._size = v25 + 1;
    *((_DWORD *)v23->m_Items + v25) = 0;
    ++v20->fields._version;
  }
  v26 = v20->fields._size;
  if ( (unsigned int)v26 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      1,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_43;
  }
  else
  {
    v20->fields._size = v26 + 1;
    *((_DWORD *)v23->m_Items + v26) = 1;
    ++v20->fields._version;
  }
  v27 = v20->fields._size;
  if ( (unsigned int)v27 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_43;
  }
  else
  {
    v20->fields._size = v27 + 1;
    *((_DWORD *)v23->m_Items + v27) = 2;
    ++v20->fields._version;
  }
  v28 = v20->fields._size;
  if ( (unsigned int)v28 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_43;
  }
  else
  {
    v20->fields._size = v28 + 1;
    *((_DWORD *)v23->m_Items + v28) = 3;
    ++v20->fields._version;
  }
  v29 = v20->fields._size;
  if ( (unsigned int)v29 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    v23 = v20->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v20->fields._version;
    if ( !v23 )
      goto LABEL_43;
  }
  else
  {
    v20->fields._size = v29 + 1;
    *((_DWORD *)v23->m_Items + v29) = 4;
    ++v20->fields._version;
  }
  v30 = v20->fields._size;
  if ( (unsigned int)v30 < v23->max_length )
  {
    v20->fields._size = v30 + 1;
    *((_DWORD *)v23->m_Items + v30) = 5;
    ++v20->fields._version;
    goto LABEL_37;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v20,
    5,
    *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  v23 = v20->fields._items;
  v24 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v20->fields._version;
  if ( !v23 )
LABEL_43:
    sub_1B00F28(v10, v11);
LABEL_37:
  v31 = v20->fields._size;
  if ( (unsigned int)v31 >= v23->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = v31 + 1;
    *((_DWORD *)v23->m_Items + v31) = 6;
  }
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.priorityKindList, (int32_t)v20, v21, v22);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Awake(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Callback(OtherUserSortDialog_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct OtherUserSortDialog_CallbackFunc_o *v5; // x20
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B00C70(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_48E6322 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_OtherUserSortDialog_EndClose__, v5);
    byte_48E6322 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B00C70(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall OtherUserSortDialog__EndOpen(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall OtherUserSortDialog__Init(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__OnClickCancel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_48E6326 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickCancel__, method);
    byte_48E6326 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    OtherUserSortDialog__Callback(this, 0, v5);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1

  if ( (byte_48E6325 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickDecide__, method);
    byte_48E6325 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1B00F28(baseSortInfo, v5);
    }
    v9 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
      || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v9, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632F & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method);
    byte_48E632F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E6331 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method);
    byte_48E6331 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632E & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method);
    byte_48E632E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632C & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method);
    byte_48E632C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632D & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method);
    byte_48E632D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632B & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityNone__, method);
    byte_48E632B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E6330 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method);
    byte_48E6330 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E632A & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickSortAttack__, method);
    byte_48E632A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E6329 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickSortHp__, method);
    byte_48E6329 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E6328 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickSortLevel__, method);
    byte_48E6328 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_48E6327 & 1) == 0 )
  {
    sub_1B00CCC(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method);
    byte_48E6327 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B00F28(v5, v6);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
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
  UILabel_o *sortTitleLabel; // x21
  System_String_o *sortKindList; // x0
  const MethodInfo *v23; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v32; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v34; // x0
  OtherUserSortDialog_c *v35; // x0
  struct ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v41; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v44; // x21
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v46; // x20
  int v47; // w9
  ListViewSort_o *v48; // x22
  UILabel_o *v49; // x21
  const MethodInfo *v50; // x2
  System_Action_o *v51; // x20

  if ( (byte_48E6321 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&ListViewSort_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v11);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v12);
    sub_1B00CCC(&Method_OtherUserSortDialog_EndOpen__, v13);
    sub_1B00CCC(&OtherUserSortDialog_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_9629/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v15);
    sub_1B00CCC(&StringLiteral_9627/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v16);
    sub_1B00CCC(&StringLiteral_9624/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v17);
    sub_1B00CCC(&StringLiteral_9626/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v18);
    sub_1B00CCC(&StringLiteral_9625/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v19);
    sub_1B00CCC(&StringLiteral_9628/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v20);
    byte_48E6321 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (int32_t)callback);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9629/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_50;
    UILabel__set_text(sortTitleLabel, sortKindList, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9628/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(sortExplanationLabel, sortKindList, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9627/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_50;
    UILabel__set_text(priorityTitleLabel, sortKindList, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9626/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(priorityExplanationLabel, sortKindList, 0LL);
    decideLabel = this->fields.decideLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9625/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, sortKindList, 0LL);
    cancelLabel = this->fields.cancelLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_9624/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_50;
    UILabel__set_text(cancelLabel, sortKindList, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v29, v30);
LABEL_29:
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        this->fields.openedSortKind = baseSortInfo->fields.sortKind;
        this->fields.openedPriorityKind = baseSortInfo->fields.priorityKind;
        v37 = (ListViewSort_o *)sub_1B00F18(ListViewSort_TypeInfo);
        ListViewSort___ctor_39465708(v37, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v37;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v37, v38, v39);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v41 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v41 >= max_length )
              break;
            if ( (unsigned int)v41 >= max_length )
LABEL_51:
              sub_1B00F30(sortKindList, v23);
            sortKindList = (System_String_o *)this->fields.sortKindList;
            if ( sortKindList )
            {
              operationSortInfo = this->fields.operationSortInfo;
              v44 = sortButtonLabels->m_Items[v41];
              sortKindList = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                  (System_Collections_Generic_List_T__o *)sortKindList,
                                                  v41,
                                                  (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
              if ( operationSortInfo )
              {
                sortKindList = ListViewSort__GetSortKindText(operationSortInfo, (int32_t)sortKindList, 0LL);
                if ( v44 )
                {
                  UILabel__set_text(v44, sortKindList, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v41;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_50;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v23);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v46 = 0LL;
            while ( 1 )
            {
              v47 = priorityButtonLabels->max_length;
              if ( (int)v46 >= v47 )
                break;
              if ( (unsigned int)v46 >= v47 )
                goto LABEL_51;
              sortKindList = (System_String_o *)this->fields.priorityKindList;
              if ( sortKindList )
              {
                v48 = this->fields.operationSortInfo;
                v49 = priorityButtonLabels->m_Items[v46];
                sortKindList = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)sortKindList,
                                                    v46,
                                                    (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
                if ( v48 )
                {
                  sortKindList = ListViewSort__GetOtherUserPriorityKindText(v48, (int32_t)sortKindList, 0LL);
                  if ( v49 )
                  {
                    UILabel__set_text(v49, sortKindList, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v46;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_50;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v23);
            sortKindList = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( sortKindList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sortKindList, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v50);
              this->fields.state = 1;
              v51 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              System_Action___ctor(v51, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_50:
      sub_1B00F28(sortKindList, v23);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind == 2 )
    {
      v34 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v34 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v34->static_fields->friendRequestListSortInfo;
    }
    else if ( modeKind == 1 )
    {
      v35 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v35 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v35->static_fields->friendMemberListSortInfo;
    }
    else
    {
      if ( modeKind )
      {
LABEL_27:
        sortKindList = (System_String_o *)this->fields.baseSortInfo;
        if ( !sortKindList )
          goto LABEL_50;
        ListViewSort__Load((ListViewSort_o *)sortKindList, 0LL);
        goto LABEL_29;
      }
      v32 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v32 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v32->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo,
      (int32_t)friendRequestListSortInfo,
      v29,
      v30);
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__SetEnableButtons(
        OtherUserSortDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *sortButtons; // x21
  int max_length; // w8
  OtherUserSortDialog_o *v5; // x19
  unsigned int v7; // w22
  bool v8; // w20

  sortButtons = this->fields.sortButtons;
  if ( !sortButtons )
    goto LABEL_10;
  max_length = sortButtons->max_length;
  v5 = this;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B00F30(this, isEnable);
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_1B00F28(this, isEnable);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v5->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  v8 = isEnable;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
  this = (OtherUserSortDialog_o *)v5->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
}


void __fastcall OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v6; // x20
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t priorityKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_48E6324 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method);
    sub_1B00CCC(&StringLiteral_17233/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_1B00CCC(&StringLiteral_17232/*"btn_bg_03"*/, v4);
    byte_48E6324 = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_15:
    sub_1B00F28(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v6 >= prioritySprites->max_length )
        sub_1B00F30(this, method);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v2->fields.priorityKindList;
        if ( this )
        {
          priorityKind = operationSortInfo->fields.priorityKind;
          v10 = prioritySprites->m_Items[v6];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
          if ( v10 )
          {
            v11 = (System_String_o **)(priorityKind == (_DWORD)this ? &StringLiteral_17232/*"btn_bg_03"*/ : &StringLiteral_17233/*"btn_bg_04"*/);
            UISprite__set_spriteName(v10, *v11, 0LL);
            priorityButtons = v2->fields.priorityButtons;
            ++v6;
            if ( priorityButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void __fastcall OtherUserSortDialog__SetSortButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *sortButtons; // x8
  __int64 v6; // x20
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v10; // x21
  System_String_o **v11; // x8

  v2 = this;
  if ( (byte_48E6323 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1B00CCC(&StringLiteral_17233/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_1B00CCC(&StringLiteral_17232/*"btn_bg_03"*/, v4);
    byte_48E6323 = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_15:
    sub_1B00F28(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)sortButtons->max_length )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v6 >= sortSprites->max_length )
        sub_1B00F30(this, method);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v2->fields.sortKindList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v10 = sortSprites->m_Items[v6];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v6,
                                            (const MethodInfo_33A6EE8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v10 )
          {
            v11 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17232/*"btn_bg_03"*/ : &StringLiteral_17233/*"btn_bg_04"*/);
            UISprite__set_spriteName(v10, *v11, 0LL);
            sortButtons = v2->fields.sortButtons;
            ++v6;
            if ( sortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void __fastcall OtherUserSortDialog__add_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  OtherUserSortDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_48E631F & 1) == 0 )
  {
    sub_1B00CCC(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_48E631F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E6332 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_15410/*"Window/CancelButton"*/, method);
    byte_48E6332 = 1;
  }
  return (System_String_o *)StringLiteral_15410/*"Window/CancelButton"*/;
}


void __fastcall OtherUserSortDialog__remove_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_48E6320 & 1) == 0 )
  {
    sub_1B00CCC(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_48E6320 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
  OtherUserSortDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_194FDE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194FD9C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall OtherUserSortDialog_CallbackFunc__BeginInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_48E6335 & 1) == 0 )
  {
    sub_1B00CCC(&bool_TypeInfo, result);
    byte_48E6335 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
}


void __fastcall OtherUserSortDialog_CallbackFunc__Invoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}