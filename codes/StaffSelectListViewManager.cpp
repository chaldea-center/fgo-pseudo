void __fastcall StaffSelectListViewManager___ctor(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall StaffSelectListViewManager__CreateList(
        StaffSelectListViewManager_o *this,
        System_Collections_Generic_List_StaffPhotoEntity__o *staffPhotoEntityList,
        int32_t selectStaffPhotoId,
        int32_t selectedStaffPhotoId,
        UIAtlas_o *photoCampaignAtlas,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v20; // x1
  int32_t v21; // w24
  Il2CppObject *Item; // x0
  int32_t v23; // w26
  StaffPhotoEntity_o *v24; // x27
  StaffSelectListViewItem_o *v25; // x25
  const MethodInfo *v26; // x6
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v34; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x21
  System_Predicate_object__o *v36; // x22
  Il2CppObject *v37; // x0

  if ( (byte_4A49C94 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, staffPhotoEntityList);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Find__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Count__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B863B8(&StaffSelectListViewItem_TypeInfo, v15);
    sub_1B863B8(&Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__, v16);
    sub_1B863B8(&StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo, v17);
    byte_4A49C94 = 1;
  }
  v18 = sub_1B86604(StaffSelectListViewManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_DWORD *)(v18 + 16) = selectStaffPhotoId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !staffPhotoEntityList )
    goto LABEL_25;
  if ( staffPhotoEntityList->fields._size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)staffPhotoEntityList,
               v21,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StaffPhotoEntity__get_Item__);
      v23 = *(_DWORD *)(v18 + 16);
      v24 = (StaffPhotoEntity_o *)Item;
      v25 = (StaffSelectListViewItem_o *)sub_1B86604(StaffSelectListViewItem_TypeInfo);
      StaffSelectListViewItem___ctor(v25, v21, v24, v23, selectedStaffPhotoId, photoCampaignAtlas, v26);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v25;
        sub_1B8635C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v27, v28);
      }
      if ( ++v21 >= staffPhotoEntityList->fields._size )
        goto LABEL_13;
    }
LABEL_25:
    sub_1B86614(itemList, v20);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)itemList,
                                                              0LL);
    if ( !itemList )
      goto LABEL_25;
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)itemList,
                                                              0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v34 = this->fields.scrollBar;
      if ( !v34 )
        goto LABEL_25;
      if ( v34->fields.mSize <= 0.98 )
      {
        v35 = this->fields.itemList;
        v36 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v36,
          (Il2CppObject *)v18,
          Method_StaffSelectListViewManager___c__DisplayClass6_0__CreateList_b__0__,
          0LL);
        if ( !v35 )
          goto LABEL_25;
        v37 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v35,
                (System_Predicate_T__o *)v36,
                (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v37 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v37[1].klass), 0LL);
      }
    }
  }
}


void __fastcall StaffSelectListViewManager__DestroyList(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B86614(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewManager__ModifyItem(
        StaffSelectListViewManager_o *this,
        int32_t selectedStaffPhotoId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *monitor; // x21
  __int64 v17; // x1
  void *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A49C95 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&selectedStaffPhotoId);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&StaffSelectListViewItem_TypeInfo, v9);
    byte_4A49C95 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v20.fields._current;
      if ( v20.fields._current )
      {
        methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v20.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (StaffSelectListViewItem_c *)v20.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewItem_TypeInfo )
        {
          klass = v20.fields._current[7].klass;
          if ( !klass )
            sub_1B86614(v11, v12);
          monitor = (UnityEngine_Object_o *)v20.fields._current[6].monitor;
          LOBYTE(v20.fields._current[7].monitor) = LODWORD(klass->_1.name) == selectedStaffPhotoId;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
          {
            v18 = current[6].monitor;
            if ( !v18 )
              sub_1B86614(0LL, v17);
            (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v18 + 392LL))(
              v18,
              current,
              *(_QWORD *)(*(_QWORD *)v18 + 400LL));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall StaffSelectListViewManager__OnClickListView(
        StaffSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ListViewObject_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x10
  StaffSelectListViewItem_o *Item; // x0
  const MethodInfo *v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Action_T__o *callbackFunc; // x19
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8

  v3 = obj;
  if ( (byte_4A49C99 & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_int___, obj);
    sub_1B863B8(&Method_StaffSelectListViewManager_OnClickListView__, v5);
    sub_1B863B8(&StaffSelectListViewObject_TypeInfo, v6);
    byte_4A49C99 = 1;
  }
  if ( v3 )
  {
    methodPtr_low = LOBYTE(StaffSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (StaffSelectListViewObject_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != StaffSelectListViewObject_TypeInfo )
        v3 = 0LL;
      if ( v3 )
      {
        Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)v3, (const MethodInfo *)obj);
        if ( Item )
        {
          if ( Item->fields._IsNotSelect_k__BackingField )
          {
            v10 = Method_StaffSelectListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_StaffSelectListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v10 = (_QWORD *)sub_1B863D0(Method_StaffSelectListViewManager_OnClickListView__);
            v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
            OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
            return;
          }
          callbackFunc = (System_Action_T__o *)this->fields.callbackFunc;
          Item = StaffSelectListViewObject__GetItem((StaffSelectListViewObject_o *)v3, v9);
          if ( Item )
          {
            StaffPhotoEntity_k__BackingField = Item->fields._StaffPhotoEntity_k__BackingField;
            if ( StaffPhotoEntity_k__BackingField )
            {
              ActionExtensions__Call_int_(
                callbackFunc,
                StaffPhotoEntity_k__BackingField->fields.id,
                (const MethodInfo_2EBFB44 *)Method_ActionExtensions_Call_int___);
              return;
            }
          }
        }
        sub_1B86614(Item, v9);
      }
    }
  }
}


void __fastcall StaffSelectListViewManager__OnMoveEnd(StaffSelectListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4A49C98 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49C98 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B86614(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewManager__RequestListObject(
        StaffSelectListViewManager_o *this,
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

  if ( (byte_4A49C97 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__get_Count__, v9);
    sub_1B863B8(&Method_StaffSelectListViewManager_OnMoveEnd__, v10);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v11);
    byte_4A49C97 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)StaffSelectListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B86614(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_StaffSelectListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_StaffSelectListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B86614(v17, v18);
      StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_StaffSelectListViewObject__Dispose__);
  }
}


void __fastcall StaffSelectListViewManager__SetMode(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  StaffSelectListViewManager__SetMode_32231636(this, mode, v6);
}


void __fastcall StaffSelectListViewManager__SetMode_32231636(
        StaffSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_9:
    sub_1B86614(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    StaffSelectListViewManager__RequestListObject(this, mode + 1, v7);
}


void __fastcall StaffSelectListViewManager__SetObjectItem(
        StaffSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  StaffSelectListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_4A49C96 & 1) == 0 )
  {
    sub_1B863B8(&StaffSelectListViewObject_TypeInfo, obj);
    byte_4A49C96 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(StaffSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v7 = (StaffSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewObject_TypeInfo
         ? (StaffSelectListViewObject_o *)obj
         : 0LL;
      if ( v7 )
      {
        if ( this->fields.initMode == 2 )
          v8 = 3;
        else
          v8 = 2;
        StaffSelectListViewObject__Init(v7, v8, 0LL, method);
      }
    }
  }
}


System_Collections_Generic_List_StaffSelectListViewObject__o *__fastcall StaffSelectListViewManager__get_ObjectList(
        StaffSelectListViewManager_o *this,
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A49C93 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A49C93 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_StaffSelectListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_StaffSelectListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B86614(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_StaffSelectListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B86614(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B8635C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_StaffSelectListViewObject__o *)v11;
}


void __fastcall StaffSelectListViewManager___c__DisplayClass6_0___ctor(
        StaffSelectListViewManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StaffSelectListViewManager___c__DisplayClass6_0___CreateList_b__0(
        StaffSelectListViewManager___c__DisplayClass6_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  StaffSelectListViewManager___c__DisplayClass6_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  bool result; // w0
  StaffSelectListViewObject_o *v8; // x0
  const MethodInfo *v9; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4A49C9A & 1) == 0 )
  {
    this = (StaffSelectListViewManager___c__DisplayClass6_0_o *)sub_1B863B8(&StaffSelectListViewItem_TypeInfo, item);
    byte_4A49C9A = 1;
  }
  if ( !v3 )
    goto LABEL_8;
  item = (ListViewItem_o *)StaffSelectListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (StaffSelectListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
      return LODWORD(klass->_1.name) == v4->fields.selectStaffPhotoId;
LABEL_8:
    sub_1B86614(this, item);
  }
  v8 = (StaffSelectListViewObject_o *)sub_1B868D4(v3);
  StaffSelectListViewObject__Awake(v8, v9);
  return result;
}