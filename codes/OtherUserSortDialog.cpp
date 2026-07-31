void OtherUserSortDialog___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  ListViewSort_o *v10; // x20
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  ListViewSort_o *v20; // x20
  struct OtherUserSortDialog_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Enum_o v28; // [xsp+0h] [xbp-70h] BYREF
  int v29; // [xsp+10h] [xbp-60h]
  System_Enum_o v30; // [xsp+18h] [xbp-58h] BYREF
  int v31; // [xsp+28h] [xbp-48h]

  if ( (byte_5932F87 & 1) == 0 )
  {
    sub_21FFC50(&FriendStatus_Kind_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&OtherUserSortDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_7052/*"FollowerSelect"*/);
    sub_21FFC50(&StringLiteral_7152/*"FriendOperation"*/);
    byte_5932F87 = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_7052/*"FollowerSelect"*/, 11, 0, 0);
  OtherUserSortDialog_TypeInfo->static_fields->supportSortInfo = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)OtherUserSortDialog_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v30.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v30.monitor = (void *)-1LL;
  v31 = 4;
  v8 = System_Enum__ToString(&v30, 0);
  v9 = System_String__Concat_75438412((System_String_o *)StringLiteral_7152/*"FriendOperation"*/, v8, 0);
  v10 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v10, v9, 3, 0, 0);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->friendMemberListSortInfo = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->friendMemberListSortInfo,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v29 = 3;
  v28.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v28.monitor = (void *)-1LL;
  v18 = System_Enum__ToString(&v28, 0);
  v19 = System_String__Concat_75438412((System_String_o *)StringLiteral_7152/*"FriendOperation"*/, v18, 0);
  v20 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v20, v19, 3, 0, 0);
  v21 = OtherUserSortDialog_TypeInfo->static_fields;
  v21->friendRequestListSortInfo = v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v21->friendRequestListSortInfo,
    (int32_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_T__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x1
  __int64 v35; // x2

  if ( (byte_5932F86 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    byte_5932F86 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_43;
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_43;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      11,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v15 = v3->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      3,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v3->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 3;
    ++v3->fields._version;
  }
  v16 = v3->fields._size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      5,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v3->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 5;
    ++v3->fields._version;
  }
  v17 = v3->fields._size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v3,
      6,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 6;
  }
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sortKindList, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v18 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v18 )
    goto LABEL_43;
  v25 = v18->fields._items;
  v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v18->fields._version;
  if ( !v25 )
    goto LABEL_43;
  v27 = v18->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      0,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v25 = v18->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v27 + 1;
    *((_DWORD *)v25->m_Items + v27) = 0;
    ++v18->fields._version;
  }
  v28 = v18->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      1,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v25 = v18->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v28 + 1;
    *((_DWORD *)v25->m_Items + v28) = 1;
    ++v18->fields._version;
  }
  v29 = v18->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      2,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v25 = v18->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v29 + 1;
    *((_DWORD *)v25->m_Items + v29) = 2;
    ++v18->fields._version;
  }
  v30 = v18->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      3,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v25 = v18->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v30 + 1;
    *((_DWORD *)v25->m_Items + v30) = 3;
    ++v18->fields._version;
  }
  v31 = v18->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      4,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    v25 = v18->fields._items;
    v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v25 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v31 + 1;
    *((_DWORD *)v25->m_Items + v31) = 4;
    ++v18->fields._version;
  }
  v32 = v18->fields._size;
  if ( (unsigned int)v32 < LODWORD(v25->max_length) )
  {
    v18->fields._size = v32 + 1;
    *((_DWORD *)v25->m_Items + v32) = 5;
    ++v18->fields._version;
    goto LABEL_37;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v18,
    5,
    *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  v25 = v18->fields._items;
  v26 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v18->fields._version;
  if ( !v25 )
LABEL_43:
    sub_21FFECC(v4, v5);
LABEL_37:
  v33 = v18->fields._size;
  if ( (unsigned int)v33 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      6,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = v33 + 1;
    *((_DWORD *)v25->m_Items + v33) = 6;
  }
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.priorityKindList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v34, v35);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void OtherUserSortDialog__Awake(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void OtherUserSortDialog__Callback(OtherUserSortDialog_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct OtherUserSortDialog_CallbackFunc_o *v9; // x20
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void OtherUserSortDialog__Close(OtherUserSortDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_5932F75 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_OtherUserSortDialog_EndClose__);
    byte_5932F75 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
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
  System_Action___ctor(v12, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
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

  if ( (byte_5932F79 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickCancel__);
    byte_5932F79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5932F78 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickDecide__);
    byte_5932F78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0),
          (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_21FFECC(baseSortInfo, v5);
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

  if ( (byte_5932F82 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    byte_5932F82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F84 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    byte_5932F84 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F81 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    byte_5932F81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7F & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    byte_5932F7F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F80 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    byte_5932F80 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7E & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityNone__);
    byte_5932F7E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F83 & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    byte_5932F83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7D & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickSortAttack__);
    byte_5932F7D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7C & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickSortHp__);
    byte_5932F7C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7B & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickSortLevel__);
    byte_5932F7B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932F7A & 1) == 0 )
  {
    sub_21FFC50(&Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    byte_5932F7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(v5, v6);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *sortTitleLabel; // x21
  System_String_o *sortKindList; // x0
  const MethodInfo *v16; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v29; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v31; // x0
  OtherUserSortDialog_c *v32; // x0
  struct ListViewSort_o *baseSortInfo; // x20
  int32_t priorityKind; // w10
  ListViewSort_c *v35; // x0
  ListViewSort_o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v44; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v47; // x21
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v49; // x20
  int v50; // w9
  ListViewSort_o *v51; // x22
  UILabel_o *v52; // x21
  const MethodInfo *v53; // x2
  System_Action_o *v54; // x20

  if ( (byte_5932F74 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_OtherUserSortDialog_EndOpen__);
    sub_21FFC50(&OtherUserSortDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_10126/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/);
    sub_21FFC50(&StringLiteral_10124/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/);
    sub_21FFC50(&StringLiteral_10121/*"OTHER_USER_SORT_DIALOG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_10123/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/);
    sub_21FFC50(&StringLiteral_10122/*"OTHER_USER_SORT_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_10125/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/);
    byte_5932F74 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)sort,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10126/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0);
    if ( !sortTitleLabel )
      goto LABEL_47;
    UILabel__set_text(sortTitleLabel, sortKindList, 0);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10125/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0);
    if ( !sortExplanationLabel )
      goto LABEL_47;
    UILabel__set_text(sortExplanationLabel, sortKindList, 0);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10124/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0);
    if ( !priorityTitleLabel )
      goto LABEL_47;
    UILabel__set_text(priorityTitleLabel, sortKindList, 0);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10123/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0);
    if ( !priorityExplanationLabel )
      goto LABEL_47;
    UILabel__set_text(priorityExplanationLabel, sortKindList, 0);
    decideLabel = this->fields.decideLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10122/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_47;
    UILabel__set_text(decideLabel, sortKindList, 0);
    cancelLabel = this->fields.cancelLabel;
    sortKindList = LocalizationManager__Get((System_String_o *)StringLiteral_10121/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_47;
    UILabel__set_text(cancelLabel, sortKindList, 0);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
LABEL_29:
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        priorityKind = baseSortInfo->fields.priorityKind;
        v35 = ListViewSort_TypeInfo;
        this->fields.openedSortKind = baseSortInfo->fields.sortKind;
        this->fields.openedPriorityKind = priorityKind;
        v36 = (ListViewSort_o *)sub_21FFEBC(v35);
        ListViewSort___ctor_50785372(v36, baseSortInfo, 0);
        this->fields.operationSortInfo = v36;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
          (int32_t)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v44 = 0;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v44 >= max_length )
              break;
            if ( (unsigned int)v44 >= max_length )
LABEL_50:
              sub_21FFED4(sortKindList);
            sortKindList = (System_String_o *)this->fields.sortKindList;
            if ( sortKindList )
            {
              operationSortInfo = this->fields.operationSortInfo;
              v47 = sortButtonLabels->m_Items[v44];
              sortKindList = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                  (System_Collections_Generic_List_T__o *)sortKindList,
                                                  v44,
                                                  (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
              if ( operationSortInfo )
              {
                sortKindList = ListViewSort__GetSortKindText(operationSortInfo, (int32_t)sortKindList, 0);
                if ( v47 )
                {
                  UILabel__set_text(v47, sortKindList, 0);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v44;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_47;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v16);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v49 = 0;
            while ( 1 )
            {
              v50 = priorityButtonLabels->max_length;
              if ( (int)v49 >= v50 )
                break;
              if ( (unsigned int)v49 >= v50 )
                goto LABEL_50;
              sortKindList = (System_String_o *)this->fields.priorityKindList;
              if ( sortKindList )
              {
                v51 = this->fields.operationSortInfo;
                v52 = priorityButtonLabels->m_Items[v49];
                sortKindList = (System_String_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                    (System_Collections_Generic_List_T__o *)sortKindList,
                                                    v49,
                                                    (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
                if ( v51 )
                {
                  sortKindList = ListViewSort__GetOtherUserPriorityKindText(v51, (int32_t)sortKindList, 0);
                  if ( v52 )
                  {
                    UILabel__set_text(v52, sortKindList, 0);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v49;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_47;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v16);
            sortKindList = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( sortKindList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sortKindList, 1, 0);
              OtherUserSortDialog__SetEnableButtons(this, 1, v53);
              this->fields.state = 1;
              v54 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(v54, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0, 0);
              return;
            }
          }
        }
      }
LABEL_47:
      sub_21FFECC(sortKindList, v16);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind == 2 )
    {
      v32 = OtherUserSortDialog_TypeInfo;
      if ( !*(&OtherUserSortDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v16, v22);
        v32 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v32->static_fields->friendRequestListSortInfo;
    }
    else if ( modeKind == 1 )
    {
      v31 = OtherUserSortDialog_TypeInfo;
      if ( !*(&OtherUserSortDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v16, v22);
        v31 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v31->static_fields->friendMemberListSortInfo;
    }
    else
    {
      if ( modeKind )
      {
LABEL_27:
        sortKindList = (System_String_o *)this->fields.baseSortInfo;
        if ( !sortKindList )
          goto LABEL_47;
        ListViewSort__Load((ListViewSort_o *)sortKindList, 0);
        goto LABEL_29;
      }
      v29 = OtherUserSortDialog_TypeInfo;
      if ( !*(&OtherUserSortDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v16, v22);
        v29 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v29->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)friendRequestListSortInfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void OtherUserSortDialog__SetEnableButtons(OtherUserSortDialog_o *this, bool isEnable, const MethodInfo *method)
{
  struct UICommonButton_array *sortButtons; // x21
  int max_length; // w8
  OtherUserSortDialog_o *v5; // x20
  __int64 v7; // x22

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
      if ( (unsigned int)v7 >= max_length )
        sub_21FFED4(this);
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_21FFECC(this, isEnable);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v5->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
  this = (OtherUserSortDialog_o *)v5->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0);
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
  if ( (byte_5932F77 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_21FFC50(&StringLiteral_18163/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_21FFC50(&StringLiteral_18162/*"btn_bg_03"*/);
    byte_5932F77 = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_15:
    sub_21FFECC(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(priorityButtons->max_length) )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v4 >= LODWORD(prioritySprites->max_length) )
        sub_21FFED4(this);
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
                                            (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(priorityKind == (_DWORD)this ? &StringLiteral_18162/*"btn_bg_03"*/ : &StringLiteral_18163/*"btn_bg_04"*/);
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
  if ( (byte_5932F76 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_21FFC50(&StringLiteral_18163/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_21FFC50(&StringLiteral_18162/*"btn_bg_03"*/);
    byte_5932F76 = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_15:
    sub_21FFECC(this, method);
  v4 = 0;
  while ( (int)v4 < SLODWORD(sortButtons->max_length) )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v4 >= LODWORD(sortSprites->max_length) )
        sub_21FFED4(this);
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
                                            (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v8 )
          {
            v9 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_18162/*"btn_bg_03"*/ : &StringLiteral_18163/*"btn_bg_04"*/);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  OtherUserSortDialog_o *v13; // x0
  OtherUserSortDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5932F72 & 1) == 0 )
  {
    sub_21FFC50(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_5932F72 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (OtherUserSortDialog_o *)sub_220024C(v8, OtherUserSortDialog_CallbackFunc_TypeInfo, v9, v10);
  OtherUserSortDialog__remove_callbackFunc(v13, v14, v15);
}


System_String_o *OtherUserSortDialog__get_closeBtnPath(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5932F85 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_5932F85 = 1;
  }
  return (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  OtherUserSortDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5932F73 & 1) == 0 )
  {
    sub_21FFC50(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_5932F73 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (OtherUserSortDialog_o *)sub_220024C(v8, OtherUserSortDialog_CallbackFunc_TypeInfo, v9, v10);
  OtherUserSortDialog__Awake(v13, v14);
}


void OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FEE170;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEE128;
}


System_IAsyncResult_o *OtherUserSortDialog_CallbackFunc__BeginInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
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


void OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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