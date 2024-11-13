void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ListViewSort_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ListViewSort_o *v18; // x20
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  ListViewSort_o *v25; // x20
  struct OtherUserSortDialog_StaticFields *v26; // x0
  System_Enum_o v27; // [xsp+0h] [xbp-80h] BYREF
  int v28; // [xsp+10h] [xbp-70h]
  System_Enum_o v29; // [xsp+18h] [xbp-68h] BYREF
  int v30; // [xsp+28h] [xbp-58h]

  if ( (byte_4B1102A & 1) == 0 )
  {
    sub_1BCA7E0(&FriendStatus_Kind_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v4, v5);
    sub_1BCA7E0(&OtherUserSortDialog_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6868/*"FollowerSelect"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6967/*"FriendOperation"*/, v10, v11);
    byte_4B1102A = 1;
  }
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v12, (System_String_o *)StringLiteral_6868/*"FollowerSelect"*/, 11, 0, 0LL);
  OtherUserSortDialog_TypeInfo->static_fields->supportSortInfo = v12;
  sub_1BCA784(OtherUserSortDialog_TypeInfo->static_fields, v12);
  v29.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v29.monitor = (void *)-1LL;
  v30 = 4;
  v13 = System_Enum__ToString(&v29, 0LL);
  v14 = System_String__Concat_62401220((System_String_o *)StringLiteral_6967/*"FriendOperation"*/, v13, 0LL);
  v18 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v15, v16, v17);
  ListViewSort___ctor_41480716(v18, v14, 3, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->friendMemberListSortInfo = v18;
  sub_1BCA784(&static_fields->friendMemberListSortInfo, v18);
  v28 = 3;
  v27.klass = (System_Enum_c *)FriendStatus_Kind_TypeInfo;
  v27.monitor = (void *)-1LL;
  v20 = System_Enum__ToString(&v27, 0LL);
  v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_6967/*"FriendOperation"*/, v20, 0LL);
  v25 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v22, v23, v24);
  ListViewSort___ctor_41480716(v25, v21, 3, 0, 0LL);
  v26 = OtherUserSortDialog_TypeInfo->static_fields;
  v26->friendRequestListSortInfo = v25;
  sub_1BCA784(&v26->friendRequestListSortInfo, v25);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_T__o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_T__o *v29; // x20
  struct System_Object_array *v30; // x9
  _QWORD *v31; // x8
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  __int64 v38; // x10
  __int64 v39; // x1

  if ( (byte_4B11029 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v15, v16);
    byte_4B11029 = 1;
  }
  v17 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v17 )
    goto LABEL_43;
  items = v17->fields._items;
  v21 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_43;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      11,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v17->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 11;
    ++v17->fields._version;
  }
  v23 = v17->fields._size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v17->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 3;
    ++v17->fields._version;
  }
  v24 = v17->fields._size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_43;
  }
  else
  {
    v17->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 5;
    ++v17->fields._version;
  }
  v25 = v17->fields._size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 6;
  }
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v17;
  sub_1BCA784(&this->fields.sortKindList, v17);
  v29 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28);
  System_Collections_Generic_List_Int32Enum____ctor(
    v29,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v29 )
    goto LABEL_43;
  v30 = v29->fields._items;
  v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v29->fields._version;
  if ( !v30 )
    goto LABEL_43;
  v32 = v29->fields._size;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      0,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v29->fields._size = v32 + 1;
    *((_DWORD *)v30->m_Items + v32) = 0;
    ++v29->fields._version;
  }
  v33 = v29->fields._size;
  if ( (unsigned int)v33 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v29->fields._size = v33 + 1;
    *((_DWORD *)v30->m_Items + v33) = 1;
    ++v29->fields._version;
  }
  v34 = v29->fields._size;
  if ( (unsigned int)v34 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v29->fields._size = v34 + 1;
    *((_DWORD *)v30->m_Items + v34) = 2;
    ++v29->fields._version;
  }
  v35 = v29->fields._size;
  if ( (unsigned int)v35 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v29->fields._size = v35 + 1;
    *((_DWORD *)v30->m_Items + v35) = 3;
    ++v29->fields._version;
  }
  v36 = v29->fields._size;
  if ( (unsigned int)v36 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    v30 = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
    ++v29->fields._version;
    if ( !v30 )
      goto LABEL_43;
  }
  else
  {
    v29->fields._size = v36 + 1;
    *((_DWORD *)v30->m_Items + v36) = 4;
    ++v29->fields._version;
  }
  v37 = v29->fields._size;
  if ( (unsigned int)v37 < v30->max_length )
  {
    v29->fields._size = v37 + 1;
    *((_DWORD *)v30->m_Items + v37) = 5;
    ++v29->fields._version;
    goto LABEL_37;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v29,
    5,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  v30 = v29->fields._items;
  v31 = Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__;
  ++v29->fields._version;
  if ( !v30 )
LABEL_43:
    sub_1BCAA3C(v18, v19);
LABEL_37:
  v38 = v29->fields._size;
  if ( (unsigned int)v38 >= v30->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v29->fields._size = v38 + 1;
    *((_DWORD *)v30->m_Items + v38) = 6;
  }
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v29;
  sub_1BCA784(&this->fields.priorityKindList, v29);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v39);
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
    sub_1BCA784(p_callbackFunc, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11018 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_OtherUserSortDialog_EndClose__, v5, v6);
    byte_4B11018 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1101C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickCancel__, method, v2);
    byte_4B1101C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    OtherUserSortDialog__Callback(this, 0, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v8; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v10; // w1

  if ( (byte_4B1101B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickDecide__, method, v2);
    byte_4B1101B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1BCAA3C(baseSortInfo, v6);
    }
    v10 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
       || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v10, v8);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11025 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method, v2);
    byte_4B11025 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11027 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method, v2);
    byte_4B11027 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11024 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method, v2);
    byte_4B11024 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11022 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method, v2);
    byte_4B11022 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11023 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method, v2);
    byte_4B11023 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11021 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityNone__, method, v2);
    byte_4B11021 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11026 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method, v2);
    byte_4B11026 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11020 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickSortAttack__, method, v2);
    byte_4B11020 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickSortAttack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B1101F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickSortHp__, method, v2);
    byte_4B1101F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickSortHp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B1101E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickSortLevel__, method, v2);
    byte_4B1101E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickSortLevel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B1101D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method, v2);
    byte_4B1101D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  UILabel_o *sortTitleLabel; // x21
  __int64 sortKindList; // x0
  const MethodInfo *v36; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v45; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v47; // x0
  OtherUserSortDialog_c *v48; // x0
  struct ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v50; // x21
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v52; // x20
  int max_length; // w9
  ListViewSort_o *operationSortInfo; // x22
  UILabel_o *v55; // x21
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v57; // x20
  int v58; // w9
  ListViewSort_o *v59; // x22
  UILabel_o *v60; // x21
  const MethodInfo *v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Action_o *v65; // x20

  if ( (byte_4B11017 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_OtherUserSortDialog_EndOpen__, v17, v18);
    sub_1BCA7E0(&OtherUserSortDialog_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_9870/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9868/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_9865/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_9867/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_9866/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_9869/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v31, v32);
    byte_4B11017 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9870/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_50;
    UILabel__set_text(sortTitleLabel, (System_String_o *)sortKindList, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9869/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(sortExplanationLabel, (System_String_o *)sortKindList, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9868/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_50;
    UILabel__set_text(priorityTitleLabel, (System_String_o *)sortKindList, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9867/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_50;
    UILabel__set_text(priorityExplanationLabel, (System_String_o *)sortKindList, 0LL);
    decideLabel = this->fields.decideLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9866/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)sortKindList, 0LL);
    cancelLabel = this->fields.cancelLabel;
    sortKindList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9865/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_50;
    UILabel__set_text(cancelLabel, (System_String_o *)sortKindList, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sortKindList = sub_1BCA784(&this->fields.baseSortInfo, sort);
LABEL_29:
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        this->fields.openedSortKind = baseSortInfo->fields.sortKind;
        this->fields.openedPriorityKind = baseSortInfo->fields.priorityKind;
        v50 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v36, v42, v43);
        ListViewSort___ctor_41481440(v50, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v50;
        sortKindList = sub_1BCA784(&this->fields.operationSortInfo, v50);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v52 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v52 >= max_length )
              break;
            if ( (unsigned int)v52 >= max_length )
LABEL_51:
              sub_1BCAA44(sortKindList, v36);
            sortKindList = (__int64)this->fields.sortKindList;
            if ( sortKindList )
            {
              operationSortInfo = this->fields.operationSortInfo;
              v55 = sortButtonLabels->m_Items[v52];
              sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)sortKindList,
                               v52,
                               (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
              if ( operationSortInfo )
              {
                sortKindList = (__int64)ListViewSort__GetSortKindText(operationSortInfo, sortKindList, 0LL);
                if ( v55 )
                {
                  UILabel__set_text(v55, (System_String_o *)sortKindList, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v52;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_50;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v36);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v57 = 0LL;
            while ( 1 )
            {
              v58 = priorityButtonLabels->max_length;
              if ( (int)v57 >= v58 )
                break;
              if ( (unsigned int)v57 >= v58 )
                goto LABEL_51;
              sortKindList = (__int64)this->fields.priorityKindList;
              if ( sortKindList )
              {
                v59 = this->fields.operationSortInfo;
                v60 = priorityButtonLabels->m_Items[v57];
                sortKindList = System_Collections_Generic_List_Int32Enum___get_Item(
                                 (System_Collections_Generic_List_T__o *)sortKindList,
                                 v57,
                                 (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
                if ( v59 )
                {
                  sortKindList = (__int64)ListViewSort__GetOtherUserPriorityKindText(v59, sortKindList, 0LL);
                  if ( v60 )
                  {
                    UILabel__set_text(v60, (System_String_o *)sortKindList, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v57;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_50;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v36);
            sortKindList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( sortKindList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sortKindList, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v61);
              this->fields.state = 1;
              v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v62, v63, v64);
              System_Action___ctor(v65, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_50:
      sub_1BCAA3C(sortKindList, v36);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind == 2 )
    {
      v47 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v36);
        v47 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v47->static_fields->friendRequestListSortInfo;
    }
    else if ( modeKind == 1 )
    {
      v48 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v36);
        v48 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v48->static_fields->friendMemberListSortInfo;
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
      v45 = OtherUserSortDialog_TypeInfo;
      if ( !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo, v36);
        v45 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v45->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    sub_1BCA784(&this->fields.baseSortInfo, friendRequestListSortInfo);
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
        sub_1BCAA44(this, isEnable);
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_1BCAA3C(this, isEnable);
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
  __int64 v2; // x2
  OtherUserSortDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v9; // x20
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t priorityKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B1101A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (OtherUserSortDialog_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B1101A = 1;
  }
  priorityButtons = v3->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_15:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( (int)v9 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v3->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v9 >= prioritySprites->max_length )
        sub_1BCAA44(this, method);
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v3->fields.priorityKindList;
        if ( this )
        {
          priorityKind = operationSortInfo->fields.priorityKind;
          v13 = prioritySprites->m_Items[v9];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
          if ( v13 )
          {
            v14 = (System_String_o **)(priorityKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
            UISprite__set_spriteName(v13, *v14, 0LL);
            priorityButtons = v3->fields.priorityButtons;
            ++v9;
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
  OtherUserSortDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UICommonButton_array *sortButtons; // x8
  __int64 v9; // x20
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  int32_t sortKind; // w25
  UISprite_o *v13; // x21
  System_String_o **v14; // x8

  v3 = this;
  if ( (byte_4B11019 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v4, v5);
    this = (OtherUserSortDialog_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v6, v7);
    byte_4B11019 = 1;
  }
  sortButtons = v3->fields.sortButtons;
  if ( !sortButtons )
LABEL_15:
    sub_1BCAA3C(this, method);
  v9 = 0LL;
  while ( (int)v9 < (signed int)sortButtons->max_length )
  {
    sortSprites = v3->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v9 >= sortSprites->max_length )
        sub_1BCAA44(this, method);
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        this = (OtherUserSortDialog_o *)v3->fields.sortKindList;
        if ( this )
        {
          sortKind = operationSortInfo->fields.sortKind;
          v13 = sortSprites->m_Items[v9];
          this = (OtherUserSortDialog_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                            (System_Collections_Generic_List_T__o *)this,
                                            v9,
                                            (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
          if ( v13 )
          {
            v14 = (System_String_o **)(sortKind == (_DWORD)this ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
            UISprite__set_spriteName(v13, *v14, 0LL);
            sortButtons = v3->fields.sortButtons;
            ++v9;
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

  if ( (byte_4B11015 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserSortDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B11015 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1BCACFC(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11028 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B11028 = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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

  if ( (byte_4B11016 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserSortDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B11016 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A052D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0528C;
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
  if ( (byte_4B1102B & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B1102B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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