void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v6; // x19
  struct MaterialEventLogListViewManager_StaticFields *v7; // x0

  if ( (byte_49F7C2C & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, v1);
    sub_1B640C8(&MaterialEventLogListViewManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_8877/*"MaterialCollectionServant6"*/, v4);
    byte_49F7C2C = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_BA2940;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_BA31E0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v6 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v6, (System_String_o *)StringLiteral_8877/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  v7 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v7->EventLogservantSortInfo = v6;
  sub_1B6406C(&v7->EventLogservantSortInfo);
}


void __fastcall MaterialEventLogListViewManager___ctor(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MaterialEventLogListViewManager__Awake(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v8; // x20

  if ( (byte_49F7C13 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1B640C8(&ListViewSort_TypeInfo, v3);
    byte_49F7C13 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          gameObject,
                                                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        sub_1B6406C(&this->fields.mBoxCollider),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  scrollView->fields.disableDragIfFits = 0;
  v8 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v5, v6);
  ListViewSort___ctor(v8, 3, 1, 0LL);
  this->fields.sort = v8;
  sub_1B6406C(&this->fields.sort);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialEventLogListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v7; // x20
  MaterialEventLogListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v11; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v3 = this;
  if ( (byte_49F7C28 & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, method);
    sub_1B640C8(&MaterialEventLogListViewManager_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F7C28 = 1;
  }
  if ( !v3->fields.issortButton )
  {
    sort = v3->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v7 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor(v7, 3, 1, 0LL);
  v3->fields.sort = v7;
  v8 = (MaterialEventLogListViewManager_o *)sub_1B6406C(&v3->fields.sort);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v8,
                                                                       v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MaterialEventLogListViewManager_o *)UnityEngine_Object__op_Inequality(
                                                MaterialCollectionServantListViewManager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_18;
    MaterialCollectionServantListViewManager__EventLogSortListSave(
      (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager,
      0LL);
  }
  v11 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v11 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v11->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v11->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v11),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v13; // x1
  MaterialEventLogListViewObject_o *v14; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  const MethodInfo *v16; // x2
  MaterialEventLogListViewItem_o *v17; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v19; // w23
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  struct MaterialEventLogListViewItem_Info_o *v22; // x8
  unsigned int v23; // w9
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F7C20 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_49F7C20 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v25.fields._current,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v14 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1B64324(0LL);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v13);
    v17 = Item;
    if ( !Item )
      sub_1B64324(0LL);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v19 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v16);
      MaterialEventLogListViewObject__SetEnableSelect(v14, v19, v20);
      v22 = v17->fields._info_k__BackingField;
      if ( v19 )
      {
        if ( !v22 )
          sub_1B64324(v21);
        v23 = v22->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v22 )
          sub_1B64324(v21);
        v23 = v22->fields.flag | 5;
      }
      v22->fields.flag = v23;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v14, 1, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfos(
        MaterialEventLogListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *Instance; // x0
  Il2CppObject *syncRoot; // x19
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x11
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F7C2A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_1B640C8(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_1B640C8(&MyRoomRootComponent_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_49F7C2A = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  syncRoot = Instance->fields._syncRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)syncRoot, 0LL, 0LL) )
  {
    if ( syncRoot )
    {
      methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(syncRoot->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MyRoomRootComponent_c *)syncRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomRootComponent_TypeInfo )
          syncRoot = 0LL;
      }
      else
      {
        syncRoot = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                              (UnityEngine_Object_o *)syncRoot,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !syncRoot )
        goto LABEL_35;
      klass = syncRoot[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo,
                                                             v17,
                                                             v18);
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v27,
            Instance,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v28 = v27;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v28,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v20 )
              break;
            if ( v28.fields._current )
            {
              v21 = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v28.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v21
                && (MaterialEventLogListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[v21 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                monitor = (Il2CppObject *)v28.fields._current[7].monitor;
                if ( monitor )
                {
                  if ( !v19 )
                    sub_1B64324(v20);
                  items = v19->fields._items;
                  v24 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v19->fields._version;
                  if ( !items )
                    sub_1B64324(v20);
                  size = v19->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v19,
                      monitor,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v26 = &items->obj.klass + size;
                    v19->fields._size = size + 1;
                    v26[4] = (Il2CppClass *)monitor;
                    sub_1B6406C(v26 + 4);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( klass )
          {
            Instance = (System_Collections_Generic_List_object__o *)klass->vtable[36].methodPtr;
            if ( Instance )
            {
              *(_QWORD *)&Instance[3].fields._size = v19;
              sub_1B6406C(&Instance[3].fields._size);
              return;
            }
          }
        }
LABEL_35:
        sub_1B64324(Instance);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
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
  void *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t size; // w8
  int v19; // w25
  int32_t i; // w22
  __int64 v21; // x23
  Il2CppObject **v22; // x24
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialEventLogListViewManager_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v35; // x20
  struct UIScrollView_o *v36; // x8
  UnityEngine_Object_o *v37; // x8
  __int64 v38; // x11
  UnityEngine_Object_o *v39; // x20
  UnityEngine_GameObject_o *v40; // x0
  MaterialEventLogListViewManager_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x21
  struct UIScrollView_o *v43; // x8
  UnityEngine_Object_o *mPanel; // x20
  MaterialEventLogListViewManager_c *v45; // x0
  MaterialEventLogListViewManager_o *v46; // x0
  const MethodInfo *v47; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  UnityEngine_GameObject_o *v52; // x0
  MaterialEventLogListViewManager_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x21
  struct UIScrollView_o *v55; // x8
  UnityEngine_Object_o *v56; // x20
  const MethodInfo *v57; // x1
  bool v58; // w1

  if ( (byte_49F7C19 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_1B640C8(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&UIScrollBar_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_11718/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_49F7C19 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_85;
  size = infos->fields._size;
  if ( size >= 4 )
    v19 = size + 1;
  else
    v19 = 4;
  if ( v19 >= 1 )
  {
    for ( i = 0; i != v19; ++i )
    {
      v21 = sub_1B64314(MaterialEventLogListViewItem_TypeInfo, v16, v17);
      ListViewItem___ctor_40370988((ListViewItem_o *)v21, i, 0LL);
      *(_DWORD *)(v21 + 112) = kind;
      *(_QWORD *)(v21 + 120) = 0LL;
      v22 = (Il2CppObject **)(v21 + 120);
      sub_1B6406C(v21 + 120);
      if ( i < infos->fields._size )
      {
        *v22 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        sub_1B6406C(v21 + 120);
        Item = *v22;
        if ( !*v22 )
          goto LABEL_85;
        *((_QWORD *)Item + 11) = v21;
        sub_1B6406C((char *)Item + 88);
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !Item )
          goto LABEL_85;
        this->fields.issortButton = *((_BYTE *)Item + 152);
      }
      Item = this->fields.itemList;
      if ( !Item )
        goto LABEL_85;
      v23 = *((_QWORD *)Item + 2);
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)Item + 7);
      if ( !v23 )
        goto LABEL_85;
      v25 = *((int *)Item + 6);
      if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          (Il2CppObject *)v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        *((_DWORD *)Item + 6) = v25 + 1;
        *(_QWORD *)(v26 + 32) = v21;
        sub_1B6406C(v26 + 32);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = MaterialEventLogListViewManager_TypeInfo;
  v30 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v29 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v29->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v30, *p_VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_85;
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( verticalScrollBar
      && (methodPtr_low = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(verticalScrollBar->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (UIScrollBar_c *)verticalScrollBar->klass->_2.typeHierarchy[methodPtr_low - 1] == UIScrollBar_TypeInfo )
        v35 = verticalScrollBar;
      else
        v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (void *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_85;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      v41 = MaterialEventLogListViewManager_TypeInfo;
      v42 = v40;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v41 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v42, v41->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
      Item = v35[2].klass;
      if ( !Item )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
      Item = v35[2].monitor;
      if ( !Item )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
    }
    v43 = this->fields.scrollView;
    if ( !v43 )
      goto LABEL_85;
    mPanel = (UnityEngine_Object_o *)v43->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0LL, 0LL) )
    {
      Item = MaterialEventLogListViewManager_TypeInfo;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        Item = MaterialEventLogListViewManager_TypeInfo;
      }
      if ( !mPanel )
        goto LABEL_85;
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))mPanel->klass[1]._2.genericContainerHandle)(
        mPanel,
        *(_QWORD *)&mPanel->klass[1]._2.instance_size,
        0.0,
        (float)*(int *)(*((_QWORD *)Item + 23) + 24LL),
        (float)*(int *)(*((_QWORD *)Item + 23) + 16LL),
        (float)*(int *)(*((_QWORD *)Item + 23) + 20LL));
    }
    ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
    v45 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v45 = MaterialEventLogListViewManager_TypeInfo;
    }
    this->fields.sort = v45->static_fields->EventLogservantSortInfo;
    sub_1B6406C(&this->fields.sort);
    Item = this->fields.sort;
    if ( Item )
    {
      *((_DWORD *)Item + 32) = 0;
      ListViewSort__Load((ListViewSort_o *)Item, 0LL);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v46,
                                                   v47);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Item = (void *)UnityEngine_Object__op_Inequality(
                       (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                       0LL,
                       0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_85;
        MaterialCollectionServantListViewManager->fields.sort = this->fields.sort;
        sub_1B6406C(&MaterialCollectionServantListViewManager->fields.sort);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_11718/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)Item, 0LL);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v50);
        MaterialEventLogListViewManager__SortDummyData(this, v51);
        goto LABEL_82;
      }
    }
LABEL_85:
    sub_1B64324(Item);
  }
  GameObjectExtensions__SetLocalPositionY(v30, p_VL_LIST_POS_Y[7], 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v36 = this->fields.scrollView;
  if ( !v36 )
    goto LABEL_85;
  v37 = (UnityEngine_Object_o *)v36->fields.verticalScrollBar;
  if ( v37
    && (v38 = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v37->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v38) )
  {
    if ( (UIScrollBar_c *)v37->klass->_2.typeHierarchy[v38 - 1] == UIScrollBar_TypeInfo )
      v39 = v37;
    else
      v39 = 0LL;
  }
  else
  {
    v39 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (void *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v39 )
      goto LABEL_85;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39, 0LL);
    v53 = MaterialEventLogListViewManager_TypeInfo;
    v54 = v52;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v53 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v54, v53->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    Item = v39[2].klass;
    if ( !Item )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    Item = v39[2].monitor;
    if ( !Item )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v55 = this->fields.scrollView;
  if ( !v55 )
    goto LABEL_85;
  v56 = (UnityEngine_Object_o *)v55->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    Item = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      Item = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v56 )
      goto LABEL_85;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v56->klass[1]._2.genericContainerHandle)(
      v56,
      *(_QWORD *)&v56->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)Item + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)Item + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)Item + 23) + 52LL));
  }
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v58 = MaterialEventLogListViewManager__GetFilterCount(this, v57) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v58, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v57);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_49F7C14 & 1) == 0 )
  {
    sub_1B640C8(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_49F7C14 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1B64324(0LL);
  ListViewSort__DeleteContinueData(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DestroyList(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__EndEventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu; // x0
  MaterialEventLogListViewManager_o *v6; // x0
  const MethodInfo *v7; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  bool v11; // w1
  const MethodInfo *v12; // x1

  if ( (byte_49F7C23 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDecide);
    byte_49F7C23 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close_30976712(eventLogServantSortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                                                               0LL,
                                                                               0LL);
  if ( ((unsigned __int8)eventLogServantSortSelectMenu & 1) != 0 )
  {
    if ( !MaterialCollectionServantListViewManager )
      goto LABEL_13;
    MaterialCollectionServantListViewManager->fields.sort = this->fields.sort;
    sub_1B6406C(&MaterialCollectionServantListViewManager->fields.sort);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, v9);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v11 = MaterialEventLogListViewManager__GetFilterCount(this, v10) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v11, 0LL);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfos(this, v12);
      goto LABEL_12;
    }
LABEL_13:
    sub_1B64324(eventLogServantSortSelectMenu);
  }
LABEL_12:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, v9);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49F7C21 & 1) == 0 )
  {
    sub_1B640C8(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_1B640C8(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v5);
    byte_49F7C21 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                                   MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   eventLogServantSortSelectMenu,
                                                                   method);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      v8);
    if ( !eventLogServantSortSelectMenu )
      sub_1B64324(v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, v10);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v7; // w21
  int32_t v8; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_49F7C22 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1B640C8(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_49F7C22 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( itemList[3].klass )
        v8 += ((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, struct ListViewSort_o *, Il2CppMethodPointer))itemList->klass->vtable._5_set_Item.method)(
                itemList,
                this->fields.sort,
                itemList->klass->vtable._6_IndexOf.methodPtr) & 1;
      if ( size == ++v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B64324(itemList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
PartyServantListViewItem_o *__fastcall MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F7C1A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&PartyServantListViewItem_TypeInfo, v5);
    byte_49F7C1A = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PartyServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyServantListViewItem_TypeInfo )
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


MaterialCollectionServantListViewManager_o *__fastcall MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialCollectionServantListViewManager_o *result; // x0
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  bool v6; // w8
  __int64 methodPtr_low; // x10
  bool v8; // w8
  __int64 v9; // x19
  bool v10; // w8

  if ( (byte_49F7C16 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomRootComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49F7C16 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( dropObjectList )
    {
      methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(dropObjectList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomRootComponent_TypeInfo )
          dropObjectList = 0LL;
      }
      else
      {
        dropObjectList = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v8 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v9 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      result = 0LL;
      if ( !v10 )
      {
        if ( v9 )
          return *(MaterialCollectionServantListViewManager_o **)(v9 + 560);
LABEL_22:
        sub_1B64324(result);
      }
    }
  }
  return result;
}


float __fastcall MaterialEventLogListViewManager__GetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B64324(0LL);
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0LL);
  return GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
}


UIScrollView_o *__fastcall MaterialEventLogListViewManager__GetScrollView(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}


void __fastcall MaterialEventLogListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_49F7C15 & 1) == 0 )
  {
    sub_1B640C8(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_49F7C15 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1B64324(0LL);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__48794364; // x0
  struct ListViewItemSeed_o *v6; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v8; // x8
  const MethodInfo *v9; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x19
  unsigned int v12; // w20

  if ( (byte_49F7C2B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F7C2B = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__48794364 & 1) != 0 )
  {
    v6 = this->fields.seed;
    if ( !v6 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v6->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          parent,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__48794364 & 1) != 0 )
    {
      v8 = this->fields.seed;
      if ( !v8 )
        goto LABEL_19;
      ComponentsInChildren_object__48794364 = v8->fields.parent;
      if ( !ComponentsInChildren_object__48794364 )
        goto LABEL_19;
      ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                            ComponentsInChildren_object__48794364,
                                                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__48794364 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__48794364[1].klass;
      v11 = ComponentsInChildren_object__48794364;
      if ( klass >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= klass )
            sub_1B6432C(ComponentsInChildren_object__48794364, v9);
          ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)*((_QWORD *)&v11[1].monitor + (int)v12);
          if ( !ComponentsInChildren_object__48794364 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__48794364,
            v9);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            return;
        }
LABEL_19:
        sub_1B64324(ComponentsInChildren_object__48794364);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewManager__ListUpdate(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  bool v4; // w1

  MaterialEventLogListViewManager__SortDummyData(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v4 = MaterialEventLogListViewManager__GetFilterCount(this, v3) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v4, 0LL);
}


void __fastcall MaterialEventLogListViewManager__OnClickListView(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *linkItem; // x19
  __int64 methodPtr_low; // x10
  void *monitor; // x20
  int v9; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_49F7C1F & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_1B640C8(&MaterialEventLogListViewItem_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_1B640C8(
                                                  &Method_MaterialEventLogListViewManager_OnClickListView__,
                                                  v5);
    byte_49F7C1F = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1B64324(this);
  }
  monitor = linkItem[7].monitor;
  if ( monitor )
  {
    v9 = *((_DWORD *)monitor + 17);
    if ( (v9 & 1) == 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B640E0(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      v9 = *((_DWORD *)monitor + 17);
    }
    if ( (v9 & 4) != 0 )
    {
      v12 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B640E0(Method_MaterialEventLogListViewManager_OnClickListView__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
    }
    else
    {
      ActionExtensions__Call_object_(
        *((System_Action_T__o **)monitor + 10),
        linkItem,
        (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__RequestListObject(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
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
  __int64 v15; // x19
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_object__o *v18; // x22
  int32_t v19; // w24
  const MethodInfo *v20; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  float v26; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_o *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x21
  System_Action_o *v36; // x20

  if ( (byte_49F7C1D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    sub_1B640C8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v11);
    sub_1B640C8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v12);
    sub_1B640C8(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v13);
    sub_1B640C8(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v14);
    byte_49F7C1D = 1;
  }
  v15 = sub_1B64314(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, *(_QWORD *)&mode, end_act);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B6406C(v15 + 16);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_1B6406C(v15 + 24);
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
    goto LABEL_25;
  v18 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v18,
                                                                  v19,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_30968508((MaterialEventLogListViewObject_o *)ObjectList, mode, 0LL, -1, v20);
      if ( ++v19 >= v18->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1B64324(ObjectList);
  }
LABEL_9:
  initMode = this->fields.initMode;
  if ( initMode == 4 )
  {
    this->fields.mIsDoing_Slide = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
    if ( !ObjectList )
      goto LABEL_25;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v15,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_33391564((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v35, 0LL);
  }
  else if ( initMode == 3 )
  {
    this->fields.mIsDoing_Slide = 1;
    this->fields.isScrollRefresh = 1;
    ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
    if ( !ObjectList )
      goto LABEL_25;
    v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v23 = GameObjectExtensions__SafeGetComponent_object_(
            v22,
            (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v23 )
        goto LABEL_25;
      klass = (int)v23[4].klass;
      monitor = (int)v23[4].monitor;
      LODWORD(v23[5].klass) = -1027735552;
      HIDWORD(v23[4].monitor) = klass;
      HIDWORD(v23[5].klass) = monitor;
      v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v23, 580.0, v26, 0.0, v29, 0LL);
    }
    else
    {
      v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v23 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_33390620((SlideFadeObject_o *)v23, 580.0, v26, 0.0, v36, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t v10; // w20
  bool v11; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_49F7C26 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F7C26 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v9 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v10 = 0;
    v11 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v9,
                                                                  v10,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0LL);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Component_object,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_object )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v11, 0LL);
      }
      if ( ++v10 >= v9->fields._size )
        return;
    }
LABEL_15:
    sub_1B64324(ObjectList);
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *sort; // x0
  System_String_o **v7; // x9
  System_String_o **v8; // x20
  UnityEngine_Color_o v9; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_49F7C24 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_454/*"#FE4545"*/, method);
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, v3);
    sub_1B640C8(&StringLiteral_437/*"#000000"*/, v4);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v5);
    byte_49F7C24 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_437/*"#000000"*/
     : (System_String_o **)&StringLiteral_454/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1B64324(sort);
  UILabel__set_effectColor((UILabel_o *)sort, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t mIsDoing_Slide; // w8
  UnityEngine_Collider_o *mBoxCollider; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v15; // x0
  System_Action_o *v16; // x2
  System_Action_o *v17; // x21
  System_Delegate_o *v18; // x0
  MaterialEventLogListViewManager_o *v19; // x0
  int32_t v20; // w1
  System_Action_o *v21; // x2
  const MethodInfo *v22; // x3

  if ( (byte_49F7C1C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_49F7C1C = 1;
  }
  mIsDoing_Slide = this->fields.mIsDoing_Slide;
  if ( mode == 4 )
  {
    if ( !this->fields.mIsDoing_Slide && this->fields.initMode == 2 )
      goto LABEL_11;
    goto LABEL_14;
  }
  if ( mode != 3 )
    goto LABEL_7;
  if ( this->fields.mIsDoing_Slide )
  {
LABEL_14:
    ActionExtensions__Call(end_act, 0LL);
    return 0;
  }
  mIsDoing_Slide = this->fields.initMode;
LABEL_7:
  if ( mIsDoing_Slide )
    goto LABEL_14;
LABEL_11:
  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  mBoxCollider = (UnityEngine_Collider_o *)this->fields.mBoxCollider;
  if ( !mBoxCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v13 = 2;
      goto LABEL_17;
    case 2:
      v13 = 3;
LABEL_17:
      v15 = this;
      goto LABEL_18;
    case 4:
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v18 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v17, 0LL);
      v16 = (System_Action_o *)v18;
      if ( v18 && (System_Action_c *)v18->klass != System_Action_TypeInfo )
      {
        v19 = (MaterialEventLogListViewManager_o *)sub_1B645E4(v18);
        MaterialEventLogListViewManager__RequestListObject(v19, v20, v21, v22);
      }
      else
      {
        v13 = 2;
        v15 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v15, v13, v16, v12);
        result = 1;
      }
      break;
    default:
      v15 = this;
      v13 = 0;
LABEL_18:
      v16 = end_act;
      goto LABEL_19;
  }
  return result;
}


void __fastcall MaterialEventLogListViewManager__SetObjectItem(
        MaterialEventLogListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  MaterialEventLogListViewManager_o *v6; // x20
  __int64 methodPtr_low; // x10
  int32_t v8; // w1

  v6 = this;
  if ( (byte_49F7C1B & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1B640C8(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_49F7C1B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_30968508(
    (MaterialEventLogListViewObject_o *)obj,
    v8,
    0LL,
    v6->fields.selectedLimitCount,
    v4);
}


void __fastcall MaterialEventLogListViewManager__SetScrollPosY(
        MaterialEventLogListViewManager_o *this,
        float y,
        const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4

  if ( (byte_49F7C17 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_49F7C17 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B64324(scrollView);
  }
  v7.fields.x = *((float *)scrollView + 83);
  v7.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 0, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__SetSort(
        MaterialEventLogListViewManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  bool v5; // w1
  const MethodInfo *v6; // x1

  this->fields.sort = sort;
  sub_1B6406C(&this->fields.sort);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v5 = MaterialEventLogListViewManager__GetFilterCount(this, v4) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v5, 0LL);
  MaterialEventLogListViewManager__CreateInfos(this, v6);
}


void __fastcall MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8

  if ( (byte_49F7C27 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49F7C27 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_34;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( v13 )
    {
      sortKind = v13->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
LABEL_30:
              if ( v16->fields.isAscendingOrder )
                v20 = v17;
              else
                v20 = v18;
              UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
              v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B64324(sort);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_49F7C1E & 1) == 0 )
  {
    sub_1B640C8(&MyRoomRootComponent_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49F7C1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0LL
    || (methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)methodPtr_low)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0LL )
  {
    sub_1B64324(Instance);
  }
  if ( element_class->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(element_class, 0, 0LL);
    MyRoomControl__EndMaterialEventBack(element_class, 0LL);
  }
}


void __fastcall MaterialEventLogListViewManager__SortAscendingOrder(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ListViewSort_o *v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *sort; // x8
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  bool v12; // w1
  const MethodInfo *v13; // x1

  if ( (byte_49F7C25 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F7C25 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v6,
                                                   v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        MaterialCollectionServantListViewManager->fields.sort = this->fields.sort;
        sub_1B6406C(&MaterialCollectionServantListViewManager->fields.sort);
      }
      v6 = this->fields.sort;
      if ( v6 )
      {
        ListViewSort__Save(v6, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v10);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetDragRoot.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v12 = MaterialEventLogListViewManager__GetFilterCount(this, v11) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v12, 0LL);
        MaterialEventLogListViewManager__CreateInfos(this, v13);
        return;
      }
    }
LABEL_15:
    sub_1B64324(v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialEventLogListViewManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w21
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  MaterialEventLogListViewManager_o *v27; // x1
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  int v33; // w9
  int v34; // w20
  int v35; // w8
  int v36; // w21
  int v37; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v40; // x0
  ListViewItem_o *v41; // x22
  int32_t v42; // w1
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_49F7C29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ListViewItem__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v14);
    this = (MaterialEventLogListViewManager_o *)sub_1B640C8(&MaterialEventLogListViewItem_TypeInfo, v15);
    byte_49F7C29 = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v3->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v3->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v22,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( !this->fields.dragParentObject )
      {
        this = (MaterialEventLogListViewManager_o *)v3->fields.itemList;
        if ( !this )
          break;
        this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v22,
                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v21 )
          break;
        items = v21->fields._items;
        v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        v26 = v21->fields._size;
        v27 = this;
        if ( (unsigned int)v26 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v26;
          v21->fields._size = v26 + 1;
          v28[4] = (Il2CppClass *)v27;
          this = (MaterialEventLogListViewManager_o *)sub_1B6406C(v28 + 4);
        }
      }
      if ( size == ++v22 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1B64324(this);
  }
LABEL_18:
  if ( !v21 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v21,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v47;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v29,
          i.fields._current,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v29 = (System_Collections_Generic_List_object__o *)v3->fields.itemList;
    if ( !v29 )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v3, v30);
  if ( (int)this > 3 )
    v33 = 1;
  else
    v33 = 4 - (_DWORD)this;
  if ( v33 >= 1 )
  {
    v34 = -(int)this;
    if ( (int)this <= 3 )
      v35 = 3;
    else
      v35 = (int)this;
    v36 = (_DWORD)this + 999;
    v37 = ~v35;
    do
    {
      sort = v3->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v40 = (ListViewItem_o *)sub_1B64314(MaterialEventLogListViewItem_TypeInfo, v31, v32);
      v41 = v40;
      v42 = isAscendingOrder ? v36 : v34;
      ListViewItem___ctor_40370988(v40, v42, 0LL);
      v41[1].monitor = 0LL;
      LODWORD(v41[1].klass) = 5;
      sub_1B6406C(&v41[1].monitor);
      this = (MaterialEventLogListViewManager_o *)v3->fields.itemList;
      if ( !this )
        goto LABEL_42;
      v43 = *(_QWORD *)&this->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v43 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v41,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v46 + 32) = v41;
        this = (MaterialEventLogListViewManager_o *)sub_1B6406C(v46 + 32);
      }
      --v34;
      ++v36;
    }
    while ( v37 != v34 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v3, v31);
}


bool __fastcall MaterialEventLogListViewManager__get_IsDoing_Slide(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mIsDoing_Slide;
}


System_Collections_Generic_List_MaterialEventLogListViewObject__o *__fastcall MaterialEventLogListViewManager__get_ObjectList(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F7C18 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F7C18 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v17 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C(v21 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v12;
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___ctor(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__0(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__1(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MaterialEventLogListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  MaterialEventLogListViewManager_o *klass; // x20
  System_Action_o *v7; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_49F7C2D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1B640C8(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v5);
    byte_49F7C2D = 1;
  }
  klass = (MaterialEventLogListViewManager_o *)v4[1].klass;
  if ( !klass )
    sub_1B64324(this);
  klass->fields.mIsDoing_Slide = 0;
  v7 = (System_Action_o *)v4[2].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v7,
      v4,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v4[2].klass = (Il2CppClass *)v7;
    sub_1B6406C(&v4[2]);
  }
  MaterialEventLogListViewManager__SetMode(klass, 0, v7, v3);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}