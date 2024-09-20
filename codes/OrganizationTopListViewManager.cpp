void __fastcall OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  struct OrganizationTopItemInfo_array *v1; // x19
  OrganizationTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  OrganizationTopItemInfo_o *v8; // x20
  const MethodInfo *v9; // x5
  int32_t v10; // w2
  int32_t v11; // w3
  OrganizationTopItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  System_Array_o *v18; // x0
  System_Array_o *v19; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x0
  System_RuntimeFieldHandle_o v24; // 0:w1.4

  if ( (byte_4A56E34 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&OrganizationTopItemInfo___TypeInfo);
    sub_1B885B0(&OrganizationTopItemInfo_TypeInfo);
    sub_1B885B0(&OrganizationTopListViewManager_TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_1B885B0(&StringLiteral_8621/*"MENU_PARTY_ORGANIZATION"*/);
    sub_1B885B0(&StringLiteral_10124/*"PARTY_ORGANIZATION"*/);
    sub_1B885B0(&StringLiteral_8541/*"MASTER_ORGANIZATION"*/);
    sub_1B885B0(&StringLiteral_8614/*"MENU_MASTER_ORGANIZATION"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11622/*"SERVANT_LIST"*/);
    sub_1B885B0(&StringLiteral_8633/*"MENU_SERVANT_LIST"*/);
    byte_4A56E34 = 1;
  }
  v1 = (struct OrganizationTopItemInfo_array *)sub_1B88658(OrganizationTopItemInfo___TypeInfo, 3LL);
  v2 = (OrganizationTopItemInfo_o *)sub_1B887FC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8541/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8614/*"MENU_MASTER_ORGANIZATION"*/,
    v3);
  if ( !v1 )
    sub_1B8880C(v4, v5);
  if ( v2 )
  {
    v4 = sub_1B886EC(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !v1->max_length )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v1->m_Items, (int32_t)v2, v6, v7);
  v8 = (OrganizationTopItemInfo_o *)sub_1B887FC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v8,
    2,
    (System_String_o *)StringLiteral_10124/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8621/*"MENU_PARTY_ORGANIZATION"*/,
    v9);
  if ( v8 )
  {
    v4 = sub_1B886EC(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( v1->max_length <= 1 )
    goto LABEL_14;
  v1->m_Items[1] = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[1], (int32_t)v8, v10, v11);
  v12 = (OrganizationTopItemInfo_o *)sub_1B887FC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v12,
    3,
    (System_String_o *)StringLiteral_11622/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8633/*"MENU_SERVANT_LIST"*/,
    v13);
  if ( v12 )
  {
    v4 = sub_1B886EC(v12, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v23 = sub_1B88830();
      sub_1B886D8(v23, 0LL);
    }
  }
  if ( v1->max_length <= 2 )
LABEL_14:
    sub_1B88814(v4, v5);
  v1->m_Items[2] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[2], (int32_t)v12, v14, v15);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)OrganizationTopListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v16,
    v17);
  v18 = (System_Array_o *)sub_1B88658(int___TypeInfo, 3LL);
  v24.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v19 = v18;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v18, v24, 0LL);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->normalKindList, (int32_t)v19, v21, v22);
}


void __fastcall OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_c *v5; // x0
  struct System_Int32_array *normalKindList; // x24
  __int64 v7; // x20
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
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8

  if ( (byte_4A56E2C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&OrganizationTopListViewItem_TypeInfo);
    sub_1B885B0(&OrganizationTopListViewManager_TypeInfo);
    byte_4A56E2C = 1;
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
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v7, 0LL);
    if ( (int)v7 >= 1 )
    {
      v10 = 0LL;
      v11 = (unsigned int)v7;
      while ( 1 )
      {
        if ( v10 >= normalKindList->max_length )
LABEL_30:
          sub_1B88814(v8, v9);
        v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v12 = normalKindList->m_Items[v10 + 1];
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
          v19 = sub_1B887FC(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_40706472((ListViewItem_o *)v19, size, 0LL);
          *(_QWORD *)(v19 + 112) = v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 112), v16, v20, v21);
          v8 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v8 )
            break;
          items = v8->fields._items;
          v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          v26 = v8->fields._size;
          if ( (unsigned int)v26 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v19,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = (__int64)items + 8 * v26;
            v8->fields._size = v26 + 1;
            *(_QWORD *)(v27 + 32) = v19;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 32), v19, v22, v23);
          }
        }
LABEL_28:
        if ( ++v10 == v11 )
          goto LABEL_5;
      }
LABEL_31:
      sub_1B8880C(v8, v9);
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


OrganizationTopListViewItem_o *__fastcall OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56E2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&OrganizationTopListViewItem_TypeInfo);
    byte_4A56E2D = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v3; // w3
  struct OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x21
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_4A56E33 & 1) == 0 )
  {
    sub_1B885B0(&OrganizationTopListViewObject_TypeInfo);
    byte_4A56E33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v8)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_1B8880C(Item, v8);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56E32 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E32 = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v10, v11);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
        return;
      }
LABEL_19:
      sub_1B8880C(v8, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56E30 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1B885B0(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56E30 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      OrganizationTopListViewObject__Init_31795344((OrganizationTopListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject_31794840(
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

  if ( (byte_4A56E31 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1B885B0(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56E31 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      OrganizationTopListViewObject__Init_31795968((OrganizationTopListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  OrganizationTopListViewManager__SetMode_31794040(this, mode, v6);
}


void __fastcall OrganizationTopListViewManager__SetMode_31789036(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  OrganizationTopListViewManager__SetMode_31794040(this, mode, v6);
}


void __fastcall OrganizationTopListViewManager__SetMode_31794040(
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

  if ( (byte_4A56E2F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
    sub_1B885B0(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56E2F = 1;
  }
  this->fields.initMode = mode;
  v5 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 0, 0LL);
  switch ( v5 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_31794840(this, 4, v7);
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        OrganizationTopListViewObject__Init_31795344((OrganizationTopListViewObject_o *)Item, 5, v14, 0.1, v15);
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
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v19 )
          break;
        OrganizationTopListViewObject__Init_31795344((OrganizationTopListViewObject_o *)v19, 6, v20, 0.1, v21);
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
          (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
          0.0,
          0LL);
      }
      else
      {
        v24 = 0;
        do
        {
          v25 = System_Collections_Generic_List_object___get_Item(
                  v23,
                  v24,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v26, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
          if ( !v25 )
LABEL_24:
            sub_1B8880C(ClippingObjectList, v9);
          OrganizationTopListViewObject__Init_31795344((OrganizationTopListViewObject_o *)v25, 8, v26, 0.1, v27);
          ++v24;
        }
        while ( v24 < v23->fields._size );
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
  if ( (byte_4A56E2E & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_1B885B0(&OrganizationTopListViewObject_TypeInfo);
    byte_4A56E2E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(OrganizationTopListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  OrganizationTopListViewObject__Init_31793964((OrganizationTopListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A56E26 & 1) == 0 )
  {
    sub_1B885B0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4A56E26 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56E28 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56E28 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B88ACC(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ClippingObjectList(
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56E2B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E2B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56E2A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E2A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
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

  if ( (byte_4A56E27 & 1) == 0 )
  {
    sub_1B885B0(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_4A56E27 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56E29 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56E29 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19C8798;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19C8778;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8730;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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