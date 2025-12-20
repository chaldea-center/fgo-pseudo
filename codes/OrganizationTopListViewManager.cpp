void OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  struct OrganizationTopItemInfo_array *v1; // x19
  OrganizationTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  OrganizationTopItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  OrganizationTopItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Array_o *v34; // x0
  System_RuntimeFieldHandle_o v35; // x1
  System_Array_o *v36; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x0

  if ( (byte_4D27E92 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&OrganizationTopItemInfo___TypeInfo);
    sub_1C94098(&OrganizationTopItemInfo_TypeInfo);
    sub_1C94098(&OrganizationTopListViewManager_TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_1C94098(&StringLiteral_8671/*"MENU_PARTY_ORGANIZATION"*/);
    sub_1C94098(&StringLiteral_10125/*"PARTY_ORGANIZATION"*/);
    sub_1C94098(&StringLiteral_8589/*"MASTER_ORGANIZATION"*/);
    sub_1C94098(&StringLiteral_8664/*"MENU_MASTER_ORGANIZATION"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_11702/*"SERVANT_LIST"*/);
    sub_1C94098(&StringLiteral_8683/*"MENU_SERVANT_LIST"*/);
    byte_4D27E92 = 1;
  }
  v1 = (struct OrganizationTopItemInfo_array *)sub_1C94140(OrganizationTopItemInfo___TypeInfo, 3);
  v2 = (OrganizationTopItemInfo_o *)sub_1C942E4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8589/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8664/*"MENU_MASTER_ORGANIZATION"*/,
    v3);
  if ( !v1 )
    sub_1C942F0(v4, v5);
  if ( v2 )
  {
    v4 = sub_1C941D4(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v1->m_Items, (int32_t)v2, v6, v7, v8, v9, v10, v11);
  v12 = (OrganizationTopItemInfo_o *)sub_1C942E4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v12,
    2,
    (System_String_o *)StringLiteral_10125/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8671/*"MENU_PARTY_ORGANIZATION"*/,
    v13);
  if ( v12 )
  {
    v4 = sub_1C941D4(v12, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_14;
  v1->m_Items[1] = v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[1], (int32_t)v12, v14, v15, v16, v17, v18, v19);
  v20 = (OrganizationTopItemInfo_o *)sub_1C942E4(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v20,
    3,
    (System_String_o *)StringLiteral_11702/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8683/*"MENU_SERVANT_LIST"*/,
    v21);
  if ( v20 )
  {
    v4 = sub_1C941D4(v20, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v44 = sub_1C94314();
      sub_1C941C0(v44, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 2 )
LABEL_14:
    sub_1C942F8(v4);
  v1->m_Items[2] = v20;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[2], (int32_t)v20, v22, v23, v24, v25, v26, v27);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)OrganizationTopListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Array_o *)sub_1C94140(int___TypeInfo, 3);
  v35.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v36 = v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v34, v35, 0);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v36;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->normalKindList, (int32_t)v36, v38, v39, v40, v41, v42, v43);
}


void OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_c *v5; // x0
  struct System_Int32_array *normalKindList; // x24
  il2cpp_array_size_t max_length; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  int32_t v12; // w20
  __int64 v13; // x8
  int v14; // w9
  int v15; // w10
  __int64 v16; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8

  if ( (byte_4D27E8A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&OrganizationTopListViewItem_TypeInfo);
    sub_1C94098(&OrganizationTopListViewManager_TypeInfo);
    byte_4D27E8A = 1;
  }
  if ( kind )
    goto LABEL_4;
  v5 = OrganizationTopListViewManager_TypeInfo;
  if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
    v5 = OrganizationTopListViewManager_TypeInfo;
  }
  normalKindList = v5->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  }
  else
  {
    max_length = normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      v11 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v10 >= LODWORD(normalKindList->max_length) )
LABEL_30:
          sub_1C942F8(v8);
        v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v12 = normalKindList->m_Items[v10];
        if ( !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
          v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v13 = **(_QWORD **)&v8[4].fields._size;
        if ( !v13 )
          break;
        v14 = *(_DWORD *)(v13 + 24);
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v14 == v15 )
              goto LABEL_30;
            v16 = *(_QWORD *)(v13 + 8LL * v15 + 32);
            if ( !v16 )
              goto LABEL_31;
            if ( *(_DWORD *)(v16 + 16) == v12 )
              break;
            if ( v14 == ++v15 )
              goto LABEL_28;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v19 = sub_1C942E4(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_44594388((ListViewItem_o *)v19, size, 0);
          *(_QWORD *)(v19 + 120) = v16;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 120), v16, v20, v21, v22, v23, v24, v25);
          v8 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v8 )
            break;
          items = v8->fields._items;
          v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          v34 = v8->fields._size;
          if ( (unsigned int)v34 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v19,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = (__int64)items + 8 * v34;
            v8->fields._size = v34 + 1;
            *(_QWORD *)(v35 + 32) = v19;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 32), v19, v26, v27, v28, v29, v30, v31);
          }
        }
LABEL_28:
        if ( ++v10 == v11 )
          goto LABEL_5;
      }
LABEL_31:
      sub_1C942F0(v8, v9);
    }
  }
LABEL_5:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void OrganizationTopListViewManager__DestroyList(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


OrganizationTopListViewItem_o *OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D27E8B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&OrganizationTopListViewItem_TypeInfo);
    byte_4D27E8B = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = OrganizationTopListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (OrganizationTopListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void OrganizationTopListViewManager__OnClickListView(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x21
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_4D27E91 & 1) == 0 )
  {
    sub_1C94098(&OrganizationTopListViewObject_TypeInfo);
    byte_4D27E91 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v12)) == 0
      || (info = Item->fields.info) == 0 )
    {
      sub_1C942F0(Item, v12);
    }
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      info->fields.eventData,
      callbackFunc->fields.method);
  }
}


void OrganizationTopListViewManager__OnMoveEnd(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D27E90 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27E90 = 1;
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
        if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        {
          v8 = this->fields.scrollView;
          if ( !v8 )
            goto LABEL_19;
          UIScrollView__Press(v8, 0, 0);
        }
      }
      v9 = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v9, 0, 0) )
        goto LABEL_17;
      v8 = this->fields.scrollView;
      if ( v8 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
LABEL_17:
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
        return;
      }
LABEL_19:
      sub_1C942F0(v8, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewManager__RequestListObject(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D27E8E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C94098(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D27E8E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      OrganizationTopListViewObject__Init_34534056((OrganizationTopListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewManager__RequestListObject_34533552(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D27E8F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C94098(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D27E8F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      OrganizationTopListViewObject__Init_34534680((OrganizationTopListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_34532752(this, mode, v10);
}


void OrganizationTopListViewManager__SetMode_34527744(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_34532752(this, mode, v10);
}


void OrganizationTopListViewManager__SetMode_34532752(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int v5; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x3
  int32_t v16; // w8
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w21
  Il2CppObject *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w8
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  Il2CppObject *v25; // x22
  System_Action_o *v26; // x23
  const MethodInfo *v27; // x3

  if ( (byte_4D27E8D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
    sub_1C94098(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D27E8D = 1;
  }
  this->fields.initMode = mode;
  v5 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 0, 0);
  switch ( v5 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_34533552(this, 4, v7);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      size = ClippingObjectList->fields._size;
      v11 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_23;
      v12 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        OrganizationTopListViewObject__Init_34534056((OrganizationTopListViewObject_o *)Item, 5, v14, 0.1, v15);
        if ( ++v12 >= v11->fields._size )
          return;
      }
      goto LABEL_24;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v16 = ClippingObjectList->fields._size;
      v17 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v16;
      if ( v16 < 1 )
        goto LABEL_23;
      v18 = 0;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_object___get_Item(
                v17,
                v18,
                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
        if ( !v19 )
          break;
        OrganizationTopListViewObject__Init_34534056((OrganizationTopListViewObject_o *)v19, 6, v20, 0.1, v21);
        if ( ++v18 >= v17->fields._size )
          return;
      }
      goto LABEL_24;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_24;
      v22 = ClippingObjectList->fields._size;
      v23 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v22;
      if ( v22 < 1 )
      {
LABEL_23:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
          0.0,
          0);
      }
      else
      {
        v24 = 0;
        do
        {
          v25 = System_Collections_Generic_List_object___get_Item(
                  v23,
                  v24,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v26 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v26, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
          if ( !v25 )
LABEL_24:
            sub_1C942F0(ClippingObjectList, v9);
          OrganizationTopListViewObject__Init_34534056((OrganizationTopListViewObject_o *)v25, 8, v26, 0.1, v27);
          ++v24;
        }
        while ( v24 < v23->fields._size );
      }
      return;
    default:
      return;
  }
}


void OrganizationTopListViewManager__SetObjectItem(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D27E8C & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_1C94098(&OrganizationTopListViewObject_TypeInfo);
    byte_4D27E8C = 1;
  }
  if ( !obj
    || (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  OrganizationTopListViewObject__Init_34532676((OrganizationTopListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void OrganizationTopListViewManager__add_callbackFunc(
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

  if ( (byte_4D27E84 & 1) == 0 )
  {
    sub_1C94098(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4D27E84 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C9468C(v7);
  OrganizationTopListViewManager__remove_callbackFunc(v10, v11, v12);
}


void OrganizationTopListViewManager__add_callbackFunc2(
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

  if ( (byte_4D27E86 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D27E86 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C9468C(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D27E89 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27E89 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D27E88 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27E88 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


void OrganizationTopListViewManager__remove_callbackFunc(
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

  if ( (byte_4D27E85 & 1) == 0 )
  {
    sub_1C94098(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4D27E85 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C9468C(v7);
  OrganizationTopListViewManager__add_callbackFunc2(v10, v11, v12);
}


void OrganizationTopListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D27E87 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D27E87 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1C9468C(v7);
  OrganizationTopListViewManager__get_ObjectList(v10, v11);
}


void OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC2178;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AC2158;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC2110;
}


System_IAsyncResult_o *OrganizationTopListViewManager_CallbackFunc__BeginInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v6, callback, object);
}


void OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void OrganizationTopListViewManager_CallbackFunc__Invoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}