void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v2; // x19
  struct MaterialEventLogListViewManager_StaticFields *v3; // x0

  if ( (byte_4A568ED & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8919/*"MaterialCollectionServant6"*/);
    byte_4A568ED = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_BB4150;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_BB49D0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v2 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v2, (System_String_o *)StringLiteral_8919/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  v3 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v3->EventLogservantSortInfo = v2;
  sub_1B88554(&v3->EventLogservantSortInfo, v2);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v7; // x20

  if ( (byte_4A568D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&ListViewSort_TypeInfo);
    byte_4A568D4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B88554(&this->fields.mBoxCollider, Component_object),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1B8880C(gameObject, v4);
  }
  scrollView->fields.disableDragIfFits = 0;
  v7 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v7, 3, 1, 0LL);
  this->fields.sort = v7;
  sub_1B88554(&this->fields.sort, v7);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v4; // x20
  MaterialEventLogListViewManager_o *v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v8; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4A568E9 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568E9 = 1;
  }
  if ( !v2->fields.issortButton )
  {
    sort = v2->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0LL);
  v2->fields.sort = v4;
  v5 = (MaterialEventLogListViewManager_o *)sub_1B88554(&v2->fields.sort, v4);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v5,
                                                                       v6);
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
  v8 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v8 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v8->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v8->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v8),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__CheckPlayableMaterial(
        MaterialEventLogListViewManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  MaterialEventLogListViewObject_o *v11; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MaterialEventLogListViewItem_o *v15; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v17; // w23
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  __int64 v20; // x1
  struct MaterialEventLogListViewItem_Info_o *v21; // x8
  unsigned int v22; // w9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A568E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4A568E1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1B8880C(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1B8880C(0LL, v8);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v24.fields._current,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v11 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1B8880C(0LL, v10);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v10);
    v15 = Item;
    if ( !Item )
      sub_1B8880C(0LL, v13);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v17 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, 0LL);
      MaterialEventLogListViewObject__SetEnableSelect(v11, v17, v18);
      v21 = v15->fields._info_k__BackingField;
      if ( v17 )
      {
        if ( !v21 )
          sub_1B8880C(v19, v20);
        v22 = v21->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v21 )
          sub_1B8880C(v19, v20);
        v22 = v21->fields.flag | 5;
      }
      v21->fields.flag = v22;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v11, 1, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfos(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *syncRoot; // x19
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x11
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A568EB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A568EB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v16,
            Instance,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v17 = v16;
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v17,
                   (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v9 )
              break;
            if ( v17.fields._current )
            {
              v10 = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v17.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v10
                && (MaterialEventLogListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[v10 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                monitor = (Il2CppObject *)v17.fields._current[7].monitor;
                if ( monitor )
                {
                  if ( !v8 )
                    sub_1B8880C(v9, monitor);
                  items = v8->fields._items;
                  v13 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v8->fields._version;
                  if ( !items )
                    sub_1B8880C(v9, monitor);
                  size = v8->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v8,
                      monitor,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v15 = &items->obj.klass + size;
                    v8->fields._size = size + 1;
                    v15[4] = (Il2CppClass *)monitor;
                    sub_1B88554(v15 + 4, monitor);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( klass )
          {
            Instance = (System_Collections_Generic_List_object__o *)klass->vtable[36].methodPtr;
            if ( Instance )
            {
              *(_QWORD *)&Instance[3].fields._size = v8;
              sub_1B88554(&Instance[3].fields._size, v8);
              return;
            }
          }
        }
LABEL_35:
        sub_1B8880C(Instance, v4);
      }
    }
  }
}


void __fastcall MaterialEventLogListViewManager__CreateList(
        MaterialEventLogListViewManager_o *this,
        int32_t kind,
        System_Collections_Generic_List_MaterialEventLogListViewItem_Info__o *infos,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *Item; // x0
  __int64 v8; // x1
  int32_t size; // w8
  int v10; // w25
  int32_t i; // w22
  MaterialEventLogListViewItem_o *v12; // x23
  struct System_String_o *str; // x8
  _QWORD *v14; // x9
  __int64 ruby_low; // x10
  __int64 v16; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialEventLogListViewManager_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v25; // x20
  struct UIScrollView_o *v26; // x8
  UnityEngine_Object_o *v27; // x8
  __int64 v28; // x11
  UnityEngine_Object_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x0
  MaterialEventLogListViewManager_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x21
  struct UIScrollView_o *v33; // x8
  UnityEngine_Object_o *mPanel; // x20
  MaterialEventLogListViewManager_c *v35; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v38; // x0
  const MethodInfo *v39; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  struct ListViewSort_o *v41; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  UnityEngine_GameObject_o *v45; // x0
  MaterialEventLogListViewManager_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x21
  struct UIScrollView_o *v48; // x8
  UnityEngine_Object_o *v49; // x20
  const MethodInfo *v50; // x1
  bool v51; // w1

  if ( (byte_4A568DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UIScrollBar_TypeInfo);
    sub_1B885B0(&StringLiteral_11773/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/);
    byte_4A568DA = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_86;
  size = infos->fields._size;
  if ( size >= 4 )
    v10 = size + 1;
  else
    v10 = 4;
  if ( v10 >= 1 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v12 = (MaterialEventLogListViewItem_o *)sub_1B887FC(MaterialEventLogListViewItem_TypeInfo);
      MaterialEventLogListViewItem___ctor_31204336(v12, i, kind, 0LL, 0LL);
      if ( i < infos->fields._size )
      {
        Item = (struct MaterialEventLogListViewItem_Info_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)infos,
                                                               i,
                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !v12 )
          goto LABEL_86;
        v12->fields._info_k__BackingField = Item;
        sub_1B88554(&v12->fields._info_k__BackingField, Item);
        Item = v12->fields._info_k__BackingField;
        if ( !Item )
          goto LABEL_86;
        Item->fields.itm = v12;
        sub_1B88554(&Item->fields.itm, v12);
        Item = (struct MaterialEventLogListViewItem_Info_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)infos,
                                                               i,
                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !Item )
          goto LABEL_86;
        this->fields.issortButton = Item->fields.listChange;
      }
      Item = (struct MaterialEventLogListViewItem_Info_o *)this->fields.itemList;
      if ( !Item )
        goto LABEL_86;
      str = Item->fields.str;
      v14 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Item->fields.ruby);
      if ( !str )
        goto LABEL_86;
      ruby_low = SLODWORD(Item->fields.ruby);
      if ( (unsigned int)ruby_low >= LODWORD(str[1].klass) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          (Il2CppObject *)v12,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = (__int64)str + 8 * ruby_low;
        LODWORD(Item->fields.ruby) = ruby_low + 1;
        *(_QWORD *)(v16 + 32) = v12;
        sub_1B88554(v16 + 32, v12);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = MaterialEventLogListViewManager_TypeInfo;
  v20 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v19 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v19->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v20, *p_VL_LIST_POS_Y, 0LL);
    ListViewManager__SetArrangementPitchY(
      (ListViewManager_o *)this,
      MaterialEventLogListViewManager_TypeInfo->static_fields->VL_ARRANGEMENT_PY,
      0LL);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_86;
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( verticalScrollBar
      && (methodPtr_low = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(verticalScrollBar->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (UIScrollBar_c *)verticalScrollBar->klass->_2.typeHierarchy[methodPtr_low - 1] == UIScrollBar_TypeInfo )
        v25 = verticalScrollBar;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (struct MaterialEventLogListViewItem_Info_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_86;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
      v31 = MaterialEventLogListViewManager_TypeInfo;
      v32 = v30;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v31 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v32, v31->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
      Item = (struct MaterialEventLogListViewItem_Info_o *)v25[2].klass;
      if ( !Item )
        goto LABEL_86;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
      Item = (struct MaterialEventLogListViewItem_Info_o *)v25[2].monitor;
      if ( !Item )
        goto LABEL_86;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
    }
    v33 = this->fields.scrollView;
    if ( !v33 )
      goto LABEL_86;
    mPanel = (UnityEngine_Object_o *)v33->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0LL, 0LL) )
    {
      Item = (struct MaterialEventLogListViewItem_Info_o *)MaterialEventLogListViewManager_TypeInfo;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        Item = (struct MaterialEventLogListViewItem_Info_o *)MaterialEventLogListViewManager_TypeInfo;
      }
      if ( !mPanel )
        goto LABEL_86;
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))mPanel->klass[1]._2.genericContainerHandle)(
        mPanel,
        *(_QWORD *)&mPanel->klass[1]._2.instance_size,
        0.0,
        (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 24LL),
        (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 16LL),
        (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 20LL));
    }
    ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
    v35 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v35 = MaterialEventLogListViewManager_TypeInfo;
    }
    EventLogservantSortInfo = v35->static_fields->EventLogservantSortInfo;
    this->fields.sort = EventLogservantSortInfo;
    p_sort = &this->fields.sort;
    sub_1B88554(&this->fields.sort, EventLogservantSortInfo);
    Item = (struct MaterialEventLogListViewItem_Info_o *)this->fields.sort;
    if ( Item )
    {
      LODWORD(Item->fields.playLimitCountMessage) = 0;
      ListViewSort__Load((ListViewSort_o *)Item, 0LL);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v38,
                                                   v39);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Item = (struct MaterialEventLogListViewItem_Info_o *)UnityEngine_Object__op_Inequality(
                                                             (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                                             0LL,
                                                             0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_86;
        v41 = *p_sort;
        MaterialCollectionServantListViewManager->fields.sort = *p_sort;
        sub_1B88554(&MaterialCollectionServantListViewManager->fields.sort, v41);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = (struct MaterialEventLogListViewItem_Info_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11773/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/,
                                                             0LL);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)Item, 0LL);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v43);
        MaterialEventLogListViewManager__SortDummyData(this, v44);
        goto LABEL_83;
      }
    }
LABEL_86:
    sub_1B8880C(Item, v8);
  }
  GameObjectExtensions__SetLocalPositionY(v20, p_VL_LIST_POS_Y[7], 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v26 = this->fields.scrollView;
  if ( !v26 )
    goto LABEL_86;
  v27 = (UnityEngine_Object_o *)v26->fields.verticalScrollBar;
  if ( v27
    && (v28 = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28) )
  {
    if ( (UIScrollBar_c *)v27->klass->_2.typeHierarchy[v28 - 1] == UIScrollBar_TypeInfo )
      v29 = v27;
    else
      v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (struct MaterialEventLogListViewItem_Info_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_86;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
    v46 = MaterialEventLogListViewManager_TypeInfo;
    v47 = v45;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v46 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v47, v46->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    Item = (struct MaterialEventLogListViewItem_Info_o *)v29[2].klass;
    if ( !Item )
      goto LABEL_86;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    Item = (struct MaterialEventLogListViewItem_Info_o *)v29[2].monitor;
    if ( !Item )
      goto LABEL_86;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v48 = this->fields.scrollView;
  if ( !v48 )
    goto LABEL_86;
  v49 = (UnityEngine_Object_o *)v48->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    Item = (struct MaterialEventLogListViewItem_Info_o *)MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      Item = (struct MaterialEventLogListViewItem_Info_o *)MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v49 )
      goto LABEL_86;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v49->klass[1]._2.genericContainerHandle)(
      v49,
      *(_QWORD *)&v49->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 56LL),
      (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 48LL),
      (float)*(int *)(*(_QWORD *)&Item->fields.listIndex + 52LL));
  }
LABEL_83:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v51 = MaterialEventLogListViewManager__GetFilterCount(this, v50) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v51, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v50);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4A568D5 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    byte_4A568D5 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1B8880C(0LL, v1);
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
  struct ListViewSort_o *sort; // x1
  const MethodInfo *v10; // x1
  bool v11; // w1
  const MethodInfo *v12; // x1

  if ( (byte_4A568E4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568E4 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close_31234452(eventLogServantSortSelectMenu, 0LL, method);
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
    sort = this->fields.sort;
    MaterialCollectionServantListViewManager->fields.sort = sort;
    sub_1B88554(&MaterialCollectionServantListViewManager->fields.sort, sort);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
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
    sub_1B8880C(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_12:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4A568E2 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__);
    byte_4A568E2 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v6 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      v7);
    if ( !eventLogServantSortSelectMenu )
      sub_1B8880C(v8, v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v6, v10);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v5; // w21
  int32_t v6; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4A568E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    byte_4A568E3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v5,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( itemList[3].klass )
        v6 += MaterialEventLogListViewItem__IsItemMatchFilter(
                (MaterialEventLogListViewItem_o *)itemList,
                this->fields.sort,
                0LL);
      if ( size == ++v5 )
        return v6;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B8880C(itemList, method);
  }
  return 0;
}


PartyServantListViewItem_o *__fastcall MaterialEventLogListViewManager__GetItem(
        MaterialEventLogListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A568DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A568DB = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v3; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  bool v5; // w8
  __int64 methodPtr_low; // x10
  bool v7; // w8
  __int64 v8; // x19
  bool v9; // w8

  if ( (byte_4A568D7 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A568D7 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
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
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v7 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v8 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL);
      result = 0LL;
      if ( !v9 )
      {
        if ( v8 )
          return *(MaterialCollectionServantListViewManager_o **)(v8 + 560);
LABEL_22:
        sub_1B8880C(result, v3);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A568D6 & 1) == 0 )
  {
    sub_1B885B0(&MaterialEventLogListViewManager_TypeInfo);
    byte_4A568D6 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__49085148; // x0
  const MethodInfo *v5; // x1
  struct ListViewItemSeed_o *v6; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v8; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v10; // x19
  unsigned int v11; // w20

  if ( (byte_4A568EC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568EC = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
  {
    v6 = this->fields.seed;
    if ( !v6 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v6->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          parent,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
    {
      v8 = this->fields.seed;
      if ( !v8 )
        goto LABEL_19;
      ComponentsInChildren_object__49085148 = v8->fields.parent;
      if ( !ComponentsInChildren_object__49085148 )
        goto LABEL_19;
      ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                            ComponentsInChildren_object__49085148,
                                                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__49085148 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__49085148[1].klass;
      v10 = ComponentsInChildren_object__49085148;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= klass )
            sub_1B88814(ComponentsInChildren_object__49085148, v5);
          ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)*((_QWORD *)&v10[1].monitor + (int)v11);
          if ( !ComponentsInChildren_object__49085148 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__49085148,
            v5);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            return;
        }
LABEL_19:
        sub_1B8880C(ComponentsInChildren_object__49085148, v5);
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
  Il2CppObject *linkItem; // x19
  __int64 methodPtr_low; // x10
  void *monitor; // x20
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4A568E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1B885B0(&Method_MaterialEventLogListViewManager_OnClickListView__);
    byte_4A568E0 = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  monitor = linkItem[7].monitor;
  if ( monitor )
  {
    v7 = *((_DWORD *)monitor + 17);
    if ( (v7 & 1) == 0 )
    {
      v8 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8(Method_MaterialEventLogListViewManager_OnClickListView__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v7 = *((_DWORD *)monitor + 17);
    }
    if ( (v7 & 4) != 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    }
    else
    {
      ActionExtensions__Call_object_(
        *((System_Action_T__o **)monitor + 10),
        linkItem,
        (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
    }
  }
}


void __fastcall MaterialEventLogListViewManager__RequestListObject(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t v12; // w24
  const MethodInfo *v13; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v15; // x0
  Il2CppObject *v16; // x21
  float v17; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v24; // x21
  System_Action_o *v25; // x20

  if ( (byte_4A568DE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_1B885B0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__);
    sub_1B885B0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__);
    sub_1B885B0(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4A568DE = 1;
  }
  v7 = sub_1B887FC(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554(v7 + 16, this);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1B88554(v7 + 24, end_act);
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(this, v10);
  if ( !ObjectList )
    goto LABEL_25;
  v11 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v11,
                                                                  v12,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_31225760((MaterialEventLogListViewObject_o *)ObjectList, mode, 0LL, -1, v13);
      if ( ++v12 >= v11->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1B8880C(ObjectList, v9);
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
                         (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_33740384((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v24, 0LL);
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
    v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v16 = GameObjectExtensions__SafeGetComponent_object_(
            v15,
            (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v16 )
        goto LABEL_25;
      klass = (int)v16[4].klass;
      monitor = (int)v16[4].monitor;
      LODWORD(v16[5].klass) = -1027735552;
      HIDWORD(v16[4].monitor) = klass;
      HIDWORD(v16[5].klass) = monitor;
      v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v16, 580.0, v17, 0.0, v20, 0LL);
    }
    else
    {
      v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v7,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v16 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_33739440((SlideFadeObject_o *)v16, 580.0, v17, 0.0, v25, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w20
  bool v9; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4A568E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568E7 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v7 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v8 = 0;
    v9 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v7,
                                                                  v8,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0LL);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v9, 0LL);
      }
      if ( ++v8 >= v7->fields._size )
        return;
    }
LABEL_15:
    sub_1B8880C(ObjectList, v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  System_String_o **v4; // x9
  System_String_o **v5; // x20
  UnityEngine_Color_o v6; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A568E5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_453/*"#FE4545"*/);
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_436/*"#000000"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A568E5 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v4 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v4 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  v5 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_436/*"#000000"*/
     : (System_String_o **)&StringLiteral_453/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v4, 0LL);
  *(_QWORD *)&v6.fields.r = 0LL;
  *(_QWORD *)&v6.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v5, &v6, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1B8880C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v6, 0LL);
}


bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t mIsDoing_Slide; // w8
  __int64 v8; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v13; // x0
  System_Action_o *v14; // x2
  System_Action_o *v15; // x21
  System_Delegate_o *v16; // x0
  MaterialEventLogListViewManager_o *v17; // x0
  int32_t v18; // w1
  System_Action_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4A568DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__);
    byte_4A568DD = 1;
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
    sub_1B8880C(0LL, v8);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v11 = 2;
      goto LABEL_17;
    case 2:
      v11 = 3;
LABEL_17:
      v13 = this;
      goto LABEL_18;
    case 4:
      v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v16 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v15, 0LL);
      v14 = (System_Action_o *)v16;
      if ( v16 && (System_Action_c *)v16->klass != System_Action_TypeInfo )
      {
        v17 = (MaterialEventLogListViewManager_o *)sub_1B88ACC(v16);
        MaterialEventLogListViewManager__RequestListObject(v17, v18, v19, v20);
      }
      else
      {
        v11 = 2;
        v13 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v13, v11, v14, v10);
        result = 1;
      }
      break;
    default:
      v13 = this;
      v11 = 0;
LABEL_18:
      v14 = end_act;
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
  if ( (byte_4A568DC & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1B885B0(&MaterialEventLogListViewObject_TypeInfo);
    byte_4A568DC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_31225760(
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

  if ( (byte_4A568D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4A568D8 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B8880C(scrollView, method);
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
  sub_1B88554(&this->fields.sort, sort);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v5 = MaterialEventLogListViewManager__GetFilterCount(this, v4) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v5, 0LL);
  MaterialEventLogListViewManager__CreateInfos(this, v6);
}


void __fastcall MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4A568E8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A568E8 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_4A568DF & 1) == 0 )
  {
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A568DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0LL
    || (methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)methodPtr_low)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0LL )
  {
    sub_1B8880C(Instance, v3);
  }
  if ( element_class->fields.IsMaterialEventBack )
  {
    MyRoomControl__ValentineListChange(element_class, 0, v4);
    element_class->fields.IsMaterialEventBack = 0;
  }
}


void __fastcall MaterialEventLogListViewManager__SortAscendingOrder(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewSort_o *v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *sort; // x8
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  struct ListViewSort_o *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  bool v12; // w1
  const MethodInfo *v13; // x1

  if ( (byte_4A568E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568E6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v5,
                                                   v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        v9 = this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = v9;
        sub_1B88554(&MaterialCollectionServantListViewManager->fields.sort, v9);
      }
      v5 = this->fields.sort;
      if ( v5 )
      {
        ListViewSort__Save(v5, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v10);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetFocusItemIndex.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v12 = MaterialEventLogListViewManager__GetFilterCount(this, v11) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v12, 0LL);
        MaterialEventLogListViewManager__CreateInfos(this, v13);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(v5, v6);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w21
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  MaterialEventLogListViewManager_o *v12; // x1
  Il2CppClass **v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  const MethodInfo *v16; // x1
  int v17; // w9
  int v18; // w20
  int v19; // w8
  int v20; // w25
  int v21; // w21
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w26
  MaterialEventLogListViewItem_o *v24; // x0
  Il2CppObject *v25; // x22
  int32_t v26; // w1
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A568EA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
    this = (MaterialEventLogListViewManager_o *)sub_1B885B0(&MaterialEventLogListViewItem_TypeInfo);
    byte_4A568EA = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v7,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
        if ( !this )
          break;
        this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v7,
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v6 )
          break;
        items = v6->fields._items;
        v10 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        v11 = v6->fields._size;
        v12 = this;
        if ( (unsigned int)v11 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v6->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          this = (MaterialEventLogListViewManager_o *)sub_1B88554(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1B8880C(this, method);
  }
LABEL_18:
  if ( !v6 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v6,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v31;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v15,
          i.fields._current,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v15 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
    if ( !v15 )
      sub_1B8880C(0LL, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v16);
  if ( (int)this > 3 )
    v17 = 1;
  else
    v17 = 4 - (_DWORD)this;
  if ( v17 >= 1 )
  {
    v18 = -(int)this;
    if ( (int)this <= 3 )
      v19 = 3;
    else
      v19 = (int)this;
    v20 = ~v19;
    v21 = (_DWORD)this + 999;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v24 = (MaterialEventLogListViewItem_o *)sub_1B887FC(MaterialEventLogListViewItem_TypeInfo);
      v25 = (Il2CppObject *)v24;
      v26 = isAscendingOrder ? v21 : v18;
      MaterialEventLogListViewItem___ctor_31204336(v24, v26, 5, 0LL, 0LL);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_42;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v25,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v25;
        this = (MaterialEventLogListViewManager_o *)sub_1B88554(v30 + 32, v25);
      }
      --v18;
      ++v21;
    }
    while ( v20 != v18 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v2, method);
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
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A568D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A568D9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v3;
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  MaterialEventLogListViewManager_o *klass; // x20
  System_Action_o *v5; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4A568EE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1B885B0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__);
    byte_4A568EE = 1;
  }
  klass = (MaterialEventLogListViewManager_o *)v3[1].klass;
  if ( !klass )
    sub_1B8880C(this, method);
  klass->fields.mIsDoing_Slide = 0;
  v5 = (System_Action_o *)v3[2].klass;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v3[2].klass = (Il2CppClass *)v5;
    sub_1B88554(&v3[2], v5);
  }
  MaterialEventLogListViewManager__SetMode(klass, 0, v5, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}