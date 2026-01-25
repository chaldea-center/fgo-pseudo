void StaffSelectListViewManager___ctor(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void StaffSelectListViewManager__CreateList(
        StaffSelectListViewManager_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList,
        int32_t selectStaffPhotoId,
        int32_t selectedStaffPhotoId,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v10; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v12; // x1
  int32_t v13; // w24
  Il2CppObject *Item; // x0
  int32_t v15; // w26
  StaffPhotoEntity_o *v16; // x27
  StaffSelectListViewItem_o *v17; // x25
  const MethodInfo *v18; // x6
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v30; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x21
  System_Predicate_object__o *v32; // x22
  Il2CppObject *v33; // x0

  if ( (byte_4CE9C16 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C7BAE8(&StaffSelectListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__);
    sub_1C7BAE8(&StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo);
    byte_4CE9C16 = 1;
  }
  v10 = sub_1C7BD34(StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_25;
  *(_DWORD *)(v10 + 16) = selectStaffPhotoId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !staffPhotoEntityList )
    goto LABEL_25;
  if ( staffPhotoEntityList->fields._size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
               v13,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__);
      v15 = *(_DWORD *)(v10 + 16);
      v16 = (StaffPhotoEntity_o *)Item;
      v17 = (StaffSelectListViewItem_o *)sub_1C7BD34(StaffSelectListViewItem_TypeInfo);
      StaffSelectListViewItem___ctor(v17, v13, v16, v15, selectedStaffPhotoId, photoCampaignAtlas, v18);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v17;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v17, v19, v20, v21, v22, v23, v24);
      }
      if ( ++v13 >= staffPhotoEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_1C7BD40(itemList, v12);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v30 = this->fields.scrollBar;
      if ( !v30 )
        goto LABEL_25;
      if ( v30->fields.mSize <= 0.98 )
      {
        v31 = this->fields.itemList;
        v32 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v32,
          (Il2CppObject *)v10,
          Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0);
        if ( !v31 )
          goto LABEL_25;
        v33 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v31,
                (System_Predicate_T__o *)v32,
                (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v33 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v33[1].klass), 0);
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
    sub_1C7BD40(0, v3);
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
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  _DWORD *monitor; // x8
  Il2CppClass *klass; // x21
  __int64 v12; // x1
  Il2CppClass *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CE9C17 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StaffSelectListViewItem_TypeInfo);
    byte_4CE9C17 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v15 = v14;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v15.fields._current;
      if ( v15.fields._current )
      {
        naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
        if ( v15.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (StaffSelectListViewItem_c *)v15.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
        {
          monitor = v15.fields._current[7].monitor;
          if ( !monitor )
            sub_1C7BD40(v6, v7);
          klass = v15.fields._current[7].klass;
          LOBYTE(v15.fields._current[8].klass) = monitor[4] == selectedStaffPhotoId;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
          {
            v13 = current[7].klass;
            if ( !v13 )
              sub_1C7BD40(0, v12);
            (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v13->_1.image + 49))(
              v13,
              current,
              *((_QWORD *)v13->_1.image + 50));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void StaffSelectListViewManager__OnClickListView(
        StaffSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 naturalAligment; // x10
  StaffSelectListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_T__o *callbackFunc; // x19
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  v3 = obj;
  if ( (byte_4CE9C1B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_int___);
    sub_1C7BAE8(&Method_StaffSelectListViewManager_OnClickListView__);
    sub_1C7BAE8(&StaffSelectListViewObject_TypeInfo);
    byte_4CE9C1B = 1;
  }
  if ( v3 )
  {
    naturalAligment = StaffSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (StaffSelectListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != StaffSelectListViewObject_TypeInfo )
        v3 = 0;
      if ( v3 )
      {
        Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)v3, (const MethodInfo *)obj);
        if ( Item )
        {
          if ( Item->fields._IsNotSelect_k__BackingField )
          {
            v8 = Method_StaffSelectListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_StaffSelectListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v8 = (_QWORD *)sub_1C7BB00(Method_StaffSelectListViewManager_OnClickListView__);
            v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
            OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
            return;
          }
          callbackFunc = (System_Action_T__o *)this->fields.callbackFunc;
          Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)v3, v7);
          if ( Item )
          {
            StaffPhotoEntity_k__BackingField = Item->fields._StaffPhotoEntity_k__BackingField;
            if ( StaffPhotoEntity_k__BackingField )
            {
              ActionExtensions__Call_int_(
                callbackFunc,
                StaffPhotoEntity_k__BackingField->fields.id,
                (const MethodInfo_30B92F0 *)Method_ActionExtensions_Call_int___);
              return;
            }
          }
        }
        sub_1C7BD40(Item, v7);
      }
    }
  }
}


void StaffSelectListViewManager__OnMoveEnd(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CE9C1A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9C1A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
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
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CE9C19 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__get_Count__);
    sub_1C7BAE8(&Method_StaffSelectListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE9C19 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C7BD40(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_StaffSelectListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v10, v11);
      StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__);
  }
}


void StaffSelectListViewManager__SetMode(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  StaffSelectListViewManager__SetMode_34274408(this, mode, v10);
}


void StaffSelectListViewManager__SetMode_34274408(
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
    sub_1C7BD40(scrollView, v5);
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
  StaffSelectListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_4CE9C18 & 1) == 0 )
  {
    sub_1C7BAE8(&StaffSelectListViewObject_TypeInfo);
    byte_4CE9C18 = 1;
  }
  if ( obj )
  {
    naturalAligment = StaffSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v7 = (StaffSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewObject_TypeInfo
         ? (StaffSelectListViewObject_o *)obj
         : 0LL;
      if ( v7 )
      {
        if ( this->fields.initMode == 2 )
          v8 = 3;
        else
          v8 = 2;
        StaffSelectListViewObject__Init(v7, v8, 0, method);
      }
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

  if ( (byte_4CE9C15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9C15 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C7BD40(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  ListViewItem_o *v3; // x20
  StaffSelectListViewManager___c__DisplayClass6_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  bool result; // w0
  StaffSelectListViewObject_o *v8; // x0
  const MethodInfo *v9; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4CE9C1C & 1) == 0 )
  {
    this = (StaffSelectListViewManager___c__DisplayClass6_0_o *)sub_1C7BAE8(&StaffSelectListViewItem_TypeInfo);
    byte_4CE9C1C = 1;
  }
  if ( !v3 )
    goto LABEL_8;
  item = (ListViewItem_o *)StaffSelectListViewItem_TypeInfo;
  naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (StaffSelectListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
      return LODWORD(klass->_1.name) == v4->fields.selectStaffPhotoId;
LABEL_8:
    sub_1C7BD40(this, item);
  }
  v8 = (StaffSelectListViewObject_o *)sub_1C7C0DC(v3);
  StaffSelectListViewObject__Awake(v8, v9);
  return result;
}