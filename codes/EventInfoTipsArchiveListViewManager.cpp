void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_49BCEF5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo, v3);
    byte_49BCEF5 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6);
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__Awake(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  void *mainInfo; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_int__o *v36; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t v41; // w24
  __int64 v42; // x26
  const MethodInfo *v43; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v46; // x27
  Il2CppObject *object; // x0
  Il2CppObject *monitor; // x25
  Il2CppObject *v49; // x27
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int v52; // w8
  EventInfoTipsArchiveListViewObject_o *v53; // x25
  bool v54; // w26
  const MethodInfo *v55; // x5
  float v56; // s0
  const MethodInfo *v57; // x1
  int32_t Size; // w0
  int v59; // w8
  int v60; // w26
  float v61; // s10
  int32_t layer; // w0
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x2
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  const MethodInfo *v71; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v73; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v76; // x23
  EventDelegate_Callback_o *v77; // x22
  struct UIScrollBar_o *v78; // x8
  System_Collections_Generic_List_EventDelegate__o *v79; // x21
  EventDelegate_Callback_o *v80; // x22
  struct UIScrollBar_o *v81; // x8
  System_Collections_Generic_List_EventDelegate__o *v82; // x19
  EventDelegate_Callback_o *v83; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-74h]
  System_Nullable_Vector3__o v85; // 0:x3.16
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BCEEC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, *(_QWORD *)&tabKind);
    sub_1B4CF90(&EventDelegate_Callback_TypeInfo, v9);
    sub_1B4CF90(&EventDelegate_TypeInfo, v10);
    sub_1B4CF90(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__, v11);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v17);
    sub_1B4CF90(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v18);
    sub_1B4CF90(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__, v19);
    sub_1B4CF90(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo, v20);
    sub_1B4CF90(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__, v21);
    sub_1B4CF90(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v22);
    sub_1B4CF90(&Method_UIScrollView_OnScrollBar__, v23);
    byte_49BCEEC = 1;
  }
  v24 = sub_1B4D1DC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_45;
  *(_QWORD *)(v24 + 16) = scrollAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 16), (int32_t)scrollAction, v27, v28);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v29);
  this->fields.mainInfo = item;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)item, v30, v31);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_45;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, v32);
  if ( IdList && this->fields.viewObjectInfoList )
  {
    v36 = IdList;
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v34);
      byte_49B5361 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v36, this->fields.mainInfo, v35);
    if ( v36->fields._size >= 1 )
    {
      v41 = 0;
      do
      {
        v42 = sub_1B4D1DC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v42, 0LL);
        mainInfo = (void *)System_Collections_Generic_List_int___get_Item(
                             v36,
                             v41,
                             (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v42 )
          goto LABEL_45;
        v26 = (unsigned int)mainInfo;
        *(_DWORD *)(v42 + 16) = (_DWORD)mainInfo;
        if ( !item )
          goto LABEL_45;
        StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)mainInfo, v43);
        if ( StateData )
        {
          if ( StateData->fields.index >= 1 )
          {
            viewObjectInfoList = this->fields.viewObjectInfoList;
            v46 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
            System_Predicate_object____ctor(
              v46,
              (Il2CppObject *)v42,
              Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
              0LL);
            object = System_Array__Find_object_(
                       (System_Object_array *)viewObjectInfoList,
                       (System_Predicate_T__o *)v46,
                       (const MethodInfo_2FF935C *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
            if ( object )
            {
              monitor = (Il2CppObject *)object[1].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v49 = UnityEngine_Object__Instantiate_object_(
                      monitor,
                      (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              mainInfo = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v49, 0LL, 0LL);
              if ( ((unsigned __int8)mainInfo & 1) == 0 )
              {
                if ( !v49 )
                  goto LABEL_45;
                mainInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v49,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                if ( !mainInfo )
                  goto LABEL_45;
                v52 = *(_DWORD *)(v42 + 16);
                v53 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                *((_DWORD *)mainInfo + 10) = v52;
                *((_QWORD *)mainInfo + 6) = item;
                v54 = v52 == DispLastId;
                sub_1B4CF34((CGThumbnailListItem_o *)((char *)mainInfo + 48), (int32_t)item, v50, v51);
                *(_QWORD *)&v85.fields.hasValue = 0LL;
                *(_QWORD *)&v85.fields.value.fields.y = 0LL;
                v53->fields.isLast = v54;
                EventInfoTipsArchiveListViewObject__Init(v53, 2, 0LL, v56, v85, v55);
                Size = EventInfoTipsArchiveListViewObject__GetSize(v53, v57);
                v59 = Size >= 0 ? Size : Size + 1;
                v60 = v59 >> 1;
                v61 = y - (float)(v59 >> 1);
                GameObjectExtensions__SetParent_34075384((UnityEngine_GameObject_o *)v49, this->fields.listParent, 0LL);
                v86.fields.x = x;
                v86.fields.y = v61;
                v86.fields.z = z;
                GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v49, v86, 0LL);
                GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v49, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v49, 0LL);
                mainInfo = this->fields.listParent;
                if ( !mainInfo )
                  goto LABEL_45;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v49, layer, 0LL);
                EventInfoTipsArchiveListViewObject__SetBaseTransform(v53, v63);
                EventInfoTipsArchiveListViewObject__SetManager(v53, this, v64);
                mainInfo = this->fields.objectList;
                if ( !mainInfo )
                  goto LABEL_45;
                v67 = *((_QWORD *)mainInfo + 2);
                v68 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__;
                ++*((_DWORD *)mainInfo + 7);
                if ( !v67 )
                  goto LABEL_45;
                v69 = *((int *)mainInfo + 6);
                if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)mainInfo,
                    (Il2CppObject *)v53,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = v67 + 8 * v69;
                  *((_DWORD *)mainInfo + 6) = v69 + 1;
                  *(_QWORD *)(v70 + 32) = v53;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v70 + 32), (int32_t)v53, v65, v66);
                }
                y = v61 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v53, v71) + v60);
              }
            }
          }
        }
      }
      while ( ++v41 < v36->fields._size );
    }
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    mainInfo = this->fields.scrollView;
    if ( !mainInfo )
      goto LABEL_45;
    UIScrollView__ResetPosition((UIScrollView_o *)mainInfo, 0LL);
  }
  mainInfo = this->fields.scrollView;
  if ( !mainInfo )
    goto LABEL_45;
  mainInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainInfo, 0LL);
  if ( !mainInfo )
    goto LABEL_45;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)mainInfo,
                                         0LL);
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v73);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_45;
  onChange = scrollBar->fields.onChange;
  v76 = (Il2CppObject *)this->fields.scrollView;
  v77 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v77, v76, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  mainInfo = EventDelegate__Add(onChange, v77, 0LL);
  v78 = this->fields.scrollBar;
  if ( !v78
    || (v79 = v78->fields.onChange,
        v80 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v80,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v79, v80, 0LL),
        (v81 = this->fields.scrollBar) == 0LL) )
  {
LABEL_45:
    sub_1B4D1EC(mainInfo, v26);
  }
  v82 = v81->fields.onChange;
  v83 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v83,
    (Il2CppObject *)v24,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v82, v83, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49BCEEF & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49BCEEF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1B4D1EC(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  v11 = this->fields.objectList;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1B4D1EC(objectList, method);
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewManager__GetDispLastId(
        EventInfoTipsArchiveListViewManager_o *this,
        System_Collections_Generic_List_int__o *idList,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  EventInfoTipsArchiveListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w23
  int32_t v13; // w22
  __int64 v14; // x24
  const MethodInfo *v15; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  System_Object_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v18; // x26

  v5 = idList;
  v6 = this;
  if ( (byte_49BCEEE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, idList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B4CF90(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v9);
    sub_1B4CF90(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__, v10);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1B4CF90(
                                                      &EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo,
                                                      v11);
    byte_49BCEEE = 1;
  }
  if ( !v5 )
    goto LABEL_16;
  if ( v5->fields._size >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_1B4D1DC(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      this = (EventInfoTipsArchiveListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                        v5,
                                                        v12,
                                                        (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v14 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)this;
      *(_DWORD *)(v14 + 16) = (_DWORD)this;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)this, v15);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (System_Object_array *)v6->fields.viewObjectInfoList;
          v18 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_object____ctor(
            v18,
            (Il2CppObject *)v14,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            0LL);
          if ( System_Array__Find_object_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v18,
                 (const MethodInfo_2FF935C *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            v13 = *(_DWORD *)(v14 + 16);
          }
        }
      }
      if ( ++v12 >= v5->fields._size )
        return v13;
    }
LABEL_16:
    sub_1B4D1EC(this, idList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v6; // x1
  void *scrollView; // x0
  float v8; // s1
  int v9; // w8
  int32_t v10; // w20
  int v11; // w23
  float v12; // s9
  EventInfoTipsArchiveListViewObject_o *v13; // x21
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v15; // x1
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v17; // x2
  float height; // s0
  int v19; // w8
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  if ( (byte_49BCEF3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49BCEF3 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_30;
    scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)scrollView,
                                            0LL);
    scrollView = this->fields.objectList;
    if ( !scrollView )
      goto LABEL_30;
    v9 = *((_DWORD *)scrollView + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      v11 = -v9;
      v12 = v8 - this->fields.initialScrollPosition.fields.y;
      do
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v10,
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
        v13 = (EventInfoTipsArchiveListViewObject_o *)scrollView;
        if ( v11 + v10 == -1 )
        {
          if ( !scrollView )
            break;
          scrollView = (void *)EventInfoTipsArchiveListViewObject__GetSize(
                                 (EventInfoTipsArchiveListViewObject_o *)scrollView,
                                 v6);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[32LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = this->fields.scrollViewPanel;
            if ( !scrollView )
              break;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v12 = v12 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v13, v15));
          }
        }
        else if ( !scrollView )
        {
          break;
        }
        scrollView = this->fields.scrollViewPanel;
        if ( !scrollView )
          break;
        ReadEndValue_k__BackingField = v13->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v12 && v12 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = this->fields.mainInfo;
          if ( !scrollView )
            break;
          scrollView = EventInfoTipsArchiveListViewItem__GetStateData(
                         (EventInfoTipsArchiveListViewItem_o *)scrollView,
                         v13->fields.id,
                         v17);
          if ( scrollView )
          {
            v19 = *((_DWORD *)scrollView + 6);
            if ( (v19 & 1) != 0 )
            {
              *((_DWORD *)scrollView + 6) = v19 & 0xFFFFFFFE;
              mainInfo = this->fields.mainInfo;
              if ( !mainInfo )
                break;
              tipsArchiveStateManager = mainInfo->fields.tipsArchiveStateManager;
              if ( !tipsArchiveStateManager )
                break;
              tipsArchiveStateManager->fields.isModfiy = 1;
            }
          }
        }
        ++v10;
        if ( !(v11 + v10) )
          return;
        scrollView = this->fields.objectList;
      }
      while ( scrollView );
LABEL_30:
      sub_1B4D1EC(scrollView, v6);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnClickListView(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *v5; // x20
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v5 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B4CF34(p_callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1B4D1EC(v8, v9);
      Kind = EventInfoTipsArchiveListViewObject__GetKind(obj, v9);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
        v5->fields.original_method_info,
        0LL,
        Kind,
        *(_QWORD *)&v5->fields.extra_arg);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnMoveEnd(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_49BCEF2 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BCEF2 = 1;
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
      if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_1B4D1EC(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__RequestListObject(
        EventInfoTipsArchiveListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  float v19; // s0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v21; // 0:x3.16

  if ( (byte_49BCEF1 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v7);
    sub_1B4CF90(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, v10);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v11);
    byte_49BCEF1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      objectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B4D1EC(v16, v17);
      *(_QWORD *)&v21.fields.hasValue = 0LL;
      *(_QWORD *)&v21.fields.value.fields.y = 0LL;
      EventInfoTipsArchiveListViewObject__Init(
        (EventInfoTipsArchiveListViewObject_o *)current,
        mode,
        v15,
        v19,
        v21,
        v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__SetMode(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  EventInfoTipsArchiveListViewManager__SetMode_42687324(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_42687324(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8

  v4 = this;
  if ( (byte_49BCEF0 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1B4CF90(
                                                      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
                                                      *(_QWORD *)&mode);
    byte_49BCEF0 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B4D1EC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  if ( (unsigned int)(mode - 1) <= 2 )
    EventInfoTipsArchiveListViewManager__RequestListObject(v4, dword_BE3FDC[mode - 1], method);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetObjectItem(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  float v4; // s0
  int32_t initMode; // w8
  int32_t v6; // w8
  System_Nullable_Vector3__o v7; // 0:x3.16

  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( obj )
    {
      v6 = 4;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B4D1EC(this, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v6 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v6 = 3;
LABEL_9:
  *(_QWORD *)&v7.fields.hasValue = 0LL;
  *(_QWORD *)&v7.fields.value.fields.y = 0LL;
  EventInfoTipsArchiveListViewObject__Init(obj, v6, 0LL, v4, v7, v3);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v8; // x20
  float height; // s0
  float v10; // s9
  float v11; // s8
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BCEF4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v4);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v6);
    byte_49BCEF4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v8 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_1B4D1EC(scrollView, method);
  }
  v10 = *((float *)&v8[13].klass + 1);
  v11 = height;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v12 )
      break;
    if ( !v14.fields._current )
      sub_1B4D1EC(v12, v13);
    *((float *)&v14.fields._current[8].klass + 1) = fmaxf(
                                                      vabds_f32(
                                                        *((float *)&v14.fields._current[5].klass + 1)
                                                      + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                                                                         (EventInfoTipsArchiveListViewObject_o *)v14.fields._current,
                                                                         v13)
                                                              * -0.5),
                                                        v10)
                                                    - v11,
                                                      0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49BCEED & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__, v3);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v5);
    byte_49BCEED = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B4D1EC(v7, v8);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1B4D1EC(0LL, v8);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v16.fields._current[2].monitor, v9);
    if ( !StateData )
      sub_1B4D1EC(0LL, v13);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp(
      (EventInfoTipsArchiveListViewObject_o *)current,
      StateData->fields.state & 1,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__add_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49BCEEA & 1) == 0 )
  {
    sub_1B4CF90(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_49BCEEA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  EventInfoTipsArchiveListViewManager__remove_callbackFunc(v11, v12, v13);
}


UIScrollBar_o *__fastcall EventInfoTipsArchiveListViewManager__get_ScrollBar(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void __fastcall EventInfoTipsArchiveListViewManager__remove_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49BCEEB & 1) == 0 )
  {
    sub_1B4CF90(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value);
    byte_49BCEEB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  EventInfoTipsArchiveListViewManager__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc___ctor(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_199E004;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199DFAC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__BeginInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
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

  v15 = id;
  v16 = result;
  if ( (byte_49BCEF6 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B4CF90(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, v9);
    byte_49BCEF6 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&id,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v14, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor(
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___CreateList_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.scrollAction, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___CreateList_b__1(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B4D1EC(this, 0LL);
  return n->fields.Id == this->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___GetDispLastId_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B4D1EC(this, 0LL);
  return n->fields.Id == this->fields.id;
}