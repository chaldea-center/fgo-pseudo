void __fastcall MaterialEventLogListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct MaterialEventLogListViewManager_StaticFields *static_fields; // x8
  ListViewSort_o *v9; // x19
  struct MaterialEventLogListViewManager_StaticFields *v10; // x0

  if ( (byte_4B1180D & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9048/*"MaterialCollectionServant6"*/, v6, v7);
    byte_4B1180D = 1;
  }
  static_fields = MaterialEventLogListViewManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->VL_LIST_POS_Y = 0xC2CC0000C1F00000LL;
  static_fields->VL_SCROLLBAR_POS_Y = 70.0;
  *(_OWORD *)&static_fields->VL_SCROLLBAR_HEIGHT = xmmword_BD2320;
  *(_QWORD *)&static_fields->NORMAL_LIST_POS_Y = 0xC2F00000C20C0000LL;
  static_fields->NORMAL_SCROLLBAR_POS_Y = 45.0;
  *(_OWORD *)&static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT = xmmword_BD2BA0;
  static_fields->NORMAL_PANEL_CENTER_Y = 0;
  v9 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v9, (System_String_o *)StringLiteral_9048/*"MaterialCollectionServant6"*/, 27, 1, 0LL);
  v10 = MaterialEventLogListViewManager_TypeInfo->static_fields;
  v10->EventLogservantSortInfo = v9;
  sub_1BCA784(&v10->EventLogservantSortInfo, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  struct UIScrollView_o *scrollView; // x8
  ListViewSort_o *v12; // x20

  if ( (byte_4B117F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v4, v5);
    byte_4B117F4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.mBoxCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BCA784(&this->fields.mBoxCollider, Component_object),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mBoxCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v7);
  }
  scrollView->fields.disableDragIfFits = 0;
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v7, v9, v10);
  ListViewSort___ctor(v12, 3, 1, 0LL);
  this->fields.sort = v12;
  sub_1BCA784(&this->fields.sort, v12);
}


void __fastcall MaterialEventLogListViewManager__Back(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MaterialEventLogListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v10; // x20
  MaterialEventLogListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *MaterialCollectionServantListViewManager; // x19
  MaterialEventLogListViewManager_c *v15; // x0
  ListViewSort_o *EventLogservantSortInfo; // x8

  v4 = this;
  if ( (byte_4B11809 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, method, v2);
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v5, v6);
    this = (MaterialEventLogListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B11809 = 1;
  }
  if ( !v4->fields.issortButton )
  {
    sort = v4->fields.sort;
    if ( !sort )
      goto LABEL_18;
    sort->fields.isAscendingOrder = 1;
  }
  v10 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, method, v2, v3);
  ListViewSort___ctor(v10, 3, 1, 0LL);
  v4->fields.sort = v10;
  v11 = (MaterialEventLogListViewManager_o *)sub_1BCA784(&v4->fields.sort, v10);
  MaterialCollectionServantListViewManager = (UnityEngine_Object_o *)MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                                       v11,
                                                                       v12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
  v15 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, method);
    v15 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v15->static_fields->EventLogservantSortInfo;
  if ( EventLogservantSortInfo )
  {
    if ( v15->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v15, method),
          (EventLogservantSortInfo = MaterialEventLogListViewManager_TypeInfo->static_fields->EventLogservantSortInfo) != 0LL) )
    {
      ListViewSort__Save(EventLogservantSortInfo, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  MaterialEventLogListViewObject_o *v19; // x21
  MaterialEventLogListViewItem_o *Item; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  MaterialEventLogListViewItem_o *v23; // x22
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  bool v25; // w23
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  __int64 v28; // x1
  struct MaterialEventLogListViewItem_Info_o *v29; // x8
  unsigned int v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B11801 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__,
      *(_QWORD *)&servantId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    byte_4B11801 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  objectList = this->fields.objectList;
  this->fields.selectedLimitCount = limitCount;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&servantId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v32.fields._current )
      sub_1BCAA3C(0LL, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v32.fields._current,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
    v19 = (MaterialEventLogListViewObject_o *)Component_object;
    if ( !Component_object )
      sub_1BCAA3C(0LL, v18);
    Item = MaterialEventLogListViewObject__GetItem((MaterialEventLogListViewObject_o *)Component_object, v18);
    v23 = Item;
    if ( !Item )
      sub_1BCAA3C(0LL, v21);
    info_k__BackingField = Item->fields._info_k__BackingField;
    if ( info_k__BackingField && info_k__BackingField->fields.svt_id == servantId )
    {
      v25 = MaterialEventLogListViewItem__CheckPlayableMaterial(Item, limitCount, v22);
      MaterialEventLogListViewObject__SetEnableSelect(v19, v25, v26);
      v29 = v23->fields._info_k__BackingField;
      if ( v25 )
      {
        if ( !v29 )
          sub_1BCAA3C(v27, v28);
        v30 = v29->fields.flag & 0xFFFFFFFA;
      }
      else
      {
        if ( !v29 )
          sub_1BCAA3C(v27, v28);
        v30 = v29->fields.flag | 5;
      }
      v29->fields.flag = v30;
    }
    else
    {
      MaterialEventLogListViewObject__SetEnableSelect(v19, 1, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall MaterialEventLogListViewManager__CreateInfos(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  System_Collections_Generic_List_object__o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *syncRoot; // x19
  __int64 v27; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *klass; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x11
  Il2CppObject *monitor; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1180B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo, v14, v15);
    sub_1BCA7E0(&MaterialEventLogListViewItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22, v23);
    byte_4B1180B = 1;
  }
  memset(&v42, 0, sizeof(v42));
  Instance = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  syncRoot = Instance->fields._syncRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
      {
        v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_MaterialEventLogListViewItem_Info__TypeInfo,
                                                             v30,
                                                             v31,
                                                             v32);
        System_Collections_Generic_List_object____ctor(
          v33,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info___ctor__);
        Instance = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            Instance,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v42 = v41;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v42,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v34 )
              break;
            if ( v42.fields._current )
            {
              v35 = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(v42.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)v35
                && (MaterialEventLogListViewItem_c *)v42.fields._current->klass->_2.typeHierarchy[v35 - 1] == MaterialEventLogListViewItem_TypeInfo )
              {
                monitor = (Il2CppObject *)v42.fields._current[7].monitor;
                if ( monitor )
                {
                  if ( !v33 )
                    sub_1BCAA3C(v34, monitor);
                  items = v33->fields._items;
                  v38 = Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__Add__;
                  ++v33->fields._version;
                  if ( !items )
                    sub_1BCAA3C(v34, monitor);
                  size = v33->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v33,
                      monitor,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = &items->obj.klass + size;
                    v33->fields._size = size + 1;
                    v40[4] = (Il2CppClass *)monitor;
                    sub_1BCA784(v40 + 4, monitor);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( klass )
          {
            Instance = (System_Collections_Generic_List_object__o *)klass[37].klass;
            if ( Instance )
            {
              *(_QWORD *)&Instance[3].fields._size = v33;
              sub_1BCA784(&Instance[3].fields._size, v33);
              return;
            }
          }
        }
LABEL_35:
        sub_1BCAA3C(Instance, v25);
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
  void *itemList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  int32_t size; // w8
  int v28; // w25
  int32_t i; // w22
  __int64 v30; // x23
  Il2CppObject **v31; // x24
  Il2CppObject *Item; // x0
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  _BOOL4 issortButton; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  MaterialEventLogListViewManager_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x20
  float *p_VL_LIST_POS_Y; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v46; // x20
  struct UIScrollView_o *v47; // x8
  UnityEngine_Object_o *v48; // x8
  __int64 v49; // x11
  UnityEngine_Object_o *v50; // x20
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  MaterialEventLogListViewManager_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x21
  struct UIScrollView_o *v55; // x8
  UnityEngine_Object_o *mPanel; // x20
  __int64 v57; // x1
  MaterialEventLogListViewManager_c *v58; // x0
  struct ListViewSort_o *EventLogservantSortInfo; // x1
  struct ListViewSort_o **p_sort; // x20
  MaterialEventLogListViewManager_o *v61; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  struct ListViewSort_o *v65; // x1
  UILabel_o *emptyMessageLabel; // x20
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  UnityEngine_GameObject_o *v69; // x0
  __int64 v70; // x1
  MaterialEventLogListViewManager_c *v71; // x8
  UnityEngine_GameObject_o *v72; // x21
  struct UIScrollView_o *v73; // x8
  UnityEngine_Object_o *v74; // x20
  const MethodInfo *v75; // x1
  bool v76; // w1

  if ( (byte_4B117FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind, infos);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&MaterialEventLogListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&UIScrollBar_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_11911/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, v21, v22);
    byte_4B117FA = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CheckSortButton((ListViewManager_o *)this, 0, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !infos )
    goto LABEL_85;
  size = infos->fields._size;
  if ( size >= 4 )
    v28 = size + 1;
  else
    v28 = 4;
  if ( v28 >= 1 )
  {
    for ( i = 0; i != v28; ++i )
    {
      v30 = sub_1BCAA2C(MaterialEventLogListViewItem_TypeInfo, v24, v25, v26);
      ListViewItem___ctor_41447164((ListViewItem_o *)v30, i, 0LL);
      *(_DWORD *)(v30 + 112) = kind;
      *(_QWORD *)(v30 + 120) = 0LL;
      v31 = (Il2CppObject **)(v30 + 120);
      sub_1BCA784(v30 + 120, 0LL);
      if ( i < infos->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)infos,
                 i,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        *v31 = Item;
        sub_1BCA784(v30 + 120, Item);
        itemList = *v31;
        if ( !*v31 )
          goto LABEL_85;
        *((_QWORD *)itemList + 11) = v30;
        sub_1BCA784((char *)itemList + 88, v30);
        itemList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)infos,
                     i,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
        if ( !itemList )
          goto LABEL_85;
        this->fields.issortButton = *((_BYTE *)itemList + 152);
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_85;
      v33 = *((_QWORD *)itemList + 2);
      v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*((_DWORD *)itemList + 7);
      if ( !v33 )
        goto LABEL_85;
      v35 = *((int *)itemList + 6);
      if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)itemList,
          (Il2CppObject *)v30,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * v35;
        *((_DWORD *)itemList + 6) = v35 + 1;
        *(_QWORD *)(v36 + 32) = v30;
        sub_1BCA784(v36 + 32, v30);
      }
    }
  }
  issortButton = this->fields.issortButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40 = MaterialEventLogListViewManager_TypeInfo;
  v41 = gameObject;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v39);
    v40 = MaterialEventLogListViewManager_TypeInfo;
  }
  p_VL_LIST_POS_Y = &v40->static_fields->VL_LIST_POS_Y;
  if ( issortButton )
  {
    GameObjectExtensions__SetLocalPositionY(v41, *p_VL_LIST_POS_Y, 0LL);
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
        v46 = verticalScrollBar;
      else
        v46 = 0LL;
    }
    else
    {
      v46 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    itemList = (void *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
    if ( ((unsigned __int8)itemList & 1) != 0 )
    {
      if ( !v46 )
        goto LABEL_85;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0LL);
      v53 = MaterialEventLogListViewManager_TypeInfo;
      v54 = v51;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v52);
        v53 = MaterialEventLogListViewManager_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v54, v53->static_fields->VL_SCROLLBAR_POS_Y, 0LL);
      itemList = v46[2].klass;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
      itemList = v46[2].monitor;
      if ( !itemList )
        goto LABEL_85;
      UIWidget__set_height(
        (UIWidget_o *)itemList,
        MaterialEventLogListViewManager_TypeInfo->static_fields->VL_SCROLLBAR_HEIGHT,
        0LL);
    }
    v55 = this->fields.scrollView;
    if ( !v55 )
      goto LABEL_85;
    mPanel = (UnityEngine_Object_o *)v55->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0LL, 0LL) )
    {
      itemList = MaterialEventLogListViewManager_TypeInfo;
      if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v24);
        itemList = MaterialEventLogListViewManager_TypeInfo;
      }
      if ( !mPanel )
        goto LABEL_85;
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))mPanel->klass[1]._2.genericContainerHandle)(
        mPanel,
        *(_QWORD *)&mPanel->klass[1]._2.instance_size,
        0.0,
        (float)*(int *)(*((_QWORD *)itemList + 23) + 24LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 16LL),
        (float)*(int *)(*((_QWORD *)itemList + 23) + 20LL));
    }
    ListViewManager__CheckSortButton((ListViewManager_o *)this, this->fields.issortButton, 0LL);
    v58 = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v57);
      v58 = MaterialEventLogListViewManager_TypeInfo;
    }
    EventLogservantSortInfo = v58->static_fields->EventLogservantSortInfo;
    this->fields.sort = EventLogservantSortInfo;
    p_sort = &this->fields.sort;
    sub_1BCA784(&this->fields.sort, EventLogservantSortInfo);
    itemList = this->fields.sort;
    if ( itemList )
    {
      *((_DWORD *)itemList + 32) = 0;
      ListViewSort__Load((ListViewSort_o *)itemList, 0LL);
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   v61,
                                                   v62);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
      itemList = (void *)UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                           0LL,
                           0LL);
      if ( ((unsigned __int8)itemList & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_85;
        v65 = *p_sort;
        MaterialCollectionServantListViewManager->fields.sort = *p_sort;
        sub_1BCA784(&MaterialCollectionServantListViewManager->fields.sort, v65);
      }
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      itemList = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SORT_FILTER_RESULT_EMPTY_NEW_LINE"*/, 0LL);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
        MaterialEventLogListViewManager__SetFilterButtonImage(this, v67);
        MaterialEventLogListViewManager__SortDummyData(this, v68);
        goto LABEL_82;
      }
    }
LABEL_85:
    sub_1BCAA3C(itemList, v24);
  }
  GameObjectExtensions__SetLocalPositionY(v41, p_VL_LIST_POS_Y[7], 0LL);
  ListViewManager__SetArrangementPitchY(
    (ListViewManager_o *)this,
    MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_ARRANGEMENT_PY,
    0LL);
  v47 = this->fields.scrollView;
  if ( !v47 )
    goto LABEL_85;
  v48 = (UnityEngine_Object_o *)v47->fields.verticalScrollBar;
  if ( v48
    && (v49 = LOBYTE(UIScrollBar_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v48->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v49) )
  {
    if ( (UIScrollBar_c *)v48->klass->_2.typeHierarchy[v49 - 1] == UIScrollBar_TypeInfo )
      v50 = v48;
    else
      v50 = 0LL;
  }
  else
  {
    v50 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  itemList = (void *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)itemList & 1) != 0 )
  {
    if ( !v50 )
      goto LABEL_85;
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0LL);
    v71 = MaterialEventLogListViewManager_TypeInfo;
    v72 = v69;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v70);
      v71 = MaterialEventLogListViewManager_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(v72, v71->static_fields->NORMAL_SCROLLBAR_POS_Y, 0LL);
    itemList = v50[2].klass;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_BACK_HEIGHT,
      0LL);
    itemList = v50[2].monitor;
    if ( !itemList )
      goto LABEL_85;
    UIWidget__set_height(
      (UIWidget_o *)itemList,
      MaterialEventLogListViewManager_TypeInfo->static_fields->NORMAL_SCROLLBAR_FORE_HEIGHT,
      0LL);
  }
  v73 = this->fields.scrollView;
  if ( !v73 )
    goto LABEL_85;
  v74 = (UnityEngine_Object_o *)v73->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
  {
    itemList = MaterialEventLogListViewManager_TypeInfo;
    if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v24);
      itemList = MaterialEventLogListViewManager_TypeInfo;
    }
    if ( !v74 )
      goto LABEL_85;
    ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, float, float, float, float))v74->klass[1]._2.genericContainerHandle)(
      v74,
      *(_QWORD *)&v74->klass[1]._2.instance_size,
      0.0,
      (float)*(int *)(*((_QWORD *)itemList + 23) + 56LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 48LL),
      (float)*(int *)(*((_QWORD *)itemList + 23) + 52LL));
  }
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( this->fields.issortButton )
  {
    v76 = MaterialEventLogListViewManager__GetFilterCount(this, v75) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v76, 0LL);
  }
  MaterialEventLogListViewManager__CreateInfos(this, v75);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
}


void __fastcall MaterialEventLogListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialEventLogListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4B117F5 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v1, v2);
    byte_4B117F5 = 1;
  }
  v3 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v1);
    v3 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1BCAA3C(0LL, v1);
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
  __int64 v8; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x21
  struct ListViewSort_o *sort; // x1
  const MethodInfo *v11; // x1
  bool v12; // w1
  const MethodInfo *v13; // x1

  if ( (byte_4B11804 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDecide, method);
    byte_4B11804 = 1;
  }
  eventLogServantSortSelectMenu = this->fields.eventLogServantSortSelectMenu;
  if ( !eventLogServantSortSelectMenu )
    goto LABEL_13;
  MaterialEventLogServantSortSelectMenu__Close_31807804(eventLogServantSortSelectMenu, 0LL, method);
  MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                               v6,
                                               v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCA784(&MaterialCollectionServantListViewManager->fields.sort, sort);
  }
  if ( isDecide )
  {
    MaterialEventLogListViewManager__SortDummyData(this, (const MethodInfo *)isDecide);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    v12 = MaterialEventLogListViewManager__GetFilterCount(this, v11) < 1;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v12, 0LL);
    eventLogServantSortSelectMenu = (MaterialEventLogServantSortSelectMenu_o *)this->fields.sort;
    if ( eventLogServantSortSelectMenu )
    {
      ListViewSort__Save((ListViewSort_o *)eventLogServantSortSelectMenu, 0LL);
      MaterialEventLogListViewManager__CreateInfos(this, v13);
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(eventLogServantSortSelectMenu, isDecide);
  }
LABEL_12:
  MaterialEventLogListViewManager__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall MaterialEventLogListViewManager__EventLogSortKind(
        MaterialEventLogListViewManager_o *this,
        MaterialEventLogServantSortSelectMenu_o *eventLogServantSortSelectMenu,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *sort; // x21
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B11802 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, eventLogServantSortSelectMenu, method);
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager_EndEventLogSortKind__, v6, v7);
    byte_4B11802 = 1;
  }
  if ( this->fields.isInput )
  {
    sort = this->fields.sort;
    v9 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                   MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                                   eventLogServantSortSelectMenu,
                                                                   method,
                                                                   v3);
    MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MaterialEventLogListViewManager_EndEventLogSortKind__,
      v10);
    if ( !eventLogServantSortSelectMenu )
      sub_1BCAA3C(v11, v12);
    MaterialEventLogServantSortSelectMenu__Open(eventLogServantSortSelectMenu, 0, sort, v9, v13);
  }
}


int32_t __fastcall MaterialEventLogListViewManager__GetFilterCount(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w22
  int32_t v10; // w21
  int32_t v11; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B11803 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4, v5);
    sub_1BCA7E0(&MaterialEventLogListViewItem_TypeInfo, v6, v7);
    byte_4B11803 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MaterialEventLogListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
      {
        break;
      }
      if ( itemList[3].klass )
        v11 += ((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, struct ListViewSort_o *, Il2CppMethodPointer))itemList->klass->vtable._5_set_Item.method)(
                 itemList,
                 this->fields.sort,
                 itemList->klass->vtable._6_IndexOf.methodPtr) & 1;
      if ( size == ++v10 )
        return v11;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCAA3C(itemList, method);
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
  __int64 v6; // x2
  PartyServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B117FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&PartyServantListViewItem_TypeInfo, v5, v6);
    byte_4B117FB = 1;
  }
  result = (PartyServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PartyServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialCollectionServantListViewManager_o *result; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x19
  __int64 v10; // x1
  bool v11; // w8
  __int64 methodPtr_low; // x10
  bool v13; // w8
  __int64 v14; // x19
  bool v15; // w8

  if ( (byte_4B117F7 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    byte_4B117F7 = 1;
  }
  result = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !result )
    goto LABEL_22;
  dropObjectList = result->fields.dropObjectList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)dropObjectList, 0LL, 0LL);
    result = 0LL;
    if ( !v13 )
    {
      if ( !dropObjectList )
        goto LABEL_22;
      v14 = *(_QWORD *)&dropObjectList[1].fields._size;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      result = 0LL;
      if ( !v15 )
      {
        if ( v14 )
          return *(MaterialCollectionServantListViewManager_o **)(v14 + 568);
LABEL_22:
        sub_1BCAA3C(result, v8);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  MaterialEventLogListViewManager_c *v3; // x0
  ListViewSort_o *EventLogservantSortInfo; // x0

  if ( (byte_4B117F6 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogListViewManager_TypeInfo, v1, v2);
    byte_4B117F6 = 1;
  }
  v3 = MaterialEventLogListViewManager_TypeInfo;
  if ( !MaterialEventLogListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewManager_TypeInfo, v1);
    v3 = MaterialEventLogListViewManager_TypeInfo;
  }
  EventLogservantSortInfo = v3->static_fields->EventLogservantSortInfo;
  if ( !EventLogservantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(EventLogservantSortInfo, 0LL);
}


void __fastcall MaterialEventLogListViewManager__InitializeObjectPosition(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *seed; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__49689332; // x0
  const MethodInfo *v8; // x1
  struct ListViewItemSeed_o *v9; // x8
  UnityEngine_Object_o *parent; // x20
  struct ListViewItemSeed_o *v11; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v13; // x19
  unsigned int v14; // w20

  if ( (byte_4B1180C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1180C = 1;
  }
  seed = (UnityEngine_Object_o *)this->fields.seed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(seed, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
  {
    v9 = this->fields.seed;
    if ( !v9 )
      goto LABEL_19;
    parent = (UnityEngine_Object_o *)v9->fields.parent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          parent,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
    {
      v11 = this->fields.seed;
      if ( !v11 )
        goto LABEL_19;
      ComponentsInChildren_object__49689332 = v11->fields.parent;
      if ( !ComponentsInChildren_object__49689332 )
        goto LABEL_19;
      ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                            ComponentsInChildren_object__49689332,
                                                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MaterialEventLogListViewObject___);
      if ( !ComponentsInChildren_object__49689332 )
        goto LABEL_19;
      klass = (int)ComponentsInChildren_object__49689332[1].klass;
      v13 = ComponentsInChildren_object__49689332;
      if ( klass >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= klass )
            sub_1BCAA44(ComponentsInChildren_object__49689332, v8);
          ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)*((_QWORD *)&v13[1].monitor + (int)v14);
          if ( !ComponentsInChildren_object__49689332 )
            break;
          MaterialEventLogListViewObject__InitPosition(
            (MaterialEventLogListViewObject_o *)ComponentsInChildren_object__49689332,
            v8);
          klass = (int)v13[1].klass;
          if ( (int)++v14 >= klass )
            return;
        }
LABEL_19:
        sub_1BCAA3C(ComponentsInChildren_object__49689332, v8);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *linkItem; // x19
  __int64 methodPtr_low; // x10
  void *monitor; // x20
  int v11; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B11800 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_MaterialEventLogListViewItem___, obj, method);
    sub_1BCA7E0(&MaterialEventLogListViewItem_TypeInfo, v4, v5);
    this = (MaterialEventLogListViewManager_o *)sub_1BCA7E0(
                                                  &Method_MaterialEventLogListViewManager_OnClickListView__,
                                                  v6,
                                                  v7);
    byte_4B11800 = 1;
  }
  if ( !obj
    || (linkItem = (Il2CppObject *)obj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewItem_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  monitor = linkItem[7].monitor;
  if ( monitor )
  {
    v11 = *((_DWORD *)monitor + 17);
    if ( (v11 & 1) == 0 )
    {
      v12 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BCA7F8(Method_MaterialEventLogListViewManager_OnClickListView__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      v11 = *((_DWORD *)monitor + 17);
    }
    if ( (v11 & 4) != 0 )
    {
      v14 = Method_MaterialEventLogListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_MaterialEventLogListViewManager_OnClickListView__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
    }
    else
    {
      ActionExtensions__Call_object_(
        *((System_Action_T__o **)monitor + 10),
        linkItem,
        (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_MaterialEventLogListViewItem___);
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
  __int64 v23; // x19
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_object__o *v27; // x22
  int32_t v28; // w24
  const MethodInfo *v29; // x4
  int32_t initMode; // w8
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  float v36; // s8
  int klass; // s0
  int monitor; // s1
  System_Action_o *v39; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  Il2CppObject *Component_object; // x20
  float IntpTime_AutoResume; // s8
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x21
  System_Action_o *v48; // x20

  if ( (byte_4B117FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, end_act);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v15, v16);
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__, v17, v18);
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__, v19, v20);
    sub_1BCA7E0(&MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, v21, v22);
    byte_4B117FE = 1;
  }
  v23 = sub_1BCAA2C(MaterialEventLogListViewManager___c__DisplayClass50_0_TypeInfo, *(_QWORD *)&mode, end_act, method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_25;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784(v23 + 16, this);
  *(_QWORD *)(v23 + 24) = end_act;
  sub_1BCA784(v23 + 24, end_act);
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(this, v26);
  if ( !ObjectList )
    goto LABEL_25;
  v27 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v27,
                                                                  v28,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MaterialEventLogListViewObject__Init_31799600((MaterialEventLogListViewObject_o *)ObjectList, mode, 0LL, -1, v29);
      if ( ++v28 >= v27->fields._size )
        goto LABEL_9;
    }
LABEL_25:
    sub_1BCAA3C(ObjectList, v25);
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
                         (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v23,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__2__,
      0LL);
    if ( !Component_object )
      goto LABEL_25;
    SlideFadeObject__SlideOut_34347584((SlideFadeObject_o *)Component_object, 580.0, IntpTime_AutoResume, 0.0, v47, 0LL);
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
    v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)ObjectList, 0LL);
    v33 = GameObjectExtensions__SafeGetComponent_object_(
            v31,
            (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
    v36 = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
    if ( this->fields.issortButton )
    {
      if ( !v33 )
        goto LABEL_25;
      klass = (int)v33[4].klass;
      monitor = (int)v33[4].monitor;
      LODWORD(v33[5].klass) = -1027735552;
      HIDWORD(v33[4].monitor) = klass;
      HIDWORD(v33[5].klass) = monitor;
      v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v34, v35);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v23,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__1__,
        0LL);
      SlideFadeObject__SlideSortIn((SlideFadeObject_o *)v33, 580.0, v36, 0.0, v39, 0LL);
    }
    else
    {
      v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v34, v35);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v23,
        Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
        0LL);
      if ( !v33 )
        goto LABEL_25;
      SlideFadeObject__SlideIn_34346640((SlideFadeObject_o *)v33, 580.0, v36, 0.0, v48, 0LL);
    }
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v23 + 24), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewManager__SetAllActiveWidget(
        MaterialEventLogListViewManager_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  int32_t v14; // w20
  bool v15; // w21
  __int64 v16; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B11807 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, isActive, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B11807 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MaterialEventLogListViewManager__get_ObjectList(
                                                              this,
                                                              (const MethodInfo *)isActive);
  if ( !ObjectList )
    goto LABEL_15;
  v13 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v14 = 0;
    v15 = isActive;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v13,
                                                                  v14,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)ObjectList,
                                                                  0LL);
      if ( !ObjectList )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ObjectList,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      ObjectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Component_object,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Component_object )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v15, 0LL);
      }
      if ( ++v14 >= v13->fields._size )
        return;
    }
LABEL_15:
    sub_1BCAA3C(ObjectList, v12);
  }
}


void __fastcall MaterialEventLogListViewManager__SetFilterButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *sort; // x0
  System_String_o **v11; // x9
  System_String_o **v12; // x20
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B11805 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_448/*"#FE4545"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_431/*"#000000"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v8, v9);
    byte_4B11805 = 1;
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_12;
  sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL);
  if ( !this->fields.filterSprite )
    goto LABEL_12;
  v11 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v11 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  v12 = ((unsigned __int8)sort & 1) != 0
      ? (System_String_o **)&StringLiteral_431/*"#000000"*/
      : (System_String_o **)&StringLiteral_448/*"#FE4545"*/;
  UISprite__set_spriteName(this->fields.filterSprite, *v11, 0LL);
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_ColorUtility__TryParseHtmlString(*v12, &v13, 0LL);
  sort = (ListViewSort_o *)this->fields.sortKindLabel;
  if ( !sort )
LABEL_12:
    sub_1BCAA3C(sort, method);
  UILabel__set_effectColor((UILabel_o *)sort, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewManager__SetMode(
        MaterialEventLogListViewManager_o *this,
        int32_t mode,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t mIsDoing_Slide; // w8
  __int64 v10; // x1
  UnityEngine_Collider_o *mBoxCollider; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  bool result; // w0
  MaterialEventLogListViewManager_o *v17; // x0
  System_Action_o *v18; // x2
  System_Action_o *v19; // x21
  System_Delegate_o *v20; // x0
  MaterialEventLogListViewManager_o *v21; // x0
  int32_t v22; // w1
  System_Action_o *v23; // x2
  const MethodInfo *v24; // x3

  if ( (byte_4B117FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, end_act);
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager__SetMode_b__49_0__, v7, v8);
    byte_4B117FD = 1;
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
    sub_1BCAA3C(0LL, v10);
  UnityEngine_Collider__set_enabled(mBoxCollider, this->fields.isInput, 0LL);
  switch ( mode )
  {
    case 1:
    case 3:
      v15 = 2;
      goto LABEL_17;
    case 2:
      v15 = 3;
LABEL_17:
      v17 = this;
      goto LABEL_18;
    case 4:
      v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MaterialEventLogListViewManager__SetMode_b__49_0__, 0LL);
      v20 = System_Delegate__Combine((System_Delegate_o *)end_act, (System_Delegate_o *)v19, 0LL);
      v18 = (System_Action_o *)v20;
      if ( v20 && (System_Action_c *)v20->klass != System_Action_TypeInfo )
      {
        v21 = (MaterialEventLogListViewManager_o *)sub_1BCACFC(v20);
        MaterialEventLogListViewManager__RequestListObject(v21, v22, v23, v24);
      }
      else
      {
        v15 = 2;
        v17 = this;
LABEL_19:
        MaterialEventLogListViewManager__RequestListObject(v17, v15, v18, v14);
        result = 1;
      }
      break;
    default:
      v17 = this;
      v15 = 0;
LABEL_18:
      v18 = end_act;
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
  if ( (byte_4B117FC & 1) == 0 )
  {
    this = (MaterialEventLogListViewManager_o *)sub_1BCA7E0(&MaterialEventLogListViewObject_TypeInfo, obj, item);
    byte_4B117FC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MaterialEventLogListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MaterialEventLogListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MaterialEventLogListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v6->fields.initMode == 2 )
    v8 = 3;
  else
    v8 = 2;
  MaterialEventLogListViewObject__Init_31799600(
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
  __int64 v3; // x2
  void *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4

  if ( (byte_4B117F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method, v3);
    byte_4B117F8 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (scrollView = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (scrollView = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)scrollView,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BCAA3C(scrollView, method);
  }
  v8.fields.x = *((float *)scrollView + 83);
  v8.fields.y = -y;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v8, 0LL);
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
  sub_1BCA784(&this->fields.sort, sort);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  v5 = MaterialEventLogListViewManager__GetFilterCount(this, v4) < 1;
  ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v5, 0LL);
  MaterialEventLogListViewManager__CreateInfos(this, v6);
}


void __fastcall MaterialEventLogListViewManager__SetSortButtonImage(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B11808 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B11808 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_34;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_30:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(sort, v17);
  }
}


void __fastcall MaterialEventLogListViewManager__SetValentineListDisplay(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  MyRoomControl_o *element_class; // x19

  if ( (byte_4B117FF & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B117FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[2].klass) == 0LL
    || (methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) < (unsigned int)methodPtr_low)
    || *(MyRoomRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo
    || (element_class = (MyRoomControl_o *)klass->_1.element_class) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *sort; // x8
  __int64 v11; // x1
  MaterialCollectionServantListViewManager_o *MaterialCollectionServantListViewManager; // x20
  struct ListViewSort_o *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  bool v16; // w1
  const MethodInfo *v17; // x1

  if ( (byte_4B11806 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialEventLogListViewManager_SortAscendingOrder__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11806 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_MaterialEventLogListViewManager_SortAscendingOrder__;
    if ( (*((_BYTE *)Method_MaterialEventLogListViewManager_SortAscendingOrder__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialEventLogListViewManager_SortAscendingOrder__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      sort->fields.isAscendingOrder ^= 1u;
      MaterialCollectionServantListViewManager = MaterialEventLogListViewManager__GetMaterialCollectionServantListViewManager(
                                                   (MaterialEventLogListViewManager_o *)v8,
                                                   v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      v8 = (struct ListViewSort_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)MaterialCollectionServantListViewManager,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( !MaterialCollectionServantListViewManager )
          goto LABEL_15;
        v13 = this->fields.sort;
        MaterialCollectionServantListViewManager->fields.sort = v13;
        sub_1BCA784(&MaterialCollectionServantListViewManager->fields.sort, v13);
      }
      v8 = this->fields.sort;
      if ( v8 )
      {
        ListViewSort__Save(v8, 0LL);
        MaterialEventLogListViewManager__SortDummyData(this, v14);
        ((void (__fastcall *)(MaterialEventLogListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
          this,
          this->klass->vtable._6_GetFocusItemIndex.methodPtr);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        v16 = MaterialEventLogListViewManager__GetFilterCount(this, v15) < 1;
        ListViewManager__SetEmptyMessageBase((ListViewManager_o *)this, v16, 0LL);
        MaterialEventLogListViewManager__CreateInfos(this, v17);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(v8, v9);
  }
}


void __fastcall MaterialEventLogListViewManager__SortDummyData(
        MaterialEventLogListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MaterialEventLogListViewManager_o *v4; // x19
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w21
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  MaterialEventLogListViewManager_o *v41; // x1
  Il2CppClass **v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_object__o *v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  int v48; // w9
  int v49; // w20
  int v50; // w8
  int v51; // w21
  int v52; // w25
  struct ListViewSort_o *sort; // x8
  _BOOL4 isAscendingOrder; // w27
  ListViewItem_o *v55; // x0
  ListViewItem_o *v56; // x22
  int32_t v57; // w1
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v61; // x8
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4B1180A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Remove__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewItem__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo, v25, v26);
    this = (MaterialEventLogListViewManager_o *)sub_1BCA7E0(&MaterialEventLogListViewItem_TypeInfo, v27, v28);
    byte_4B1180A = 1;
  }
  memset(&i, 0, sizeof(i));
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_42;
  size = itemList->fields._size;
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialEventLogListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem___ctor__);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ListViewItem__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  if ( size >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      this = (MaterialEventLogListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v36,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        this = (MaterialEventLogListViewManager_o *)v4->fields.itemList;
        if ( !this )
          break;
        this = (MaterialEventLogListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v36,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !v35 )
          break;
        items = v35->fields._items;
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v35->fields._version;
        if ( !items )
          break;
        v40 = v35->fields._size;
        v41 = this;
        if ( (unsigned int)v40 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + v40;
          v35->fields._size = v40 + 1;
          v42[4] = (Il2CppClass *)v41;
          this = (MaterialEventLogListViewManager_o *)sub_1BCA784(v42 + 4, v41);
        }
      }
      if ( size == ++v36 )
        goto LABEL_18;
    }
LABEL_42:
    sub_1BCAA3C(this, method);
  }
LABEL_18:
  if ( !v35 )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    v35,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v62;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        System_Collections_Generic_List_object___Remove(
          v44,
          i.fields._current,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_ListViewItem__Remove__) )
  {
    v44 = (System_Collections_Generic_List_object__o *)v4->fields.itemList;
    if ( !v44 )
      sub_1BCAA3C(0LL, v43);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  this = (MaterialEventLogListViewManager_o *)MaterialEventLogListViewManager__GetFilterCount(v4, v45);
  if ( (int)this > 3 )
    v48 = 1;
  else
    v48 = 4 - (_DWORD)this;
  if ( v48 >= 1 )
  {
    v49 = -(int)this;
    if ( (int)this <= 3 )
      v50 = 3;
    else
      v50 = (int)this;
    v51 = (_DWORD)this + 999;
    v52 = ~v50;
    do
    {
      sort = v4->fields.sort;
      if ( !sort )
        goto LABEL_42;
      isAscendingOrder = sort->fields.isAscendingOrder;
      v55 = (ListViewItem_o *)sub_1BCAA2C(MaterialEventLogListViewItem_TypeInfo, method, v46, v47);
      v56 = v55;
      v57 = isAscendingOrder ? v51 : v49;
      ListViewItem___ctor_41447164(v55, v57, 0LL);
      v56[1].monitor = 0LL;
      LODWORD(v56[1].klass) = 5;
      sub_1BCA784(&v56[1].monitor, 0LL);
      this = (MaterialEventLogListViewManager_o *)v4->fields.itemList;
      if ( !this )
        goto LABEL_42;
      v58 = *(_QWORD *)&this->fields.m_CachedPtr;
      v59 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v58 )
        goto LABEL_42;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v58 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v56,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = v58 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v61 + 32) = v56;
        this = (MaterialEventLogListViewManager_o *)sub_1BCA784(v61 + 32, v56);
      }
      --v49;
      ++v51;
    }
    while ( v52 != v49 );
  }
  MaterialEventLogListViewManager__InitializeObjectPosition(v4, method);
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

  if ( (byte_4B117F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B117F9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialEventLogListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialEventLogListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialEventLogListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_MaterialEventLogListViewObject__Add__;
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
  return (System_Collections_Generic_List_MaterialEventLogListViewObject__o *)v21;
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x2
  MaterialEventLogListViewManager_o *klass; // x20
  System_Action_o *v8; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1180E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MaterialEventLogListViewManager___c__DisplayClass50_0_o *)sub_1BCA7E0(
                                                                        &Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
                                                                        v5,
                                                                        v6);
    byte_4B1180E = 1;
  }
  klass = (MaterialEventLogListViewManager_o *)v4[1].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  klass->fields.mIsDoing_Slide = 0;
  v8 = (System_Action_o *)v4[2].klass;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v8,
      v4,
      Method_MaterialEventLogListViewManager___c__DisplayClass50_0__RequestListObject_b__3__,
      0LL);
    v4[2].klass = (Il2CppClass *)v8;
    sub_1BCA784(&v4[2], v8);
  }
  MaterialEventLogListViewManager__SetMode(klass, 0, v8, v3);
}


void __fastcall MaterialEventLogListViewManager___c__DisplayClass50_0___RequestListObject_b__3(
        MaterialEventLogListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}