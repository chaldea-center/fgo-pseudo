void __fastcall MasterEquipSettingListViewManager___ctor(
        MasterEquipSettingListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewManager__CreateList(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_List_int__o *equipIdList,
        System_Collections_Generic_Dictionary_int__Texture2D__o *textureList,
        int32_t selectedImageId,
        System_Collections_Generic_List_string__o *shortNameList,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x20
  UnityEngine_Texture2D_o *itemList; // x0
  __int64 v32; // x1
  int32_t v33; // w24
  int32_t Item; // w26
  int32_t v35; // w28
  UnityEngine_Texture2D_o *v36; // x27
  Il2CppObject *v37; // x29
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  MasterEquipSettingListViewItem_o *v41; // x25
  const MethodInfo *v42; // x6
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  Il2CppClass **v46; // x8
  __int64 v47; // x1
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  struct UIScrollBar_o *v51; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v52; // x21
  System_Predicate_object__o *v53; // x22
  Il2CppObject *v54; // x0

  if ( (byte_4B11B91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, equipIdList, textureList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Find__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v18, v19);
    sub_1BCA7E0(&MasterEquipSettingListViewItem_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__, v26, v27);
    sub_1BCA7E0(&MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo, v28, v29);
    byte_4B11B91 = 1;
  }
  v30 = sub_1BCAA2C(
          MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo,
          equipIdList,
          textureList,
          *(_QWORD *)&selectedImageId);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_27;
  *(_DWORD *)(v30 + 16) = selectedImageId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !equipIdList )
    goto LABEL_27;
  if ( equipIdList->fields._size >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               equipIdList,
               v33,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_List_int___get_Item(
                                              equipIdList,
                                              v33,
                                              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !textureList )
        break;
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                              (System_Collections_Generic_Dictionary_int__object__o *)textureList,
                                              (int32_t)itemList,
                                              (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
      if ( !shortNameList )
        break;
      v35 = *(_DWORD *)(v30 + 16);
      v36 = itemList;
      v37 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)shortNameList,
              v33,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
      v41 = (MasterEquipSettingListViewItem_o *)sub_1BCAA2C(MasterEquipSettingListViewItem_TypeInfo, v38, v39, v40);
      MasterEquipSettingListViewItem___ctor(v41, v33, Item, v36, v35, (System_String_o *)v37, v42);
      itemList = (UnityEngine_Texture2D_o *)this->fields.itemList;
      if ( !itemList )
        break;
      v43 = *(struct System_Object_array **)&itemList->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(itemList[1].klass);
      if ( !v43 )
        break;
      klass_low = SLODWORD(itemList[1].klass);
      if ( (unsigned int)klass_low >= v43->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v41,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v43->obj.klass + klass_low;
        LODWORD(itemList[1].klass) = klass_low + 1;
        v46[4] = (Il2CppClass *)v41;
        sub_1BCA784(v46 + 4, v41);
      }
      if ( ++v33 >= equipIdList->fields._size )
        goto LABEL_15;
    }
LABEL_27:
    sub_1BCAA3C(itemList, v32);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    itemList = (UnityEngine_Texture2D_o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_27;
    itemList = (UnityEngine_Texture2D_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)itemList,
                                            0LL);
    if ( !itemList )
      goto LABEL_27;
    itemList = (UnityEngine_Texture2D_o *)UnityEngine_GameObject__get_activeSelf(
                                            (UnityEngine_GameObject_o *)itemList,
                                            0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v51 = this->fields.scrollBar;
      if ( !v51 )
        goto LABEL_27;
      if ( v51->fields.mSize <= 0.98 )
      {
        v52 = this->fields.itemList;
        v53 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v32, v49, v50);
        System_Predicate_object____ctor(
          v53,
          (Il2CppObject *)v30,
          Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__,
          0LL);
        if ( !v52 )
          goto LABEL_27;
        v54 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v52,
                (System_Predicate_T__o *)v53,
                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v54 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v54[1].klass), 0LL);
      }
    }
  }
}


void __fastcall MasterEquipSettingListViewManager__DestroyList(
        MasterEquipSettingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MasterEquipSettingListViewItem_o *__fastcall MasterEquipSettingListViewManager__GetItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MasterEquipSettingListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B11B92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&MasterEquipSettingListViewItem_TypeInfo, v5, v6);
    byte_4B11B92 = 1;
  }
  result = (MasterEquipSettingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterEquipSettingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterEquipSettingListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewManager__ModifyItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t selectedImageId,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v21; // x1
  void *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11B93 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      *(_QWORD *)&selectedImageId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&MasterEquipSettingListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B11B93 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v16 )
        break;
      current = v24.fields._current;
      if ( !v24.fields._current
        || (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v24.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterEquipSettingListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
      {
        sub_1BCAA3C(v16, v17);
      }
      monitor = (UnityEngine_Object_o *)v24.fields._current[6].monitor;
      LOBYTE(v24.fields._current[8].monitor) = LODWORD(v24.fields._current[7].klass) == selectedImageId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v22 = current[6].monitor;
        if ( !v22 )
          sub_1BCAA3C(0LL, v21);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v22 + 392LL))(
          v22,
          current,
          *(_QWORD *)(*(_QWORD *)v22 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall MasterEquipSettingListViewManager__OnClickListView(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterEquipSettingListViewManager__OnClickSelectListView(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct MasterEquipSettingListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MasterEquipSettingListViewManager__OnMoveEnd(
        MasterEquipSettingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_4B11B97 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11B97 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewManager__RequestListObject(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4B11B96 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_MasterEquipSettingListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11B96 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_MasterEquipSettingListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
  }
}


void __fastcall MasterEquipSettingListViewManager__SetMode(
        MasterEquipSettingListViewManager_o *this,
        int32_t mode,
        MasterEquipSettingListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  MasterEquipSettingListViewManager__SetMode_32214320(this, mode, v6);
}


void __fastcall MasterEquipSettingListViewManager__SetMode_32214320(
        MasterEquipSettingListViewManager_o *this,
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
    sub_1BCAA3C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    MasterEquipSettingListViewManager__RequestListObject(this, mode + 1, v7);
}


void __fastcall MasterEquipSettingListViewManager__SetObjectItem(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MasterEquipSettingListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B11B95 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager_o *)sub_1BCA7E0(&MasterEquipSettingListViewObject_TypeInfo, obj, item);
    byte_4B11B95 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterEquipSettingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterEquipSettingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)obj, v7, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewManager__SetupDisp(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *texture2Ds,
        bool isLoad,
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v24; // w22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v26; // x23
  UnityEngine_Object_o *klass; // x24
  Il2CppObject *Item; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B11B94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, texture2Ds, isLoad);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&MasterEquipSettingListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    byte_4B11B94 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  v24 = 0;
  while ( v24 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v24,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterEquipSettingListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v26 = itemList;
      else
        v26 = 0LL;
      if ( !isLoad )
      {
LABEL_18:
        if ( !v26 )
          goto LABEL_22;
LABEL_19:
        if ( !texture2Ds )
          goto LABEL_22;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)texture2Ds,
                 (int32_t)v26[2].fields._syncRoot,
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
        v26[3].klass = (System_Collections_Generic_List_object__c *)Item;
        sub_1BCA784(&v26[3], Item);
        goto LABEL_21;
      }
    }
    else
    {
      v26 = 0LL;
      if ( !isLoad )
        goto LABEL_18;
    }
    if ( !v26 )
      goto LABEL_22;
    klass = (UnityEngine_Object_o *)v26[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, texture2Ds);
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)itemList & 1) == 0 )
      goto LABEL_19;
LABEL_21:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v24;
    if ( !itemList )
      goto LABEL_22;
  }
  itemList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)texture2Ds);
  if ( !itemList )
LABEL_22:
    sub_1BCAA3C(itemList, texture2Ds);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
  {
    if ( !v30.fields._current )
      sub_1BCAA3C(0LL, v29);
    MasterEquipSettingListViewObject__SetupDisp((MasterEquipSettingListViewObject_o *)v30.fields._current, v29);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
}


void __fastcall MasterEquipSettingListViewManager__add_callbackFunc(
        MasterEquipSettingListViewManager_o *this,
        MasterEquipSettingListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MasterEquipSettingListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MasterEquipSettingListViewManager_o *v10; // x0
  MasterEquipSettingListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11B8D & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11B8D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v7->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1BCACFC(v7);
  MasterEquipSettingListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *__fastcall MasterEquipSettingListViewManager__get_ClippingObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4B11B90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11B90 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)MasterEquipSettingListViewObject__GetItem(
                                 (MasterEquipSettingListViewObject_o *)Component_object,
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
          v36 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
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
        v36 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
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
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v21;
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *__fastcall MasterEquipSettingListViewManager__get_ObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4B11B8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11B8F = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
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
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v21;
}


void __fastcall MasterEquipSettingListViewManager__remove_callbackFunc(
        MasterEquipSettingListViewManager_o *this,
        MasterEquipSettingListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MasterEquipSettingListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MasterEquipSettingListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B11B8E & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11B8E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v7->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1BCACFC(v7);
  MasterEquipSettingListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewManager_CallbackFunc___ctor(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
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
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0663C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A065E4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterEquipSettingListViewManager_CallbackFunc__BeginInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B11B98 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&MasterEquipSettingListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B11B98 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(MasterEquipSettingListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall MasterEquipSettingListViewManager_CallbackFunc__EndInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MasterEquipSettingListViewManager_CallbackFunc__Invoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MasterEquipSettingListViewManager___c__DisplayClass12_0___ctor(
        MasterEquipSettingListViewManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MasterEquipSettingListViewManager___c__DisplayClass12_0___CreateList_b__0(
        MasterEquipSettingListViewManager___c__DisplayClass12_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MasterEquipSettingListViewManager___c__DisplayClass12_0_o *v4; // x20
  __int64 methodPtr_low; // x9

  v4 = this;
  if ( (byte_4B11B99 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1BCA7E0(
                                                                          &MasterEquipSettingListViewItem_TypeInfo,
                                                                          item,
                                                                          method);
    byte_4B11B99 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1BCAA3C(this, item);
  methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MasterEquipSettingListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1BCACFC(item);
    goto LABEL_8;
  }
  return LODWORD(item[1].klass) == v4->fields.selectedImageId;
}