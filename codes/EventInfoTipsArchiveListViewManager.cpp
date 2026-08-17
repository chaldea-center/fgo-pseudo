void EventInfoTipsArchiveListViewManager___ctor(EventInfoTipsArchiveListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_5972FF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
    byte_5972FF8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoTipsArchiveListViewManager__Awake(EventInfoTipsArchiveListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *mainInfo; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_int__o *v28; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t v33; // w24
  __int64 v34; // x26
  const MethodInfo *v35; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v38; // x27
  Il2CppObject *object; // x0
  Il2CppObject *monitor; // x25
  Il2CppObject *v41; // x27
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int v48; // w8
  EventInfoTipsArchiveListViewObject_o *v49; // x25
  bool v50; // w26
  const MethodInfo *v51; // x5
  float v52; // s0
  const MethodInfo *v53; // x1
  int32_t Size; // w0
  int v55; // w8
  int v56; // w26
  float v57; // s10
  int32_t layer; // w0
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x2
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
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
  __int64 v78; // x1
  struct UIScrollBar_o *v79; // x8
  System_Collections_Generic_List_EventDelegate__o *v80; // x21
  EventDelegate_Callback_o *v81; // x22
  struct UIScrollBar_o *v82; // x8
  System_Collections_Generic_List_EventDelegate__o *v83; // x19
  EventDelegate_Callback_o *v84; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-74h]
  System_Nullable_Vector3__o v86; // 0:x3.16
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972FEF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_2213A60(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__);
    sub_2213A60(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__);
    sub_2213A60(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_2213A60(&Method_UIScrollView_OnScrollBar__);
    byte_5972FEF = 1;
  }
  v9 = sub_2213CCC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_45;
  *(_QWORD *)(v9 + 16) = scrollAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)scrollAction, v12, v13, v14, v15, v16, v17);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v18);
  this->fields.mainInfo = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)item, v19, v20, v21, v22, v23, v24);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_45;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, v25);
  if ( this->fields.viewObjectInfoList )
  {
    v28 = IdList;
    if ( IdList )
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v28, this->fields.mainInfo, v27);
      if ( v28->fields._size >= 1 )
      {
        v33 = 0;
        do
        {
          v34 = sub_2213CCC(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v34, 0);
          mainInfo = (void *)System_Collections_Generic_List_int___get_Item(
                               v28,
                               v33,
                               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v34 )
            goto LABEL_45;
          v11 = (unsigned int)mainInfo;
          *(_DWORD *)(v34 + 16) = (_DWORD)mainInfo;
          if ( !item )
            goto LABEL_45;
          StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)mainInfo, v35);
          if ( StateData )
          {
            if ( StateData->fields.index >= 1 )
            {
              viewObjectInfoList = this->fields.viewObjectInfoList;
              v38 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
              System_Predicate_object____ctor(
                v38,
                (Il2CppObject *)v34,
                Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
                0);
              object = System_Array__Find_object_(
                         (System_Object_array *)viewObjectInfoList,
                         (System_Predicate_T__o *)v38,
                         (const MethodInfo_39A8FD8 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
              if ( object )
              {
                monitor = (Il2CppObject *)object[1].monitor;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
                v41 = UnityEngine_Object__Instantiate_object_(
                        monitor,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                mainInfo = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0, 0);
                if ( ((unsigned __int8)mainInfo & 1) == 0 )
                {
                  if ( !v41 )
                    goto LABEL_45;
                  mainInfo = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v41,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                  if ( !mainInfo )
                    goto LABEL_45;
                  v48 = *(_DWORD *)(v34 + 16);
                  v49 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                  *((_DWORD *)mainInfo + 10) = v48;
                  v50 = v48 == DispLastId;
                  *((_QWORD *)mainInfo + 6) = item;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)((char *)mainInfo + 48),
                    (int32_t)item,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47);
                  *(_QWORD *)&v86.fields.hasValue = 0;
                  *(_QWORD *)&v86.fields.value.fields.y = 0;
                  v49->fields.isLast = v50;
                  EventInfoTipsArchiveListViewObject__Init(v49, 2, 0, v52, v86, v51);
                  Size = EventInfoTipsArchiveListViewObject__GetSize(v49, v53);
                  v55 = Size >= 0 ? Size : Size + 1;
                  v56 = v55 >> 1;
                  v57 = y - (float)(v55 >> 1);
                  GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)v41, this->fields.listParent, 0);
                  v87.fields.x = x;
                  v87.fields.y = v57;
                  v87.fields.z = z;
                  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v41, v87, 0);
                  GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v41, 0);
                  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v41, 0);
                  mainInfo = this->fields.listParent;
                  if ( !mainInfo )
                    goto LABEL_45;
                  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0);
                  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v41, layer, 0);
                  EventInfoTipsArchiveListViewObject__SetBaseTransform(v49, v59);
                  EventInfoTipsArchiveListViewObject__SetManager(v49, this, v60);
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
                      (Il2CppObject *)v49,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v70 = v67 + 8 * v69;
                    *((_DWORD *)mainInfo + 6) = v69 + 1;
                    *(_QWORD *)(v70 + 32) = v49;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v70 + 32),
                      (int32_t)v49,
                      v61,
                      v62,
                      v63,
                      v64,
                      v65,
                      v66);
                  }
                  y = v57 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v49, v71) + v56);
                }
              }
            }
          }
        }
        while ( ++v33 < v28->fields._size );
      }
    }
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    mainInfo = this->fields.scrollView;
    if ( !mainInfo )
      goto LABEL_45;
    UIScrollView__ResetPosition((UIScrollView_o *)mainInfo, 0);
  }
  mainInfo = this->fields.scrollView;
  if ( !mainInfo )
    goto LABEL_45;
  mainInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainInfo, 0);
  if ( !mainInfo )
    goto LABEL_45;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mainInfo, 0);
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v73);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_45;
  onChange = scrollBar->fields.onChange;
  v76 = (Il2CppObject *)this->fields.scrollView;
  v77 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v77, v76, Method_UIScrollView_OnScrollBar__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v78);
  mainInfo = EventDelegate__Add(onChange, v77, 0);
  v79 = this->fields.scrollBar;
  if ( !v79
    || (v80 = v79->fields.onChange,
        v81 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v81,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0),
        mainInfo = EventDelegate__Add(v80, v81, 0),
        (v82 = this->fields.scrollBar) == 0) )
  {
LABEL_45:
    sub_2213CDC(mainInfo, v11);
  }
  v83 = v82->fields.onChange;
  v84 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v84,
    (Il2CppObject *)v9,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0);
  EventDelegate__Add(v83, v84, 0);
}


void EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5972FF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FF2 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v12, 0, sizeof(v12));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v12 = v11;
  v11.fields._list = 0;
  *(_QWORD *)&v11.fields._index = &v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  v7 = this->fields.objectList;
  if ( !v7 )
    goto LABEL_20;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(objectList, method);
  }
}


int32_t EventInfoTipsArchiveListViewManager__GetDispLastId(
        EventInfoTipsArchiveListViewManager_o *this,
        System_Collections_Generic_List_int__o *idList,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  EventInfoTipsArchiveListViewManager_o *v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x24
  const MethodInfo *v10; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  System_Object_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v13; // x26

  v5 = idList;
  v6 = this;
  if ( (byte_5972FF1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
    sub_2213A60(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_2213A60(&EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
    byte_5972FF1 = 1;
  }
  if ( !v5 )
    goto LABEL_16;
  if ( v5->fields._size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_2213CCC(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      this = (EventInfoTipsArchiveListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                        v5,
                                                        v7,
                                                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v9 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)this;
      *(_DWORD *)(v9 + 16) = (_DWORD)this;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)this, v10);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (System_Object_array *)v6->fields.viewObjectInfoList;
          v13 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo);
          System_Predicate_object____ctor(
            v13,
            (Il2CppObject *)v9,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            0);
          if ( System_Array__Find_object_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v13,
                 (const MethodInfo_39A8FD8 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            v8 = *(_DWORD *)(v9 + 16);
          }
        }
      }
      if ( ++v7 >= v5->fields._size )
        return v8;
    }
LABEL_16:
    sub_2213CDC(this, idList);
  }
  return 0;
}


void EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *scrollView; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8
  int size; // w8
  int32_t v8; // w20
  int v9; // w24
  float v10; // s9
  EventInfoTipsArchiveListViewObject_o *v11; // x21
  float y; // s8
  const MethodInfo *v13; // x1
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v15; // x2
  float height; // s0
  int klass; // w8
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x9
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972FF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FF6 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0, 0) )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_31;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0);
    if ( !scrollView )
      goto LABEL_31;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
    objectList = this->fields.objectList;
    if ( !objectList )
      goto LABEL_31;
    size = objectList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      v9 = -size;
      v10 = localPosition.fields.y - this->fields.initialScrollPosition.fields.y;
      while ( 1 )
      {
        scrollView = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !scrollView )
          break;
        scrollView = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)scrollView,
                                                  v8,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
        v11 = (EventInfoTipsArchiveListViewObject_o *)scrollView;
        if ( v9 + v8 == -1 )
        {
          if ( !scrollView )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewObject__GetSize(
                                                    (EventInfoTipsArchiveListViewObject_o *)scrollView,
                                                    v4);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[32], 0).fields.y)) > (float)(int)scrollView )
          {
            scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
            if ( !scrollView )
              break;
            y = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0).fields.y;
            v10 = v10 + (float)(y - (float)EventInfoTipsArchiveListViewObject__GetSize(v11, v13));
          }
        }
        else if ( !scrollView )
        {
          break;
        }
        scrollView = (UnityEngine_Component_o *)this->fields.scrollViewPanel;
        if ( !scrollView )
          break;
        ReadEndValue_k__BackingField = v11->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0);
        if ( ReadEndValue_k__BackingField <= v10 && v10 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = (UnityEngine_Component_o *)this->fields.mainInfo;
          if ( !scrollView )
            break;
          scrollView = (UnityEngine_Component_o *)EventInfoTipsArchiveListViewItem__GetStateData(
                                                    (EventInfoTipsArchiveListViewItem_o *)scrollView,
                                                    v11->fields.id,
                                                    v15);
          if ( scrollView )
          {
            klass = (int)scrollView[1].klass;
            if ( (klass & 1) != 0 )
            {
              mainInfo = this->fields.mainInfo;
              LODWORD(scrollView[1].klass) = klass & 0xFFFFFFFE;
              if ( !mainInfo )
                break;
              tipsArchiveStateManager = mainInfo->fields.tipsArchiveStateManager;
              if ( !tipsArchiveStateManager )
                break;
              tipsArchiveStateManager->fields.isModfiy = 1;
            }
          }
        }
        ++v8;
        if ( !(v9 + v8) )
          return;
      }
LABEL_31:
      sub_2213CDC(scrollView, v4);
    }
  }
}


void EventInfoTipsArchiveListViewManager__OnClickListView(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *v10; // x20
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  __int64 Kind; // x2

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v10 = callbackFunc;
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_2213CDC(v12, v13);
      Kind = (unsigned int)EventInfoTipsArchiveListViewObject__GetKind(obj, v13);
      ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))v10->fields.invoke_impl)(
        v10->fields.method_code,
        0,
        Kind,
        v10->fields.method);
    }
  }
}


void EventInfoTipsArchiveListViewManager__OnMoveEnd(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_5972FF5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FF5 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
                v8,
                1,
                v8->klass->vtable._8_UpdateScrollbars.method),
              (v8 = this->fields.scrollView) == 0) )
        {
          sub_2213CDC(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewManager__RequestListObject(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  const MethodInfo_448473C *v7; // x1
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  float v13; // s0
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v17; // 0:x3.16

  if ( (byte_5972FF4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_2213A60(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_5972FF4 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v16, 0, sizeof(v16));
  if ( !objectList )
    sub_2213CDC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v7 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      objectList,
      v7);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v10, v11);
      *(_QWORD *)&v17.fields.hasValue = 0;
      *(_QWORD *)&v17.fields.value.fields.y = 0;
      EventInfoTipsArchiveListViewObject__Init((EventInfoTipsArchiveListViewObject_o *)current, mode, v9, v13, v17, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  }
}


void EventInfoTipsArchiveListViewManager__SetMode(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_52728764(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewManager__SetMode_52728764(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8

  v4 = this;
  if ( (byte_5972FF3 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__);
    byte_5972FF3 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_2213CDC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  if ( (unsigned int)(mode - 1) <= 2 )
    EventInfoTipsArchiveListViewManager__RequestListObject(v4, dword_EDA708[mode - 1], method);
}


void EventInfoTipsArchiveListViewManager__SetObjectItem(
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
    sub_2213CDC(this, obj);
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
  *(_QWORD *)&v7.fields.hasValue = 0;
  *(_QWORD *)&v7.fields.value.fields.y = 0;
  EventInfoTipsArchiveListViewObject__Init(obj, v6, 0, v4, v7, v3);
}


void EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v4; // x20
  float height; // s0
  float v6; // s9
  float v7; // s8
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x19
  float v11; // s0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5972FF7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_5972FF7 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  memset(&v12, 0, sizeof(v12));
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0
    || (v4 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0) )
  {
    sub_2213CDC(scrollView, method);
  }
  v6 = *((float *)&v4[13].klass + 1);
  v7 = height;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_2213CDC(v8, v9);
    v11 = vabds_f32(
            *(float *)((char *)&v12.fields._current->klass + (unsigned __int64)off_50 + 4)
          + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                             (EventInfoTipsArchiveListViewObject_o *)v12.fields._current,
                             v9)
                  * -0.5),
            v6)
        - v7;
    if ( v11 < 0.0 )
      v11 = 0.0;
    *(float *)((char *)&qword_80 + (_QWORD)current + 4) = v11;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972FF0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    byte_5972FF0 = 1;
  }
  objectList = this->fields.objectList;
  memset(&v12, 0, sizeof(v12));
  if ( !objectList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_2213CDC(v4, v5);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_2213CDC(0, v5);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(
                  mainInfo,
                  *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_28),
                  v6);
    if ( !StateData )
      sub_2213CDC(0, v10);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp(
      (EventInfoTipsArchiveListViewObject_o *)current,
      StateData->fields.state & 1,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void EventInfoTipsArchiveListViewManager__add_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewManager_o *v12; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5972FED & 1) == 0 )
  {
    sub_2213A60(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_5972FED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, v9);
  EventInfoTipsArchiveListViewManager__remove_callbackFunc(v12, v13, v14);
}


UIScrollBar_o *EventInfoTipsArchiveListViewManager__get_ScrollBar(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void EventInfoTipsArchiveListViewManager__remove_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5972FEE & 1) == 0 )
  {
    sub_2213A60(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo);
    byte_5972FEE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, v9);
  EventInfoTipsArchiveListViewManager__Awake(v12, v13);
}


void EventInfoTipsArchiveListViewManager_CallbackFunc___ctor(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20108C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2010870;
}


System_IAsyncResult_o *EventInfoTipsArchiveListViewManager_CallbackFunc__BeginInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = id;
  if ( (byte_5972FF9 & 1) == 0 )
  {
    sub_2213A60(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo);
    byte_5972FF9 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    id,
    this->fields.method);
}


void EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor(
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___CreateList_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.scrollAction, 0);
}


void EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___CreateList_b__1(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.Id == this->fields.id;
}


void EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___GetDispLastId_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.Id == this->fields.id;
}