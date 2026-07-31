void StaffSelectListViewManager___ctor(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void StaffSelectListViewManager__CreateList(
        StaffSelectListViewManager_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList,
        int32_t selectStaffPhotoId,
        int32_t selectedStaffPhotoId,
        int32_t selectedSvtId,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v12; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  int32_t v15; // w25
  Il2CppObject *Item; // x0
  int32_t v17; // w27
  StaffPhotoEntity_o *v18; // x28
  StaffSelectListViewItem_o *v19; // x26
  const MethodInfo *v20; // x7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v34; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x21
  System_Predicate_object__o *v36; // x22
  Il2CppObject *v37; // x0

  if ( (byte_5933B5D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&StaffSelectListViewItem_TypeInfo);
    sub_21FFC50(&Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__);
    sub_21FFC50(&StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo);
    byte_5933B5D = 1;
  }
  v12 = sub_21FFEBC(StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_25;
  *(_DWORD *)(v12 + 16) = selectStaffPhotoId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !staffPhotoEntityList )
    goto LABEL_25;
  if ( staffPhotoEntityList->fields._size >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
               v15,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__);
      v17 = *(_DWORD *)(v12 + 16);
      v18 = (StaffPhotoEntity_o *)Item;
      v19 = (StaffSelectListViewItem_o *)sub_21FFEBC(StaffSelectListViewItem_TypeInfo);
      StaffSelectListViewItem___ctor(v19, v15, v18, v17, selectedStaffPhotoId, selectedSvtId, photoCampaignAtlas, v20);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v19, v21, v22, v23, v24, v25, v26);
      }
      if ( ++v15 >= staffPhotoEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_21FFECC(itemList, v14);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)itemList,
                                                              0);
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)itemList,
                                                              0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v34 = this->fields.scrollBar;
      if ( !v34 )
        goto LABEL_25;
      if ( v34->fields.mSize <= 0.98 )
      {
        v35 = this->fields.itemList;
        v36 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v36,
          (Il2CppObject *)v12,
          Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0);
        if ( !v35 )
          goto LABEL_25;
        v37 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v35,
                (System_Predicate_T__o *)v36,
                (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v37 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v37[1].klass), 0);
      }
    }
  }
}


void StaffSelectListViewManager__DestroyList(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
}


void StaffSelectListViewManager__ModifyItem(
        StaffSelectListViewManager_o *this,
        int32_t selectedStaffPhotoId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  UnityEngine_Object_c *v12; // x0
  Il2CppClass *klass; // x21
  __int64 v14; // x1
  Il2CppClass *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5933B5E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StaffSelectListViewItem_TypeInfo);
    byte_5933B5E = 1;
  }
  itemList = this->fields.itemList;
  memset(&v17, 0, sizeof(v17));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v17.fields._current;
      if ( v17.fields._current )
      {
        naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( v17.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (StaffSelectListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
        {
          monitor = v17.fields._current[7].monitor;
          if ( !monitor )
            sub_21FFECC(v6, v7);
          v12 = UnityEngine_Object_TypeInfo;
          klass = v17.fields._current[7].klass;
          LOBYTE(v17.fields._current[8].klass) = monitor[4] == selectedStaffPhotoId;
          if ( !*(&v12->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v12, v7, v8);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
          {
            v15 = current[7].klass;
            if ( !v15 )
              sub_21FFECC(0, v14);
            (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v15->_1.image + 49))(
              v15,
              current,
              *((_QWORD *)v15->_1.image + 50));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void StaffSelectListViewManager__OnClickListView(
        StaffSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  StaffSelectListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_T__o *callbackFunc; // x20
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  if ( (byte_5933B62 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    sub_21FFC50(&Method_StaffSelectListViewManager_OnClickListView__);
    sub_21FFC50(&StaffSelectListViewObject_TypeInfo);
    byte_5933B62 = 1;
  }
  if ( obj )
  {
    naturalAligment = StaffSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (StaffSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewObject_TypeInfo )
    {
      Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)obj, (const MethodInfo *)obj);
      if ( Item )
      {
        if ( Item->fields._IsNotSelect_k__BackingField )
        {
          v8 = Method_StaffSelectListViewManager_OnClickListView__;
          if ( (*((_BYTE *)Method_StaffSelectListViewManager_OnClickListView__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_21FFC68(Method_StaffSelectListViewManager_OnClickListView__);
          v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
          return;
        }
        callbackFunc = (System_Action_T__o *)this->fields.callbackFunc;
        Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)obj, v7);
        if ( Item )
        {
          StaffPhotoEntity_k__BackingField = Item->fields._StaffPhotoEntity_k__BackingField;
          if ( StaffPhotoEntity_k__BackingField )
          {
            ActionExtensions__Call_int_(
              callbackFunc,
              StaffPhotoEntity_k__BackingField->fields.id,
              (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
            return;
          }
        }
      }
      sub_21FFECC(Item, v7);
    }
  }
}


void StaffSelectListViewManager__OnMoveEnd(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_5933B61 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B61 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewManager__RequestListObject(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933B60 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffSelectListViewObject__get_Count__);
    sub_21FFC50(&Method_StaffSelectListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933B60 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_StaffSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__);
  }
}


void StaffSelectListViewManager__SetMode(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  StaffSelectListViewManager__SetMode_40592228(this, mode, v10);
}


void StaffSelectListViewManager__SetMode_40592228(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
  {
LABEL_9:
    sub_21FFECC(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    StaffSelectListViewManager__RequestListObject(this, mode + 1, v7);
}


void StaffSelectListViewManager__SetObjectItem(
        StaffSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  if ( (byte_5933B5F & 1) == 0 )
  {
    sub_21FFC50(&StaffSelectListViewObject_TypeInfo);
    byte_5933B5F = 1;
  }
  if ( obj )
  {
    naturalAligment = StaffSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (StaffSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewObject_TypeInfo )
    {
      if ( this->fields.initMode == 2 )
        v7 = 3;
      else
        v7 = 2;
      StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)obj, v7, 0, method);
    }
  }
}


System_Collections_Generic_List_StaffSelectListViewObject__o *StaffSelectListViewManager__get_ObjectList(
        StaffSelectListViewManager_o *this,
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

  if ( (byte_5933B5C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B5C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StaffSelectListViewObject__o *)v3;
}


void StaffSelectListViewManager___c__DisplayClass6_0___ctor(
        StaffSelectListViewManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StaffSelectListViewManager___c__DisplayClass6_0___CreateList_b__0(
        StaffSelectListViewManager___c__DisplayClass6_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewItem_o *v4; // x19
  StaffSelectListViewManager___c__DisplayClass6_0_o *v5; // x20
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8

  v4 = item;
  v5 = this;
  if ( (byte_5933B63 & 1) == 0 )
  {
    this = (StaffSelectListViewManager___c__DisplayClass6_0_o *)sub_21FFC50(&StaffSelectListViewItem_TypeInfo);
    byte_5933B63 = 1;
  }
  if ( !v4 )
LABEL_9:
    sub_21FFECC(this, item);
  item = (ListViewItem_o *)StaffSelectListViewItem_TypeInfo;
  naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (StaffSelectListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != StaffSelectListViewItem_TypeInfo )
  {
    this = (StaffSelectListViewManager___c__DisplayClass6_0_o *)sub_220024C(
                                                                  v4,
                                                                  StaffSelectListViewItem_TypeInfo,
                                                                  method,
                                                                  v3);
    goto LABEL_9;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_9;
  return LODWORD(klass->_1.name) == v5->fields.selectStaffPhotoId;
}