void MasterEquipSettingListViewManager___ctor(MasterEquipSettingListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MasterEquipSettingListViewManager__CreateList(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_List_int__o *equipIdList,
        System_Collections_Generic_Dictionary_int__Texture2D__o *textureList,
        int32_t selectedImageId,
        System_Collections_Generic_List_string__o *shortNameList,
        const MethodInfo *method)
{
  __int64 v10; // x20
  UnityEngine_Texture2D_o *itemList; // x0
  __int64 v12; // x1
  int32_t v13; // w24
  int32_t Item; // w26
  int32_t v15; // w28
  UnityEngine_Texture2D_o *v16; // x27
  Il2CppObject *v17; // x29
  MasterEquipSettingListViewItem_o *v18; // x25
  const MethodInfo *v19; // x6
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  Il2CppClass **v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v33; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x21
  System_Predicate_object__o *v35; // x22
  Il2CppObject *v36; // x0

  if ( (byte_5933A79 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&MasterEquipSettingListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ListViewItem__TypeInfo);
    sub_21FFC50(&Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__);
    sub_21FFC50(&MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
    byte_5933A79 = 1;
  }
  v10 = sub_21FFEBC(MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_27;
  *(_DWORD *)(v10 + 16) = selectedImageId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !equipIdList )
    goto LABEL_27;
  if ( equipIdList->fields._size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               equipIdList,
               v13,
               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_List_int___get_Item(
                                              equipIdList,
                                              v13,
                                              (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !textureList )
        break;
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                              (System_Collections_Generic_Dictionary_int__object__o *)textureList,
                                              (int32_t)itemList,
                                              (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
      if ( !shortNameList )
        break;
      v15 = *(_DWORD *)(v10 + 16);
      v16 = itemList;
      v17 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)shortNameList,
              v13,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      v18 = (MasterEquipSettingListViewItem_o *)sub_21FFEBC(MasterEquipSettingListViewItem_TypeInfo);
      MasterEquipSettingListViewItem___ctor(v18, v13, Item, v16, v15, (System_String_o *)v17, v19);
      itemList = (UnityEngine_Texture2D_o *)this->fields.itemList;
      if ( !itemList )
        break;
      m_CachedPtr = (struct System_Object_array *)itemList->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(itemList[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(itemList[1].klass);
      if ( (unsigned int)klass_low >= LODWORD(m_CachedPtr->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &m_CachedPtr->obj.klass + klass_low;
        LODWORD(itemList[1].klass) = klass_low + 1;
        v29[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v18, v20, v21, v22, v23, v24, v25);
      }
      if ( ++v13 >= equipIdList->fields._size )
        goto LABEL_15;
    }
LABEL_27:
    sub_21FFECC(itemList, v12);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    itemList = (UnityEngine_Texture2D_o *)this->fields.scrollBar;
    if ( !itemList )
      goto LABEL_27;
    itemList = (UnityEngine_Texture2D_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0);
    if ( !itemList )
      goto LABEL_27;
    itemList = (UnityEngine_Texture2D_o *)UnityEngine_GameObject__get_activeSelf(
                                            (UnityEngine_GameObject_o *)itemList,
                                            0);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      v33 = this->fields.scrollBar;
      if ( !v33 )
        goto LABEL_27;
      if ( v33->fields.mSize <= 0.98 )
      {
        v34 = this->fields.itemList;
        v35 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v35,
          (Il2CppObject *)v10,
          Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__,
          0);
        if ( !v34 )
          goto LABEL_27;
        v36 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v34,
                (System_Predicate_T__o *)v35,
                (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v36 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v36[1].klass), 0);
      }
    }
  }
}


void MasterEquipSettingListViewManager__DestroyList(
        MasterEquipSettingListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v3);
  ListViewSort__Save(sort, 0);
}


MasterEquipSettingListViewItem_o *MasterEquipSettingListViewManager__GetItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5933A7A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&MasterEquipSettingListViewItem_TypeInfo);
    byte_5933A7A = 1;
  }
  result = (MasterEquipSettingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterEquipSettingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterEquipSettingListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
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


void MasterEquipSettingListViewManager__ModifyItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t selectedImageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_c *v11; // x0
  Il2CppClass *klass; // x21
  __int64 v13; // x1
  Il2CppClass *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5933A7B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&MasterEquipSettingListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933A7B = 1;
  }
  itemList = this->fields.itemList;
  memset(&v16, 0, sizeof(v16));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterEquipSettingListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
      {
        sub_21FFECC(v6, v7);
      }
      v11 = UnityEngine_Object_TypeInfo;
      klass = v16.fields._current[7].klass;
      LOBYTE(v16.fields._current[9].klass) = LODWORD(v16.fields._current[7].monitor) == selectedImageId;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, v7, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v14 = current[7].klass;
        if ( !v14 )
          sub_21FFECC(0, v13);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v14->_1.image + 49))(
          v14,
          current,
          *((_QWORD *)v14->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void MasterEquipSettingListViewManager__OnClickListView(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void MasterEquipSettingListViewManager__OnClickSelectListView(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MasterEquipSettingListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
    if ( !obj )
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void MasterEquipSettingListViewManager__OnMoveEnd(MasterEquipSettingListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_5933A7F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933A7F = 1;
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
void MasterEquipSettingListViewManager__RequestListObject(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_5933A7E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__get_Count__);
    sub_21FFC50(&Method_MasterEquipSettingListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5933A7E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterEquipSettingListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
  }
}


void MasterEquipSettingListViewManager__SetMode(
        MasterEquipSettingListViewManager_o *this,
        int32_t mode,
        MasterEquipSettingListViewManager_CallbackFunc_o *callback,
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
  MasterEquipSettingListViewManager__SetMode_40507956(this, mode, v10);
}


void MasterEquipSettingListViewManager__SetMode_40507956(
        MasterEquipSettingListViewManager_o *this,
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
    MasterEquipSettingListViewManager__RequestListObject(this, mode + 1, v7);
}


void MasterEquipSettingListViewManager__SetObjectItem(
        MasterEquipSettingListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_5933A7D & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewObject_TypeInfo);
    byte_5933A7D = 1;
  }
  if ( obj
    && (naturalAligment = MasterEquipSettingListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MasterEquipSettingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)v7, v8, 0, method);
}


void MasterEquipSettingListViewManager__SetupDisp(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *texture2Ds,
        bool isLoad,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v11; // x23
  UnityEngine_Object_o *monitor; // x24
  Il2CppObject *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5933A7C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&MasterEquipSettingListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933A7C = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  memset(&v21, 0, sizeof(v21));
  if ( !itemList )
    goto LABEL_22;
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
          itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterEquipSettingListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v11 = itemList;
      else
        v11 = 0;
      if ( !isLoad )
      {
LABEL_18:
        if ( !v11 )
          goto LABEL_22;
LABEL_19:
        if ( !texture2Ds )
          goto LABEL_22;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)texture2Ds,
                 (int32_t)v11[3].klass,
                 (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
        v11[3].monitor = Item;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[3].monitor, (int32_t)Item, v14, v15, v16, v17, v18, v19);
        goto LABEL_21;
      }
    }
    else
    {
      v11 = 0;
      if ( !isLoad )
        goto LABEL_18;
    }
    if ( !v11 )
      goto LABEL_22;
    monitor = (UnityEngine_Object_o *)v11[3].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, texture2Ds, v9);
    itemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
    if ( ((unsigned __int8)itemList & 1) == 0 )
      goto LABEL_19;
LABEL_21:
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v8;
    if ( !itemList )
      goto LABEL_22;
  }
  itemList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)texture2Ds);
  if ( !itemList )
LABEL_22:
    sub_21FFECC(itemList, texture2Ds);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_21FFECC(0, v20);
    MasterEquipSettingListViewObject__SetupDisp((MasterEquipSettingListViewObject_o *)v21.fields._current, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
}


void MasterEquipSettingListViewManager__add_callbackFunc(
        MasterEquipSettingListViewManager_o *this,
        MasterEquipSettingListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewManager_o *v11; // x0
  MasterEquipSettingListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933A75 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    byte_5933A75 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v6->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewManager_o *)sub_220024C(
                                                 v6,
                                                 MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  MasterEquipSettingListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *MasterEquipSettingListViewManager__get_ClippingObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_5933A78 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933A78 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)MasterEquipSettingListViewObject__GetItem(
                                 (MasterEquipSettingListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *MasterEquipSettingListViewManager__get_ObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_5933A77 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933A77 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__,
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
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v3;
}


void MasterEquipSettingListViewManager__remove_callbackFunc(
        MasterEquipSettingListViewManager_o *this,
        MasterEquipSettingListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipSettingListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5933A76 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    byte_5933A76 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v6->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipSettingListViewManager_o *)sub_220024C(
                                                 v6,
                                                 MasterEquipSettingListViewManager_CallbackFunc_TypeInfo,
                                                 v7,
                                                 v8);
  MasterEquipSettingListViewManager__get_ObjectList(v11, v12);
}


void MasterEquipSettingListViewManager_CallbackFunc___ctor(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF02D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF027C;
}


System_IAsyncResult_o *MasterEquipSettingListViewManager_CallbackFunc__BeginInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_5933A80 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipSettingListViewManager_ResultKind_TypeInfo);
    byte_5933A80 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(MasterEquipSettingListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void MasterEquipSettingListViewManager_CallbackFunc__EndInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void MasterEquipSettingListViewManager_CallbackFunc__Invoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void MasterEquipSettingListViewManager___c__DisplayClass12_0___ctor(
        MasterEquipSettingListViewManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MasterEquipSettingListViewManager___c__DisplayClass12_0___CreateList_b__0(
        MasterEquipSettingListViewManager___c__DisplayClass12_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MasterEquipSettingListViewManager___c__DisplayClass12_0_o *v5; // x20
  __int64 naturalAligment; // x9

  v5 = this;
  if ( (byte_5933A81 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_21FFC50(&MasterEquipSettingListViewItem_TypeInfo);
    byte_5933A81 = 1;
  }
  if ( !item )
LABEL_8:
    sub_21FFECC(this, item);
  naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MasterEquipSettingListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_220024C(
                                                                          item,
                                                                          MasterEquipSettingListViewItem_TypeInfo,
                                                                          method,
                                                                          v3);
    goto LABEL_8;
  }
  return LODWORD(item[1].klass) == v5->fields.selectedImageId;
}