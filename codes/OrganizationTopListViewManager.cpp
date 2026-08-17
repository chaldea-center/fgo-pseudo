void OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  struct OrganizationTopItemInfo_array *v1; // x19
  OrganizationTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  OrganizationTopItemInfo_o *v13; // x20
  const MethodInfo *v14; // x5
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  OrganizationTopItemInfo_o *v21; // x20
  const MethodInfo *v22; // x5
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Array_o *v35; // x0
  System_RuntimeFieldHandle_o v36; // x1
  System_Array_o *v37; // x19
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x0

  if ( (byte_596BD73 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&OrganizationTopItemInfo___TypeInfo);
    sub_2213A60(&OrganizationTopItemInfo_TypeInfo);
    sub_2213A60(&OrganizationTopListViewManager_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_2213A60(&StringLiteral_9014/*"MENU_PARTY_ORGANIZATION"*/);
    sub_2213A60(&StringLiteral_10506/*"PARTY_ORGANIZATION"*/);
    sub_2213A60(&StringLiteral_8932/*"MASTER_ORGANIZATION"*/);
    sub_2213A60(&StringLiteral_9007/*"MENU_MASTER_ORGANIZATION"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12163/*"SERVANT_LIST"*/);
    sub_2213A60(&StringLiteral_9026/*"MENU_SERVANT_LIST"*/);
    byte_596BD73 = 1;
  }
  v1 = (struct OrganizationTopItemInfo_array *)sub_2213B20(OrganizationTopItemInfo___TypeInfo, 3);
  v2 = (OrganizationTopItemInfo_o *)sub_2213CCC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8932/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_9007/*"MENU_MASTER_ORGANIZATION"*/,
    v3);
  if ( !v1 )
    sub_2213CDC(v4, v5);
  if ( v2 )
  {
    v4 = sub_2213BB4(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v1->m_Items, (int32_t)v2, v6, v7, v8, v9, v10, v11);
  v13 = (OrganizationTopItemInfo_o *)sub_2213CCC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v13,
    2,
    (System_String_o *)StringLiteral_10506/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_9014/*"MENU_PARTY_ORGANIZATION"*/,
    v14);
  if ( v13 )
  {
    v4 = sub_2213BB4(v13, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( (v1->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_14;
  v1->m_Items[1] = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[1], (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = (OrganizationTopItemInfo_o *)sub_2213CCC(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v21,
    3,
    (System_String_o *)StringLiteral_12163/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_9026/*"MENU_SERVANT_LIST"*/,
    v22);
  if ( v21 )
  {
    v4 = sub_2213BB4(v21, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v45 = sub_2213D00(v4, v12);
      sub_2213BA0(v45, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 2 )
LABEL_14:
    sub_2213CE4(v4);
  v1->m_Items[2] = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[2], (int32_t)v21, v23, v24, v25, v26, v27, v28);
  OrganizationTopListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)OrganizationTopListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
  v36.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v37 = v35;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v35, v36, 0);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v37;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->normalKindList,
    (int32_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x2
  unsigned __int64 v11; // x25
  __int64 v12; // x28
  int32_t v13; // w20
  __int64 v14; // x8
  int v15; // w9
  int v16; // w11
  __int64 v17; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8

  if ( (byte_596BD6B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&OrganizationTopListViewItem_TypeInfo);
    sub_2213A60(&OrganizationTopListViewManager_TypeInfo);
    byte_596BD6B = 1;
  }
  if ( kind )
    goto LABEL_4;
  v5 = OrganizationTopListViewManager_TypeInfo;
  if ( !*(&OrganizationTopListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo, *(_QWORD *)&kind, method);
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
      v11 = 0;
      v12 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v11 >= LODWORD(normalKindList->max_length) )
LABEL_31:
          sub_2213CE4(v8);
        v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        v13 = normalKindList->m_Items[v11];
        if ( !*(&OrganizationTopListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo, v9, v10);
          v8 = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v14 = **(_QWORD **)&v8[4].fields._size;
        if ( !v14 )
          break;
        v15 = *(_DWORD *)(v14 + 24);
        if ( v15 >= 1 )
        {
          v16 = 0;
          while ( 1 )
          {
            if ( v15 == v16 )
              goto LABEL_31;
            v17 = *(_QWORD *)(v14 + 8LL * v16 + 32);
            if ( !v17 )
              goto LABEL_30;
            if ( *(_DWORD *)(v17 + 16) == v13 )
              break;
            if ( (v15 & ~(v15 >> 31)) == ++v16 )
              goto LABEL_28;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v20 = sub_2213CCC(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_50819428((ListViewItem_o *)v20, size, 0);
          *(_QWORD *)(v20 + 120) = v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 120), v17, v21, v22, v23, v24, v25, v26);
          v8 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          if ( !v8 )
            break;
          items = v8->fields._items;
          v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          v35 = v8->fields._size;
          if ( (unsigned int)v35 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v20,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = (__int64)items + 8 * v35;
            v8->fields._size = v35 + 1;
            *(_QWORD *)(v36 + 32) = v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), v20, v27, v28, v29, v30, v31, v32);
          }
        }
LABEL_28:
        if ( ++v11 == v12 )
          goto LABEL_5;
      }
LABEL_30:
      sub_2213CDC(v8, v9);
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

  if ( (byte_596BD6C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&OrganizationTopListViewItem_TypeInfo);
    byte_596BD6C = 1;
  }
  result = (OrganizationTopListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (OrganizationTopListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x21
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_596BD72 & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewObject_TypeInfo);
    byte_596BD72 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v12)) == 0
      || (info = Item->fields.info) == 0 )
    {
      sub_2213CDC(Item, v12);
    }
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      info->fields.eventData,
      callbackFunc->fields.method);
  }
}


void OrganizationTopListViewManager__OnMoveEnd(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596BD71 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD71 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        {
          v8 = this->fields.scrollView;
          if ( !v8 )
            goto LABEL_19;
          UIScrollView__Press(v8, 0, 0);
        }
      }
      v9 = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
            callbackFunc2->fields.method_code,
            callbackFunc2->fields.method);
        return;
      }
LABEL_19:
      sub_2213CDC(v8, method);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_2213A60(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD6F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      OrganizationTopListViewObject__Init_40680056((OrganizationTopListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void OrganizationTopListViewManager__RequestListObject_40679564(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD70 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_2213A60(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD70 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)OrganizationTopListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      OrganizationTopListViewObject__Init_40680668((OrganizationTopListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_40678756(this, mode, v10);
}


void OrganizationTopListViewManager__SetMode_40673876(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_40678756(this, mode, v10);
}


void OrganizationTopListViewManager__SetMode_40678756(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v8; // x1
  int32_t v9; // w8
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  Il2CppObject *v12; // x22
  System_Action_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w21
  Il2CppObject *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x3
  System_String_o *v27; // x1

  if ( (byte_596BD6E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
    sub_2213A60(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD6E = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode > 2 )
  {
    if ( mode == 3 )
    {
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v5);
      if ( !ClippingObjectList )
        goto LABEL_28;
      size = ClippingObjectList->fields._size;
      v22 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v23,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v25, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
          if ( !Item )
            break;
          OrganizationTopListViewObject__Init_40680056((OrganizationTopListViewObject_o *)Item, 6, v25, 0.1, v26);
          if ( ++v23 >= v22->fields._size )
            return;
        }
LABEL_28:
        sub_2213CDC(ClippingObjectList, v8);
      }
    }
    else
    {
      if ( mode != 5 )
        return;
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v5);
      if ( !ClippingObjectList )
        goto LABEL_28;
      v15 = ClippingObjectList->fields._size;
      v16 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
      this->fields.callbackCount = v15;
      if ( v15 >= 1 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = System_Collections_Generic_List_object___get_Item(
                  v16,
                  v17,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
          v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
          if ( !v18 )
            break;
          OrganizationTopListViewObject__Init_40680056((OrganizationTopListViewObject_o *)v18, 8, v19, 0.1, v20);
          if ( ++v17 >= v16->fields._size )
            return;
        }
        goto LABEL_28;
      }
    }
LABEL_27:
    v27 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v27, 0.0, 0);
    return;
  }
  if ( mode == 1 )
  {
    OrganizationTopListViewManager__RequestListObject_40679564(this, 4, v6);
    return;
  }
  if ( mode == 2 )
  {
    ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v5);
    if ( !ClippingObjectList )
      goto LABEL_28;
    v9 = ClippingObjectList->fields._size;
    v10 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
    this->fields.callbackCount = v9;
    if ( v9 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_object___get_Item(
                v10,
                v11,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0);
        if ( !v12 )
          break;
        OrganizationTopListViewObject__Init_40680056((OrganizationTopListViewObject_o *)v12, 5, v13, 0.1, v14);
        if ( ++v11 >= v10->fields._size )
          return;
      }
      goto LABEL_28;
    }
    goto LABEL_27;
  }
}


void OrganizationTopListViewManager__SetObjectItem(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BD6D & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewObject_TypeInfo);
    byte_596BD6D = 1;
  }
  if ( obj
    && (naturalAligment = OrganizationTopListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == OrganizationTopListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 4;
LABEL_14:
  OrganizationTopListViewObject__Init_40678680((OrganizationTopListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void OrganizationTopListViewManager__add_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewManager_o *v11; // x0
  OrganizationTopListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD65 & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_596BD65 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v6->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewManager_o *)sub_221405C(
                                              v6,
                                              OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                              v7,
                                              v8);
  OrganizationTopListViewManager__remove_callbackFunc(v11, v12, v13);
}


void OrganizationTopListViewManager__add_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD67 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD67 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  OrganizationTopListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596BD6A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD6A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(
                                 (OrganizationTopListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BD69 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD69 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


void OrganizationTopListViewManager__remove_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD66 & 1) == 0 )
  {
    sub_2213A60(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_596BD66 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v6->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewManager_o *)sub_221405C(
                                              v6,
                                              OrganizationTopListViewManager_CallbackFunc_TypeInfo,
                                              v7,
                                              v8);
  OrganizationTopListViewManager__add_callbackFunc2(v11, v12, v13);
}


void OrganizationTopListViewManager__remove_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596BD68 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD68 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  OrganizationTopListViewManager__get_ObjectList(v11, v12);
}


void OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
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
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2003AB0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2003A94;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_2003A4C;
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
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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