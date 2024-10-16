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
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  Il2CppClass **v35; // x8
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v37; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v38; // x21
  System_Predicate_object__o *v39; // x22
  Il2CppObject *v40; // x0

  if ( (byte_4AB17A8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, equipIdList);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1BAB41C(&MasterEquipSettingListViewItem_TypeInfo, v15);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v16);
    sub_1BAB41C(&System_Predicate_ListViewItem__TypeInfo, v17);
    sub_1BAB41C(&Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__, v18);
    sub_1BAB41C(&MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo, v19);
    byte_4AB17A8 = 1;
  }
  v20 = sub_1BAB668(MasterEquipSettingListViewManager___c__DisplayClass12_0_TypeInfo);
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
               (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_List_int___get_Item(
                                              equipIdList,
                                              v23,
                                              (const MethodInfo_35305A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !textureList )
        break;
      itemList = (UnityEngine_Texture2D_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                              (System_Collections_Generic_Dictionary_int__object__o *)textureList,
                                              (int32_t)itemList,
                                              (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
      if ( !shortNameList )
        break;
      v25 = *(_DWORD *)(v20 + 16);
      v26 = itemList;
      v27 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)shortNameList,
              v23,
              (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
      v28 = (MasterEquipSettingListViewItem_o *)sub_1BAB668(MasterEquipSettingListViewItem_TypeInfo);
      MasterEquipSettingListViewItem___ctor(v28, v23, Item, v26, v25, (System_String_o *)v27, v29);
      itemList = (UnityEngine_Texture2D_o *)this->fields.itemList;
      if ( !itemList )
        break;
      v32 = *(struct System_Object_array **)&itemList->fields.m_CachedPtr;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(itemList[1].klass);
      if ( !v32 )
        break;
      klass_low = SLODWORD(itemList[1].klass);
      if ( (unsigned int)klass_low >= v32->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &v32->obj.klass + klass_low;
        LODWORD(itemList[1].klass) = klass_low + 1;
        v35[4] = (Il2CppClass *)v28;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
      }
      if ( ++v23 >= equipIdList->fields._size )
        goto LABEL_15;
    }
LABEL_27:
    sub_1BAB678(itemList, v22);
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
      v37 = this->fields.scrollBar;
      if ( !v37 )
        goto LABEL_27;
      if ( v37->fields.mSize <= 0.98 )
      {
        v38 = this->fields.itemList;
        v39 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v39,
          (Il2CppObject *)v20,
          Method_MasterEquipSettingListViewManager___c__DisplayClass12_0__CreateList_b__0__,
          0LL);
        if ( !v38 )
          goto LABEL_27;
        v40 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v38,
                (System_Predicate_T__o *)v39,
                (const MethodInfo_354DF24 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v40 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v40[1].klass), 0LL);
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
    sub_1BAB678(0LL, v3);
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

  if ( (byte_4AB17A9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BAB41C(&MasterEquipSettingListViewItem_TypeInfo, v5);
    byte_4AB17A9 = 1;
  }
  result = (MasterEquipSettingListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterEquipSettingListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4AB17AA & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&selectedImageId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BAB41C(&MasterEquipSettingListViewItem_TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    byte_4AB17AA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v11 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (MasterEquipSettingListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
      {
        sub_1BAB678(v11, v12);
      }
      monitor = (UnityEngine_Object_o *)v19.fields._current[6].monitor;
      LOBYTE(v19.fields._current[8].monitor) = LODWORD(v19.fields._current[7].klass) == selectedImageId;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v17 = current[6].monitor;
        if ( !v17 )
          sub_1BAB678(0LL, v16);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v17 + 392LL))(
          v17,
          current,
          *(_QWORD *)(*(_QWORD *)v17 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v3; // w3
  struct MasterEquipSettingListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BAB678(v6, v7);
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

  if ( (byte_4AB17AE & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB17AE = 1;
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
          sub_1BAB678(0LL, v7);
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

  if ( (byte_4AB17AD & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__get_Count__, v9);
    sub_1BAB41C(&Method_MasterEquipSettingListViewManager_OnMoveEnd__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB17AD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterEquipSettingListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MasterEquipSettingListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      MasterEquipSettingListViewObject__Init((MasterEquipSettingListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  MasterEquipSettingListViewManager__SetMode_31949816(this, mode, v6);
}


void __fastcall MasterEquipSettingListViewManager__SetMode_31949816(
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
    sub_1BAB678(scrollView, v5);
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
  if ( (byte_4AB17AC & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager_o *)sub_1BAB41C(&MasterEquipSettingListViewObject_TypeInfo, obj);
    byte_4AB17AC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MasterEquipSettingListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MasterEquipSettingListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
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
  Il2CppObject *Item; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4AB17AB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__, texture2Ds);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1BAB41C(&MasterEquipSettingListViewItem_TypeInfo, v13);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v14);
    byte_4AB17AB = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  v16 = 0;
  while ( v16 < itemList->fields._size )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v16,
                                                              (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)texture2Ds,
                 (int32_t)v18[2].fields._syncRoot,
                 (const MethodInfo_31B6D94 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__get_Item__);
        v18[3].klass = (System_Collections_Generic_List_object__c *)Item;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v18[3], (int32_t)Item, v21, v22);
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
    sub_1BAB678(itemList, texture2Ds);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    itemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1BAB678(0LL, v23);
    MasterEquipSettingListViewObject__SetupDisp((MasterEquipSettingListViewObject_o *)v24.fields._current, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipSettingListViewObject__Dispose__);
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

  if ( (byte_4AB17A4 & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB17A4 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1BAB938(v7);
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
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB17A7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB17A7 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)MasterEquipSettingListViewObject__GetItem(
                                 (MasterEquipSettingListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BAB678(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB17A6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB17A6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MasterEquipSettingListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MasterEquipSettingListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_MasterEquipSettingListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AB17A5 & 1) == 0 )
  {
    sub_1BAB41C(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB17A5 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterEquipSettingListViewManager_o *)sub_1BAB938(v7);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E86D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E8680;
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
  if ( (byte_4AB17AF & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&MasterEquipSettingListViewManager_ResultKind_TypeInfo, v9);
    byte_4AB17AF = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             MasterEquipSettingListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall MasterEquipSettingListViewManager_CallbackFunc__EndInvoke(
        MasterEquipSettingListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  if ( (byte_4AB17B0 & 1) == 0 )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1BAB41C(
                                                                          &MasterEquipSettingListViewItem_TypeInfo,
                                                                          item);
    byte_4AB17B0 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1BAB678(this, item);
  methodPtr_low = LOBYTE(MasterEquipSettingListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MasterEquipSettingListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != MasterEquipSettingListViewItem_TypeInfo )
  {
    this = (MasterEquipSettingListViewManager___c__DisplayClass12_0_o *)sub_1BAB938(item);
    goto LABEL_8;
  }
  return LODWORD(item[1].klass) == v4->fields.selectedImageId;
}