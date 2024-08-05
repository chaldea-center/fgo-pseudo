void __fastcall OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct OrganizationTopItemInfo_array *v13; // x19
  OrganizationTopItemInfo_o *v14; // x20
  const MethodInfo *v15; // x5
  __int64 v16; // x0
  __int64 v17; // x1
  OrganizationTopItemInfo_o *v18; // x20
  const MethodInfo *v19; // x5
  OrganizationTopItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  System_Array_o *v22; // x0
  System_Array_o *v23; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  __int64 v25; // x0
  System_RuntimeFieldHandle_o v26; // 0:w1.4

  if ( (byte_49FA11B & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, v1);
    sub_1B64870(&OrganizationTopItemInfo___TypeInfo, v2);
    sub_1B64870(&OrganizationTopItemInfo_TypeInfo, v3);
    sub_1B64870(&OrganizationTopListViewManager_TypeInfo, v4);
    sub_1B64870(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v5);
    sub_1B64870(&StringLiteral_8583/*"MENU_PARTY_ORGANIZATION"*/, v6);
    sub_1B64870(&StringLiteral_10076/*"PARTY_ORGANIZATION"*/, v7);
    sub_1B64870(&StringLiteral_8503/*"MASTER_ORGANIZATION"*/, v8);
    sub_1B64870(&StringLiteral_8576/*"MENU_MASTER_ORGANIZATION"*/, v9);
    sub_1B64870(&StringLiteral_1/*""*/, v10);
    sub_1B64870(&StringLiteral_11570/*"SERVANT_LIST"*/, v11);
    sub_1B64870(&StringLiteral_8595/*"MENU_SERVANT_LIST"*/, v12);
    byte_49FA11B = 1;
  }
  v13 = (struct OrganizationTopItemInfo_array *)sub_1B64918(OrganizationTopItemInfo___TypeInfo, 3LL);
  v14 = (OrganizationTopItemInfo_o *)sub_1B64ABC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v14,
    1,
    (System_String_o *)StringLiteral_8503/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8576/*"MENU_MASTER_ORGANIZATION"*/,
    v15);
  if ( !v13 )
    sub_1B64ACC(v16, v17);
  if ( v14 )
  {
    v16 = sub_1B649AC(v14, v13->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_15;
  }
  if ( !v13->max_length )
    goto LABEL_14;
  v13->m_Items[0] = v14;
  sub_1B64814(v13->m_Items);
  v18 = (OrganizationTopItemInfo_o *)sub_1B64ABC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v18,
    2,
    (System_String_o *)StringLiteral_10076/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8583/*"MENU_PARTY_ORGANIZATION"*/,
    v19);
  if ( v18 )
  {
    v16 = sub_1B649AC(v18, v13->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_15;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_14;
  v13->m_Items[1] = v18;
  sub_1B64814(&v13->m_Items[1]);
  v20 = (OrganizationTopItemInfo_o *)sub_1B64ABC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v20,
    3,
    (System_String_o *)StringLiteral_11570/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8595/*"MENU_SERVANT_LIST"*/,
    v21);
  if ( v20 )
  {
    v16 = sub_1B649AC(v20, v13->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_15:
      v25 = sub_1B64AF0();
      sub_1B64998(v25, 0LL);
    }
  }
  if ( v13->max_length <= 2 )
LABEL_14:
    sub_1B64AD4(v16, v17);
  v13->m_Items[2] = v20;
  sub_1B64814(&v13->m_Items[2]);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v13;
  sub_1B64814(OrganizationTopListViewManager_TypeInfo->static_fields);
  v22 = (System_Array_o *)sub_1B64918(int___TypeInfo, 3LL);
  v26.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v23 = v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v22, v26, 0LL);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v23;
  sub_1B64814(&static_fields->normalKindList);
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
  __int64 v6; // x1
  __int64 v7; // x1
  OrganizationTopListViewManager_c *v8; // x0
  struct System_Int32_array *normalKindList; // x24
  __int64 v10; // x20
  System_Collections_Generic_List_object__o *v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w20
  __int64 v16; // x8
  int v17; // w9
  int v18; // w10
  __int64 v19; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  ListViewItem_o *v22; // x20
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8

  if ( (byte_49FA113 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B64870(&OrganizationTopListViewItem_TypeInfo, v6);
    sub_1B64870(&OrganizationTopListViewManager_TypeInfo, v7);
    byte_49FA113 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v8 = OrganizationTopListViewManager_TypeInfo;
  if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
    v8 = OrganizationTopListViewManager_TypeInfo;
  }
  normalKindList = v8->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v10, 0LL);
    if ( (int)v10 >= 1 )
    {
      v13 = 0LL;
      v14 = (unsigned int)v10;
      while ( 1 )
      {
        if ( v13 >= normalKindList->max_length )
LABEL_30:
          sub_1B64AD4(v11, v12);
        v11 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v15 = normalKindList->m_Items[v13 + 1];
        if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
          v11 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v16 = **(_QWORD **)&v11[4].fields._size;
        if ( !v16 )
          break;
        v17 = *(_DWORD *)(v16 + 24);
        if ( v17 >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v17 == v18 )
              goto LABEL_30;
            v19 = *(_QWORD *)(v16 + 8LL * v18 + 32);
            if ( !v19 )
              goto LABEL_31;
            if ( *(_DWORD *)(v19 + 16) == v15 )
              break;
            if ( v17 == ++v18 )
              goto LABEL_28;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v22 = (ListViewItem_o *)sub_1B64ABC(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_40375592(v22, size, 0LL);
          v22[1].klass = (ListViewItem_c *)v19;
          sub_1B64814(&v22[1]);
          v11 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          v25 = v11->fields._size;
          if ( (unsigned int)v25 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v22,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = (__int64)items + 8 * v25;
            v11->fields._size = v25 + 1;
            *(_QWORD *)(v26 + 32) = v22;
            v11 = (System_Collections_Generic_List_object__o *)sub_1B64814(v26 + 32);
          }
        }
LABEL_28:
        if ( ++v13 == v14 )
          goto LABEL_5;
      }
LABEL_31:
      sub_1B64ACC(v11, v12);
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
  OrganizationTopListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FA114 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B64870(&OrganizationTopListViewItem_TypeInfo, v5);
    byte_49FA114 = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_49FA11A & 1) == 0 )
  {
    sub_1B64870(&OrganizationTopListViewObject_TypeInfo, obj);
    byte_49FA11A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  Item = (OrganizationTopListViewItem_o *)sub_1B64814(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v7)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_1B64ACC(Item, v7);
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
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49FA119 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FA119 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      if ( this->fields.initMode == 5 )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1B64814(&this->fields.callbackFunc2);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
        return;
      }
LABEL_19:
      sub_1B64ACC(v8, v7);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA117 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v11);
    sub_1B64870(&Method_OrganizationTopListViewManager_OnMoveEnd__, v12);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v13);
    byte_49FA117 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64ACC(v19, v20);
      OrganizationTopListViewObject__Init_31400588((OrganizationTopListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject_31400084(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FA118 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v9);
    sub_1B64870(&Method_OrganizationTopListViewManager_OnMoveEnd__, v10);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v11);
    byte_49FA118 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64ACC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64ACC(v17, v18);
      OrganizationTopListViewObject__Init_31401212((OrganizationTopListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
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
  sub_1B64814(&this->fields.callbackFunc);
  OrganizationTopListViewManager__SetMode_31399284(this, mode, v6);
}


void __fastcall OrganizationTopListViewManager__SetMode_31394280(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B64814(&this->fields.callbackFunc2);
  OrganizationTopListViewManager__SetMode_31399284(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__SetMode_31399284(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v18; // x23
  const MethodInfo *v19; // x3
  int32_t v20; // w8
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w21
  Il2CppObject *v23; // x22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  Il2CppObject *v29; // x22
  System_Action_o *v30; // x23
  const MethodInfo *v31; // x3

  if ( (byte_49FA116 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__, v6);
    sub_1B64870(&Method_OrganizationTopListViewManager_OnMoveEnd__, v7);
    sub_1B64870(&StringLiteral_9891/*"OnMoveEnd"*/, v8);
    byte_49FA116 = 1;
  }
  this->fields.initMode = mode;
  v9 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v9 == 0, 0LL);
  switch ( v9 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_31400084(this, 4, v11);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_24;
      size = ClippingObjectList->fields._size;
      v15 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_23;
      v16 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v16,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        OrganizationTopListViewObject__Init_31400588((OrganizationTopListViewObject_o *)Item, 5, v18, 0.1, v19);
        if ( ++v16 >= v15->fields._size )
          return;
      }
      goto LABEL_24;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v20 = ClippingObjectList->fields._size;
      v21 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v20;
      if ( v20 < 1 )
        goto LABEL_23;
      v22 = 0;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_object___get_Item(
                v21,
                v22,
                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v24 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v23 )
          break;
        OrganizationTopListViewObject__Init_31400588((OrganizationTopListViewObject_o *)v23, 6, v24, 0.1, v25);
        if ( ++v22 >= v21->fields._size )
          return;
      }
      goto LABEL_24;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v26 = ClippingObjectList->fields._size;
      v27 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v26;
      if ( v26 < 1 )
      {
LABEL_23:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9891/*"OnMoveEnd"*/,
          0.0,
          0LL);
      }
      else
      {
        v28 = 0;
        do
        {
          v29 = System_Collections_Generic_List_object___get_Item(
                  v27,
                  v28,
                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v30 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
          if ( !v29 )
LABEL_24:
            sub_1B64ACC(ClippingObjectList, v13);
          OrganizationTopListViewObject__Init_31400588((OrganizationTopListViewObject_o *)v29, 8, v30, 0.1, v31);
          ++v28;
        }
        while ( v28 < v27->fields._size );
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
  if ( (byte_49FA115 & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_1B64870(&OrganizationTopListViewObject_TypeInfo, obj);
    byte_49FA115 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_1B64ACC(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  OrganizationTopListViewObject__Init_31399208((OrganizationTopListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_49FA10D & 1) == 0 )
  {
    sub_1B64870(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA10D = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49FA10F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FA10F = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B64D8C(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FA112 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49FA112 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B64ACC(0LL, v18);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B64ACC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40394112((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1B64ACC(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B64ACC(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B64ACC(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B64ACC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1B64814(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v11;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA111 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_49FA111 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64ACC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1B64ACC(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1B64814(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v11;
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

  if ( (byte_49FA10E & 1) == 0 )
  {
    sub_1B64870(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FA10E = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B64D8C(v7);
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

  if ( (byte_49FA110 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FA110 = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B64D8C(v7);
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
  sub_1B64814(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19A6368;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19A6348;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A6300;
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
  return (System_IAsyncResult_o *)sub_1B64824(this, &v6, callback, object);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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