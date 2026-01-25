void OtherUserSortDialog___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  ListViewSort_o *v4; // x20
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  ListViewSort_o *v8; // x20
  struct OtherUserSortDialog_StaticFields *v9; // x0
  System_Enum_o v10; // [xsp+0h] [xbp-80h] BYREF
  int v11; // [xsp+10h] [xbp-70h]
  System_Enum_o v12; // [xsp+18h] [xbp-68h] BYREF
  int v13; // [xsp+28h] [xbp-58h]

  if ( (byte_4CE8DB6 & 1) == 0 )
  {
    sub_1C7BAE8(&FriendStatus_Kind_TypeInfo);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&OtherUserSortDialog_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6789/*"FollowerSelect"*/);
    sub_1C7BAE8(&StringLiteral_6885/*"FriendOperation"*/);
    byte_4CE8DB6 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v1, (System_String_o *)StringLiteral_6789/*"FollowerSelect"*/, 11, 0, 0);
  OtherUserSortDialog_TypeInfo->static_fields->supportSortInfo = v1;
  sub_1C7BA8C(OtherUserSortDialog_TypeInfo->static_fields, v1);
  v12.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = 4;
  v2 = System_Enum__ToString(&v12, 0);
  v3 = System_String__Concat_64176912((System_String_o *)StringLiteral_6885/*"FriendOperation"*/, v2, 0);
  v4 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v4, v3, 3, 0, 0);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->friendMemberListSortInfo = v4;
  sub_1C7BA8C(&static_fields->friendMemberListSortInfo, v4);
  v11 = 3;
  v10.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v10.monitor = (void *)-1LL;
  v6 = System_Enum__ToString(&v10, 0);
  v7 = System_String__Concat_64176912((System_String_o *)StringLiteral_6885/*"FriendOperation"*/, v6, 0);
  v8 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44358856(v8, v7, 3, 0, 0);
  v9 = OtherUserSortDialog_TypeInfo->static_fields;
  v9->friendRequestListSortInfo = v8;
  sub_1C7BA8C(&v9->friendRequestListSortInfo, v8);
}


void OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  System_Collections_Generic_List_T__o *v12; // x20
  struct System_Object_array *v13; // x9
  _QWORD *v14; // x8
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10

  if ( (byte_4CE8DB5 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_4CE8DB5 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_43;
  items = v3->fields._items;
  v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_43;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      11,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v3->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 11;
    ++v3->fields._version;
  }
  v9 = v3->fields._size;
  if ( (unsigned int)v9 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v3->fields._size = v9 + 1;
    *((_DWORD *)items->m_Items + v9) = 3;
    ++v3->fields._version;
  }
  v10 = v3->fields._size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v7 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v3->fields._size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 5;
    ++v3->fields._version;
  }
  v11 = v3->fields._size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 6;
  }
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_1C7BA8C(&this->fields.sortKindList, v3);
  v12 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v12 )
    goto LABEL_43;
  v13 = v12->fields._items;
  v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v12->fields._version;
  if ( !v13 )
    goto LABEL_43;
  v15 = v12->fields._size;
  if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      0,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v12->fields._size = v15 + 1;
    *((_DWORD *)v13->m_Items + v15) = 0;
    ++v12->fields._version;
  }
  v16 = v12->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      1,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v12->fields._size = v16 + 1;
    *((_DWORD *)v13->m_Items + v16) = 1;
    ++v12->fields._version;
  }
  v17 = v12->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      2,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v12->fields._size = v17 + 1;
    *((_DWORD *)v13->m_Items + v17) = 2;
    ++v12->fields._version;
  }
  v18 = v12->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      3,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v12->fields._size = v18 + 1;
    *((_DWORD *)v13->m_Items + v18) = 3;
    ++v12->fields._version;
  }
  v19 = v12->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      4,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_43;
  }
  else
  {
    v12->fields._size = v19 + 1;
    *((_DWORD *)v13->m_Items + v19) = 4;
    ++v12->fields._version;
  }
  v20 = v12->fields._size;
  if ( (unsigned int)v20 < LODWORD(v13->max_length) )
  {
    v12->fields._size = v20 + 1;
    *((_DWORD *)v13->m_Items + v20) = 5;
    ++v12->fields._version;
    goto LABEL_37;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v12,
    5,
    *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  v13 = v12->fields._items;
  v14 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v12->fields._version;
  if ( !v13 )
LABEL_43:
    sub_1C7BD40(v4, v5);
LABEL_37:
  v21 = v12->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v13->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      6,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v21 + 1;
    *((_DWORD *)v13->m_Items + v21) = 6;
  }
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v12;
  sub_1C7BA8C(&this->fields.priorityKindList, v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void OtherUserSortDialog__Awake(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void OtherUserSortDialog__Callback(OtherUserSortDialog_o *this, bool result, const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct OtherUserSortDialog_CallbackFunc_o *v4; // x20
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C7BA8C(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void OtherUserSortDialog__Close(OtherUserSortDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE8DA4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_OtherUserSortDialog_EndClose__);
    byte_4CE8DA4 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C7BA8C(&this->fields.closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void OtherUserSortDialog__EndOpen(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void OtherUserSortDialog__Init(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void OtherUserSortDialog__OnClickCancel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE8DA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickCancel__);
    byte_4CE8DA8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    OtherUserSortDialog__Callback(this, 0, v5);
  }
}


void OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1

  if ( (byte_4CE8DA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickDecide__);
    byte_4CE8DA7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_1C7BD40(baseSortInfo, v5);
    }
    v9 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
      || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v9, v7);
  }
}


void OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DB1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    byte_4CE8DB1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DB3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    byte_4CE8DB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DB0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    byte_4CE8DB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityFriendPointUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    byte_4CE8DAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    byte_4CE8DAF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityNone__);
    byte_4CE8DAD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DB2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    byte_4CE8DB2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickSortAttack__);
    byte_4CE8DAC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickSortHp__);
    byte_4CE8DAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DAA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickSortLevel__);
    byte_4CE8DAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CE8DA9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    byte_4CE8DA9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C7BD40(v5, v6);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *sortTitleLabel; // x21
  __int64 sortKindList; // x0
  const MethodInfo *v11; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v18; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v20; // x0
  OtherUserSortDialog_c *v21; // x0
  struct ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v23; // x21
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v25; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v28; // x21
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v30; // x20
  int v31; // w9
  ListViewSort_o *v32; // x22
  UILabel_o *v33; // x21
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20

  if ( (byte_4CE8DA3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_OtherUserSortDialog_EndOpen__);
    sub_1C7BAE8(&OtherUserSortDialog_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9766/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_9764/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_9761/*"OTHER_USER_SORT_DIALOG_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_9763/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_9762/*"OTHER_USER_SORT_DIALOG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_9765/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/);
    byte_4CE8DA3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_1C7BA8C(&this->fields.callbackFunc, callback);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9766/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0);
    if ( !sortTitleLabel )
      goto LABEL_50;
    UILabel__set_text(sortTitleLabel, (System_String_o *)sortKindList, 0);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9765/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0);
    if ( !sortExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(sortExplanationLabel, (System_String_o *)sortKindList, 0);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9764/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0);
    if ( !priorityTitleLabel )
      goto LABEL_50;
    UILabel__set_text(priorityTitleLabel, (System_String_o *)sortKindList, 0);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9763/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0);
    if ( !priorityExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(priorityExplanationLabel, (System_String_o *)sortKindList, 0);
    decideLabel = this->fields.decideLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9762/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)sortKindList, 0);
    cancelLabel = this->fields.cancelLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9761/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_50;
    UILabel__set_text(cancelLabel, (System_String_o *)sortKindList, 0);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sortKindList = sub_1C7BA8C(&this->fields.baseSortInfo, sort);
LABEL_29:
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        this->fields.openedSortKind = baseSortInfo->fields.sortKind;
        this->fields.openedPriorityKind = baseSortInfo->fields.priorityKind;
        v23 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
        ListViewSort___ctor_44359580(v23, baseSortInfo, 0);
        this->fields.operationSortInfo = v23;
        sortKindList = sub_1C7BA8C(&this->fields.operationSortInfo, v23);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v25 = 0;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v25 >= max_length )
              break;
            if ( (unsigned int)v25 >= max_length )
LABEL_51:
              sub_1C7BD48(sortKindList);
            sortKindList = (__int64)this->fields.sortKindList;
            if ( sortKindList )
            {
              operationSortInfo = this->fields.operationSortInfo;
              v28 = sortButtonLabels->m_Items[v25];
              sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)sortKindList,
                               v25,
                               (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
              if ( operationSortInfo )
              {
                sortKindList = (__int64)ListViewSort__GetSortKindText(operationSortInfo, sortKindList, 0);
                if ( v28 )
                {
                  UILabel__set_text(v28, (System_String_o *)sortKindList, 0);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v25;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_50;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v11);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v30 = 0;
            while ( 1 )
            {
              v31 = priorityButtonLabels->max_length;
              if ( (int)v30 >= v31 )
                break;
              if ( (unsigned int)v30 >= v31 )
                goto LABEL_51;
              sortKindList = (__int64)this->fields.priorityKindList;
              if ( sortKindList )
              {
                v32 = this->fields.operationSortInfo;
                v33 = priorityButtonLabels->m_Items[v30];
                sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)sortKindList,
                                 v30,
                                 (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
                if ( v32 )
                {
                  sortKindList = (__int64)ListViewSort__GetOtherUserPriorityKindText(v32, sortKindList, 0);
                  if ( v33 )
                  {
                    UILabel__set_text(v33, (System_String_o *)sortKindList, 0);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v30;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_50;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v11);
            sortKindList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( sortKindList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sortKindList, 1, 0);
              OtherUserSortDialog__SetEnableButtons(this, 1, v34);
              this->fields.state = 1;
              v35 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(v35, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
              return;
            }
          }
        }
      }
LABEL_50:
      sub_1C7BD40(sortKindList, v11);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind == 2 )
    {
      v20 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v20 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v20->static_fields->friendRequestListSortInfo;
    }
    else if ( modeKind == 1 )
    {
      v21 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v21 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v21->static_fields->friendMemberListSortInfo;
    }
    else
    {
      if ( modeKind )
      {
LABEL_27:
        sortKindList = (__int64)this->fields.baseSortInfo;
        if ( !sortKindList )
          goto LABEL_50;
        ListViewSort__Load((ListViewSort_o *)sortKindList, 0);
        goto LABEL_29;
      }
      v18 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v18 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v18->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    sub_1C7BA8C(&this->fields.baseSortInfo, friendRequestListSortInfo);
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void OtherUserSortDialog__SetEnableButtons(OtherUserSortDialog_o *this, bool isEnable, const MethodInfo *method)
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
        sub_1C7BD48(this);
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_1C7BD40(this, isEnable);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v5->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  v8 = isEnable;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0);
  this = (OtherUserSortDialog_o *)v5->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0);
}


void OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v4; // x20
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t priorityKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4CE8DA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_1C7BAE8(&StringLiteral_17527/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_1C7BAE8(&StringLiteral_17526/*"btn_bg_03"*/);
    byte_4CE8DA6 = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_15:
    sub_1C7BD40(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(priorityButtons->max_length) )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v4 >= LODWORD(prioritySprites->max_length) )
        sub_1C7BD48(this);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v2->fields.priorityKindList;
        if ( this )
        {
          priorityKind = operationSortInfo->fields.priorityKind;
          v8 = prioritySprites->m_Items[v4];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(priorityKind == (_DWORD)this ? &StringLiteral_17526/*"btn_bg_03"*/ : &StringLiteral_17527/*"btn_bg_04"*/);
            UISprite__set_spriteName(v8, *v9, 0);
            priorityButtons = v2->fields.priorityButtons;
            ++v4;
            if ( priorityButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void OtherUserSortDialog__SetSortButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  struct UICommonButton_array *sortButtons; // x8
  __int64 v4; // x20
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v8; // x21
  System_String_o **v9; // x8

  v2 = this;
  if ( (byte_4CE8DA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_1C7BAE8(&StringLiteral_17527/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_1C7BAE8(&StringLiteral_17526/*"btn_bg_03"*/);
    byte_4CE8DA5 = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_15:
    sub_1C7BD40(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(sortButtons->max_length) )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(sortSprites->max_length) )
        sub_1C7BD48(this);
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v2->fields.sortKindList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v8 = sortSprites->m_Items[v4];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v4,
                                            (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17526/*"btn_bg_03"*/ : &StringLiteral_17527/*"btn_bg_04"*/);
            UISprite__set_spriteName(v8, *v9, 0);
            sortButtons = v2->fields.sortButtons;
            ++v4;
            if ( sortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void OtherUserSortDialog__add_callbackFunc(
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

  if ( (byte_4CE8DA1 & 1) == 0 )
  {
    sub_1C7BAE8(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_4CE8DA1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1C7C0DC(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *OtherUserSortDialog__get_closeBtnPath(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8DB4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15699/*"Window/CancelButton"*/);
    byte_4CE8DB4 = 1;
  }
  return (System_String_o *)StringLiteral_15699/*"Window/CancelButton"*/;
}


void OtherUserSortDialog__remove_callbackFunc(
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

  if ( (byte_4CE8DA2 & 1) == 0 )
  {
    sub_1C7BAE8(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_4CE8DA2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1C7C0DC(v8);
  OtherUserSortDialog__Awake(v11, v12);
}


void OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA8F28;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA8EE0;
}


System_IAsyncResult_o *OtherUserSortDialog_CallbackFunc__BeginInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE8DB7 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE8DB7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void OtherUserSortDialog_CallbackFunc__Invoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}