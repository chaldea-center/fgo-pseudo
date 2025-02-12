void __fastcall MasterEquipSettingListViewManager___ctor(
        MasterEquipSettingListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MasterEquipSettingListViewManager__CreateList(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_List_int__o *equipIdList,
        System_Collections_Generic_Dictionary_int__Texture2D__o *textureList,
        int32_t selectedImageId,
        System_Collections_Generic_List_string__o *shortNameList,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  UnityEngine_Texture2D_o *itemList; // x0
  __int64 v22; // x1
  int32_t v23; // w24
  int32_t Item; // w26
  int32_t v25; // w28
  UnityEngine_Texture2D_o *v26; // x27
  Il2CppObject *v27; // x29
  MasterEquipSettingListViewItem_o *v28; // x25
  const MethodInfo *v29; // x6
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  Il2CppClass **v33; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v35; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x21
  System_Predicate_object__o *v37; // x22
  Il2CppObject *v38; // x0

  if ( (byte_4BAFFF2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, equipIdList);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1C13D24(&MasterEquipSettingListViewItem_TypeInfo, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&System_Predicate_ListViewItem__TypeInfo, v17);
    sub_1C13D24(&Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__, v18);
    sub_1C13D24(&MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo, v19);
    byte_4BAFFF2 = 1;
  }
  v20 = sub_1C13F70(MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_27;
  *(_DWORD *)(v20 + 16) = selectedImageId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !equipIdList )
    goto LABEL_27;
  if ( equipIdList->fields._size >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               equipIdList,
               v23,
               (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_List_int___get_Item(
                                              equipIdList,
                                              v23,
                                              (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !textureList )
        break;
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                              (System_Collections_Generic_Dictionary_int__object__o *)textureList,
                                              (int32_t)itemList,
                                              (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
      if ( !shortNameList )
        break;
      v25 = *(_DWORD *)(v20 + 16);
      v26 = itemList;
      v27 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)shortNameList,
              v23,
              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
      v28 = (MasterEquipSettingListViewItem_o *)sub_1C13F70(MasterEquipSettingListViewItem_TypeInfo);
      MasterEquipSettingListViewItem___ctor(v28, v23, Item, v26, v25, (System_String_o *)v27, v29);
      itemList = (UnityEngine_Texture2D_o *)this->fields.itemList;
      if ( !itemList )
        break;
      v30 = *(struct System_Object_array **)&itemList->fields.m_CachedPtr;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(itemList[1].klass);
      if ( !v30 )
        break;
      klass_low = SLODWORD(itemList[1].klass);
      if ( (unsigned int)klass_low >= v30->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &v30->obj.klass + klass_low;
        LODWORD(itemList[1].klass) = klass_low + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1C13CC8(v33 + 4);
      }
      if ( ++v23 >= equipIdList->fields._size )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C13F80(itemList, v22);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v35 = this->fields.scrollBar;
      if ( !v35 )
        goto LABEL_27;
      if ( v35->fields.mSize <= 0.98 )
      {
        v36 = this->fields.itemList;
        v37 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v37,
          (Il2CppObject *)v20,
          Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__,
          0LL);
        if ( !v36 )
          goto LABEL_27;
        v38 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v36,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v38 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v38[1].klass), 0LL);
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
    sub_1C13F80(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MasterEquipSettingListViewItem_o *__fastcall MasterEquipSettingListViewManager__GetItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MasterEquipSettingListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4BAFFF3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C13D24(&MasterEquipSettingListViewItem_TypeInfo, v5);
    byte_4BAFFF3 = 1;
  }
  result = (MasterEquipSettingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterEquipSettingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v16; // x1
  void *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BAFFF4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectedImageId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C13D24(&MasterEquipSettingListViewItem_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BAFFF4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterEquipSettingListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
      {
        sub_1C13F80(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
      LOBYTE(v19.fields._current[8].monitor) = LODWORD(v19.fields._current[7].klass) == selectedImageId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1C13F80(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  v5 = sub_1C13CC8(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C13F80(v5, v6);
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
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4BAFFF8 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BAFFF8 = 1;
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
          sub_1C13F80(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
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

  if ( (byte_4BAFFF7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__get_Count__, v9);
    sub_1C13D24(&Method_MasterEquipSettingListViewManager_OnMoveEnd__, v10);
    sub_1C13D24(&StringLiteral_10117/*"OnMouseDrag"*/, v11);
    byte_4BAFFF7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C13F80(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10117/*"OnMouseDrag"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MasterEquipSettingListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C13F80(v17, v18);
      MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
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
  sub_1C13CC8(&this->fields.callbackFunc);
  MasterEquipSettingListViewManager__SetMode_32558176(this, mode, v6);
}


void __fastcall MasterEquipSettingListViewManager__SetMode_32558176(
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
    sub_1C13F80(scrollView, v5);
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
  if ( (byte_4BAFFF6 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager_o *)sub_1C13D24(&MasterEquipSettingListViewObject_TypeInfo, obj);
    byte_4BAFFF6 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterEquipSettingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterEquipSettingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewObject_TypeInfo )
  {
    sub_1C13F80(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)obj, v7, 0LL, method);
}


void __fastcall MasterEquipSettingListViewManager__SetupDisp(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *texture2Ds,
        bool isLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v16; // w22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v18; // x23
  UnityEngine_Object_o *klass; // x24
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BAFFF5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, texture2Ds);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1C13D24(&MasterEquipSettingListViewItem_TypeInfo, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    byte_4BAFFF5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  v16 = 0;
  while ( v16 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v16,
                                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (MasterEquipSettingListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v18 = itemList;
      else
        v18 = 0LL;
      if ( !isLoad )
      {
LABEL_18:
        if ( !v18 )
          goto LABEL_22;
LABEL_19:
        if ( !texture2Ds )
          goto LABEL_22;
        v18[3].klass = (System_Collections_Generic_List_object__c *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_int__object__o *)texture2Ds,
                                                                      (int32_t)v18[2].fields._syncRoot,
                                                                      (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
        sub_1C13CC8(&v18[3]);
        goto LABEL_21;
      }
    }
    else
    {
      v18 = 0LL;
      if ( !isLoad )
        goto LABEL_18;
    }
    if ( !v18 )
      goto LABEL_22;
    klass = (UnityEngine_Object_o *)v18[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)itemList & 1) == 0 )
      goto LABEL_19;
LABEL_21:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v16;
    if ( !itemList )
      goto LABEL_22;
  }
  itemList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)texture2Ds);
  if ( !itemList )
LABEL_22:
    sub_1C13F80(itemList, texture2Ds);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1C13F80(0LL, v20);
    MasterEquipSettingListViewObject__SetupDisp((MasterEquipSettingListViewObject_o *)v21.fields._current, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
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

  if ( (byte_4BAFFEE & 1) == 0 )
  {
    sub_1C13D24(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BAFFEE = 1;
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
    v8 = sub_1C4F214(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1C14240(v7);
  MasterEquipSettingListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *__fastcall MasterEquipSettingListViewManager__get_ClippingObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4BAFFF1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BAFFF1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C13F80(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C13F80(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C13F80(0LL, v18);
      Item = (ListViewItem_o *)MasterEquipSettingListViewObject__GetItem(
                                 (MasterEquipSettingListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C13F80(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41900884((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C13F80(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C13F80(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C13F80(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C13F80(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C13CC8(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v11;
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *__fastcall MasterEquipSettingListViewManager__get_ObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4BAFFF0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BAFFF0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C13F80(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C13F80(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C13F80(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C13F80(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C13CC8(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v11;
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

  if ( (byte_4BAFFEF & 1) == 0 )
  {
    sub_1C13D24(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BAFFEF = 1;
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
    v8 = sub_1C4F214(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1C14240(v7);
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
  sub_1C13CC8(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A4EBA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A4EB48;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4BAFFF9 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&MasterEquipSettingListViewManager_ResultKind_TypeInfo, v9);
    byte_4BAFFF9 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             MasterEquipSettingListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v14, callback, object);
}


void __fastcall MasterEquipSettingListViewManager_CallbackFunc__EndInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  if ( (byte_4BAFFFA & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1C13D24(
                                                                          &MasterEquipSettingListViewItem_TypeInfo,
                                                                          item);
    byte_4BAFFFA = 1;
  }
  if ( !item )
LABEL_8:
    sub_1C13F80(this, item);
  methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MasterEquipSettingListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1C14240(item);
    goto LABEL_8;
  }
  return LODWORD(item[1].klass) == v4->fields.selectedImageId;
}