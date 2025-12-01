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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  Il2CppClass **v29; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v31; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x21
  System_Predicate_object__o *v33; // x22
  Il2CppObject *v34; // x0

  if ( (byte_4CC297B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C713B0(&Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__);
    sub_1C713B0(&MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
    byte_4CC297B = 1;
  }
  v10 = sub_1C715FC(MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
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
               (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_List_int___get_Item(
                                              equipIdList,
                                              v13,
                                              (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !textureList )
        break;
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                              (System_Collections_Generic_Dictionary_int__object__o *)textureList,
                                              (int32_t)itemList,
                                              (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
      if ( !shortNameList )
        break;
      v15 = *(_DWORD *)(v10 + 16);
      v16 = itemList;
      v17 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)shortNameList,
              v13,
              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
      v18 = (MasterEquipSettingListViewItem_o *)sub_1C715FC(MasterEquipSettingListViewItem_TypeInfo);
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
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &m_CachedPtr->obj.klass + klass_low;
        LODWORD(itemList[1].klass) = klass_low + 1;
        v29[4] = (Il2CppClass *)v18;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v18, v20, v21, v22, v23, v24, v25);
      }
      if ( ++v13 >= equipIdList->fields._size )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C71608(itemList, v12);
  }
LABEL_15:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v31 = this->fields.scrollBar;
      if ( !v31 )
        goto LABEL_27;
      if ( v31->fields.mSize <= 0.98 )
      {
        v32 = this->fields.itemList;
        v33 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v33,
          (Il2CppObject *)v10,
          Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__,
          0);
        if ( !v32 )
          goto LABEL_27;
        v34 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v32,
                (System_Predicate_T__o *)v33,
                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v34 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v34[1].klass), 0);
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
    sub_1C71608(0, v3);
  ListViewSort__Save(sort, 0);
}


MasterEquipSettingListViewItem_o *MasterEquipSettingListViewManager__GetItem(
        MasterEquipSettingListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CC297C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    byte_4CC297C = 1;
  }
  result = (MasterEquipSettingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterEquipSettingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v11; // x1
  Il2CppClass *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC297D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC297D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current
        || (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
            v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterEquipSettingListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
      {
        sub_1C71608(v6, v7);
      }
      klass = v14.fields._current[7].klass;
      LOBYTE(v14.fields._current[9].klass) = LODWORD(v14.fields._current[7].monitor) == selectedImageId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v12 = current[7].klass;
        if ( !v12 )
          sub_1C71608(0, v11);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v12->_1.image + 49))(
          v12,
          current,
          *((_QWORD *)v12->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MasterEquipSettingListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C71608(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void MasterEquipSettingListViewManager__OnMoveEnd(MasterEquipSettingListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CC2981 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2981 = 1;
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
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
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
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC2980 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__get_Count__);
    sub_1C713B0(&Method_MasterEquipSettingListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC2980 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterEquipSettingListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
  }
}


void MasterEquipSettingListViewManager__SetMode(
        MasterEquipSettingListViewManager_o *this,
        int32_t mode,
        MasterEquipSettingListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  MasterEquipSettingListViewManager__SetMode_34028600(this, mode, v10);
}


void MasterEquipSettingListViewManager__SetMode_34028600(
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
    sub_1C71608(scrollView, v5);
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
  MasterEquipSettingListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC297F & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager_o *)sub_1C713B0(&MasterEquipSettingListViewObject_TypeInfo);
    byte_4CC297F = 1;
  }
  if ( !obj
    || (naturalAligment = MasterEquipSettingListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterEquipSettingListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)obj, v7, 0, method);
}


void MasterEquipSettingListViewManager__SetupDisp(
        MasterEquipSettingListViewManager_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *texture2Ds,
        bool isLoad,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int32_t v8; // w22
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *v10; // x23
  UnityEngine_Object_o *monitor; // x24
  Il2CppObject *Item; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CC297E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC297E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  v8 = 0;
  while ( v8 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v8,
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment,
          itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterEquipSettingListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == MasterEquipSettingListViewItem_TypeInfo )
        v10 = itemList;
      else
        v10 = 0;
      if ( !isLoad )
      {
LABEL_18:
        if ( !v10 )
          goto LABEL_22;
LABEL_19:
        if ( !texture2Ds )
          goto LABEL_22;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)texture2Ds,
                 (int32_t)v10[3].klass,
                 (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
        v10[3].monitor = Item;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v10[3].monitor, (int32_t)Item, v13, v14, v15, v16, v17, v18);
        goto LABEL_21;
      }
    }
    else
    {
      v10 = 0;
      if ( !isLoad )
        goto LABEL_18;
    }
    if ( !v10 )
      goto LABEL_22;
    monitor = (UnityEngine_Object_o *)v10[3].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(itemList, texture2Ds);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1C71608(0, v19);
    MasterEquipSettingListViewObject__SetupDisp((MasterEquipSettingListViewObject_o *)v20.fields._current, v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
}


void MasterEquipSettingListViewManager__add_callbackFunc(
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

  if ( (byte_4CC2977 & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2977 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v7->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1C719A4(v7);
  MasterEquipSettingListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *MasterEquipSettingListViewManager__get_ClippingObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4CC297A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC297A = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)MasterEquipSettingListViewObject__GetItem(
                                 (MasterEquipSettingListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterEquipSettingListViewObject__o *MasterEquipSettingListViewManager__get_ObjectList(
        MasterEquipSettingListViewManager_o *this,
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

  if ( (byte_4CC2979 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2979 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterEquipSettingListViewObject__o *)v3;
}


void MasterEquipSettingListViewManager__remove_callbackFunc(
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

  if ( (byte_4CC2978 & 1) == 0 )
  {
    sub_1C713B0(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2978 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MasterEquipSettingListViewManager_CallbackFunc_c *)v7->klass != MasterEquipSettingListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1C719A4(v7);
  MasterEquipSettingListViewManager__get_ObjectList(v10, v11);
}


void MasterEquipSettingListViewManager_CallbackFunc___ctor(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA040C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA03B4;
}


System_IAsyncResult_o *MasterEquipSettingListViewManager_CallbackFunc__BeginInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CC2982 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&MasterEquipSettingListViewManager_ResultKind_TypeInfo);
    byte_4CC2982 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(MasterEquipSettingListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void MasterEquipSettingListViewManager_CallbackFunc__EndInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  MasterEquipSettingListViewManager___c__DisplayClass12_0_o *v4; // x20
  __int64 naturalAligment; // x9

  v4 = this;
  if ( (byte_4CC2983 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1C713B0(&MasterEquipSettingListViewItem_TypeInfo);
    byte_4CC2983 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1C71608(this, item);
  naturalAligment = MasterEquipSettingListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MasterEquipSettingListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1C719A4(item);
    goto LABEL_8;
  }
  return LODWORD(item[1].klass) == v4->fields.selectedImageId;
}