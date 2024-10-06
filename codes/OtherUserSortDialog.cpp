void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  ListViewSort_o *v9; // x20
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  struct OtherUserSortDialog_StaticFields *v14; // x0
  System_Enum_o v15; // [xsp+0h] [xbp-80h] BYREF
  int v16; // [xsp+10h] [xbp-70h]
  System_Enum_o v17; // [xsp+18h] [xbp-68h] BYREF
  int v18; // [xsp+28h] [xbp-58h]

  if ( (byte_4A6AFD8 & 1) == 0 )
  {
    sub_1B90010(&FriendStatus_Kind_TypeInfo, v1);
    sub_1B90010(&ListViewSort_TypeInfo, v2);
    sub_1B90010(&OtherUserSortDialog_TypeInfo, v3);
    sub_1B90010(&StringLiteral_6749/*"FollowerSelect"*/, v4);
    sub_1B90010(&StringLiteral_6847/*"FriendOperation"*/, v5);
    byte_4A6AFD8 = 1;
  }
  v6 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40813280(v6, (System_String_o *)StringLiteral_6749/*"FollowerSelect"*/, 11, 0, 0LL);
  OtherUserSortDialog_TypeInfo->static_fields->supportSortInfo = v6;
  sub_1B8FFB4(OtherUserSortDialog_TypeInfo->static_fields);
  v17.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v17.monitor = (void *)-1LL;
  v18 = 4;
  v7 = System_Enum__ToString(&v17, 0LL);
  v8 = System_String__Concat_61787092((System_String_o *)StringLiteral_6847/*"FriendOperation"*/, v7, 0LL);
  v9 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40813280(v9, v8, 3, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->friendMemberListSortInfo = v9;
  sub_1B8FFB4(&static_fields->friendMemberListSortInfo);
  v16 = 3;
  v15.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v15.monitor = (void *)-1LL;
  v11 = System_Enum__ToString(&v15, 0LL);
  v12 = System_String__Concat_61787092((System_String_o *)StringLiteral_6847/*"FriendOperation"*/, v11, 0LL);
  v13 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
  ListViewSort___ctor_40813280(v13, v12, 3, 0, 0LL);
  v14 = OtherUserSortDialog_TypeInfo->static_fields;
  v14->friendRequestListSortInfo = v13;
  sub_1B8FFB4(&v14->friendRequestListSortInfo);
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  System_Collections_Generic_List_T__o *v18; // x20
  struct System_Object_array *v19; // x9
  _QWORD *v20; // x8
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10

  if ( (byte_4A6AFD7 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v8);
    byte_4A6AFD7 = 1;
  }
  v9 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v9 )
    goto LABEL_43;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_43;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      11,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
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
  v15 = v9->fields._size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      3,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v9->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 3;
    ++v9->fields._version;
  }
  v16 = v9->fields._size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      5,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    items = v9->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v9->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 5;
    ++v9->fields._version;
  }
  v17 = v9->fields._size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      6,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 6;
  }
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v9;
  sub_1B8FFB4(&this->fields.sortKindList);
  v18 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v18 )
    goto LABEL_43;
  v19 = v18->fields._items;
  v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v18->fields._version;
  if ( !v19 )
    goto LABEL_43;
  v21 = v18->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      0,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v21 + 1;
    *((_DWORD *)v19->m_Items + v21) = 0;
    ++v18->fields._version;
  }
  v22 = v18->fields._size;
  if ( (unsigned int)v22 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      1,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v22 + 1;
    *((_DWORD *)v19->m_Items + v22) = 1;
    ++v18->fields._version;
  }
  v23 = v18->fields._size;
  if ( (unsigned int)v23 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      2,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v23 + 1;
    *((_DWORD *)v19->m_Items + v23) = 2;
    ++v18->fields._version;
  }
  v24 = v18->fields._size;
  if ( (unsigned int)v24 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      3,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v24 + 1;
    *((_DWORD *)v19->m_Items + v24) = 3;
    ++v18->fields._version;
  }
  v25 = v18->fields._size;
  if ( (unsigned int)v25 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      4,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v18->fields._version;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v18->fields._size = v25 + 1;
    *((_DWORD *)v19->m_Items + v25) = 4;
    ++v18->fields._version;
  }
  v26 = v18->fields._size;
  if ( (unsigned int)v26 < v19->max_length )
  {
    v18->fields._size = v26 + 1;
    *((_DWORD *)v19->m_Items + v26) = 5;
    ++v18->fields._version;
    goto LABEL_37;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v18,
    5,
    *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  v19 = v18->fields._items;
  v20 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v18->fields._version;
  if ( !v19 )
LABEL_43:
    sub_1B9026C(v10, v11);
LABEL_37:
  v27 = v18->fields._size;
  if ( (unsigned int)v27 >= v19->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v18,
      6,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = v27 + 1;
    *((_DWORD *)v19->m_Items + v27) = 6;
  }
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v18;
  sub_1B8FFB4(&this->fields.priorityKindList);
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
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct OtherUserSortDialog_CallbackFunc_o *v4; // x20
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B8FFB4(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A6AFC6 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_OtherUserSortDialog_EndClose__, v5);
    byte_4A6AFC6 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B8FFB4(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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

  if ( (byte_4A6AFCA & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickCancel__, method);
    byte_4A6AFCA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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

  if ( (byte_4A6AFC9 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickDecide__, method);
    byte_4A6AFC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1B9026C(baseSortInfo, v5);
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

  if ( (byte_4A6AFD3 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method);
    byte_4A6AFD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFD5 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method);
    byte_4A6AFD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFD2 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method);
    byte_4A6AFD2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFD0 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method);
    byte_4A6AFD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFD1 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method);
    byte_4A6AFD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFCF & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityNone__, method);
    byte_4A6AFCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFD4 & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method);
    byte_4A6AFD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFCE & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickSortAttack__, method);
    byte_4A6AFCE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFCD & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickSortHp__, method);
    byte_4A6AFCD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFCC & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickSortLevel__, method);
    byte_4A6AFCC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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

  if ( (byte_4A6AFCB & 1) == 0 )
  {
    sub_1B90010(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method);
    byte_4A6AFCB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
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
  __int64 sortKindList; // x0
  const MethodInfo *v23; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v30; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v32; // x0
  OtherUserSortDialog_c *v33; // x0
  struct ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v39; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v42; // x21
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v44; // x20
  int v45; // w9
  ListViewSort_o *v46; // x22
  UILabel_o *v47; // x21
  const MethodInfo *v48; // x2
  System_Action_o *v49; // x20

  if ( (byte_4A6AFC5 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&ListViewSort_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v11);
    sub_1B90010(&LocalizationManager_TypeInfo, v12);
    sub_1B90010(&Method_OtherUserSortDialog_EndOpen__, v13);
    sub_1B90010(&OtherUserSortDialog_TypeInfo, v14);
    sub_1B90010(&StringLiteral_9743/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v15);
    sub_1B90010(&StringLiteral_9741/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v16);
    sub_1B90010(&StringLiteral_9738/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v17);
    sub_1B90010(&StringLiteral_9740/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v18);
    sub_1B90010(&StringLiteral_9739/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v19);
    sub_1B90010(&StringLiteral_9742/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v20);
    byte_4A6AFC5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_1B8FFB4(&this->fields.callbackFunc);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9743/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_50;
    UILabel__set_text(sortTitleLabel, (System_String_o *)sortKindList, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9742/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(sortExplanationLabel, (System_String_o *)sortKindList, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9741/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_50;
    UILabel__set_text(priorityTitleLabel, (System_String_o *)sortKindList, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9740/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(priorityExplanationLabel, (System_String_o *)sortKindList, 0LL);
    decideLabel = this->fields.decideLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9739/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)sortKindList, 0LL);
    cancelLabel = this->fields.cancelLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9738/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_50;
    UILabel__set_text(cancelLabel, (System_String_o *)sortKindList, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sortKindList = sub_1B8FFB4(&this->fields.baseSortInfo);
LABEL_29:
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        this->fields.openedSortKind = baseSortInfo->fields.sortKind;
        this->fields.openedPriorityKind = baseSortInfo->fields.priorityKind;
        v35 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
        ListViewSort___ctor_40814004(v35, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v35;
        sortKindList = sub_1B8FFB4(&this->fields.operationSortInfo);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v39 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v39 >= max_length )
              break;
            if ( (unsigned int)v39 >= max_length )
LABEL_51:
              sub_1B90274(sortKindList, v23, v36, v37);
            sortKindList = (__int64)this->fields.sortKindList;
            if ( sortKindList )
            {
              operationSortInfo = this->fields.operationSortInfo;
              v42 = sortButtonLabels->m_Items[v39];
              sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)sortKindList,
                               v39,
                               (const MethodInfo_34F5ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
              if ( operationSortInfo )
              {
                sortKindList = (__int64)ListViewSort__GetSortKindText(operationSortInfo, sortKindList, 0LL);
                if ( v42 )
                {
                  UILabel__set_text(v42, (System_String_o *)sortKindList, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v39;
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
            v44 = 0LL;
            while ( 1 )
            {
              v45 = priorityButtonLabels->max_length;
              if ( (int)v44 >= v45 )
                break;
              if ( (unsigned int)v44 >= v45 )
                goto LABEL_51;
              sortKindList = (__int64)this->fields.priorityKindList;
              if ( sortKindList )
              {
                v46 = this->fields.operationSortInfo;
                v47 = priorityButtonLabels->m_Items[v44];
                sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)sortKindList,
                                 v44,
                                 (const MethodInfo_34F5ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
                if ( v46 )
                {
                  sortKindList = (__int64)ListViewSort__GetOtherUserPriorityKindText(v46, sortKindList, 0LL);
                  if ( v47 )
                  {
                    UILabel__set_text(v47, (System_String_o *)sortKindList, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v44;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_50;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v23);
            sortKindList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( sortKindList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sortKindList, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v48);
              this->fields.state = 1;
              v49 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
              System_Action___ctor(v49, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_50:
      sub_1B9026C(sortKindList, v23);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind == 2 )
    {
      v32 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v32 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v32->static_fields->friendRequestListSortInfo;
    }
    else if ( modeKind == 1 )
    {
      v33 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v33 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v33->static_fields->friendMemberListSortInfo;
    }
    else
    {
      if ( modeKind )
      {
LABEL_27:
        sortKindList = (__int64)this->fields.baseSortInfo;
        if ( !sortKindList )
          goto LABEL_50;
        ListViewSort__Load((ListViewSort_o *)sortKindList, 0LL);
        goto LABEL_29;
      }
      v30 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v30 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v30->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    sub_1B8FFB4(&this->fields.baseSortInfo);
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__SetEnableButtons(
        OtherUserSortDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UICommonButton_array *sortButtons; // x21
  int max_length; // w8
  OtherUserSortDialog_o *v6; // x19
  unsigned int v8; // w22
  bool v9; // w20

  sortButtons = this->fields.sortButtons;
  if ( !sortButtons )
    goto LABEL_10;
  max_length = sortButtons->max_length;
  v6 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B90274(this, isEnable, method, v3);
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v8];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_1B9026C(this, isEnable);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v6->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  v9 = isEnable;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v9, 0LL);
  this = (OtherUserSortDialog_o *)v6->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v9, 0LL);
}


void __fastcall OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  OtherUserSortDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v8; // x20
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t priorityKind; // w25
  UISprite_o *v12; // x21
  System_String_o **v13; // x8

  v4 = this;
  if ( (byte_4A6AFC8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method);
    sub_1B90010(&StringLiteral_17496/*"btn_bg_04"*/, v5);
    this = (OtherUserSortDialog_o *)sub_1B90010(&StringLiteral_17495/*"btn_bg_03"*/, v6);
    byte_4A6AFC8 = 1;
  }
  priorityButtons = v4->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_15:
    sub_1B9026C(this, method);
  v8 = 0LL;
  while ( (int)v8 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v4->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v8 >= prioritySprites->max_length )
        sub_1B90274(this, method, v2, v3);
      operationSortInfo = v4->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v4->fields.priorityKindList;
        if ( this )
        {
          priorityKind = operationSortInfo->fields.priorityKind;
          v12 = prioritySprites->m_Items[v8];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v8,
                                            (const MethodInfo_34F5ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
          if ( v12 )
          {
            v13 = (System_String_o **)(priorityKind == (_DWORD)this ? &StringLiteral_17495/*"btn_bg_03"*/ : &StringLiteral_17496/*"btn_bg_04"*/);
            UISprite__set_spriteName(v12, *v13, 0LL);
            priorityButtons = v4->fields.priorityButtons;
            ++v8;
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
  __int64 v2; // x2
  __int64 v3; // x3
  OtherUserSortDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UICommonButton_array *sortButtons; // x8
  __int64 v8; // x20
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v12; // x21
  System_String_o **v13; // x8

  v4 = this;
  if ( (byte_4A6AFC7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_1B90010(&StringLiteral_17496/*"btn_bg_04"*/, v5);
    this = (OtherUserSortDialog_o *)sub_1B90010(&StringLiteral_17495/*"btn_bg_03"*/, v6);
    byte_4A6AFC7 = 1;
  }
  sortButtons = v4->fields.sortButtons;
  if ( !sortButtons )
LABEL_15:
    sub_1B9026C(this, method);
  v8 = 0LL;
  while ( (int)v8 < (signed int)sortButtons->max_length )
  {
    sortSprites = v4->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v8 >= sortSprites->max_length )
        sub_1B90274(this, method, v2, v3);
      operationSortInfo = v4->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v4->fields.sortKindList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v12 = sortSprites->m_Items[v8];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v8,
                                            (const MethodInfo_34F5ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v12 )
          {
            v13 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17495/*"btn_bg_03"*/ : &StringLiteral_17496/*"btn_bg_04"*/);
            UISprite__set_spriteName(v12, *v13, 0LL);
            sortButtons = v4->fields.sortButtons;
            ++v8;
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

  if ( (byte_4A6AFC3 & 1) == 0 )
  {
    sub_1B90010(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_4A6AFC3 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1B9052C(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6AFD6 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15666/*"Window/CancelButton"*/, method);
    byte_4A6AFD6 = 1;
  }
  return (System_String_o *)StringLiteral_15666/*"Window/CancelButton"*/;
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

  if ( (byte_4A6AFC4 & 1) == 0 )
  {
    sub_1B90010(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_4A6AFC4 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1B9052C(v8);
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
  sub_1B8FFB4(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CE36C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CE324;
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
  if ( (byte_4A6AFD9 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6AFD9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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