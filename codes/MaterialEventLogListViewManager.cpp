void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v5; // x19
  struct MaterialEventLogListViewManager_StaticFields *v6; // x0

  if ( (byte_4BF8C5F & 1) == 0 )
  {
    sub_1C2E12C(&ListViewSort_TypeInfo, v1);
    sub_1C2E12C(&MaterialEventLogListViewManager_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_9103/*"MaterialCollectionServant6"*/, v3);
    byte_4BF8C5F = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_C05D30;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_C06560;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v5 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor_42114616(v5, (System_String_o *)StringLiteral_9103/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  v6 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v6->EventLogservantSortInfo = v5;
  sub_1C2E0D0(&v6->EventLogservantSortInfo);
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
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v7; // x20

  if ( (byte_4BF8C46 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    sub_1C2E12C(&ListViewSort_TypeInfo, v3);
    byte_4BF8C46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          gameObject,
                                                                          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        sub_1C2E0D0(&this->fields.mBoxCollider),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1C2E388(gameObject, v5);
  }
  scrollView->fields.disableDragIfFits = 0;
  v7 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor(v7, 3, 1, 0LL);
  this->fields.sort = v7;
  sub_1C2E0D0(&this->fields.sort);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v6; // x20
  MaterialEventLogListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v10; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v2 = this;
  if ( (byte_4BF8C5B & 1) == 0 )
  {
    sub_1C2E12C(&ListViewSort_TypeInfo, method);
    sub_1C2E12C(&MaterialEventLogListViewManager_TypeInfo, v3);
    this = (MaterialEventLogListViewManager_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BF8C5B = 1;
  }
  if ( !v2->fields.issortButton )
  {
    sort = v2->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v6 = (ListViewSort_o *)sub_1C2E378(ListViewSort_TypeInfo);
  ListViewSort___ctor(v6, 3, 1, 0LL);
  v2->fields.sort = v6;
  v7 = (MaterialEventLogListViewManager_o *)sub_1C2E0D0(&v2->fields.sort);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v7,
                                                                       v8);
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
      (MaterialCollectionServantListViewManager_o *)this,
      method);
  }
  v10 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v10 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v10->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_18:
    sub_1C2E388(this, method);
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
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v14; // x1
  MaterialEventLogListViewObject_o *v15; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  MaterialEventLogListViewItem_o *v19; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v21; // w23
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  __int64 v24; // x1
  struct MaterialEventLogListViewItem_Info_o *v25; // x8
  unsigned int v26; // w9
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BF8C53 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&servantId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    byte_4BF8C53 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1C2E388(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v28.fields._current )
      sub_1C2E388(0LL, v12);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v28.fields._current,
                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v15 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1C2E388(0LL, v14);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v14);
    v19 = Item;
    if ( !Item )
      sub_1C2E388(0LL, v17);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v21 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v18);
      MaterialEventLogListViewObject__SetEnableSelect(v15, v21, v22);
      v25 = v19->fields._info_k__BackingField;
      if ( v21 )
      {
        if ( !v25 )
          sub_1C2E388(v23, v24);
        v26 = v25->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v25 )
          sub_1C2E388(v23, v24);
        v26 = v25->fields.flag | 5;
      }
      v25->fields.flag = v26;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v15, 1, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v14; // x1
  Il2CppObject *syncRoot; // x19
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *klass; // x19
  System_Collections_Generic_List_object__o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x11
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BF8C5D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v8);
    sub_1C2E12C(&MaterialEventLogListViewItem_TypeInfo, v9);
    sub_1C2E12C(&MyRoomRootComponent_TypeInfo, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    byte_4BF8C5D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      klass = (UnityEngine_Object_o *)syncRoot[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
      {
        v18 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v26,
            Instance,
            (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v27 = v26;
          while ( 1 )
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v27,
                    (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v19 )
              break;
            if ( v27.fields._current )
            {
              v20 = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v27.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v20
                && (MaterialEventLogListViewItem_c *)v27.fields._current->klass->_2.typeHierarchy[v20 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                monitor = (Il2CppObject *)v27.fields._current[7].monitor;
                if ( monitor )
                {
                  if ( !v18 )
                    sub_1C2E388(v19, monitor);
                  items = v18->fields._items;
                  v23 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v18->fields._version;
                  if ( !items )
                    sub_1C2E388(v19, monitor);
                  size = v18->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v18,
                      monitor,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v25 = &items->obj.klass + size;
                    v18->fields._size = size + 1;
                    v25[4] = (Il2CppClass *)monitor;
                    sub_1C2E0D0(v25 + 4);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( klass )
          {
            Instance = (System_Collections_Generic_List_object__o *)klass[37].klass;
            if ( Instance )
            {
              *(_QWORD *)&Instance[3].fields._size = v18;
              sub_1C2E0D0(&Instance[3].fields._size);
              return;
            }
          }
        }
LABEL_35:
        sub_1C2E388(Instance, v14);
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
  int32_t size; // w8
  int v18; // w25
  int32_t i; // w22
  __int64 v20; // x23
  Il2CppObject **v21; // x24
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  MaterialEventLogListViewManager_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v34; // x20
  struct UIScrollView_o *v35; // x8
  UnityEngine_Object_o *v36; // x8
  __int64 v37; // x11
  UnityEngine_Object_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x0
  MaterialEventLogListViewManager_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x21
  struct UIScrollView_o *v42; // x8
  UnityEngine_Object_o *mPanel; // x20
  MaterialEventLogListViewManager_c *v44; // x0
  MaterialEventLogListViewManager_o *v45; // x0
  const MethodInfo *v46; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  MaterialEventLogListViewManager_c *v52; // x8
  UnityEngine_GameObject_o *v53; // x21
  struct UIScrollView_o *v54; // x8
  UnityEngine_Object_o *v55; // x20
  const MethodInfo *v56; // x1
  bool v57; // w1

  if ( (byte_4BF8C4C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v8);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&MaterialEventLogListViewItem_TypeInfo, v10);
    sub_1C2E12C(&MaterialEventLogListViewManager_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&UIScrollBar_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_11988/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v14);
    byte_4BF8C4C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_85;
  size = infos->fields._size;
  if ( size >= 4 )
    v18 = size + 1;
  else
    v18 = 4;
  if ( v18 >= 1 )
  {
    for ( i = 0; i != v18; ++i )
    {
      v20 = sub_1C2E378(MaterialEventLogListViewItem_TypeInfo);
      ListViewItem___ctor_42081352((ListViewItem_o *)v20, i, 0LL);
      *(_DWORD *)(v20 + 112) = kind;
      *(_QWORD *)(v20 + 120) = 0LL;
      v21 = (Il2CppObject **)(v20 + 120);
      sub_1C2E0D0(v20 + 120);
      if ( i < infos->fields._size )
      {
        *v21 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        sub_1C2E0D0(v20 + 120);
        Item = *v21;
        if ( !*v21 )
          goto LABEL_85;
        *((_QWORD *)Item + 11) = v20;
        sub_1C2E0D0((char *)Item + 88);
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !Item )
          goto LABEL_85;
        this->fields.issortButton = *((_BYTE *)Item + 152);
      }
      Item = this->fields.itemList;
      if ( !Item )
        goto LABEL_85;
      v22 = *((_QWORD *)Item + 2);
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)Item + 7);
      if ( !v22 )
        goto LABEL_85;
      v24 = *((int *)Item + 6);
      if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          (Il2CppObject *)v20,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * v24;
        *((_DWORD *)Item + 6) = v24 + 1;
        *(_QWORD *)(v25 + 32) = v20;
        sub_1C2E0D0(v25 + 32);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28 = MaterialEventLogListViewManager_TypeInfo;
  v29 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v28 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v28->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v29, *p_VL_LIST_POS_Y, 0LL);
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
        v34 = verticalScrollBar;
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (void *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_85;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      v40 = MaterialEventLogListViewManager_TypeInfo;
      v41 = v39;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
        v40 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v41, v40->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
      Item = v34[2].klass;
      if ( !Item )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
      Item = v34[2].monitor;
      if ( !Item )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)Item,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
    }
    v42 = this->fields.scrollView;
    if ( !v42 )
      goto LABEL_85;
    mPanel = (UnityEngine_Object_o *)v42->fields.mPanel;
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
    v44 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v44 = MaterialEventLogListViewManager_TypeInfo;
    }
    this->fields.sort = v44->static_fields->EventLogservantSortInfo;
    sub_1C2E0D0(&this->fields.sort);
    Item = this->fields.sort;
    if ( Item )
    {
      *((_DWORD *)Item + 32) = 0;
      ListViewSort__Load((ListViewSort_o *)Item, 0LL);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v45,
                                                   v46);
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
        sub_1C2E0D0(&MaterialCollectionServantListViewManager->fields.sort);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Item = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)Item, 0LL);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v49);
        MaterialEventLogListViewManager__SortDummyData(this, v50);
        goto LABEL_82;
      }
    }
LABEL_85:
    sub_1C2E388(Item, v16);
  }
  GameObjectExtensions__SetLocalPositionY(v29, p_VL_LIST_POS_Y[7], 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v35 = this->fields.scrollView;
  if ( !v35 )
    goto LABEL_85;
  v36 = (UnityEngine_Object_o *)v35->fields.verticalScrollBar;
  if ( v36
    && (v37 = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v36->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v37) )
  {
    if ( (UIScrollBar_c *)v36->klass->_2.typeHierarchy[v37 - 1] == UIScrollBar_TypeInfo )
      v38 = v36;
    else
      v38 = 0LL;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (void *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_85;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
    v52 = MaterialEventLogListViewManager_TypeInfo;
    v53 = v51;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      v52 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v53, v52->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    Item = v38[2].klass;
    if ( !Item )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    Item = v38[2].monitor;
    if ( !Item )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)Item,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v54 = this->fields.scrollView;
  if ( !v54 )
    goto LABEL_85;
  v55 = (UnityEngine_Object_o *)v54->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    Item = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
      Item = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v55 )
      goto LABEL_85;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v55->klass[1]._2.genericContainerHandle)(
      v55,
      *(_QWORD *)&v55->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)Item + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)Item + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)Item + 23) + 52LL));
  }
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v57 = MaterialEventLogListViewManager__GetFilterCount(this, v56) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v57, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v56);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialEventLogListViewManager_c *v2; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4BF8C47 & 1) == 0 )
  {
    sub_1C2E12C(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4BF8C47 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1C2E388(0LL, v1);
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
  bool v10; // w1
  const MethodInfo *v11; // x1

  if ( (byte_4BF8C56 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isDecide);
    byte_4BF8C56 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close(eventLogServantSortSelectMenu, 0LL);
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
    sub_1C2E0D0(&MaterialCollectionServantListViewManager->fields.sort);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v10 = MaterialEventLogListViewManager__GetFilterCount(this, v9) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v10, 0LL);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfos(this, v11);
      goto LABEL_12;
    }
LABEL_13:
    sub_1C2E388(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_12:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BF8C54 & 1) == 0 )
  {
    sub_1C2E12C(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu);
    sub_1C2E12C(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v5);
    byte_4BF8C54 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1C2E378(MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      0LL);
    if ( !eventLogServantSortSelectMenu )
      sub_1C2E388(v8, v9);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v7, 0LL);
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

  if ( (byte_4BF8C55 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v3);
    sub_1C2E12C(&MaterialEventLogListViewItem_TypeInfo, v4);
    byte_4BF8C55 = 1;
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
                                                                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2E388(itemList, method);
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

  if ( (byte_4BF8C4D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C2E12C(&PartyServantListViewItem_TypeInfo, v5);
    byte_4BF8C4D = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  bool v7; // w8
  __int64 methodPtr_low; // x10
  bool v9; // w8
  __int64 v10; // x19
  bool v11; // w8

  if ( (byte_4BF8C49 & 1) == 0 )
  {
    sub_1C2E12C(&MyRoomRootComponent_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v2);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4BF8C49 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
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
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v10 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      result = 0LL;
      if ( !v11 )
      {
        if ( v10 )
          return *(MaterialCollectionServantListViewManager_o **)(v10 + 568);
LABEL_22:
        sub_1C2E388(result, v5);
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
    sub_1C2E388(0LL, method);
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

  if ( (byte_4BF8C48 & 1) == 0 )
  {
    sub_1C2E12C(&MaterialEventLogListViewManager_TypeInfo, v1);
    byte_4BF8C48 = 1;
  }
  v2 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo);
    v2 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v2->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1C2E388(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__50476848; // x0
  const MethodInfo *v6; // x1
  struct ListViewItemSeed_o *v7; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v9; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x19
  unsigned int v12; // w20

  if ( (byte_4BF8C5E & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4BF8C5E = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__50476848 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__50476848 & 1) != 0 )
  {
    v7 = this->fields.seed;
    if ( !v7 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v7->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__50476848 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          parent,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__50476848 & 1) != 0 )
    {
      v9 = this->fields.seed;
      if ( !v9 )
        goto LABEL_19;
      ComponentsInChildren_object__50476848 = v9->fields.parent;
      if ( !ComponentsInChildren_object__50476848 )
        goto LABEL_19;
      ComponentsInChildren_object__50476848 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50476848(
                                                                            ComponentsInChildren_object__50476848,
                                                                            (const MethodInfo_3023730 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__50476848 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__50476848[1].klass;
      v11 = ComponentsInChildren_object__50476848;
      if ( klass >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= klass )
            sub_1C2E390(ComponentsInChildren_object__50476848, v6);
          ComponentsInChildren_object__50476848 = (UnityEngine_GameObject_o *)*((_QWORD *)&v11[1].monitor + (int)v12);
          if ( !ComponentsInChildren_object__50476848 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__50476848,
            v6);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            return;
        }
LABEL_19:
        sub_1C2E388(ComponentsInChildren_object__50476848, v6);
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

  if ( (byte_4BF8C52 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj);
    sub_1C2E12C(&MaterialEventLogListViewItem_TypeInfo, v4);
    this = (MaterialEventLogListViewManager_o *)sub_1C2E12C(
                                                  &Method_MaterialEventLogListViewManager_OnClickListView__,
                                                  v5);
    byte_4BF8C52 = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  monitor = linkItem[7].monitor;
  if ( monitor )
  {
    v9 = *((_DWORD *)monitor + 17);
    if ( (v9 & 1) == 0 )
    {
      v10 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C2E144(Method_MaterialEventLogListViewManager_OnClickListView__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C2E110(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      v9 = *((_DWORD *)monitor + 17);
    }
    if ( (v9 & 4) != 0 )
    {
      v12 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C2E144(Method_MaterialEventLogListViewManager_OnClickListView__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C2E110(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0, 0LL);
    }
    else
    {
      ActionExtensions__Call_object_(
        *((System_Action_T__o **)monitor + 10),
        linkItem,
        (const MethodInfo_2F23FA0 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w24
  const MethodInfo *v21; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *v24; // x21
  float v25; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  System_Action_o *v32; // x21
  System_Action_o *v33; // x20

  if ( (byte_4BF8C50 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v9);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    sub_1C2E12C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v11);
    sub_1C2E12C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v12);
    sub_1C2E12C(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v13);
    sub_1C2E12C(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v14);
    byte_4BF8C50 = 1;
  }
  v15 = sub_1C2E378(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C2E0D0(v15 + 16);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_1C2E0D0(v15 + 24);
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(this, v18);
  if ( !ObjectList )
    goto LABEL_25;
  v19 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v19,
                                                                  v20,
                                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_32226344((MaterialEventLogListViewObject_o *)ObjectList, mode, 0LL, -1, v21);
      if ( ++v20 >= v19->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1C2E388(ObjectList, v17);
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
                         (const MethodInfo_30245F4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v32 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v15,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_34874328((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v32, 0LL);
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
    v23 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v24 = GameObjectExtensions__SafeGetComponent_object_(
            v23,
            (const MethodInfo_30245F4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v24 )
        goto LABEL_25;
      klass = (int)v24[4].klass;
      monitor = (int)v24[4].monitor;
      LODWORD(v24[5].klass) = -1027735552;
      HIDWORD(v24[4].monitor) = klass;
      HIDWORD(v24[5].klass) = monitor;
      v28 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v24, 580.0, v25, 0.0, v28, 0LL);
    }
    else
    {
      v33 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v15,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v24 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_34873384((SlideFadeObject_o *)v24, 580.0, v25, 0.0, v33, 0LL);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w20
  bool v12; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4BF8C59 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BF8C59 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v10 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v11 = 0;
    v12 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v10,
                                                                  v11,
                                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0LL);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v12, 0LL);
      }
      if ( ++v11 >= v10->fields._size )
        return;
    }
LABEL_15:
    sub_1C2E388(ObjectList, v9);
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

  if ( (byte_4BF8C57 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_429/*"#FE4545"*/, method);
    sub_1C2E12C(&StringLiteral_17819/*"btn_filter_on"*/, v3);
    sub_1C2E12C(&StringLiteral_412/*"#000000"*/, v4);
    sub_1C2E12C(&StringLiteral_17818/*"btn_filter"*/, v5);
    byte_4BF8C57 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v7 = (System_String_o **)&StringLiteral_17818/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v7 = (System_String_o **)&StringLiteral_17819/*"btn_filter_on"*/;
  v8 = ((unsigned __int8)sort & 1) != 0
     ? (System_String_o **)&StringLiteral_412/*"#000000"*/
     : (System_String_o **)&StringLiteral_429/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v7, 0LL);
  *(_QWORD *)&v9.fields.r = 0LL;
  *(_QWORD *)&v9.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v8, &v9, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1C2E388(sort, method);
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
  __int64 v9; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v14; // x0
  System_Action_o *v15; // x2
  System_Action_o *v16; // x21
  System_Delegate_o *v17; // x0
  MaterialEventLogListViewManager_o *v18; // x0
  int32_t v19; // w1
  System_Action_o *v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_4BF8C4F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C2E12C(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7);
    byte_4BF8C4F = 1;
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
    sub_1C2E388(0LL, v9);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v12 = 2;
      goto LABEL_17;
    case 2:
      v12 = 3;
LABEL_17:
      v14 = this;
      goto LABEL_18;
    case 4:
      v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v17 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v16, 0LL);
      v15 = (System_Action_o *)v17;
      if ( v17 && (System_Action_c *)v17->klass != System_Action_TypeInfo )
      {
        v18 = (MaterialEventLogListViewManager_o *)sub_1C2E648(v17);
        MaterialEventLogListViewManager__RequestListObject(v18, v19, v20, v21);
      }
      else
      {
        v12 = 2;
        v14 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v14, v12, v15, v11);
        result = 1;
      }
      break;
    default:
      v14 = this;
      v12 = 0;
LABEL_18:
      v15 = end_act;
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
  if ( (byte_4BF8C4E & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1C2E12C(&MaterialEventLogListViewObject_TypeInfo, obj);
    byte_4BF8C4E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_32226344(
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

  if ( (byte_4BF8C4A & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    byte_4BF8C4A = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1C2E388(scrollView, method);
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
  sub_1C2E0D0(&this->fields.sort);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4BF8C5A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_17849/*"btn_sort_up"*/, v3);
    sub_1C2E12C(&StringLiteral_17940/*"btn_txt_up"*/, v4);
    sub_1C2E12C(&StringLiteral_17893/*"btn_txt_new"*/, v5);
    sub_1C2E12C(&StringLiteral_17883/*"btn_txt_down"*/, v6);
    sub_1C2E12C(&StringLiteral_17900/*"btn_txt_old"*/, v7);
    sub_1C2E12C(&StringLiteral_17846/*"btn_sort_down"*/, v8);
    byte_4BF8C5A = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17900/*"btn_txt_old"*/ : &StringLiteral_17893/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17846/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17849/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17940/*"btn_txt_up"*/ : &StringLiteral_17883/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17849/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17846/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C2E388(sort, v10);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_4BF8C51 & 1) == 0 )
  {
    sub_1C2E12C(&MyRoomRootComponent_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BF8C51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0LL
    || (methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)methodPtr_low)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0LL )
  {
    sub_1C2E388(Instance, v4);
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

  if ( (byte_4BF8C58 & 1) == 0 )
  {
    sub_1C2E12C(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4BF8C58 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2E144(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
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
        sub_1C2E0D0(&MaterialCollectionServantListViewManager->fields.sort);
      }
      v6 = this->fields.sort;
      if ( v6 )
      {
        ListViewSort__Save(v6, 0LL);
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
    sub_1C2E388(v6, v7);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  MaterialEventLogListViewManager_o *v2; // x19
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
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w21
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  MaterialEventLogListViewManager_o *v24; // x1
  Il2CppClass **v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *v27; // x0
  const MethodInfo *v28; // x1
  int v29; // w9
  int v30; // w20
  int v31; // w8
  int v32; // w21
  int v33; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v36; // x0
  ListViewItem_o *v37; // x22
  int32_t v38; // w1
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BF8C5C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_ListViewItem__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v13);
    this = (MaterialEventLogListViewManager_o *)sub_1C2E12C(&MaterialEventLogListViewItem_TypeInfo, v14);
    byte_4BF8C5C = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v19,
                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
                                                      v19,
                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v18 )
          break;
        items = v18->fields._items;
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        v23 = v18->fields._size;
        v24 = this;
        if ( (unsigned int)v23 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)this,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + v23;
          v18->fields._size = v23 + 1;
          v25[4] = (Il2CppClass *)v24;
          this = (MaterialEventLogListViewManager_o *)sub_1C2E0D0(v25 + 4);
        }
      }
      if ( size == ++v19 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1C2E388(this, method);
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    v18,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v43;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v27,
          i.fields._current,
          (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v27 = (System_Collections_Generic_List_object__o *)v2->fields.itemList;
    if ( !v27 )
      sub_1C2E388(0LL, v26);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v2, v28);
  if ( (int)this > 3 )
    v29 = 1;
  else
    v29 = 4 - (_DWORD)this;
  if ( v29 >= 1 )
  {
    v30 = -(int)this;
    if ( (int)this <= 3 )
      v31 = 3;
    else
      v31 = (int)this;
    v32 = (_DWORD)this + 999;
    v33 = ~v31;
    do
    {
      sort = v2->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v36 = (ListViewItem_o *)sub_1C2E378(MaterialEventLogListViewItem_TypeInfo);
      v37 = v36;
      v38 = isAscendingOrder ? v32 : v30;
      ListViewItem___ctor_42081352(v36, v38, 0LL);
      v37[1].monitor = 0LL;
      LODWORD(v37[1].klass) = 5;
      sub_1C2E0D0(&v37[1].monitor);
      this = (MaterialEventLogListViewManager_o *)v2->fields.itemList;
      if ( !this )
        goto LABEL_42;
      v39 = *(_QWORD *)&this->fields.m_CachedPtr;
      v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v39 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v37,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v42 + 32) = v37;
        this = (MaterialEventLogListViewManager_o *)sub_1C2E0D0(v42 + 32);
      }
      --v30;
      ++v32;
    }
    while ( v33 != v30 );
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

  if ( (byte_4BF8C4B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4BF8C4B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C2E388(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C2E388(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C2E388(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C2E0D0(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v11;
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
    sub_1C2E388(0LL, method);
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
    sub_1C2E388(0LL, method);
  _4__this->fields.mIsDoing_Slide = 0;
  MaterialEventLogListViewManager__SetMode(_4__this, 2, this->fields.end_act, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__2(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  MaterialEventLogListViewManager_o *klass; // x20
  System_Action_o *v6; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4BF8C60 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1C2E12C(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v4);
    byte_4BF8C60 = 1;
  }
  klass = (MaterialEventLogListViewManager_o *)v3[1].klass;
  if ( !klass )
    sub_1C2E388(this, method);
  klass->fields.mIsDoing_Slide = 0;
  v6 = (System_Action_o *)v3[2].klass;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      v3,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v3[2].klass = (Il2CppClass *)v6;
    sub_1C2E0D0(&v3[2]);
  }
  MaterialEventLogListViewManager__SetMode(klass, 0, v6, v2);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}