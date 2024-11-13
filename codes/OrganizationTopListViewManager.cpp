void __fastcall OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct OrganizationTopItemInfo_array *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  OrganizationTopItemInfo_o *v29; // x20
  const MethodInfo *v30; // x5
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  OrganizationTopItemInfo_o *v36; // x20
  const MethodInfo *v37; // x5
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  OrganizationTopItemInfo_o *v41; // x20
  const MethodInfo *v42; // x5
  System_Array_o *v43; // x0
  System_Array_o *v44; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  __int64 v46; // x0
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  if ( (byte_4B11D13 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&OrganizationTopItemInfo___TypeInfo, v3, v4);
    sub_1BCA7E0(&OrganizationTopItemInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&OrganizationTopListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v9,
      v10);
    sub_1BCA7E0(&StringLiteral_8747/*"MENU_PARTY_ORGANIZATION"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10257/*"PARTY_ORGANIZATION"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8667/*"MASTER_ORGANIZATION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_8740/*"MENU_MASTER_ORGANIZATION"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11760/*"SERVANT_LIST"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8759/*"MENU_SERVANT_LIST"*/, v23, v24);
    byte_4B11D13 = 1;
  }
  v25 = (struct OrganizationTopItemInfo_array *)sub_1BCA888(OrganizationTopItemInfo___TypeInfo, 3LL);
  v29 = (OrganizationTopItemInfo_o *)sub_1BCAA2C(OrganizationTopItemInfo_TypeInfo, v26, v27, v28);
  OrganizationTopItemInfo___ctor(
    v29,
    1,
    (System_String_o *)StringLiteral_8667/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8740/*"MENU_MASTER_ORGANIZATION"*/,
    v30);
  if ( !v25 )
    sub_1BCAA3C(v31, v32);
  if ( v29 )
  {
    v31 = sub_1BCA91C(v29, v25->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_15;
  }
  if ( !v25->max_length )
    goto LABEL_14;
  v25->m_Items[0] = v29;
  sub_1BCA784(v25->m_Items, v29);
  v36 = (OrganizationTopItemInfo_o *)sub_1BCAA2C(OrganizationTopItemInfo_TypeInfo, v33, v34, v35);
  OrganizationTopItemInfo___ctor(
    v36,
    2,
    (System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8747/*"MENU_PARTY_ORGANIZATION"*/,
    v37);
  if ( v36 )
  {
    v31 = sub_1BCA91C(v36, v25->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_15;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_14;
  v25->m_Items[1] = v36;
  sub_1BCA784(&v25->m_Items[1], v36);
  v41 = (OrganizationTopItemInfo_o *)sub_1BCAA2C(OrganizationTopItemInfo_TypeInfo, v38, v39, v40);
  OrganizationTopItemInfo___ctor(
    v41,
    3,
    (System_String_o *)StringLiteral_11760/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8759/*"MENU_SERVANT_LIST"*/,
    v42);
  if ( v41 )
  {
    v31 = sub_1BCA91C(v41, v25->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_15:
      v46 = sub_1BCAA60();
      sub_1BCA908(v46, 0LL);
    }
  }
  if ( v25->max_length <= 2 )
LABEL_14:
    sub_1BCAA44(v31, v32);
  v25->m_Items[2] = v41;
  sub_1BCA784(&v25->m_Items[2], v41);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v25;
  sub_1BCA784(OrganizationTopListViewManager_TypeInfo->static_fields, v25);
  v43 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
  v47.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v44 = v43;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v43, v47, 0LL);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v44;
  sub_1BCA784(&static_fields->normalKindList, v44);
}


void __fastcall OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  OrganizationTopListViewManager_c *v11; // x0
  struct System_Int32_array *normalKindList; // x24
  __int64 v13; // x20
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  unsigned __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w20
  __int64 v21; // x8
  int v22; // w9
  int v23; // w10
  __int64 v24; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  ListViewItem_o *v27; // x20
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8

  if ( (byte_4B11D0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&OrganizationTopListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&OrganizationTopListViewManager_TypeInfo, v9, v10);
    byte_4B11D0B = 1;
  }
  if ( kind )
    goto LABEL_4;
  v11 = OrganizationTopListViewManager_TypeInfo;
  if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo, *(_QWORD *)&kind);
    v11 = OrganizationTopListViewManager_TypeInfo;
  }
  normalKindList = v11->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v13 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v13, 0LL);
    if ( (int)v13 >= 1 )
    {
      v18 = 0LL;
      v19 = (unsigned int)v13;
      while ( 1 )
      {
        if ( v18 >= normalKindList->max_length )
LABEL_30:
          sub_1BCAA44(v14, v15);
        v14 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v20 = normalKindList->m_Items[v18 + 1];
        if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo, v15);
          v14 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v21 = **(_QWORD **)&v14[4].fields._size;
        if ( !v21 )
          break;
        v22 = *(_DWORD *)(v21 + 24);
        if ( v22 >= 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            if ( v22 == v23 )
              goto LABEL_30;
            v24 = *(_QWORD *)(v21 + 8LL * v23 + 32);
            if ( !v24 )
              goto LABEL_31;
            if ( *(_DWORD *)(v24 + 16) == v20 )
              break;
            if ( v22 == ++v23 )
              goto LABEL_28;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v27 = (ListViewItem_o *)sub_1BCAA2C(OrganizationTopListViewItem_TypeInfo, v15, v16, v17);
          ListViewItem___ctor_41447164(v27, size, 0LL);
          v27[1].klass = (ListViewItem_c *)v24;
          sub_1BCA784(&v27[1], v24);
          v14 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v14 )
            break;
          items = v14->fields._items;
          v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          v30 = v14->fields._size;
          if ( (unsigned int)v30 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v27,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = (__int64)items + 8 * v30;
            v14->fields._size = v30 + 1;
            *(_QWORD *)(v31 + 32) = v27;
            v14 = (System_Collections_Generic_List_object__o *)sub_1BCA784(v31 + 32, v27);
          }
        }
LABEL_28:
        if ( ++v18 == v19 )
          goto LABEL_5;
      }
LABEL_31:
      sub_1BCAA3C(v14, v15);
    }
  }
LABEL_5:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall OrganizationTopListViewManager__DestroyList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
OrganizationTopListViewItem_o *__fastcall OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  OrganizationTopListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B11D0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&OrganizationTopListViewItem_TypeInfo, v5, v6);
    byte_4B11D0C = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(OrganizationTopListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (OrganizationTopListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall OrganizationTopListViewManager__OnClickListView(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x21
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  __int64 methodPtr_low; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_4B11D12 & 1) == 0 )
  {
    sub_1BCA7E0(&OrganizationTopListViewObject_TypeInfo, obj, method);
    byte_4B11D12 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  Item = (OrganizationTopListViewItem_o *)sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v7)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_1BCAA3C(Item, v7);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      info->fields.eventData,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall OrganizationTopListViewManager__OnMoveEnd(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11D11 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D11 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      if ( this->fields.initMode == 5 )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        {
          v8 = this->fields.scrollView;
          if ( !v8 )
            goto LABEL_19;
          UIScrollView__Press(v8, 0, 0LL);
        }
      }
      v9 = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
        goto LABEL_17;
      v8 = this->fields.scrollView;
      if ( v8 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
LABEL_17:
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCA784(&this->fields.callbackFunc2, 0LL);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
        return;
      }
LABEL_19:
      sub_1BCAA3C(v8, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11D0F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_OrganizationTopListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11D0F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      OrganizationTopListViewObject__Init_32342456((OrganizationTopListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject_32341952(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11D10 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_OrganizationTopListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11D10 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      OrganizationTopListViewObject__Init_32343080((OrganizationTopListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void __fastcall OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  OrganizationTopListViewManager__SetMode_32341152(this, mode, v6);
}


void __fastcall OrganizationTopListViewManager__SetMode_32336148(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  OrganizationTopListViewManager__SetMode_32341152(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__SetMode_32341152(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v17; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  Il2CppObject *Item; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3
  int32_t v27; // w8
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w21
  Il2CppObject *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x23
  const MethodInfo *v35; // x3
  int32_t v36; // w8
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w21
  Il2CppObject *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x23
  const MethodInfo *v44; // x3

  if ( (byte_4B11D0E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_OrganizationTopListViewManager_OnMoveEnd__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B11D0E = 1;
  }
  this->fields.initMode = mode;
  v13 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v13 == 0, 0LL);
  switch ( v13 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_32341952(this, 4, v15);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v14);
      if ( !ClippingObjectList )
        goto LABEL_24;
      size = ClippingObjectList->fields._size;
      v19 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_23;
      v20 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v19,
                 v20,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
        System_Action___ctor(v25, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        OrganizationTopListViewObject__Init_32342456((OrganizationTopListViewObject_o *)Item, 5, v25, 0.1, v26);
        if ( ++v20 >= v19->fields._size )
          return;
      }
      goto LABEL_24;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v14);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v27 = ClippingObjectList->fields._size;
      v28 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v27;
      if ( v27 < 1 )
        goto LABEL_23;
      v29 = 0;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_object___get_Item(
                v28,
                v29,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
        System_Action___ctor(v34, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v30 )
          break;
        OrganizationTopListViewObject__Init_32342456((OrganizationTopListViewObject_o *)v30, 6, v34, 0.1, v35);
        if ( ++v29 >= v28->fields._size )
          return;
      }
      goto LABEL_24;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v14);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v36 = ClippingObjectList->fields._size;
      v37 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v36;
      if ( v36 < 1 )
      {
LABEL_23:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
          0.0,
          0LL);
      }
      else
      {
        v38 = 0;
        do
        {
          v39 = System_Collections_Generic_List_object___get_Item(
                  v37,
                  v38,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
          System_Action___ctor(v43, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
          if ( !v39 )
LABEL_24:
            sub_1BCAA3C(ClippingObjectList, v17);
          OrganizationTopListViewObject__Init_32342456((OrganizationTopListViewObject_o *)v39, 8, v43, 0.1, v44);
          ++v38;
        }
        while ( v38 < v37->fields._size );
      }
      return;
    default:
      return;
  }
}


void __fastcall OrganizationTopListViewManager__SetObjectItem(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B11D0D & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_1BCA7E0(&OrganizationTopListViewObject_TypeInfo, obj, item);
    byte_4B11D0D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  OrganizationTopListViewObject__Init_32341076((OrganizationTopListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall OrganizationTopListViewManager__add_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  OrganizationTopListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11D05 & 1) == 0 )
  {
    sub_1BCA7E0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11D05 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1BCACFC(v7);
  OrganizationTopListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall OrganizationTopListViewManager__add_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11D07 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11D07 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1BCACFC(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11D0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11D0A = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v21;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11D09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11D09 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v21;
}


void __fastcall OrganizationTopListViewManager__remove_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11D06 & 1) == 0 )
  {
    sub_1BCA7E0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11D06 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1BCACFC(v7);
  OrganizationTopListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall OrganizationTopListViewManager__remove_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B11D08 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11D08 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1BCACFC(v7);
  OrganizationTopListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A06A48;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A06A28;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A069E0;
}


System_IAsyncResult_o *__fastcall OrganizationTopListViewManager_CallbackFunc__BeginInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__Invoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}